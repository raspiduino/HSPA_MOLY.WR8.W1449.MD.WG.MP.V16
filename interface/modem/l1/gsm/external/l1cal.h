/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1cal.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   The structure definition of L1 calibration data
 *
 * Author:
 * -------
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef L1CAL_H
#define L1CAL_H

#include "kal_general_types.h"
#include "l1_option.h"
#include "l1d_custom_rf.h"

/* ------------------------------------------------------------------------- */

unsigned long  L1D_RF_GetID( void );
void  L1D_RF_SetImmediateBSI( unsigned long bsidata );
void  L1D_RF_GetImmediateBSI( unsigned long bsi_addr, unsigned long *bsi_data );
void  L1D_RF_PowerOn( void );
void  L1D_RF_PowerOff( void );

/* ------------------------------------------------------------------------- */

#ifndef l1_types_public_h
typedef enum
{
   FrequencyBand400,
   FrequencyBand850,
   FrequencyBand900,
   FrequencyBand1800,
   FrequencyBand1900,

   FrequencyBandCount

} FrequencyBand;
#endif

#define  PLTABLE_SIZE            13

typedef  struct
{
   short        max_arfcn;
   signed char  gain_offset;

} sAGCGAINOFFSET;

typedef struct
{
   sAGCGAINOFFSET     agcPathLoss[FrequencyBandCount][PLTABLE_SIZE];
}l1cal_agcPathLoss_T;

extern sAGCGAINOFFSET* AGC_PATHLOSS_TABLE[FrequencyBandCount];

/* ------------------------------------------------------------------------- */

typedef  struct
{
   signed char  gain_offset_middle;
   signed char  gain_offset_low;

} sLNAGAINOFFSET;

typedef struct
{
   sLNAGAINOFFSET     lnaPathLoss[FrequencyBandCount][PLTABLE_SIZE];
} sLNAPATHLOSS_L1CAL;

typedef sLNAPATHLOSS_L1CAL l1cal_lnaPathLoss_T;

void  L1D_RF_SetPathLossTable( int rf_band, void *table );
void  L1D_RF_SetLnaPathLossTable( sLNAPATHLOSS_L1CAL *table );
void  L1D_RF_GetLnaPathLossTable( sLNAPATHLOSS_L1CAL *table );

/* ------------------------------------------------------------------------- */

#define PROFILE_NUM              16
#define ARFCN_SECTION_NUM        12

typedef  struct
{
   unsigned char  point[2][16];

} sRAMPAREADATA;

typedef  struct
{
   signed short   max_arfcn;
   unsigned short mid_level;
   unsigned short hi_weight;
   unsigned short low_weight;

} sARFCN_SECTION;

typedef  struct
{
   signed   long  lowest_power;
   unsigned short power[16];
   sRAMPAREADATA  ramp[ PROFILE_NUM ];
   sARFCN_SECTION arfcn_weight[ ARFCN_SECTION_NUM ];
   unsigned short battery_compensate[3/*volt*/][3/*temp*/];
} sRAMPDATA;

typedef struct
{
   sRAMPDATA          rampData;
}l1cal_rampTable_T;

extern sRAMPDATA* RampData[FrequencyBandCount];
void  L1D_RF_SetRampTable( int rf_band, void *table );
unsigned long  L1D_RF_GetITC_PCL(void);

#if MD_DRV_IS_EPSK_TX_SUPPORT
extern sRAMPDATA* RampData_EPSK[FrequencyBandCount];
void  L1D_RF_SetRampTableEPSK( int rf_band, void *table );
void  L1D_RF_SetPAGainTable( int rf_band, void *table );
#endif

/* ------------------------------------------------------------------------- */

typedef struct
{
   kal_uint16         dacValue;
   kal_int32          slopeInv;
}l1cal_afcData_T;

void  L1D_RF_SetCrystalAFCData( void *table );
void  L1D_RF_SetCrystalCap( int cap_no );
void  L1D_RF_SetCrystalDac( short dacValue );

/* ------------------------------------------------------------------------- */

typedef struct
{
   kal_int16          filter_coefficient[60];
}l1spfc_T;

/* ------------------------------------------------------------------------- */

typedef struct
{
   unsigned char bbtx_common_mode_voltage;
   unsigned char bbtx_gain;
   unsigned char bbtx_calrcsel;
   unsigned char bbtx_trimI;        // need to set
   unsigned char bbtx_trimQ;        // need to set
   unsigned char bbtx_dccoarseI;    // need to set
   unsigned char bbtx_dccoarseQ;    // need to set
   unsigned char bbtx_offsetI;      // need to set
   unsigned char bbtx_offsetQ;      // need to set
   unsigned char bbtx_isCalibrated; // need to set
   int           apc_bat_low_voltage;
   int           apc_bat_high_voltage;
   int           apc_bat_low_temperature;
   int           apc_bat_high_temperature;
   unsigned char bbtx_common_mode_voltage_h;
   unsigned char bbtx_gain_h;
   unsigned char bbtx_calrcsel_h;
   unsigned char bbtx_trimI_h;
   unsigned char bbtx_trimQ_h;
   unsigned char bbtx_dccoarseI_h;
   unsigned char bbtx_dccoarseQ_h;
   unsigned char bbtx_offsetI_h;
   unsigned char bbtx_offsetQ_h;
   unsigned char bbtx_phsel;
   unsigned char bbtx_phsel_h;
   unsigned char bbrx_gsm850_gsm900_swap;
   unsigned char bbrx_dcs1800_pcs1900_swap;
} sBBTXParameters;

typedef struct
{
   sBBTXParameters BBTXParameters;
}l1cal_txiq_T;

extern sBBTXParameters BBTXParameters;

typedef unsigned char sMIDRAMPDATA[16];

extern sMIDRAMPDATA*  InterRampData[FrequencyBandCount];
void  L1D_RF_SetInterSlotRampTable( int rf_band, void *table );

#if MD_DRV_IS_EPSK_TX_SUPPORT
extern sMIDRAMPDATA** EPSK_InterRampData[5];
void  L1D_RF_EPSK_SetInterSlotRampTable( int rf_band, int _8G_mode, void *table );
#endif

/* ------------------------------------------------------------------------- */

typedef struct
{
   kal_uint8    interRampData[16];
}l1cal_interRampData_T;

/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_EPSK_TX_SUPPORT
typedef struct
{
   kal_uint8    EPSK_interRampData[4][16];
}l1cal_EPSK_interRampData_T;
#endif

/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_VCXO_LC_SUPPORT
#define XO_SlopeArea_Num         33
#else
#define XO_SlopeArea_Num         4
#endif

typedef  struct
{
   long   min_freq;
   short  min_dac;
// long   inv_slope;
}  XO_SLOPE_AREA_DATA;

typedef struct
{
   XO_SLOPE_AREA_DATA  XO_SlopeAreaData[XO_SlopeArea_Num];
}l1cal_crystalAfcData_T;

typedef struct
{
   kal_int32 cap_id;
}l1cal_crystalCapData_T;

extern const XO_SLOPE_AREA_DATA  XO_SlopeAreaData_RO[XO_SlopeArea_Num];
extern long  XO_CapID;

/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_FHC_SUPPORT
void  L1D_RF_GetAFCDacTRxOffset( short *afcdactrxoffset );
void  L1D_RF_SetAFCDacTRxOffset( short *afcdactrxoffset );
#endif

/* ------------------------------------------------------------------------- */

typedef struct
{
   unsigned long icorrection;
   unsigned long qcorrection;
} skyip2coef;

typedef struct
{
   unsigned long ipol;
   unsigned long qpol;
} sky117ip2pol;

typedef struct
{
   unsigned long acode;
   unsigned long amcode;
} mt6139ip2coef;

typedef struct
{
   signed short  w_re;
   signed short  w_im;
} w_coef;

typedef struct
{
   unsigned char map[16];
} gain_rf_map;

typedef union
{
   struct
   {
      skyip2coef   data[5/*band*/];
   } skyip2; //for sky74045
   struct
   {
      skyip2coef   data[5/*band*/];
      sky117ip2pol pol[5/*band*/];
   } sky117ip2;
   struct
   {
      mt6139ip2coef data[5/*band*/];
      unsigned long rxamcalmode;
   } mt6139ip2;
   struct
   {
      unsigned char fixgain_enable;
   } sky74137; //for sky74137
   struct
   {  // borrowed for mpll_fh chip, should not have rf rx_coff
      unsigned char  fixed_mpll_clk;
      unsigned short mpll_freq_idx;
      unsigned char  fixed_spll_clk;
      unsigned short spll_freq_idx;
   } mpll_fh;
   struct
   {  // reserved for mpll_fh
      unsigned char  fixed_mpll_clk;
      unsigned short mpll_freq_idx;
      w_coef         w_data[19];
   } mt6256_51rf;
   struct
   {  // reserved for mpll_fh
      unsigned char  fixed_mpll_clk;
      unsigned short mpll_freq_idx;
      unsigned short is_md2g_log_on;
   } md2g_log; // for chip support md2g logger
   struct
   {  // reserved for mpll_fh
      unsigned char  fixed_mpll_clk;
      unsigned short mpll_freq_idx;
      unsigned short is_md2g_log_on;
      gain_rf_map    gain_rf_table[4/*band*/];
   } mt6162_gain_rf;
#if MD_DRV_IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   struct
   {  // reuse mpll_freq_idx as fixafc_en since mpll_freqw_idx is hardly use after MT6276
      unsigned char  fixed_mpll_clk;
      unsigned short fixafc_en;
   } fixafc;
#endif
} sRxip2;

/*...................................*/

typedef struct
{
   unsigned long word6_4_0;
   unsigned long word6_5_0;
   unsigned long word6_6_0;
   unsigned long word6_7_0;
   unsigned long bvmode;
   unsigned long c3mode;
   unsigned long wordC3;
} b5ptxcoef;

typedef struct
{
   short          pcl_index;
   unsigned char  pa_vbias;
#if MD_DRV_IS_RF_MT6280RF || MD_DRV_IS_RF_MT6167 || MD_DRV_IS_RF_MT6166 || MD_DRV_IS_RF_MT6165 || MD_DRV_IS_RF_MT6580RF
   unsigned short pa_gain;
#endif
} pa_vbias;

typedef struct
{
   pa_vbias GSM850_pa_vbias[8];
   pa_vbias GSM900_pa_vbias[8];
   pa_vbias DCS1800_pa_vbias[8];
   pa_vbias PCS1900_pa_vbias[8];
} mt6140tx_pa_vbias;

typedef struct
{
   pa_vbias GSM850_pa_vbias[8];
   pa_vbias GSM900_pa_vbias[8];
   pa_vbias DCS1800_pa_vbias[8];
   pa_vbias PCS1900_pa_vbias[8];
} mt6162tx_pa_vbias;

typedef struct
{
   pa_vbias GSM850_pa_vbias[8];
   pa_vbias GSM900_pa_vbias[8];
   pa_vbias DCS1800_pa_vbias[8];
   pa_vbias PCS1900_pa_vbias[8];
} mt6256tx_pa_vbias;

typedef struct
{
   pa_vbias GSM850_pa_vbias[16];
   pa_vbias GSM900_pa_vbias[16];
   pa_vbias DCS1800_pa_vbias[16];
   pa_vbias PCS1900_pa_vbias[16];
} orionRFtx_pa_vbias;

typedef struct
{
   unsigned char REFDET_SLOPE_SKEW;
   unsigned char AM_FB_DAC;
} ad6546txcoef;

typedef struct
{
   signed char MID_GAMA_THRESHOLD;
   signed char LOW_GAMA_THRESHOLD;
   signed char MID_DELTA_SLOPE_SKEW;
   signed char LOW_DELTA_SLOPE_SKEW;
   signed char MID_DELTA_APC_CAP;
   signed char LOW_DELTA_APC_CAP;
} ad6546tx_reg8_highband_delta;

typedef union
{
#if MD_DRV_IS_RF_MT6280RF || MD_DRV_IS_RF_MT6167 || MD_DRV_IS_RF_MT6166 || MD_DRV_IS_RF_MT6165 || MD_DRV_IS_RF_MT6580RF
   struct
   {
      orionRFtx_pa_vbias data;
   } mt6280tx;  /* Reserve mt6280tx for META Backward Capability */
   struct
   {
      orionRFtx_pa_vbias data;
   } orionRFtx;
#else
   struct
   {
      b5ptxcoef data;
   } b5ptx;
   struct
   {
      mt6140tx_pa_vbias data;
   } mt6140tx;
   struct
   {
      unsigned char ref_temp;
      unsigned char LB_GMSK_TX_PGA_GC;
      unsigned char HB_GMSK_TX_PGA_GC;
      char isDCXO;
   } CMOSEDGEtx;
   struct
   {
      ad6546txcoef  CalData[4];
      unsigned long Reg8_default[4];
      ad6546tx_reg8_highband_delta AMLoopDelta;
   } ad6546tx;
   struct
   {
      mt6162tx_pa_vbias data;
   } mt6162tx;
   struct
   {
      mt6256tx_pa_vbias data;
   } mt6256tx;
/* struct
   {
      unsigned long dummy;
   } sTXdummy;
 */
#endif
} sTxepsk;

typedef struct
{
   sRxip2  rx;
   sTxepsk tx;
} sRFSpecialCoef;

typedef struct
{
   sRFSpecialCoef RFSpecialCoef;
}l1cal_rfspecialcoef_T;

extern  sRFSpecialCoef RFSpecialCoef;

void  L1D_RF_SetRFSpecialCoef( void *table );

/* ------------------------------------------------------------------------- */

typedef  struct
{
   signed char rollback_2t; /* Rollback (2t/F2I_Resolution) dB when 2 TX slots */
   signed char rollback_3t; /* Rollback (3t/F2I_Resolution) dB when 3 TX slots */
   signed char rollback_4t; /* Rollback (4t/F2I_Resolution) dB when 4 TX slots */
   signed char rollback_5t; /* Rollback (5t/F2I_Resolution) dB when 5 TX slots */
} sTX_POWER_ROLLBACK;

typedef struct
{
   sTX_POWER_ROLLBACK   rollback_data[FrequencyBandCount];
}l1cal_tx_power_rollback_T;

#if MD_DRV_IS_GPRS
void L1D_RF_SetTxPowerRollbackData( int rf_band, void *table );
extern sTX_POWER_ROLLBACK* tx_power_rollback_gmsk[FrequencyBandCount];

   #if MD_DRV_IS_EGPRS
void L1D_RF_SetTxPowerRollbackData_EPSK( int rf_band, void *table );
extern sTX_POWER_ROLLBACK* tx_power_rollback_epsk[FrequencyBandCount];
   #endif
#endif

/* ------------------------------------------------------------------------- */

typedef struct
{
   unsigned short data[16];   /* for closed-loop AUXADC/BSI TXPC  */
} sTXPC_ADCDATA;

typedef struct
{
   unsigned short data[8];    /* for closed-loop BSI TXPC         */
} sTXPC_TEMPDATA;

typedef struct
{
   char           is_calibrated;
   sTXPC_ADCDATA  adc[FrequencyBandCount];
   short          temperature;
   sTXPC_TEMPDATA temp[FrequencyBandCount];
} sTXPC_L1CAL;

typedef sTXPC_L1CAL l1cal_txpc_T;

void L1D_RF_TXPC_SET_CAL( sTXPC_L1CAL *cal, int is_EPSK );
void L1D_RF_TXPC_GET_L1_SETTING( sTXPC_L1CAL *buff, int is_EPSK );

/* ------------------------------------------------------------------------- */

typedef struct
{
   unsigned short data[8];    /* for temperature ADC */
} sTEMPERATURE_ADC_L1CAL;

typedef sTEMPERATURE_ADC_L1CAL l1cal_temperatureADC_T;

void L1D_RF_TXPC_Get_Temp_ADC( sTEMPERATURE_ADC_L1CAL *buff );

/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_BPI_DATA_32_BIT_CHIP
typedef signed long  BPI_DATA_SIZE;
#else
typedef signed short BPI_DATA_SIZE;
#endif

#if MD_DRV_IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
typedef struct
{
   signed short  P_SR0;   /* BPI data sent at SR0 */
   signed short  P_SR3;   /* BPI data sent at SR3 */
   signed short  P_ST0;   /* BPI data sent at ST0 */
   signed short  P_ST3;   /* BPI data sent at ST3 */
}sRF_PDATA_OFFCHIP_ITEM;

typedef struct
{
   sRF_PDATA_OFFCHIP_ITEM  GSM850;
   sRF_PDATA_OFFCHIP_ITEM  GSM;
   sRF_PDATA_OFFCHIP_ITEM  DCS;
   sRF_PDATA_OFFCHIP_ITEM  PCS;
}sRF_PDATA_OFFCHIP;

typedef struct
{
   BPI_DATA_SIZE xPDATA_GSM850_PR1;
   BPI_DATA_SIZE xPDATA_GSM850_PR2;
   BPI_DATA_SIZE xPDATA_GSM850_PR2B;
   BPI_DATA_SIZE xPDATA_GSM850_PR3;
   BPI_DATA_SIZE xPDATA_GSM850_PR3A;
   BPI_DATA_SIZE xPDATA_GSM850_PT1;
   BPI_DATA_SIZE xPDATA_GSM850_PT2;
   BPI_DATA_SIZE xPDATA_GSM850_PT2B;
   BPI_DATA_SIZE xPDATA_GSM850_PT3;
   BPI_DATA_SIZE xPDATA_GSM850_PT3A;
   BPI_DATA_SIZE xPDATA_GSM_PR1;
   BPI_DATA_SIZE xPDATA_GSM_PR2;
   BPI_DATA_SIZE xPDATA_GSM_PR2B;
   BPI_DATA_SIZE xPDATA_GSM_PR3;
   BPI_DATA_SIZE xPDATA_GSM_PR3A;
   BPI_DATA_SIZE xPDATA_GSM_PT1;
   BPI_DATA_SIZE xPDATA_GSM_PT2;
   BPI_DATA_SIZE xPDATA_GSM_PT2B;
   BPI_DATA_SIZE xPDATA_GSM_PT3;
   BPI_DATA_SIZE xPDATA_GSM_PT3A;
   BPI_DATA_SIZE xPDATA_DCS_PR1;
   BPI_DATA_SIZE xPDATA_DCS_PR2;
   BPI_DATA_SIZE xPDATA_DCS_PR2B;
   BPI_DATA_SIZE xPDATA_DCS_PR3;
   BPI_DATA_SIZE xPDATA_DCS_PR3A;
   BPI_DATA_SIZE xPDATA_DCS_PT1;
   BPI_DATA_SIZE xPDATA_DCS_PT2;
   BPI_DATA_SIZE xPDATA_DCS_PT2B;
   BPI_DATA_SIZE xPDATA_DCS_PT3;
   BPI_DATA_SIZE xPDATA_DCS_PT3A;
   BPI_DATA_SIZE xPDATA_PCS_PR1;
   BPI_DATA_SIZE xPDATA_PCS_PR2;
   BPI_DATA_SIZE xPDATA_PCS_PR2B;
   BPI_DATA_SIZE xPDATA_PCS_PR3;
   BPI_DATA_SIZE xPDATA_PCS_PR3A;
   BPI_DATA_SIZE xPDATA_PCS_PT1;
   BPI_DATA_SIZE xPDATA_PCS_PT2;
   BPI_DATA_SIZE xPDATA_PCS_PT2B;
   BPI_DATA_SIZE xPDATA_PCS_PT3;
   BPI_DATA_SIZE xPDATA_PCS_PT3A;
   BPI_DATA_SIZE xPDATA_GSM850_PR2M1;
   BPI_DATA_SIZE xPDATA_GSM850_PR2M2;
   BPI_DATA_SIZE xPDATA_GSM850_PR2M3;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M1_G8;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M2_G8;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M3_G8;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M1_8G;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M2_8G;
   BPI_DATA_SIZE xPDATA_GSM850_PT2M3_8G;
   BPI_DATA_SIZE xPDATA_GSM_PR2M1;
   BPI_DATA_SIZE xPDATA_GSM_PR2M2;
   BPI_DATA_SIZE xPDATA_GSM_PR2M3;
   BPI_DATA_SIZE xPDATA_GSM_PT2M1_G8;
   BPI_DATA_SIZE xPDATA_GSM_PT2M2_G8;
   BPI_DATA_SIZE xPDATA_GSM_PT2M3_G8;
   BPI_DATA_SIZE xPDATA_GSM_PT2M1_8G;
   BPI_DATA_SIZE xPDATA_GSM_PT2M2_8G;
   BPI_DATA_SIZE xPDATA_GSM_PT2M3_8G;
   BPI_DATA_SIZE xPDATA_DCS_PR2M1;
   BPI_DATA_SIZE xPDATA_DCS_PR2M2;
   BPI_DATA_SIZE xPDATA_DCS_PR2M3;
   BPI_DATA_SIZE xPDATA_DCS_PT2M1_G8;
   BPI_DATA_SIZE xPDATA_DCS_PT2M2_G8;
   BPI_DATA_SIZE xPDATA_DCS_PT2M3_G8;
   BPI_DATA_SIZE xPDATA_DCS_PT2M1_8G;
   BPI_DATA_SIZE xPDATA_DCS_PT2M2_8G;
   BPI_DATA_SIZE xPDATA_DCS_PT2M3_8G;
   BPI_DATA_SIZE xPDATA_PCS_PR2M1;
   BPI_DATA_SIZE xPDATA_PCS_PR2M2;
   BPI_DATA_SIZE xPDATA_PCS_PR2M3;
   BPI_DATA_SIZE xPDATA_PCS_PT2M1_G8;
   BPI_DATA_SIZE xPDATA_PCS_PT2M2_G8;
   BPI_DATA_SIZE xPDATA_PCS_PT2M3_G8;
   BPI_DATA_SIZE xPDATA_PCS_PT2M1_8G;
   BPI_DATA_SIZE xPDATA_PCS_PT2M2_8G;
   BPI_DATA_SIZE xPDATA_PCS_PT2M3_8G;
   BPI_DATA_SIZE xPDATA_INIT;
   BPI_DATA_SIZE xPDATA_IDLE;
   BPI_DATA_SIZE xPDATA_GMSK;
   BPI_DATA_SIZE xPDATA_8PSK;
   sRF_PDATA_OFFCHIP xPDATA_OFFCHIP;
}sRF_BPI_VARIABLE;

/*...................................*/

typedef struct
{
   signed short  xQB_RX_FENA_2_FSYNC;
   signed short  xQB_RX_FSYNC_2_FENA;
   signed short  xQB_TX_FENA_2_FSYNC;
   signed short  xQB_TX_FSYNC_2_FENA;
   signed short  xQB_SR0;    //OH
   signed short  xQB_SR1;
   signed short  xQB_SR2;
   signed short  xQB_SR3;
   signed short  xQB_SR2M;
   signed short  xQB_PR1;
   signed short  xQB_PR2;
   signed short  xQB_PR2B;
   signed short  xQB_PR3;
   signed short  xQB_PR3A;
   signed short  xQB_PR2M1;
   signed short  xQB_PR2M2;
   signed short  xQB_ST0;  //OH
   signed short  xQB_ST1;
   signed short  xQB_ST2;
   signed short  xQB_ST2B;
   signed short  xQB_ST3;
   signed short  xQB_ST2M_G8;
   signed short  xQB_ST2M_8G;
   signed short  xQB_PT1;
   signed short  xQB_PT2;
   signed short  xQB_PT2B;
   signed short  xQB_PT3;
   signed short  xQB_PT3A;
   signed short  xQB_PT2M1_G8;
   signed short  xQB_PT2M2_G8;
   signed short  xQB_PT2M3_G8;
   signed short  xQB_PT2M1_8G;
   signed short  xQB_PT2M2_8G;
   signed short  xQB_PT2M3_8G;
   signed short  xQB_APCON;
   signed short  xQB_APCMID;
   signed short  xQB_APCOFF;
   signed short  xQB_APCDACON; //OH
} sRF_TIMING_VARIABLE;

/*...................................*/

typedef struct
{
   int xBAT_VOLTAGE_SAMPLE_PERIOD;
   int xBAT_VOLTAGE_AVERAGE_COUNT;
   int xBAT_TEMPERATURE_SAMPLE_PERIOD;
   int xBAT_TEMPERATURE_AVERAGE_COUNT;
   int xBAT_LOW_VOLTAGE;
   int xBAT_HIGH_VOLTAGE;
   int xBAT_LOW_TEMPERATURE;
   int xBAT_HIGH_TEMPERATURE;
   int xRF_TEMPERATURE_SAMPLE_PERIOD;     //OH
   int xRF_TEMPERATURE_AVERAGE_COUNT;     //OH
} sRF_APC_COMPENSATE_VARIABLE;

/*...................................*/

typedef struct
{
   signed short  txios_highpcl_850_GMSK;
   signed short  txios_highpcl_900_GMSK;
   signed short  txios_highpcl_DCS_GMSK;
   signed short  txios_highpcl_PCS_GMSK;
   signed short  txios_highpcl_850_EPSK;
   signed short  txios_highpcl_900_EPSK;
   signed short  txios_highpcl_DCS_EPSK;
   signed short  txios_highpcl_PCS_EPSK;
   signed short  txios_lowpcl_850_GMSK;
   signed short  txios_lowpcl_900_GMSK;
   signed short  txios_lowpcl_DCS_GMSK;
   signed short  txios_lowpcl_PCS_GMSK;
   signed short  txios_lowpcl_850_EPSK;
   signed short  txios_lowpcl_900_EPSK;
   signed short  txios_lowpcl_DCS_EPSK;
   signed short  txios_lowpcl_PCS_EPSK;

}sRF_PCL_VARIABLE;

/*...................................*/

typedef struct
{
   signed short  lbmod_gc_highpcl_850_GMSK;
   signed short  lbmod_gc_highpcl_900_GMSK;
   signed short  lbmod_gc_highpcl_DCS_GMSK;
   signed short  lbmod_gc_highpcl_PCS_GMSK;
   signed short  lbmod_gc_highpcl_850_EPSK;
   signed short  lbmod_gc_highpcl_900_EPSK;
   signed short  lbmod_gc_highpcl_DCS_EPSK;
   signed short  lbmod_gc_highpcl_PCS_EPSK;
   signed short  lbmod_gc_lowpcl_850_GMSK;
   signed short  lbmod_gc_lowpcl_900_GMSK;
   signed short  lbmod_gc_lowpcl_DCS_GMSK;
   signed short  lbmod_gc_lowpcl_PCS_GMSK;
   signed short  lbmod_gc_lowpcl_850_EPSK;
   signed short  lbmod_gc_lowpcl_900_EPSK;
   signed short  lbmod_gc_lowpcl_DCS_EPSK;
   signed short  lbmod_gc_lowpcl_PCS_EPSK;
}sRF_LBMOD_GC_VARIABLE;

/*...................................*/

typedef struct
{
   signed short  hbmod_gc_highpcl_850_GMSK;
   signed short  hbmod_gc_highpcl_900_GMSK;
   signed short  hbmod_gc_highpcl_DCS_GMSK;
   signed short  hbmod_gc_highpcl_PCS_GMSK;
   signed short  hbmod_gc_highpcl_850_EPSK;
   signed short  hbmod_gc_highpcl_900_EPSK;
   signed short  hbmod_gc_highpcl_DCS_EPSK;
   signed short  hbmod_gc_highpcl_PCS_EPSK;
   signed short  hbmod_gc_lowpcl_850_GMSK;
   signed short  hbmod_gc_lowpcl_900_GMSK;
   signed short  hbmod_gc_lowpcl_DCS_GMSK;
   signed short  hbmod_gc_lowpcl_PCS_GMSK;
   signed short  hbmod_gc_lowpcl_850_EPSK;
   signed short  hbmod_gc_lowpcl_900_EPSK;
   signed short  hbmod_gc_lowpcl_DCS_EPSK;
   signed short  hbmod_gc_lowpcl_PCS_EPSK;

}sRF_HBMOD_GC_VARIABLE;

/*...................................*/

typedef struct
{
   signed short  txitc_highpcl_850_GMSK;
   signed short  txitc_highpcl_900_GMSK;
   signed short  txitc_highpcl_DCS_GMSK;
   signed short  txitc_highpcl_PCS_GMSK;
   signed short  txitc_highpcl_850_EPSK;
   signed short  txitc_highpcl_900_EPSK;
   signed short  txitc_highpcl_DCS_EPSK;
   signed short  txitc_highpcl_PCS_EPSK;
   signed short  txitc_lowpcl_850_GMSK;
   signed short  txitc_lowpcl_900_GMSK;
   signed short  txitc_lowpcl_DCS_GMSK;
   signed short  txitc_lowpcl_PCS_GMSK;
   signed short  txitc_lowpcl_850_EPSK;
   signed short  txitc_lowpcl_900_EPSK;
   signed short  txitc_lowpcl_DCS_EPSK;
   signed short  txitc_lowpcl_PCS_EPSK;
}sRF_ITC_PCL_VARIABLE;

/*...................................*/

typedef struct
{
   signed char   xCLOSED_LOOP_TXPC_TYPE;      //OH
   signed short  xQB_TX_SAMPLE_OFFSET_GMSK;   //OH
   signed short  xQB_TX_SAMPLE_OFFSET_EPSK;   //OH
   signed short  xTXPC_EPSK_TP_SLOPE_LB;      //OH
   signed short  xTXPC_EPSK_TP_SLOPE_HB;      //OH
} sRF_TX_POWERFEEDBACK_VARIABLE;      //OH

/*...................................*/

typedef struct
{
   int            xXO_CapID;
   signed short   xafc_dac_default;
   signed short   xafc_inv_slope;
   signed char    xEGSM_DISABLE;
   unsigned char  xGSM850_GSM900_SWAP;
   unsigned char  xDCS1800_PCS1900_SWAP;
   unsigned char  xGSM_ERR_DET_ID; //OH
   signed short   xTX_PROPAGATION_DELAY;
   signed short   xTQ_EPSK_TX_DELAY;
} sRF_OTHERS_VARIABLE;

/*...................................*/

typedef struct
{
   sTX_POWER_ROLLBACK  GSM850_tx_power_rollback_gmsk;
   sTX_POWER_ROLLBACK  GSM_tx_power_rollback_gmsk;
   sTX_POWER_ROLLBACK  DCS_tx_power_rollback_gmsk;
   sTX_POWER_ROLLBACK  PCS_tx_power_rollback_gmsk;
   sTX_POWER_ROLLBACK  GSM850_tx_power_rollback_epsk;
   sTX_POWER_ROLLBACK  GSM_tx_power_rollback_epsk;
   sTX_POWER_ROLLBACK  DCS_tx_power_rollback_epsk;
   sTX_POWER_ROLLBACK  PCS_tx_power_rollback_epsk;
}sRF_TX_POWER_ROLLBACK_VARIABLE;

/*...................................*/

typedef struct
{
   unsigned long  xGSM850_PATH_SEL;
   unsigned long  xGSM_PATH_SEL;
   unsigned long  xDCS_PATH_SEL;
   unsigned long  xPCS_PATH_SEL;
}sRF_RX_BAND_VARIABLE;

/*...................................*/

typedef struct
{
   unsigned char   xAFC_PREDICTION_ON;
   unsigned short  xAFC_PREDICTION_INTERVAL;
   unsigned char   xAFC_PREDICTION_DECAYING_FACTOR;
}sRF_AFC_TRACKING_VARIABLE;

/*...................................*/

typedef struct
{
   unsigned char  xCLK1_EN;
   unsigned char  xCLK2_EN;
   unsigned char  xCLK3_EN;
   unsigned char  xCLK4_EN;
}sRF_CLK_BUFFER_VARIABLE;

/*...................................*/

typedef struct
{
   int start;                      // the special pattern of start position
   int version;                    // Struct Version ID
   int RF_Type;                    // RF type
   char is_data_update;            // default is false, and will be changed  as true after tool update
   sRF_BPI_VARIABLE                RF_BPI_Variable;
   sRF_TIMING_VARIABLE             RF_Timing_Variable;
   sRF_APC_COMPENSATE_VARIABLE     RF_APC_Compensate_Variable;
   sRF_PCL_VARIABLE                RF_PCL_Varaible;
   sRF_LBMOD_GC_VARIABLE           RF_Lbmod_GC_Variable;
   sRF_HBMOD_GC_VARIABLE           RF_Hbmod_GC_Variable;
   sRF_ITC_PCL_VARIABLE            RF_ITC_PCL_Variable;
   sRF_TX_POWERFEEDBACK_VARIABLE   RF_TX_PowerFeedback_Variable;
   sRF_TX_POWER_ROLLBACK_VARIABLE  RF_TX_Power_Rollback_Variable;
   sRF_RX_BAND_VARIABLE            RF_RX_Band_Variable;
   sRF_OTHERS_VARIABLE             RF_Others_Variable;
   sRF_AFC_TRACKING_VARIABLE       RF_AFC_Tracking_Variable;
   sRF_CLK_BUFFER_VARIABLE         RF_CLK_Buffer_Variable;
   int end;                        // the special pattern of end1 position
}sL1D_RF_CUSTOM_INPUT_DATA;

typedef sL1D_RF_CUSTOM_INPUT_DATA l1d_rf_custom_input_data_T;

extern sL1D_RF_CUSTOM_INPUT_DATA l1d_rf_custom_input_data;
#endif

void  L1D_RF_CAPID_Update( void );
void  L1D_RF_Custom_BBTXParameter_Update( void );
void  L1D_RF_Custom_TX_Power_Rollback_Table_Update_GPRS( void );
void  L1D_RF_Custom_TX_Power_Rollback_Table_Update_EGPRS( void );

/* ------------------------------------------------------------------------- */

typedef struct
{
   kal_int32 cload_freq_offset;
}l1cal_cload_freq_offset_T;

#if MD_DRV_IS_32K_CRYSTAL_REMOVAL_SUPPORT
void L1D_RF_GetCLoadFreqOffset( int* buff );
#endif
/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   #if MD_DRV_IS_RF_MT6165
#define TX_GAIN_STEP_NUM         13
   #else
#error "please define TX_GAIN_STEP_NUM if support TX GAIN RF calibration"
   #endif
#else
#define TX_GAIN_STEP_NUM         13
#endif


typedef struct
{
   kal_int16 gain_rf[FrequencyBandCount][TX_GAIN_STEP_NUM];
}l1cal_gainrf_T;

typedef struct
{
   short data[TX_GAIN_STEP_NUM];
} sTXGAIN_RFDATA;

extern sTXGAIN_RFDATA* GAIN_RF_TABLE[FrequencyBandCount];

typedef enum
{
   EPSKTxGainNormalState,
   EPSKTxGainCalibrationState,
   
} TXGainRFState;

/* ------------------------------------------------------------------------- */

#endif
