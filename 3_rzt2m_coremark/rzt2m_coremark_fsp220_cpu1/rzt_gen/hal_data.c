/* generated HAL source file - do not edit */
#include "hal_data.h"
icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq0_ctrl;

const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq0_cfg =
{ .channel = 0, .p_callback = r_shared_memory_callback, .p_context = NULL, .p_extend = NULL, .ipl = (11),
#if defined(VECTOR_NUMBER_INTCPU0)
    .irq                 = VECTOR_NUMBER_INTCPU0,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq0 =
{ .p_ctrl = &g_icu_inter_cpu_irq0_ctrl, .p_cfg = &g_icu_inter_cpu_irq0_cfg, .p_api = &g_icu_inter_cpu_irq_on_icu };
icu_inter_cpu_irq_instance_ctrl_t g_icu_inter_cpu_irq1_ctrl;

const icu_inter_cpu_irq_cfg_t g_icu_inter_cpu_irq1_cfg =
{ .channel = 1, .p_callback = r_shared_memory_callback, .p_context = NULL, .p_extend = NULL, .ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_INTCPU1)
    .irq                 = VECTOR_NUMBER_INTCPU1,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const icu_inter_cpu_irq_instance_t g_icu_inter_cpu_irq1 =
{ .p_ctrl = &g_icu_inter_cpu_irq1_ctrl, .p_cfg = &g_icu_inter_cpu_irq1_cfg, .p_api = &g_icu_inter_cpu_irq_on_icu };
shared_memory_instance_ctrl_t g_shared_memory0_ctrl;

/** shared memory extended configuration */
const shared_memory_extended_cfg_t g_shared_memory0_ext_cfg =
{ .p_software_int_tx = &g_icu_inter_cpu_irq1, .p_software_int_rx = &g_icu_inter_cpu_irq0 };

/** shared memory interface configuration */
const shared_memory_cfg_t g_shared_memory0_cfg =
{ .p_memory = (uint8_t*) 0x300C0000,
  .memory_size = 256,
  .p_callback = shared_memory_callback,
  .p_context = NULL,
  .semaphore_reg = 0,
  .p_extend = &g_shared_memory0_ext_cfg };
/* Instance structure to use this module. */
const shared_memory_instance_t g_shared_memory0 =
{ .p_ctrl = &g_shared_memory0_ctrl, .p_cfg = &g_shared_memory0_cfg, .p_api = &g_shared_memory_on_shared_memory };
cmtw_instance_ctrl_t g_cmtw0_ctrl;
const cmtw_extended_cfg_t g_cmtw0_extend =
{ .toc0 = CMTW_OUTPUT_PIN_RETAIN,
  .toc1 = CMTW_OUTPUT_PIN_RETAIN,
  .toc0_control = CMTW_OUTPUT_CONTROL_DISABLED,
  .toc1_control = CMTW_OUTPUT_CONTROL_DISABLED,
  .capture_ic0_source = CMTW_SOURCE_EDGE_RISING,
  .capture_ic1_source = CMTW_SOURCE_EDGE_RISING,
  .ic0_control = CMTW_INPUT_CONTROL_DISABLED,
  .ic1_control = CMTW_INPUT_CONTROL_DISABLED,
  .clear_source = CMTW_CLEAR_SOURCE_COMPARE_MATCH_CMWCOR,
  .counter_size = TIMER_VARIANT_32_BIT,

  .capture_ic0_ipl = (BSP_IRQ_DISABLED),
  .capture_ic1_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_CMTW0_IC0I)
    .capture_ic0_irq    = VECTOR_NUMBER_CMTW0_IC0I,
#else
  .capture_ic0_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CMTW0_IC1I)
    .capture_ic1_irq    = VECTOR_NUMBER_CMTW0_IC1I,
#else
  .capture_ic1_irq = FSP_INVALID_VECTOR,
#endif
  .compare_oc0_ipl = (BSP_IRQ_DISABLED),
  .compare_oc1_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_CMTW0_OC0I)
    .compare_oc0_irq    = VECTOR_NUMBER_CMTW0_OC0I,
#else
  .compare_oc0_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_CMTW0_OC1I)
    .compare_oc1_irq    = VECTOR_NUMBER_CMTW0_OC1I,
#else
  .compare_oc1_irq = FSP_INVALID_VECTOR,
#endif
        };
const timer_cfg_t g_cmtw0_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.001 seconds. */.period_counts = (uint32_t) 0x186a,
  .source_div = (timer_source_div_t) 3, .channel = 0, .p_callback = g_cmtw0CB,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = &g_cmtw0_extend,
  .cycle_end_ipl = (11),
#if defined(VECTOR_NUMBER_CMTW0_CMWI)
    .cycle_end_irq       = VECTOR_NUMBER_CMTW0_CMWI,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_cmtw0 =
{ .p_ctrl = &g_cmtw0_ctrl, .p_cfg = &g_cmtw0_cfg, .p_api = &g_timer_on_cmtw };
void g_hal_init(void)
{
    g_common_init ();
}
