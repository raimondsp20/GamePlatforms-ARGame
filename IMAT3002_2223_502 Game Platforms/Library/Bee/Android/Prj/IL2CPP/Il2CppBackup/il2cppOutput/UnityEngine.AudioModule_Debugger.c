#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[64] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000005 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000016 System.Single UnityEngine.AudioSource::get_volume() */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 0, 0 } /* 0x06000018 UnityEngine.AudioClip UnityEngine.AudioSource::get_clip() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0 } /* 0x0600001A UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup() */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup) */,
	{ 0, 0 } /* 0x0600001C System.Boolean UnityEngine.AudioSource::get_loop() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.AudioSource::set_loop(System.Boolean) */,
	{ 0, 0 } /* 0x0600001E System.Boolean UnityEngine.AudioSource::get_playOnAwake() */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean) */,
	{ 0, 0 } /* 0x06000020 System.Single UnityEngine.AudioSource::get_panStereo() */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.AudioSource::set_panStereo(System.Single) */,
	{ 0, 0 } /* 0x06000022 System.Boolean UnityEngine.AudioSource::get_spatialize() */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean) */,
	{ 0, 0 } /* 0x06000024 System.Boolean UnityEngine.AudioSource::get_spatializePostEffects() */,
	{ 0, 0 } /* 0x06000025 System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean) */,
	{ 0, 0 } /* 0x06000026 System.Boolean UnityEngine.AudioSource::get_bypassEffects() */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.AudioSource::set_bypassEffects(System.Boolean) */,
	{ 0, 0 } /* 0x06000028 System.Boolean UnityEngine.AudioSource::get_bypassListenerEffects() */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean) */,
	{ 0, 0 } /* 0x0600002A System.Boolean UnityEngine.AudioSource::get_bypassReverbZones() */,
	{ 0, 0 } /* 0x0600002B System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean) */,
	{ 0, 0 } /* 0x0600002C System.Single UnityEngine.AudioSource::get_dopplerLevel() */,
	{ 0, 0 } /* 0x0600002D System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single) */,
	{ 0, 0 } /* 0x0600002E System.Int32 UnityEngine.AudioSource::get_priority() */,
	{ 0, 0 } /* 0x0600002F System.Void UnityEngine.AudioSource::set_priority(System.Int32) */,
	{ 0, 0 } /* 0x06000030 System.Boolean UnityEngine.AudioSource::get_mute() */,
	{ 0, 0 } /* 0x06000031 System.Void UnityEngine.AudioSource::set_mute(System.Boolean) */,
	{ 0, 0 } /* 0x06000032 System.Single UnityEngine.AudioSource::get_minDistance() */,
	{ 0, 0 } /* 0x06000033 System.Void UnityEngine.AudioSource::set_minDistance(System.Single) */,
	{ 0, 0 } /* 0x06000034 System.Single UnityEngine.AudioSource::get_maxDistance() */,
	{ 0, 0 } /* 0x06000035 System.Void UnityEngine.AudioSource::set_maxDistance(System.Single) */,
	{ 0, 0 } /* 0x06000036 UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode() */,
	{ 0, 0 } /* 0x06000037 System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode) */,
	{ 0, 0 } /* 0x06000038 System.Void UnityEngine.Audio.AudioMixerGroup::.ctor() */,
	{ 0, 0 } /* 0x06000039 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x0600003A System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x0600003B UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x0600003C System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x0600003D System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x0600003E System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x0600003F System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000040 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[145] = 
{
	{ 62998, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 62998, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 62998, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 62998, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 62998, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 62998, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 62998, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 62998, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 62999, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 62999, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 62999, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 62999, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 63000, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 63000, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 63000, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 63000, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 63005, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 63005, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 63005, 1, 379, 379, 17, 21, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 63006, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 63006, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 63006, 1, 380, 380, 17, 29, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 63007, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 63007, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 63007, 1, 387, 387, 17, 18, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 63007, 1, 388, 388, 21, 51, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 63007, 1, 389, 389, 17, 18, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 63008, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 63008, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 63008, 1, 412, 412, 13, 14, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 63008, 1, 413, 413, 17, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 63008, 1, 413, 413, 17, 39, 2, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 63008, 1, 413, 413, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 63008, 1, 414, 414, 17, 18, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 63008, 1, 415, 415, 21, 38, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 63008, 1, 415, 415, 21, 38, 18, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 63008, 1, 416, 416, 21, 47, 24, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 63008, 1, 416, 416, 21, 47, 24, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 63008, 1, 416, 416, 0, 0, 30, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 63008, 1, 417, 417, 21, 22, 33, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 63008, 1, 418, 418, 25, 39, 34, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 63008, 1, 418, 418, 25, 39, 34, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 63008, 1, 418, 418, 0, 0, 40, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 63008, 1, 419, 419, 29, 47, 43, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 63008, 1, 419, 419, 29, 47, 43, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 63008, 1, 419, 419, 0, 0, 49, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 63008, 1, 421, 421, 29, 48, 51, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 63008, 1, 421, 421, 29, 48, 51, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 63008, 1, 422, 422, 21, 22, 57, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 63008, 1, 423, 423, 21, 52, 58, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 63008, 1, 423, 423, 0, 0, 67, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 63008, 1, 424, 424, 25, 50, 70, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 63008, 1, 424, 424, 25, 50, 76, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 63008, 1, 425, 425, 17, 18, 82, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 63008, 1, 426, 426, 13, 14, 83, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 63009, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 63009, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 63009, 1, 430, 430, 13, 14, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 63009, 1, 431, 431, 17, 46, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 63009, 1, 431, 431, 17, 46, 1, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 63009, 1, 432, 432, 13, 14, 9, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 63010, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 63010, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 63010, 1, 435, 435, 13, 14, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 63010, 1, 436, 436, 17, 50, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 63010, 1, 436, 436, 17, 50, 1, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 63010, 1, 437, 437, 13, 14, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 63011, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 63011, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 63011, 1, 440, 440, 13, 14, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 63011, 1, 441, 441, 17, 49, 1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 63011, 1, 441, 441, 17, 49, 1, kSequencePointKind_StepOut, 0, 71 } /* seqPointIndex: 71 */,
	{ 63011, 1, 442, 442, 13, 14, 7, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 63012, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 63012, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 63012, 1, 624, 624, 9, 68, 0, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 63012, 1, 628, 628, 9, 78, 7, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 63012, 1, 489, 489, 9, 28, 14, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 63012, 1, 489, 489, 9, 28, 15, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 63012, 1, 489, 489, 29, 30, 21, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 63012, 1, 489, 489, 30, 31, 22, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 63013, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 63013, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 63013, 1, 632, 632, 9, 10, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 63013, 1, 633, 633, 13, 45, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 63013, 1, 633, 633, 0, 0, 11, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 63013, 1, 634, 634, 17, 43, 14, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 63013, 1, 634, 634, 17, 43, 21, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 63013, 1, 635, 635, 9, 10, 27, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 63014, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 63014, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 63014, 1, 639, 639, 9, 10, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 63014, 1, 640, 640, 13, 50, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 63014, 1, 640, 640, 0, 0, 11, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 63014, 1, 641, 641, 17, 52, 14, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 63014, 1, 641, 641, 17, 52, 21, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 63014, 1, 642, 642, 9, 10, 27, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 63053, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 63053, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 63053, 2, 11, 11, 9, 35, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 63053, 2, 11, 11, 9, 35, 1, kSequencePointKind_StepOut, 0, 100 } /* seqPointIndex: 100 */,
	{ 63053, 2, 11, 11, 36, 37, 7, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 63053, 2, 11, 11, 37, 38, 8, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 63054, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 63054, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 63054, 3, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 63054, 3, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 63054, 3, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 63055, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 63055, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 63055, 3, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 63055, 3, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 63055, 3, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 63055, 3, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 63055, 3, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 63055, 3, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 63056, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 63056, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 63056, 4, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 63056, 4, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 63056, 4, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 63057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 63057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 63057, 4, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 63057, 4, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 63057, 4, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 125 } /* seqPointIndex: 125 */,
	{ 63057, 4, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 63057, 4, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 63057, 4, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 63058, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 63058, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 63058, 5, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 63058, 5, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 63058, 5, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 63058, 5, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 63058, 5, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 63058, 5, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 63059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 63059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 63059, 5, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 63059, 5, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 63059, 5, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 63059, 5, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 63059, 5, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 63059, 5, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 186, 190, 129, 91, 137, 140, 111, 230, 114, 253, 155, 1, 230, 243, 216, 168} }, //1 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerGroup.bindings.cs", { 188, 93, 169, 234, 24, 194, 201, 85, 99, 103, 130, 125, 57, 97, 147, 239} }, //2 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 117, 58, 219, 81, 174, 32, 141, 165, 250, 138, 140, 83, 41, 27, 0, 60} }, //3 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //4 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //5 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[7] = 
{
	{ 7450, 1 },
	{ 7449, 1 },
	{ 7453, 1 },
	{ 7458, 2 },
	{ 7459, 3 },
	{ 7460, 4 },
	{ 7462, 5 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[12] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 11 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[64] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 11, 3, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip::.ctor() */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 5, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_volume() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.AudioClip UnityEngine.AudioSource::get_clip() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0, 0 } /* UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_loop() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_loop(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_playOnAwake() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_panStereo() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_panStereo(System.Single) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_spatialize() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_spatializePostEffects() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_bypassEffects() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_bypassEffects(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_bypassListenerEffects() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_bypassReverbZones() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_dopplerLevel() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.AudioSource::get_priority() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_priority(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSource::get_mute() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_mute(System.Boolean) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_minDistance() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_minDistance(System.Single) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_maxDistance() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_maxDistance(System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Audio.AudioMixerGroup::.ctor() */,
	{ 12, 6, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 7, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 8, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 9, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 10, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 11, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	145,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	7,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
