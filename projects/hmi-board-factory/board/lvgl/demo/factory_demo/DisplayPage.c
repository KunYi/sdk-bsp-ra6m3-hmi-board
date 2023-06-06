#include "DisplayPrivate.h"

/*ʵ����ҳ�������*/
PageManager_t page;

/*ҳ�浼��*/
#define PAGE_IMPORT(name)                                                       \
    do                                                                          \
    {                                                                           \
        extern void PageRegister_##name(PageManager_t *page_p, uint8_t pageID); \
        PageRegister_##name(&page, PAGE_##name);                                \
    } while (0)

static void page_gestute_event_cb(lv_obj_t *obj, lv_event_t event)
{
    if (event.code == LV_EVENT_GESTURE)
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        PM_EventTransmit(&page, obj, dir);
    }
}

/**
 * @brief  ҳ���ʼ��
 * @param  ��
 * @retval ��
 */
void DisplayPage_Init()
{
    PM_PageManagerInit(&page, PAGE_MAX, 10);
    PAGE_IMPORT(DemoLogo);
    PAGE_IMPORT(MainMenu); // ���˵�
    PAGE_IMPORT(LEDAndBtn);
    PAGE_IMPORT(ETH);
    PAGE_IMPORT(SDCard);
    PAGE_IMPORT(WiFi);
    PAGE_IMPORT(Game2048);
    PAGE_IMPORT(VideoPlayer);
    PAGE_IMPORT(Info);
    // page.Push(PAGE_LEDAndBtn);
    PM_Push(&page, PAGE_DemoLogo);
    lv_obj_add_event_cb(lv_scr_act(), (lv_event_cb_t)page_gestute_event_cb, LV_EVENT_ALL, NULL);
}

/**
 * @brief  ��ʾ����
 * @param  ��
 * @retval ��
 */
void Display_Update()
{
    PM_Running(&page);
    // lv_task_handler();
}

/**
 * @brief  ҳ��������ʱ������lvgl����
 * @param  ��
 * @retval ��
 */
void PageDelay(uint32_t ms)
{
    uint32_t lastTime = lv_tick_get();

    while (lv_tick_elaps(lastTime) <= ms)
    {
        lv_task_handler();
        rt_thread_mdelay(LV_DISP_DEF_REFR_PERIOD);
    }
}
