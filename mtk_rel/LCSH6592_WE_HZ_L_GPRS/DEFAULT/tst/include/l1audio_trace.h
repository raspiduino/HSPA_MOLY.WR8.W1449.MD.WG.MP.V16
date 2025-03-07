#ifndef L1TRC_L1Audio_DEF_H
#define L1TRC_L1Audio_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1AUDIO_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1AUDIO_Str_onoff(v1)  (unsigned char)(v1+2)
#define L1AUDIO_Func_Name(v1)  (unsigned char)(v1+4)
#define AFE_Switch_Name(v1)  (unsigned char)(v1+12)
#define AM_Switch_Name(v1)  (unsigned char)(v1+17)
#define AM_IO_Name(v1)  (unsigned char)(v1+29)
#define AM_Speech_Feature_Name(v1)  (unsigned char)(v1+34)
#define AM_Gain_Name(v1)  (unsigned char)(v1+39)
#define L1Audio_Speech_State(v1)  (unsigned char)(v1+44)
#define L1SP_Speech_Codec_Mode(v1)  (unsigned char)(v1+51)
#define L1SP_Speech_TX_Type(v1)  (unsigned char)(v1+62)
#define L1SP_Speech_RX_Type(v1)  (unsigned char)(v1+66)
#define SAL_DSP_VALUE_NAME(v1)  (unsigned char)(v1+80)
#define SAL_PROC_NAME(v1)  (unsigned char)(v1+93)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_Switch(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x000D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_Switch(v1, v2)
#endif
#define L1Audio_Msg_AFE_Switch_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x000D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnSpk(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x010D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnSpk(v1, v2)
#endif
#define L1Audio_Msg_AFE_TurnSpk_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x010D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnMIC(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x020D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnMIC(v1, v2)
#endif
#define L1Audio_Msg_AFE_TurnMIC_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x020D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnPath(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x030D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnPath(v1, v2)
#endif
#define L1Audio_Msg_AFE_TurnPath_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x030D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_SpkSelect(v1, v2, v3, v4, v5) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x040D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_SpkSelect(v1, v2, v3, v4, v5)
#endif
#define L1Audio_Msg_AFE_SpkSelect_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x040D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Switch(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x050D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Switch(v1, v2)
#endif
#define L1Audio_Msg_AM_Switch_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x050D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Handover(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x060D, (char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Handover(v1)
#endif
#define L1Audio_Msg_AM_Handover_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x060D, (char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_2G_Resync(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x070D, (char)(v1), (char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_2G_Resync(v1, v2)
#endif
#define L1Audio_Msg_AM_2G_Resync_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x070D, (char)(v1), (char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_IO_Switch(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x080D, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_IO_Switch(v1)
#endif
#define L1Audio_Msg_AM_IO_Switch_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x080D, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SetSpeech(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x090D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_SetSpeech(v1, v2)
#endif
#define L1Audio_Msg_AM_SetSpeech_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x090D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_Speech_State(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A0D, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_Speech_State(v1)
#endif
#define L1Audio_Msg_Speech_State_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A0D, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_INT(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x0B0D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_DSP_INT(v1)
#endif
#define L1Audio_Msg_DSP_INT_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x0B0D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DELAY_TABLE(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x0C0D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_DELAY_TABLE(v1)
#endif
#define L1Audio_Msg_AM_DELAY_TABLE_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x0C0D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SPEECH_FRAME(v1, v2, v3) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0D0D, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SPEECH_FRAME(v1, v2, v3)
#endif
#define L1Audio_Msg_SPEECH_FRAME_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0D0D, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SPEECH_CODEC(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0E0D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_SPEECH_CODEC(v1, v2)
#endif
#define L1Audio_Msg_SPEECH_CODEC_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0E0D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VM_DEBUG(v1, v2, v3) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0F0D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)));\
	} while(0)
#else
	#define L1Audio_Msg_VM_DEBUG(v1, v2, v3)
#endif
#define L1Audio_Msg_VM_DEBUG_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0F0D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VBI_RESET() do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x100D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_VBI_RESET()
#endif
#define L1Audio_Msg_VBI_RESET_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x100D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VBI_END() do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x110D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_VBI_END()
#endif
#define L1Audio_Msg_VBI_END_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x110D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_TCH_NOTIFY(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x120D, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define L1Audio_Msg_TCH_NOTIFY(v1, v2)
#endif
#define L1Audio_Msg_TCH_NOTIFY_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x120D, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_3G_TO_2G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x130D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_3G_TO_2G(v1)
#endif
#define L1Audio_Msg_INTERRAT_3G_TO_2G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x130D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_3G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x140D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_3G(v1)
#endif
#define L1Audio_Msg_INTERRAT_2G_TO_3G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x140D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SWITCH_FILT(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x150D, (short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SWITCH_FILT(v1, v2)
#endif
#define L1Audio_Msg_SWITCH_FILT_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x150D, (short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_RegBackup(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x160D, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AFE_RegBackup(v1)
#endif
#define L1Audio_Msg_AFE_RegBackup_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x160D, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SRC1(v1, v2, v3) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x170D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_SRC1(v1, v2, v3)
#endif
#define L1Audio_Msg_AM_SRC1_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x170D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SRC2(v1, v2, v3) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x180D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_SRC2(v1, v2, v3)
#endif
#define L1Audio_Msg_AM_SRC2_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x180D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x190D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT(v1, v2)
#endif
#define L1Audio_Msg_DSP_D2C_SPEECH_INT_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x190D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x1A0D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP(v1)
#endif
#define L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x1A0D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_D2C_SPEECH_WARNING_INT(v1, v2, v3) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1B0D, (short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)));\
	} while(0)
#else
	#define L1Audio_Msg_DSP_D2C_SPEECH_WARNING_INT(v1, v2, v3)
#endif
#define L1Audio_Msg_DSP_D2C_SPEECH_WARNING_INT_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1B0D, (short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_3G_INTRARAT(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x1C0D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_3G_INTRARAT(v1)
#endif
#define L1Audio_Msg_3G_INTRARAT_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x1C0D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_FORCE_RESYNC(v1, v2, v3, v4) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1D0D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_FORCE_RESYNC(v1, v2, v3, v4)
#endif
#define L1Audio_Msg_SP3G_FORCE_RESYNC_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1D0D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1E0D, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)));\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5)
#endif
#define L1Audio_Msg_SP3G_SEND_RESYNC_INFO_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1E0D, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1F0D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW(v1, v2)
#endif
#define L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1F0D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DEBUG(v1, v2, v3, v4, v5) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x200D, (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_4C((char)(v1), (char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_DEBUG(v1, v2, v3, v4, v5)
#endif
#define L1Audio_Msg_AM_DEBUG_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x200D, (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_4C((char)(v1), (char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DSP_GAIN(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x210D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_DSP_GAIN(v1, v2)
#endif
#define L1Audio_Msg_AM_DSP_GAIN_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x210D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_SET_VALUE(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x220D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SAL_SET_VALUE(v1, v2)
#endif
#define L1Audio_Msg_SAL_SET_VALUE_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x220D, (unsigned short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_SET_VALUE_MULTI(v1, v2, v3, v4, v5, v6) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x230D, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (unsigned short)(v4)), TRC_MERGE_2S((unsigned short)(v5), (unsigned short)(v6)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SAL_SET_VALUE_MULTI(v1, v2, v3, v4, v5, v6)
#endif
#define L1Audio_Msg_SAL_SET_VALUE_MULTI_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x230D, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (unsigned short)(v4)), TRC_MERGE_2S((unsigned short)(v5), (unsigned short)(v6)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_PROC(v1, v2, v3, v4, v5) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x240D, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (unsigned short)(v4)), TRC_MERGE_1S2C((unsigned short)(v5), (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SAL_PROC(v1, v2, v3, v4, v5)
#endif
#define L1Audio_Msg_SAL_PROC_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x240D, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (unsigned short)(v4)), TRC_MERGE_1S2C((unsigned short)(v5), (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x250D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_SP(v1)
#endif
#define L1Audio_Msg_SP_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x250D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_AudioManager(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x260D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_AudioManager(v1)
#endif
#define L1Audio_Msg_AM_AudioManager_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x260D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Resync(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x270D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Resync(v1, v2)
#endif
#define L1Audio_Msg_AM_Resync_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x270D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Reset_Time_Drift() do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x280D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Reset_Time_Drift()
#endif
#define L1Audio_Msg_AM_Reset_Time_Drift_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x280D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Update_Time_Drift(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x290D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Update_Time_Drift(v1)
#endif
#define L1Audio_Msg_AM_Update_Time_Drift_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x290D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_3G_Reset_Time_Drift() do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x2A0D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_3G_Reset_Time_Drift()
#endif
#define L1Audio_Msg_AM_3G_Reset_Time_Drift_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x2A0D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_3G_Reset_Debug(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2B0D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_AM_3G_Reset_Debug(v1, v2)
#endif
#define L1Audio_Msg_AM_3G_Reset_Debug_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2B0D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_GetSyncDelayRW(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x2C0D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_GetSyncDelayRW(v1)
#endif
#define L1Audio_Msg_SP3G_GetSyncDelayRW_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x2C0D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Speech(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x2D0D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_AM_Speech(v1)
#endif
#define L1Audio_Msg_AM_Speech_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x2D0D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_PutQ(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x2E0D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_PutQ(v1)
#endif
#define L1Audio_Msg_PutQ_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x2E0D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_L1D_GetRF(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x2F0D, (short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_L1D_GetRF(v1)
#endif
#define L1Audio_Msg_L1D_GetRF_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x2F0D, (short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_4G_INTRARAT(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x300D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_4G_INTRARAT(v1)
#endif
#define L1Audio_Msg_4G_INTRARAT_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x300D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_FORCE_RESYNC(v1, v2, v3, v4) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x310D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_FORCE_RESYNC(v1, v2, v3, v4)
#endif
#define L1Audio_Msg_SP4G_FORCE_RESYNC_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x310D, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x320D, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)));\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5)
#endif
#define L1Audio_Msg_SP4G_SEND_RESYNC_INFO_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x320D, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW(v1, v2) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x330D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW(v1, v2)
#endif
#define L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x330D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_4G_TO_2G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x340D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_4G_TO_2G(v1)
#endif
#define L1Audio_Msg_INTERRAT_4G_TO_2G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x340D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_4G_TO_3G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x350D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_4G_TO_3G(v1)
#endif
#define L1Audio_Msg_INTERRAT_4G_TO_3G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x350D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_3G_TO_4G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x360D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_3G_TO_4G(v1)
#endif
#define L1Audio_Msg_INTERRAT_3G_TO_4G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x360D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_4G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x370D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_4G(v1)
#endif
#define L1Audio_Msg_INTERRAT_2G_TO_4G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x370D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_W2G(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x380D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_W2G(v1)
#endif
#define L1Audio_Msg_INTERRAT_W2G_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x380D, (unsigned short)(v1)))

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_G2W(v1) do {\
		if(L1Audio_Trace_Filter[0]==1 && (L1Audio_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x390D, (unsigned short)(v1)));\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_G2W(v1)
#endif
#define L1Audio_Msg_INTERRAT_G2W_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x390D, (unsigned short)(v1)))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L1Audio_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_L1Audio_Msg_AFE_Switch(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_AFE_TurnSpk(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_AFE_TurnMIC(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_AFE_TurnPath(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_AFE_SpkSelect(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_L1Audio_Msg_AM_Switch(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_AM_Handover(char v1);
void L1TRC_Send_L1Audio_Msg_AM_2G_Resync(char v1, char v2);
void L1TRC_Send_L1Audio_Msg_AM_IO_Switch(unsigned char v1);
void L1TRC_Send_L1Audio_Msg_AM_SetSpeech(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_Speech_State(unsigned char v1);
void L1TRC_Send_L1Audio_Msg_DSP_INT(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_AM_DELAY_TABLE(short v1);
void L1TRC_Send_L1Audio_Msg_SPEECH_FRAME(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_L1Audio_Msg_SPEECH_CODEC(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_VM_DEBUG(unsigned short v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_L1Audio_Msg_VBI_RESET(void);
void L1TRC_Send_L1Audio_Msg_VBI_END(void);
void L1TRC_Send_L1Audio_Msg_TCH_NOTIFY(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1Audio_Msg_INTERRAT_3G_TO_2G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_2G_TO_3G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_SWITCH_FILT(short v1, unsigned short v2);
void L1TRC_Send_L1Audio_Msg_AFE_RegBackup(unsigned char v1);
void L1TRC_Send_L1Audio_Msg_AM_SRC1(unsigned short v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_L1Audio_Msg_AM_SRC2(unsigned short v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_L1Audio_Msg_DSP_D2C_SPEECH_INT(unsigned char v1, unsigned short v2);
void L1TRC_Send_L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_DSP_D2C_SPEECH_WARNING_INT(short v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_L1Audio_Msg_3G_INTRARAT(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_SP3G_FORCE_RESYNC(unsigned short v1, unsigned short v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_L1Audio_Msg_SP3G_SEND_RESYNC_INFO(short v1, short v2, unsigned short v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW(short v1, short v2);
void L1TRC_Send_L1Audio_Msg_AM_DEBUG(char v1, char v2, short v3, short v4, short v5);
void L1TRC_Send_L1Audio_Msg_AM_DSP_GAIN(unsigned char v1, unsigned short v2);
void L1TRC_Send_L1Audio_Msg_SAL_SET_VALUE(unsigned char v1, unsigned short v2);
void L1TRC_Send_L1Audio_Msg_SAL_SET_VALUE_MULTI(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6);
void L1TRC_Send_L1Audio_Msg_SAL_PROC(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_L1Audio_Msg_SP(short v1);
void L1TRC_Send_L1Audio_Msg_AM_AudioManager(short v1);
void L1TRC_Send_L1Audio_Msg_AM_Resync(short v1, short v2);
void L1TRC_Send_L1Audio_Msg_AM_Reset_Time_Drift(void);
void L1TRC_Send_L1Audio_Msg_AM_Update_Time_Drift(short v1);
void L1TRC_Send_L1Audio_Msg_AM_3G_Reset_Time_Drift(void);
void L1TRC_Send_L1Audio_Msg_AM_3G_Reset_Debug(short v1, short v2);
void L1TRC_Send_L1Audio_Msg_SP3G_GetSyncDelayRW(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_AM_Speech(short v1);
void L1TRC_Send_L1Audio_Msg_PutQ(short v1);
void L1TRC_Send_L1Audio_Msg_L1D_GetRF(short v1);
void L1TRC_Send_L1Audio_Msg_4G_INTRARAT(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_SP4G_FORCE_RESYNC(unsigned short v1, unsigned short v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_L1Audio_Msg_SP4G_SEND_RESYNC_INFO(short v1, short v2, unsigned short v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW(short v1, short v2);
void L1TRC_Send_L1Audio_Msg_INTERRAT_4G_TO_2G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_4G_TO_3G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_3G_TO_4G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_2G_TO_4G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_W2G(unsigned short v1);
void L1TRC_Send_L1Audio_Msg_INTERRAT_G2W(unsigned short v1);

void Set_L1Audio_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1Audio()	(L1Audio_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L1Audio_AFE_Inf_H()	(ChkL1ModFltr_L1Audio()&&((L1Audio_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L1Audio_AM_Inf_H()	(ChkL1ModFltr_L1Audio()&&((L1Audio_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_L1Audio_Msg_AFE_Switch()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnSpk()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnMIC()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnPath()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_SpkSelect()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Switch()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Handover()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_2G_Resync()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_IO_Switch()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SetSpeech()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_Speech_State()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_INT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DELAY_TABLE()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SPEECH_FRAME()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SPEECH_CODEC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VM_DEBUG()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VBI_RESET()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VBI_END()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_TCH_NOTIFY()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_3G_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_3G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SWITCH_FILT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_RegBackup()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SRC1()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SRC2()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_D2C_SPEECH_INT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_D2C_SPEECH_WARNING_INT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_3G_INTRARAT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_FORCE_RESYNC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_SEND_RESYNC_INFO()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DEBUG()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DSP_GAIN()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_SET_VALUE()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_SET_VALUE_MULTI()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_PROC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_AudioManager()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Resync()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Reset_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Update_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_3G_Reset_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_3G_Reset_Debug()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_GetSyncDelayRW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Speech()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_PutQ()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_L1D_GetRF()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_4G_INTRARAT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_FORCE_RESYNC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_SEND_RESYNC_INFO()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_4G_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_4G_TO_3G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_3G_TO_4G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_4G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_W2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_G2W()	ChkL1ClsFltr_L1Audio_AM_Inf_H()


#endif
