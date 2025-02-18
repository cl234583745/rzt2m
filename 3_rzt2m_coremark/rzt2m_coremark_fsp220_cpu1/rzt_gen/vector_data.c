/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
                        [0] = r_icu_inter_cpu_irq_isr, /* INTCPU0 (Software interrupt 0) */
            [59] = cmtw_cm_int_isr, /* CMTW0_CMWI (CMTW0 Compare match) */
        };
        #if (1 == BSP_FEATURE_BSP_IRQ_CR52_SEL_SUPPORTED)
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_CR52_SEL_ENUM(EVENT_INTCPU0), /* INTCPU0 (Software interrupt 0) */
            [59] = BSP_PRV_CR52_SEL_ENUM(EVENT_CMTW0_CMWI), /* CMTW0_CMWI (CMTW0 Compare match) */
        };
        #endif
        #endif
