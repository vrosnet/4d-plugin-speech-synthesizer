/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Speech Synthesizer
 #	author : miyako
 #	2014/11/09
 #
 # --------------------------------------------------------------------------------*/



// --- Speech
void SPEECH_New(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_SET_RATE(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_Get_rate(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_SET_VOICE(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_Get_voice(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_SET_VOLUME(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_Get_volume(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_START(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_PAUSE(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_CONTINUE(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_CLEAR(sLONG_PTR *pResult, PackagePtr pParams);

// --- Voice
void SPEECH_VOICE_LIST(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_Default_voice(sLONG_PTR *pResult, PackagePtr pParams);

// --- Speech
void SPEECH_To_data(sLONG_PTR *pResult, PackagePtr pParams);
void SPEECH_Is_speaking(sLONG_PTR *pResult, PackagePtr pParams);
