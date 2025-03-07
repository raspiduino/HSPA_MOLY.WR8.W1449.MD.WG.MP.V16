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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_ps_sap.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   SAP provided by SIM task and outside-PS task uses also
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#include "module_msg_range.h"

#ifndef _SIM_PS_MSG_H
#define _SIM_PS_MSG_H

   /*------------------------MSG_ID_SIM_PS_CODE_BEGIN ---------------*/

MODULE_MSG_BEGIN( MSG_ID_SIM_PS_CODE_BEGIN )
   MSG_ID_GMMSIM_GSM_ALGO_REQ = MSG_ID_SIM_PS_CODE_BEGIN,
   MSG_ID_SIM_START_REQ,
   MSG_ID_SIM_START_CNF,
   MSG_ID_SIM_ERROR_IND,
   /*[MAUI_02356453] 20110123 mtk01612: sim_smu_error_ind is removed due to no need after MAUI_01815935*/    
   MSG_ID_SIM_MMI_READY_IND,
   MSG_ID_SIM_MMI_SECURITY_IND, /* 20030609,CPHS */
   MSG_ID_SIM_MMRR_READY_IND, /* 20030823,BOOTUP */
   MSG_ID_SIM_MM_READY_IND,
   MSG_ID_SIM_READ_REQ,
   MSG_ID_SIM_READ_CNF,
   MSG_ID_SIM_WRITE_REQ,
   MSG_ID_SIM_WRITE_CNF,
   MSG_ID_SIM_INCREASE_REQ,
   MSG_ID_SIM_INCREASE_CNF,
   MSG_ID_SIM_SECURITY_REQ,
   MSG_ID_SIM_SECURITY_CNF,
   MSG_ID_SIM_FILE_INFO_REQ,
   MSG_ID_SIM_FILE_INFO_CNF,
   MSG_ID_SIM_DIAL_MODE_REQ,
   MSG_ID_SIM_DIAL_MODE_CNF,
   MSG_ID_SIM_STATUS_REQ,
   MSG_ID_SIM_STATUS_CNF,
   MSG_ID_SIM_POWEROFF_REQ,
   MSG_ID_SIM_POWEROFF_CNF,
   MSG_ID_SIM_ERROR_TEST_REQ,
   MSG_ID_SIM_READ_PLMN_REQ,
   MSG_ID_SIM_READ_PLMN_CNF,
   MSG_ID_SIM_WRITE_PLMN_REQ,
   MSG_ID_SIM_WRITE_PLMN_CNF,
   MSG_ID_SIM_ACL_MODE_REQ,
   MSG_ID_SIM_ACL_MODE_CNF,
   MSG_ID_SAT_READY_REQ,
   MSG_ID_SIM_STATUS_UPDATE_IND,        // mtk01488
   /*mtk80420: remove L4C_VERIFY_PIN_RESULT_IND*/
   MSG_ID_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_REQ,
   MSG_ID_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_CNF,   
   MSG_ID_L4C_SIM_SET_GSMCDMA_DUALSIM_MODE_REQ,
   MSG_ID_L4C_SIM_SET_GSMCDMA_DUALSIM_MODE_CNF,   
   MSG_ID_L4C_SIM_SET_VSIM_MODE_REQ,
   MSG_ID_L4C_SIM_SET_VSIM_MODE_CNF,   
   MSG_ID_USIM_URR_READY_IND,
   MSG_ID_USIM_UPDATE_NETPAR_REQ, /*mtk01612: [MAUI_02575860]*/
   MSG_ID_USIM_UPDATE_NETPAR_CNF, /*mtk01612: [MAUI_02575860]*/
   /* [MAUI_03058282] mtk80420: move authenticate_req/cnf to public sap */
   MSG_ID_SAT_PROACTIVE_CMD_IND,
   MSG_ID_SAT_MORE_TIME_RES,         /* PH 20050414 cut off infinite loop */   
   MSG_ID_SAT_DSPL_TEXT_RES,
   MSG_ID_SAT_GET_INKEY_RES,
   MSG_ID_SAT_GET_INPUT_RES,
   MSG_ID_SAT_PLAY_TONE_RES,
   MSG_ID_SAT_SETUP_MENU_RES,
   MSG_ID_SAT_SELECT_ITEM_RES,
   MSG_ID_SAT_MENU_SELECT_REQ,
   MSG_ID_SAT_CALL_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SS_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SEND_SMS_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SMS_DL_REQ,
   MSG_ID_SAT_CB_DL_REQ,
   MSG_ID_SAT_EVDL_MT_CALL_REQ,
   MSG_ID_SAT_EVDL_CALL_CONNECT_REQ,
   MSG_ID_SAT_EVDL_CALL_DISCONNECT_REQ,
   MSG_ID_SAT_EVDL_USER_ACTIVITY_REQ,
   MSG_ID_SAT_EVDL_IDLE_SCREEN_AVAILABLE_REQ,
   MSG_ID_SAT_EVDL_HCI_CONNECTIVITY_REQ, //__SATCM__
   MSG_ID_SAT_EVDL_LANGUAGE_SELECTION_REQ,
   MSG_ID_SAT_EVDL_CARD_READER_STATUS_REQ,
   MSG_ID_SAT_EVDL_BROWSER_TERMINATION_REQ,
   MSG_ID_SAT_EVDL_DATA_AVAILABLE_REQ,
   MSG_ID_SAT_EVDL_CHANNEL_STATUS_REQ,
   MSG_ID_SAT_EVDL_ACCESS_TECHNOLOGY_CHANGE_REQ,      /* mtk01488 */
   MSG_ID_SAT_SEND_SMS_RES,
   MSG_ID_SAT_SEND_SS_RES,
   MSG_ID_SAT_SEND_USSD_RES,
   MSG_ID_SAT_SETUP_CALL_RES,
   MSG_ID_SAT_SETUP_IDLE_DSPL_RES,
   MSG_ID_SAT_RUN_AT_COMMAND_RES,
   MSG_ID_SAT_SEND_DTMF_RES,
   MSG_ID_SAT_LANG_NOTIFY_RES,
   MSG_ID_SAT_LAUNCH_BROWSER_RES,
   MSG_ID_SAT_ACTIVATE_RES, // __SATCL__   
   MSG_ID_SAT_FILE_CHANGE_IND,
   MSG_ID_SAT_FILE_CHANGE_RES,
   MSG_ID_SAT_IMEI_INFO_REQ,
   MSG_ID_SAT_IMEI_INFO_CNF,  
   MSG_ID_SAT_LOCATION_INFO_IND,
   MSG_ID_SAT_PROVIDE_LOCATION_INFO_IND,   
   MSG_ID_SAT_TIME_ZONE_REQ,
   MSG_ID_SAT_TIME_ZONE_CNF, 
   MSG_ID_SAT_CURRENT_TIME_REQ,
   MSG_ID_SAT_CURRENT_TIME_CNF,     
   MSG_ID_SAT_ME_STATUS_REQ,
   MSG_ID_SAT_ME_STATUS_CNF,    
   MSG_ID_SAT_NMR_REQ,
   MSG_ID_SAT_NMR_CNF,   
   MSG_ID_SAT_LANGUAGE_REQ,
   MSG_ID_SAT_LANGUAGE_CNF, 
   MSG_ID_SAT_TIMING_ADVANCE_IND,  
   MSG_ID_SAT_ACCESS_TECHNOLOGY_CHANGE_IND,     /* mtk01488 */
   MSG_ID_SAT_CALL_STATUS_IND,   
   MSG_ID_SAT_PROFILE_DOWNLOAD_REQ,
   MSG_ID_SAT_PROFILE_DOWNLOAD_CNF,
   MSG_ID_SAT_TERMINAL_RSP,
   MSG_ID_SAT_MORETIME_IND,
   MSG_ID_SAT_POLL_INTERVAL_IND,
   MSG_ID_SAT_ENVELOPE_REQ,
   MSG_ID_SAT_ENVELOPE_CNF,
   MSG_ID_SAT_REFRESH_IND,
   MSG_ID_SAT_POLLING_OFF_IND,
   MSG_ID_SAT_PROVIDE_LOCAL_INFO_IND,
   MSG_ID_SAT_SETUP_EVENT_LIST_IND,
   MSG_ID_SAT_ACTIVATE_IND, //__SATCL__
   MSG_ID_SAT_CONTACTLESS_STATE_CHANGED_IND, //__SATCR__
   MSG_ID_SAT_CONTACTLESS_STATE_CHANGED_RES, //__SATCR__
   MSG_ID_SAT_TIMER_MANAGEMENT_IND,
   MSG_ID_SAT_OPEN_GPRS_CHANNEL_IND,
   MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
   MSG_ID_SAT_OPEN_CSD_CHANNEL_IND,
   MSG_ID_SAT_OPEN_CSD_CHANNEL_RES,
   MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_IND,
   MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
   MSG_ID_SAT_CLOSE_CHANNEL_IND,
   MSG_ID_SAT_CLOSE_CHANNEL_RES,
   MSG_ID_SAT_SEND_DATA_IND,
   MSG_ID_SAT_SEND_DATA_RES,
   MSG_ID_SAT_RECV_DATA_IND,
   MSG_ID_SAT_RECV_DATA_RES,
   MSG_ID_SAT_CH_STATUS_IND,
   MSG_ID_SAT_CH_STATUS_RES,
   MSG_ID_SAT_OPEN_CHANNEL_IND,
   MSG_ID_SAT_NW_SEARCH_MODE_IND,  /*mtk02374 20090513 add for provide local info with nw search mode*/
   MSG_ID_SAT_PROVIDE_NW_SEARCH_MODE_IND,
   MSG_ID_SIM_IMEI_LOCK_VERIFIED_IND, /*mtk02374 20090914 used to indicate SMU whether imei lock verified*/
   MSG_ID_SIM_O2_PREPAID_SIM_IND, /*mtk01612: [MAUI_02014578] wise detect O2 prepay SIM*/   
   //MSG_ID_SIM_CSIM_REQ, /*mtk01612: MAUI_00479434 __CSIM__*/
   //MSG_ID_SIM_CSIM_CNF,       
   /* MAUI_03082391 */
   MSG_ID_SIM_APDU_ACCESS_REQ,
   MSG_ID_SIM_APDU_ACCESS_CNF,   
   MSG_ID_SIM_MANAGE_CHANNEL_REQ,
   MSG_ID_SIM_MANAGE_CHANNEL_CNF,
   /* SIM JSR177 APDU  __SIM_JSR177_APDU__ */  
   MSG_ID_SIM_JSR177_APDU_REQ,
   MSG_ID_SIM_JSR177_APDU_CNF,
   MSG_ID_SIM_JSR177_ATR_REQ,
   MSG_ID_SIM_JSR177_ATR_CNF,   
   MSG_ID_SIM_CALL_DISCONNECT_IND, /*mtk01612: [MAUI_02574001]*/
   MSG_ID_SIM_PLUG_OUT_IND,    /* mtk80420: SIM hot swap */
   MSG_ID_SIM_PLUG_IN_IND,
   MSG_ID_SIM_SEARCH_RECORD_REQ, /* MAUI_02953154 */
   MSG_ID_SIM_SEARCH_RECORD_CNF,   
   MSG_ID_SIM_SYNC_POLL_TIMER_IND, /*mtk01612: [MAUI_03020152] sync polling timer*/
   MSG_ID_SIM_RECOVERY_ENHANCEMENT_SWITCH_REQ,
   MSG_ID_SIM_RECOVERY_ENHANCEMENT_SWITCH_CNF,
   MSG_ID_SIM_TERMINAL_CAPABILITY_SETTING_REQ,
   MSG_ID_SIM_TERMINAL_CAPABILITY_SETTING_CNF,
   MSG_ID_SIM_READ_IMSI_REQ,
   MSG_ID_SIM_READ_IMSI_CNF,
   MSG_ID_SIM_APP_READ_REQ,
   MSG_ID_SIM_APP_READ_CNF,
   MSG_ID_SIM_APP_WRITE_REQ,
   MSG_ID_SIM_APP_WRITE_CNF,
   MSG_ID_SIM_APP_FILE_INFO_REQ,
   MSG_ID_SIM_APP_FILE_INFO_CNF,   
   MSG_ID_SIM_PS_CODE_END = MSG_ID_SIM_APP_FILE_INFO_CNF,
MODULE_MSG_END( MSG_ID_SIM_PS_CODE_TAIL )

   /*------------------------SIM_MSG_CODE_END -----------------*/

#endif  //_SIM_PS_MSG_H
