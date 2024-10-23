

#include <rtthread.h>
#include "hal_data.h"
#include <rtdevice.h>

#define LED_PIN    BSP_IO_PORT_02_PIN_09 /* Onboard LED pins */

extern "C" void cpp_entry(void) {
    rt_kprintf("\nHello RT-Thread with C++!\n");

    while (1)
    {
        rt_pin_write(LED_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }
}

