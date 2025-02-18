/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_icu_inter_cpu_irq.h"
#include "r_icu_inter_cpu_irq_api.h"
#include "r_shared_memory.h"
#include "r_shared_memory_api.h"
#include "r_sci_uart.h"
#include "r_uart_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
FSP_HEADER
/** External IRQ on ICU Instance. */
extern const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq1;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq1_ctrl;
extern const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq1_cfg;

#ifndef r_shared_memory_callback
void r_shared_memory_callback(icu_inter_cpu_irq_callback_args_t *p_args);
#endif
/** External IRQ on ICU Instance. */
extern const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq0;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq0_ctrl;
extern const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq0_cfg;

#ifndef r_shared_memory_callback
void r_shared_memory_callback(icu_inter_cpu_irq_callback_args_t *p_args);
#endif
/** Shared Memory on shared_memory Instance. */
extern const shared_memory_instance_t g_shared_memory0;

/** Access the Shared Memory instance using these structures when calling API functions directly (::p_api is not used). */
extern shared_memory_instance_ctrl_t g_shared_memory0_ctrl;
extern const shared_memory_cfg_t g_shared_memory0_cfg;

#ifndef shared_memory_callback
void shared_memory_callback(shared_memory_callback_args_t *p_args);
#endif
/** UART on SCI Instance. */
extern const uart_instance_t g_uart0;

/** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
extern sci_uart_instance_ctrl_t g_uart0_ctrl;
extern const uart_cfg_t g_uart0_cfg;
extern const sci_uart_extended_cfg_t g_uart0_cfg_extend;

#ifndef NULL
void NULL(uart_callback_args_t *p_args);
#endif

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_uart0_P_TRANSFER_TX (NULL)
#else
                #define g_uart0_P_TRANSFER_TX (&FSP_NOT_DEFINED)
            #endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_uart0_P_TRANSFER_RX (NULL)
#else
                #define g_uart0_P_TRANSFER_RX (&FSP_NOT_DEFINED)
            #endif
#undef FSP_NOT_DEFINED
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer0;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef g_timer0CB
void g_timer0CB(timer_callback_args_t *p_args);
#endif
#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif

/** Error check the duplicated channel number, same GPT_INT number between MTU3 and GPT */
#if (1 == BSP_FEATURE_BSP_IRQ_GPT_SEL_SUPPORTED)
 #ifndef TIMER_GPT00_0_INT0_DISABLE
  #define TIMER_GPT00_0_INT0_DISABLE
 #else
  #ifdef TIMER_GPT00_0_INT0_ENABLE
   #error "GPT_INT0 of GPT_SEL cannot be duplicated"
  #endif
 #endif
 #ifndef TIMER_GPT00_0_INT1_DISABLE
  #define TIMER_GPT00_0_INT1_DISABLE
 #else
  #ifdef TIMER_GPT00_0_INT1_ENABLE
   #error "GPT_INT1 of GPT_SEL cannot be duplicated"
  #endif
 #endif
 #ifndef TIMER_GPT00_0_INT2_DISABLE
  #define TIMER_GPT00_0_INT2_DISABLE
 #else
  #ifdef TIMER_GPT00_0_INT2_ENABLE
   #error "GPT_INT2 of GPT_SEL cannot be duplicated"
  #endif
 #endif
 #ifndef TIMER_GPT00_0_INT3_DISABLE
  #define TIMER_GPT00_0_INT3_DISABLE
 #else
  #ifdef TIMER_GPT00_0_INT3_ENABLE
   #error "GPT_INT3 of GPT_SEL cannot be duplicated"
  #endif
 #endif
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
