/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 * afe_def.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 *  This file defines all the AFE registers used in audio module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __AFE_DEF_H
#define __AFE_DEF_H

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter:  INCLUDE FILES
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
#include "kal_public_api.h"
#include "reg_base.h"
#include "l1audio.h"
#include "audio_def.h"
#include "am.h"
/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Chapter:  Feature Definitions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

//=============================================================================================
//                  Sections: Immobile AFE Feature Definitions
//=============================================================================================
   #define __AFE_DIGITAL_MIC_SUPPORT__  0
   
/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Sections:  Feature Dependency
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Chapter:  Customer Definitions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Chapter:  Register Definitions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

//=============================================================================================
//                  Sections: Register Audio Front End Hardware Control Register
//=============================================================================================
#define  AFE_VMCU_CON   ((APBADDR)(AFE_base+0x0000))        /* AFE MCU Control Register               */
#define  AFE_VMCU_CON1  ((APBADDR)(AFE_base+0x000C))        /* AFE Voice Analog Circuit Control Register 1   */

#ifdef ANALOG_AFE_PATH_EXIST
#define  AFE_VMCU_CON2  ((APBADDR)(AFE_base+0x0010))        /* AFE Voice Analog Circuit Control Register 2   */
#define  AFE_VMCU_CON3  ((APBADDR)(AFE_base+0x001C))        /* AFE Voice Analog Circuit Control Register 3   */
#define  AFE_VMCU_CON5  ((APBADDR)(AFE_base+0x01AC))        /* AFE Voice Analog Circuit Control Register 3   */ //Scott110512
#define  AFE_VAC_DCON1  ((APBADDR)(AFE_base+0x000C))        /* AFE Voice Analog Circuit Control Register 1   */
#endif


#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6571) || defined(MT6290)
#define  AFE_VDB_CON    ((APBADDR)(AFE_base+0x0014))        /* AFE Voice DAI Blue Tooth Control Register     */
#define  AFE_VLB_CON    ((APBADDR)(AFE_base+0x0018))        /* AFE Voice Loop-back Mode Control Register     */
#elif defined(MT6595) || defined(MT6752) || defined(MT6735)|| defined(MT6580)
#define  AFE_PCM_CON0    ((APBADDR32)(AFE_base+0x0014))        /* AFE PCM Interface Control Register 0     */
#endif 
#define  AFE_AMCU_CON0  ((APBADDR)(AFE_base+0x0020))        /* AFE Audio MCU Control Register 0gister        */
#define  AFE_AMCU_CON1  ((APBADDR)(AFE_base+0x0024))        /* AFE Audio Control Register 1                  */
#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6571) || defined(MT6290)
#define  AFE_EDI_CON    ((APBADDR)(AFE_base+0x0028))        /* AFE Audio EDI(I2S , EIAJ) Control Register    */
#define  AFE_VAM_SET    ((APBADDR)(AFE_base+0x0034))        /* Audio/Voice Interactive Mode Setting          */
#elif defined(MT6595) || defined(MT6752) || defined(MT6735)|| defined(MT6580)
#define  AFE_IRQ_CON1    ((APBADDR32)(AFE_base+0x0034))       /* IRQ mode setting                 */
#endif 
#if defined(MT6595) || defined(MT6752) || defined(MT6735)|| defined(MT6580)
#define  AFE_MCU_CON0    ((APBADDR32)(AFE_base+0x0080))       /* MD AFE control Register 0                 */
#define  AFE_MCU_CON1    ((APBADDR32)(AFE_base+0x0084))       /* MD AFE control Register 1                 */
#define  AFE_CONN0       ((APBADDR32)(AFE_base+0x00A0))       /* MD AFE connection control Register 1                 */
#endif 

#ifdef ANALOG_AFE_PATH_EXIST
#define  AFE_AMCU_CON5  ((APBADDR)(AFE_base+0x0180))        /* AFE Audio Control Register 5                  */
#endif



#ifdef ANALOG_AFE_PATH_EXIST
#define  AFE_AMCU_CON2  ((APBADDR)(AFE_base+0x002C))        /* AFE Audio Control Register 2                  */
#define  AFE_DAC_TEST   ((APBADDR)(AFE_base+0x0030))        /* AUDIO/VOICE sinewave generator and others     */
#endif



#ifdef ANALOG_AFE_PATH_EXIST
#define  AFE_AMCU_CON3  ((APBADDR)(AFE_base+0x0038))        /* AFE Audio Control Register 3                  */
#define  AFE_EQCOEF     ((APBADDR)(AFE_base+0x0040))        /* AFE Audio EQ Coefficients                     */
#define  AFE_VAGC_CON0  ((APBADDR)(AFE_base+0x0100))        /* AFE Audio AGC Control Register 0              */
#define  AFE_VAGC_CON1  ((APBADDR)(AFE_base+0x0104))        /* AFE Audio AGC Control Register 1              */
#define  AFE_VAGC_CON2  ((APBADDR)(AFE_base+0x0108))        /* AFE Audio AGC Control Register 2              */
#define  AFE_VAGC_CON3  ((APBADDR)(AFE_base+0x010c))        /* AFE Audio AGC Control Register 3              */
#define  AFE_VAGC_CON4  ((APBADDR)(AFE_base+0x0110))        /* AFE Audio AGC Control Register 4              */
#define  AFE_VAGC_CON5  ((APBADDR)(AFE_base+0x0114))        /* AFE Audio AGC Control Register 5              */
#define  AFE_VAGC_CON6  ((APBADDR)(AFE_base+0x0118))        /* AFE Audio AGC Control Register 6              */
#define  AFE_VAGC2_CON0 ((APBADDR)(AFE_base+0x0120))        /* AFE Audio AGC2 Control Register 0             */
#define  AFE_VAGC2_CON1 ((APBADDR)(AFE_base+0x0124))        /* AFE Audio AGC2 Control Register 1             */
#define  AFE_VAGC2_CON2 ((APBADDR)(AFE_base+0x0128))        /* AFE Audio AGC2 Control Register 2             */
#define  AFE_VAGC2_CON3 ((APBADDR)(AFE_base+0x012c))        /* AFE Audio AGC2 Control Register 3             */
#define  AFE_VAGC2_CON4 ((APBADDR)(AFE_base+0x0130))        /* AFE Audio AGC2 Control Register 4             */
#define  AFE_VAGC2_CON5 ((APBADDR)(AFE_base+0x0134))        /* AFE Audio AGC2 Control Register 5             */
#define  AFE_VAGC2_CON6 ((APBADDR)(AFE_base+0x0138))        /* AFE Audio AGC2 Control Register 6             */
#define  AFE_FOC_CON    ((APBADDR)(AFE_base+0x0150))        /* AFE I2S Control Register 0                    */
#define  AFE_STATUS     ((APBADDR)(AFE_base+0x0174))        /* AFE Status                                    */   
#define  AFE_VMCU_CON4  ((APBADDR)(AFE_base+0x01a0))
#define  AFE_AMCU_CON6  ((APBADDR)(AFE_base+0x0184))
#define  AFE_AMCU_CON7  ((APBADDR)(AFE_base+0x0188))
#define  AFE_VMCU_CON6  ((APBADDR)(AFE_base+0x01A8))
#define  AFE_PC_1X_IDX  ((APBADDR)(AFE_base+0x01EC)) 

#define  ACIF_AC_HW_VER ((APBADDR)(MIXED_base+0x0004))      /* Mix-signal Chip Version Control               */
#define  WR_PATH        ((APBADDR)(MIXED_base+0x000C))      /* Mix-signal Chip Version Control               */
#define  AFE_VAG_CON    ((APBADDR)(MIXED_base+0x0100))      /* AFE Voice Analog Gain Control Register        */
#define  AFE_VAC_CON0   ((APBADDR)(MIXED_base+0x0104))      /* AFE Voice Analog-Circuit Control Register 0   */
#define  AFE_VAC_CON1   ((APBADDR)(MIXED_base+0x0108))      /* AFE Voice Analog-Circuit Control Register 1   */
#define  AFE_VAPDN_CON  ((APBADDR)(MIXED_base+0x010C))      /* AFE Voice Analog Power Down Control Register  */
#define  AFE_VAGC_CON   ((APBADDR)(MIXED_base+0x0110))      /* AFE Voice AGC Control Register  */
#define  AFE_VAC_CON2   ((APBADDR)(MIXED_base+0x0110))      /* AFE Voice Analog-Circuit Control Register 2   */
#define  AFE_AAG_CON    ((APBADDR)(MIXED_base+0x0200))      /* AFE Audio Analog Gain Control Register        */
#define  AFE_AAC_CON    ((APBADDR)(MIXED_base+0x0204))      /* AFE Audio Analog-Circuit Control Register     */
#define  AFE_AAPDN_CON  ((APBADDR)(MIXED_base+0x0208))      /* AFE Audio Analog Power Down Control Register  */
#define  AFE_AAC_NEW    ((APBADDR)(MIXED_base+0x020C))      /* Enhanced Audio AFE Control and Parameters     */
#define  AFE_AAC_CON1   ((APBADDR)(MIXED_base+0x0210))      /* AFE Audio Analog-Circuit Control Register 1   */
#endif

#define  MD2GSYS_CG_SET2   ((APBADDR)(MD2GCONFG_base+0x018))      /* Power Down Disable 2 Register        */
#define  MD2GSYS_CG_CLR2   ((APBADDR)(MD2GCONFG_base+0x028))      /* Power Down Enable  2 Register        */

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: Function Prototypes
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
#ifdef ANALOG_AFE_PATH_EXIST
void AFE_TurnOnSpeaker( kal_uint8 aud_func );
void AFE_TurnOffSpeaker( kal_uint8 aud_func );
void AFE_FastCloseSpk(void);
void AFE_TurnOnMicrophone( kal_uint8 aud_func );
void AFE_TurnOffMicrophone( kal_uint8 aud_func );
kal_bool AFE_IsMicrophoneOn( kal_uint8 aud_func );
#else 
void AFE_TurnOnPathWork( kal_uint8 aud_func );
void AFE_TurnOffPathWork( kal_uint8 aud_func );
#endif

// void AFE_TurnOnBluetooth( kal_uint16 param );
// void AFE_TurnOffBluetooth( void );
void AFE_TurnOnDAI( void );
void AFE_TurnOffDAI( void );

//void AFE_TurnOnEDI( kal_uint16 dir, kal_uint16 fmt, kal_uint16 cycle );
//void AFE_TurnOffEDI( void );
//kal_bool AFE_IsEDIOn( void );
#ifdef ANALOG_AFE_PATH_EXIST
void AFE_TurnOnFIR( kal_uint8 aud_func );
void AFE_TurnOffFIR( kal_uint8 aud_func );
#endif // ANALOG_AFE_PATH_EXIST

void AFE_TurnOn8K(void);
void AFE_TurnOff8K(void);

#ifdef ANALOG_AFE_PATH_EXIST
kal_uint8 AFE_TurnOnMicBias( void );
void AFE_TurnOffMicBias(void);
#if 0 
/* under construction !*/
/* under construction !*/
#endif
void AFE_SetOutputDevice( kal_uint8 aud_func, kal_uint8 device );
void AFE_SetInputSource( kal_uint8 src );
kal_uint8 AFE_GetInputSource( void );
kal_bool AFE_IsAudioLoudSpk( void );
kal_bool AFE_IsAudioEarphone( void );
#endif

void AFE_EnableToneLoopBackFlag( kal_bool param );

#ifdef ANALOG_AFE_PATH_EXIST
void AFE_SetOutputGainControl(uint8 aud_func, uint32 total_gain);
#endif 
void AFE_GetExtPGAInfo(kal_uint8 ext_dac, kal_uint16 ctrl_point, kal_uint8* total_level, kal_uint8* bit_number);
void AFE_GetExtPGAGainMap(kal_uint8 ext_dac, kal_uint16 ctrl_point, kal_uint8 total_level, kal_int8* gain_map);
void AFE_GetPGAGainMap(AFE_BUFFER_T eBuffer, kal_uint16 u2TotalLevel, kal_int8 *pPGA_Map);
kal_uint32 AFE_GetOutputGainControl(kal_uint8 aud_func);
void AFE_SetOutputGainControlDualPath( kal_uint8 aud_func, kal_uint32 ext_amp_gain );
void AFE_EnableVolumeProtection(kal_bool enable);
void AFE_Vibrate(bool enable);

#ifdef ANALOG_AFE_PATH_EXIST
void AFE_SetDigitalMute( kal_bool mute );
kal_uint16 AFE_GetDigiGain(void);
void AFE_SetDigitalGain( kal_uint8 aud_func, kal_uint8 level );
kal_uint16 AFE_GetAudioDigiGain( kal_bool isAPM);
// void AFE_SetMicrophoneVolume( kal_uint8 mic_volume );
// kal_uint8 AFE_GetMicrophoneVolume( void );
#else
void AFE_DigitalOnly_SetDigitalGain(kal_uint8 aud_func, kal_int16 digitalGainQdB);
void AFE_DigitalOnly_SetMicrophoneVolume( kal_uint8 mic_volume );
#endif
void AFE_DigitalOnly_SetEnhRefDigitalGain(kal_int16 digitalGainQdB);

#if 0
/* under construction !*/
/* under construction !*/
#endif

void AFE_GetPathUsage(kal_uint8 u1AudFunc, PHONE_MODE_T ePhoneMode, AFE_BUFFER_T *peBuffer);
void AFE_GetPGAGainInfo(AFE_BUFFER_T eBuffer, kal_int16 *pi2MaxGain, 
                        kal_uint16 *pu2Step, kal_uint16 *pu2TotalLevel);
kal_bool AFE_GetNVRAMDigitalGainSupport(void);

#ifdef ANALOG_AFE_PATH_EXIST
void AFE_SetOutputVolume( kal_uint8 aud_func, kal_uint8 volume1, kal_int8 digital_gain_index );
void AFE_SetLevelVolume(kal_uint8 aud_func, kal_uint8 MaxAnalogGain, kal_uint8 step, kal_uint8 level);
void  AFE_GetOutputVolume( kal_uint8 aud_func, kal_uint8 *volume1, kal_int8 *digital_gain_index );
#else
void AFE_DigitalOnly_GetOutputVolume(kal_uint8 aud_func, kal_uint8 *vol);
#endif // ANALOG_AFE_PATH_EXIST

void AFE_Mute( kal_bool mute );
void AFE_MuteSpeaker( kal_uint8 aud_func, kal_bool mute );
// void AFE_SetSidetone( kal_bool ec );
void AFE_Set_AudPlay_Flag(bool enable);
kal_bool AFE_IsInDelayOff(void);
kal_uint8 AFE_Disable_IdleOffDelay(void);
kal_bool AFE_IsKaraok(void);
void AFE_SetKaraoke(kal_bool enable);
void Audio_DelayCloseHandler(void* para);
void Audio_DelayCloseHandler(void* para);
void AFE_AUDIO_BUF_PDN(void);
// Line in related. Phase out
// void AFE_SetGainFastRamp(kal_bool enable);
kal_uint8 AFE_GetAfeSate(void);

void AFE_SetHardwareMute(bool mute);
void AFE_EnableHardwareMuteSleep(bool isEnable);
kal_bool AFE_GetLoopbackStatus( void );
void AFE_DC_Calibration(kal_uint16* pwdc_offset, void(*DC_Calibration_CallBack)(kal_uint16 *pwdc_offset));
void AFE_RegisterBackup(void);
void AFE_AudAccDetInit(void);


void AFE_Stop_and_Wait_DelayOff(kal_uint8 aud_func, kal_uint32 asp_fs);
void AFE_WaitReleaseVoltage(void);


#endif //__AFE_DEF_H

