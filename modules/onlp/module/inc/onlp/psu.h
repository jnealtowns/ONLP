/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 * Power Supply Management.
 *
 ***********************************************************/
#ifndef __ONLP_PSU_H__
#define __ONLP_PSU_H__

#include <onlp/onlp.h>
#include <onlp/oids.h>

/* <auto.start.enum(onlp_psu_status).define> */
/** onlp_psu_status */
typedef enum onlp_psu_status_e {
    ONLP_PSU_STATUS_PRESENT = (1 << 0),
    ONLP_PSU_STATUS_FAILED = (1 << 1),
} onlp_psu_status_t;
/* <auto.end.enum(onlp_psu_status).define> */

/* <auto.start.enum(onlp_psu_caps).define> */
/** onlp_psu_caps */
typedef enum onlp_psu_caps_e {
    ONLP_PSU_CAPS_SOMETHING = (1 << 0),
} onlp_psu_caps_t;
/* <auto.end.enum(onlp_psu_caps).define> */

/**
 * PSU Information Structure
 */
typedef struct onlp_psu_info_t {
    /** OID Header */
    onlp_oid_hdr_t hdr;

    /* Status */
    uint32_t status;

    /* Capabilities */
    uint32_t caps;

    /* input voltage */
    float input_voltage;

    /* Output voltage */
    float output_voltage;

    /* Current */
    float output_current;

    /* child oids */
    onlp_oid_table_t oid_table;

} onlp_psu_info_t;

/**
 * @brief Initialize the PSU subsystem.
 */
int onlp_psu_init(void);

/**
 * @brief Get the PSU information.
 * @param id The PSU OID.
 * @param rv [out] Receives the information structure.
 */
int onlp_psu_info_get(onlp_oid_t id, onlp_psu_info_t* rv);

/**
 * @brief Show PSU information.
 * @param id The PSU OID
 * @param pvs The output pvs
 * @param flags The output flags
 */
void onlp_psu_show(onlp_oid_t id, aim_pvs_t* pvs, uint32_t flags);

#endif /* __ONLP_PSU_H__ */
