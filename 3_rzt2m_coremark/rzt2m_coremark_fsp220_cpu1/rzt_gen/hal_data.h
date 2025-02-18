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
#include "r_cmtw.h"
#include "r_timer_api.h"
FSP_HEADER
/** External IRQ on ICU Instance. */
extern const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq0;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq0_ctrl;
extern const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq0_cfg;

#ifndef r_shared_memory_callback
void r_shared_memory_callback(icu_inter_cpu_irq_callback_args_t *p_args);
#endif
/** External IRQ on ICU Instance. */
extern const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq1;

/** Access the ICU instance using these structures when calling API functions directly (::p_api is not used). */
extern icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq1_ctrl;
extern const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq1_cfg;

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
/** CMTW Timer Instance */
extern const timer_instance_t g_cmtw0;

/** Access the CMTW instance using these structures when calling API functions directly (::p_api is not used). */
extern cmtw_instance_ctrl_t g_cmtw0_ctrl;
extern const timer_cfg_t g_cmtw0_cfg;

#ifndef g_cmtw0CB
void g_cmtw0CB(timer_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
