#include <am.h>
#include <nemu.h>
#include <klib-macros.h>

void __am_timer_init() 
{
    io_read(AM_TIMER_RTC);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) 
{
    uptime->us = (uint64_t)((uint64_t)inl(RTC_ADDR+4) << 32) + inl(RTC_ADDR);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) 
{
    rtc->second = 0;
    rtc->minute = 0;
    rtc->hour   = 0;
    rtc->day    = 20;
    rtc->month  = 1;
    rtc->year   = 2023;
}
