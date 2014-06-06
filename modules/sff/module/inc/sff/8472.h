/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 * SFF 8472 Definitions.
 *
 ***********************************************************/
#ifndef __SFF_8472_H__
#define __SFF_8472_H__

#include <sff/sff_config.h>
#include <stdint.h>

/******************************
 *
 * All (most of) the gory details from table 3.5 of the SFF spec
 *
 ******************************/

/* identifier byte 0x00 */

#define SFF8472_IDENT_UNKNOWN   0x00
#define SFF8472_IDENT_GBIC      0x01
#define SFF8472_IDENT_BASEBOARD 0x02
#define SFF8472_IDENT_SFP       0x03
#define SFF8472_IDENT_XBI       0x04
#define SFF8472_IDENT_XENPAK    0x05
#define SFF8472_IDENT_XFP       0x06
#define SFF8472_IDENT_XFF       0x07
#define SFF8472_IDENT_XFPE      0x08
#define SFF8472_IDENT_XPAK      0x09
#define SFF8472_IDENT_X2        0x0A
#define SFF8472_IDENT_DWDM_SFP  0x0B
#define SFF8472_IDENT_QSFP      0x0C

#define SFF8472_MODULE_SFP(idprom)              \
    ((idprom[0] == SFF8472_IDENT_SFP)           \
     || (idprom[0] == SFF8472_IDENT_DWDM_SFP))

/* connector byte 0x02 */

#define SFF8472_CONN_UNKNOWN     0x00
#define SFF8472_CONN_SC          0x01
#define SFF8472_CONN_FC1_CU      0x02
#define SFF8472_CONN_FC2_CU      0x03
#define SFF8472_CONN_BNC         0x04
#define SFF8472_CONN_FC_COAX     0x05
#define SFF8472_CONN_FJ          0x06
#define SFF8472_CONN_LC          0x07
#define SFF8472_CONN_MT_RJ       0x08
#define SFF8472_CONN_MU          0x09
#define SFF8472_CONN_SG          0x0A
#define SFF8472_CONN_SI_PIGTAIL  0x0B
#define SFF8472_CONN_MPO         0x0C
#define SFF8472_CONN_HSSDC_II    0x20
#define SFF8472_CONN_CU_PIGTAIL  0x21
#define SFF8472_CONN_RJ45        0x22

/* module compliance codes (SFP type) */

#define SFF8472_CC3_INF_1X_CU_PASSIVE     0x01
#define SFF8472_CC3_INF_1X_CU_ACTIVE      0x02
#define SFF8472_CC3_INF_1X_LX             0x04
#define SFF8472_CC3_INF_1X_SX             0x08
#define SFF8472_CC3_XGE_BASE_SR           0x10
#define SFF8472_CC3_XGE_BASE_LR           0x20
#define SFF8472_CC3_XGE_BASE_LRM          0x40
#define SFF8472_CC3_XGE_BASE_ER           0x80

#define SFF8472_CC4_OC48_SHORT            0x01
#define SFF8472_CC4_OC48_INTERMEDIATE     0x02
#define SFF8472_CC4_OC48_LONG             0x04
#define SFF8472_CC4_SONET                 0x18
#define SFF8472_CC4_OC192_SHORT           0x20
#define SFF8472_CC4_ESCON_SMF             0x40
#define SFF8472_CC4_ESCON_MMF             0x80

#define SFF8472_CC5_OC3_SHORT             0x01
#define SFF8472_CC5_OC3_SMM_INTERMEDIATE  0x02
#define SFF8472_CC5_OC3_SMM_LONG          0x04
#define SFF8472_CC5_UNALLOCATED1          0x08
#define SFF8472_CC5_OC12_SHORT            0x10
#define SFF8472_CC5_OC12_SMM_INTERMEDIATE 0x20
#define SFF8472_CC5_OC12_SMM_LONG         0x40
#define SFF8472_CC5_UNALLOCATED2          0x80

#define SFF8472_CC6_GBE_BASE_SX           0x01
#define SFF8472_CC6_GBE_BASE_LX           0x02
#define SFF8472_CC6_GBE_BASE_CX           0x04
#define SFF8472_CC6_GBE_BASE_T            0x08
#define SFF8472_CC6_CBE_BASE_LX           0x10
#define SFF8472_CC6_CBE_BASE_FX           0x20
#define SFF8472_CC6_BASE_BX10             0x40
#define SFF8472_CC6_BASE_PX               0x80

#define SFF8472_CC7_FC_TECH_EL            0x01
#define SFF8472_CC7_FC_TECH_LC            0x02
#define SFF8472_CC7_FC_TECH_SA            0x04
#define SFF8472_CC7_FC_MEDIUM             0x08
#define SFF8472_CC7_FC_LONG               0x10
#define SFF8472_CC7_FC_INTERMEDIATE       0x20
#define SFF8472_CC7_FC_SHORT              0x40
#define SFF8472_CC7_FC_VERY_LONG          0x80

#define SFF8472_CC8_UNALLOCATED1          0x03
#define SFF8472_CC8_SFP_PASSIVE           0x04
#define SFF8472_CC8_SFP_ACTIVE            0x08
#define SFF8472_CC8_FC_TECH_LL            0x10
#define SFF8472_CC8_FC_TECH_SL            0x20
#define SFF8472_CC8_FC_TECH_SN            0x40
#define SFF8472_CC8_FC_TECH_EL            0x80

#define SFF8472_CC9_FC_MEDIA_SM           0x01
#define SFF8472_CC9_UNALLOCATED1          0x02
#define SFF8472_CC9_FC_MEDIA_M5           0x04
#define SFF8472_CC9_FC_MEDIA_M6           0x08
#define SFF8472_CC9_FC_MEDIA_TV           0x10
#define SFF8472_CC9_FC_MEDIA_MI           0x20
#define SFF8472_CC9_FC_MEDIA_TP           0x40
#define SFF8472_CC9_FC_MEDIA_TW           0x80

#define SFF8472_CC10_FC_SPEED_100         0x01
#define SFF8472_CC10_UNALLOCATED1         0x02
#define SFF8472_CC10_FC_SPEED_200         0x04
#define SFF8472_CC10_FC_SPEED_3200        0x08
#define SFF8472_CC10_FC_SPEED_400         0x10
#define SFF8472_CC10_FC_SPEED_1600        0x20
#define SFF8472_CC10_FC_SPEED_800         0x40
#define SFF8472_CC10_FC_SPEED_1200        0x80

#define SFF8472_CC36_XGE_UNALLOCATED      0x01
#define SFF8472_CC36_UNALLOCATED1         0xF7

#define SFF8471_CC60_FC_PI_4_LIMITING     0x08
#define SFF8471_CC60_SFF8431_LIMITING     0x04
#define SFF8471_CC60_FC_PI_4              0x02
#define SFF8471_CC60_SFF8431              0x01

#define SFF8472_MEDIA_XGE_SR(idprom)            \
    ((idprom[3] & SFF8472_CC3_XGE_BASE_SR) != 0)
#define SFF8472_MEDIA_XGE_LR(idprom)            \
    ((idprom[3] & SFF8472_CC3_XGE_BASE_LR) != 0)
#define SFF8472_MEDIA_XGE_LRM(idprom)           \
    ((idprom[3] & SFF8472_CC3_XGE_BASE_LRM) != 0)
#define SFF8472_MEDIA_XGE_ER(idprom)            \
    ((idprom[3] & SFF8472_CC3_XGE_BASE_ER) != 0)

/*
 * some CR cables identify as infiniband copper
 * some CR cables identify as FC twinax
 * some CR cables identify their electrical compliance
 * using bytes 60,61
 * some CR cables identify as FC electrical intra-
 * or inter-enclosure (bytes 7, 8)
 */

static inline int
_sff8472_inf_1x(const uint8_t* idprom)
{
    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_PASSIVE) != 0) return 1;
    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_ACTIVE) != 0) return 1;
    if ((idprom[3] & SFF8472_CC3_INF_1X_LX) != 0) return 1;
    if ((idprom[3] & SFF8472_CC3_INF_1X_SX) != 0) return 1;
    return 0;
}

static inline int
_sff8472_inf_1x_cu_active(const uint8_t* idprom)
{
    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_PASSIVE) != 0) return 0;
    if ((idprom[3] & SFF8472_CC3_INF_1X_LX) != 0) return 0;
    if ((idprom[3] & SFF8472_CC3_INF_1X_SX) != 0) return 0;

    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_ACTIVE) != 0) return 1;

    return 0;
}

static inline int
_sff8472_inf_1x_cu_passive(const uint8_t* idprom)
{
    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_ACTIVE) != 0) return 0;
    if ((idprom[3] & SFF8472_CC3_INF_1X_LX) != 0) return 0;
    if ((idprom[3] & SFF8472_CC3_INF_1X_SX) != 0) return 0;

    if ((idprom[3] & SFF8472_CC3_INF_1X_CU_PASSIVE) != 0) return 1;

    return 0;
}

static inline int
_sff8472_fc_media(const uint8_t* idprom)
{
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_SM) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_M5) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_M6) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TV) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_MI) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TP) != 0) return 1;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TW) != 0) return 1;
    return 0;
}

static inline int
_sff8472_fc_media_tw(const uint8_t* idprom)
{
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_SM) != 0) return 0;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_M5) != 0) return 0;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_M6) != 0) return 0;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TV) != 0) return 0;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_MI) != 0) return 0;
    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TP) != 0) return 0;

    if ((idprom[9] & SFF8472_CC9_FC_MEDIA_TW) != 0) return 1;

    return 0;
}

static inline int
_sff8472_tech_fc(const uint8_t* idprom)
{
    if ((idprom[7] & SFF8472_CC7_FC_TECH_EL) != 0) return 1;
    if ((idprom[7] & SFF8472_CC7_FC_TECH_LC) != 0) return 1;
    if ((idprom[7] & SFF8472_CC7_FC_TECH_SA) != 0) return 1;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_EL) != 0) return 1;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_LL) != 0) return 1;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_SL) != 0) return 1;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_SN) != 0) return 1;
    return 0;
}

static inline int
_sff8472_tech_fc_el(const uint8_t* idprom)
{
    /* non-EL types */
    if ((idprom[7] & SFF8472_CC7_FC_TECH_LC) != 0) return 0;
    if ((idprom[7] & SFF8472_CC7_FC_TECH_SA) != 0) return 0;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_LL) != 0) return 0;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_SL) != 0) return 0;
    if ((idprom[8] & SFF8472_CC8_FC_TECH_SN) != 0) return 0;

    if (((idprom[7] & SFF8472_CC7_FC_TECH_EL) != 0)
        && ((idprom[8] & SFF8472_CC8_FC_TECH_EL) == 0))
        return 1;
    if (((idprom[7] & SFF8472_CC7_FC_TECH_EL) == 0)
        && ((idprom[8] & SFF8472_CC8_FC_TECH_EL) != 0))
        return 1;

    return 0;
}

/* do not specify an FC speed code unless you actually FC */
static inline int
_sff8472_fc_speed_ok(const uint8_t* idprom)
{
    if (_sff8472_tech_fc(idprom)
        && (idprom[10] != 0))
        return 1;
    if (!_sff8472_tech_fc(idprom)
        && (idprom[10] == 0))
        return 1;
    return 0;
}

/*
 * XXX roth
 * some CR cables do not list an SFP+ active/passive bit,
 * but register as active or passive via infiniband instead
 */

static inline int
_sff8472_sfp_plus_passive(const uint8_t* idprom)
{
    if ((idprom[8] & SFF8472_CC8_SFP_PASSIVE) != 0) return 1;

    /* also allow pre-standard cables identifying as infiniband */
    if (_sff8472_inf_1x_cu_passive(idprom)) return 1;

    return 0;
}

static inline int
_sff8472_sfp_plus_active(const uint8_t* idprom)
{
    if ((idprom[8] & SFF8472_CC8_SFP_ACTIVE) != 0) return 1;

    /* also allow pre-standard cables identifying as infiniband */
    if (_sff8472_inf_1x_cu_active(idprom)) return 1;

    return 0;
}

/*
 * XXX roth
 * some pre-standard CR cables report a "wavelength"
 * in byte 60, 61, pretending to be an optical module
 */

#define _SFF8472_WAVELENGTH(idprom)             \
    ((idprom[60] << 8) | idprom[61])

#define _SFF8472_COMPLIANCE_UNSPEC(idprom) \
    ((idprom[60] == 0)                     \
     && (idprom[61] == 0))

#define _SFF8472_COMPLIANCE_PASSIVE_FC(idprom)  \
    (((idprom[60] & SFF8471_CC60_FC_PI_4) != 0) \
     && (idprom[61] == 0))

#define _SFF8472_COMPLIANCE_PASSIVE_SFF(idprom) \
    (((idprom[60] & SFF8471_CC60_SFF8431) != 0) \
     && (idprom[61] == 0))

#define _SFF8472_COMPLIANCE_ACTIVE_FC(idprom)                   \
    ((((idprom[60] & SFF8471_CC60_FC_PI_4) != 0)                \
      || (idprom[60] & SFF8471_CC60_FC_PI_4_LIMITING) != 0)     \
     && (idprom[61] == 0))

#define _SFF8472_COMPLIANCE_ACTIVE_SFF(idprom)                  \
    ((((idprom[60] & SFF8471_CC60_SFF8431) != 0)                \
      || (idprom[60] & SFF8471_CC60_SFF8431_LIMITING) != 0)     \
     && (idprom[61] == 0))

/*
 * Cisco pre-standard CR cables
 */
static inline int
_sff8472_hack_cr(const uint8_t* idprom)
{
    /* vendor is 'OEM' */
    if (SFF_STRNCMP((char*)idprom+20, "OEM ", 4) != 0) return 0;

    /* model reads like 'SFP-H10GB-CU...' */
    if (SFF_STRNCMP((char*)idprom+40, "SFP-H10GB-CU", 12) != 0) return 0;

    /* S/N reads like 'CSC...' */
    if (SFF_STRNCMP((char*)idprom+68, "CSC", 3) != 0) return 0;

    /*
     * congratulations, you have an expensive Cisco
     * pre-standard CR cable.
     */
    return 1;
}

/* grab-bag to detect pre-standard CR media */
static inline int
_sff8472_media_cr_passive(const uint8_t* idprom)
{
    int maybe = 0;

    if (_sff8472_inf_1x_cu_passive(idprom))
        maybe = 1;
    else if (_sff8472_inf_1x(idprom))
        return 0;

    if (_sff8472_tech_fc_el(idprom))
        maybe = 1;
    else if (_sff8472_tech_fc(idprom))
        return 0;

    if (idprom[4] != 0) return 0;
    if (idprom[5] != 0) return 0;
    if (idprom[6] != 0) return 0;

    if (_sff8472_sfp_plus_passive(idprom))
        maybe = 1;

    if (_sff8472_fc_media_tw(idprom))
        maybe = 1;
    else if (_sff8472_fc_media(idprom))
        return 0;

    if (!_sff8472_fc_speed_ok(idprom))
        return 0;

    if (_sff8472_hack_cr(idprom))
        maybe = 1;

    if (maybe) {
        if (!_SFF8472_COMPLIANCE_PASSIVE_FC(idprom)
            && !_SFF8472_COMPLIANCE_PASSIVE_SFF(idprom)
            && (_SFF8472_WAVELENGTH(idprom) != 850)
            && !_SFF8472_COMPLIANCE_UNSPEC(idprom)
            && !_sff8472_hack_cr(idprom))
            return 0;
    }

    return maybe;
}

static inline int
_sff8472_media_cr_active(const uint8_t* idprom)
{
    int maybe = 0;

    if (_sff8472_inf_1x_cu_active(idprom))
        maybe = 1;
    else if (_sff8472_inf_1x(idprom))
        return 0;

    if (_sff8472_tech_fc_el(idprom))
        maybe = 1;
    else if (_sff8472_tech_fc(idprom))
        return 0;

    if (idprom[4] != 0) return 0;
    if (idprom[5] != 0) return 0;
    if (idprom[6] != 0) return 0;

    if (_sff8472_sfp_plus_active(idprom))
        maybe = 1;

    if (_sff8472_fc_media_tw(idprom))
        maybe = 1;
    else if (_sff8472_fc_media(idprom))
        return 0;

    if (!_sff8472_fc_speed_ok(idprom))
        return 0;

    if (maybe) {
        if (!_SFF8472_COMPLIANCE_ACTIVE_FC(idprom)
            && !_SFF8472_COMPLIANCE_ACTIVE_SFF(idprom)
            && !_SFF8472_COMPLIANCE_UNSPEC(idprom))
            return 0;
    }

    return maybe;
}

#define SFF8472_MEDIA_GBE_SX(idprom)            \
  ((idprom[6] & SFF8472_CC6_GBE_BASE_SX) != 0)
#define SFF8472_MEDIA_GBE_LX(idprom)            \
  ((idprom[6] & SFF8472_CC6_GBE_BASE_LX) != 0)
#define SFF8472_MEDIA_GBE_CX(idprom)            \
  ((idprom[6] & SFF8472_CC6_GBE_BASE_CX) != 0)
#define SFF8472_MEDIA_GBE_T(idprom)             \
  ((idprom[6] & SFF8472_CC6_GBE_BASE_T) != 0)

#define SFF8472_MEDIA_CBE_LX(idprom)            \
  ((idprom[6] & SFF8472_CC6_CBE_BASE_LX) != 0)
#define SFF8472_MEDIA_CBE_FX(idprom)            \
  ((idprom[6] & SFF8472_CC6_CBE_BASE_FX) != 0)

#endif