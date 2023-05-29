﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = 
{
	{ 6455, 0,  0 } /*tableIndex: 0 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"subscriber",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[40] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::LoadProvider() */,
	{ 0, 0 } /* 0x06000002 System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::ConnectSubscriber(System.Object) */,
	{ 0, 0 } /* 0x06000003 System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::UnloadProvider() */,
	{ 0, 1 } /* 0x06000004 System.Void Unity.XRTools.ModuleLoader.FunctionalityProviderMethods::TryConnectSubscriber(TProvider,System.Object) */,
	{ 0, 0 } /* 0x06000005 TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1::get_provider() */,
	{ 0, 0 } /* 0x06000006 System.Void Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1::set_provider(TProvider) */,
	{ 0, 0 } /* 0x06000007 System.Boolean Unity.XRTools.ModuleLoader.FunctionalitySubscriberMethods::HasProvider(Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<TProvider>) */,
	{ 0, 0 } /* 0x06000008 System.Void Unity.XRTools.ModuleLoader.ImmortalModuleAttribute::.ctor() */,
	{ 0, 0 } /* 0x06000009 System.Void Unity.XRTools.ModuleLoader.ModuleAssetCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x0600000A System.Void Unity.XRTools.ModuleLoader.ModuleBehaviorCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x0600000B System.Void Unity.XRTools.ModuleLoader.ModuleBuildCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x0600000C System.Int32 Unity.XRTools.ModuleLoader.ModuleOrderAttribute::get_order() */,
	{ 0, 0 } /* 0x0600000D System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::set_order(System.Int32) */,
	{ 0, 0 } /* 0x0600000E System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x0600000F System.Void Unity.XRTools.ModuleLoader.ModuleSceneCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x06000010 System.Void Unity.XRTools.ModuleLoader.ModuleUnloadOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.Int32 Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_Priority() */,
	{ 0, 0 } /* 0x06000012 System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_Priority(System.Int32) */,
	{ 0, 0 } /* 0x06000013 UnityEngine.RuntimePlatform[] Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_ExcludedPlatforms() */,
	{ 0, 0 } /* 0x06000014 System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_ExcludedPlatforms(UnityEngine.RuntimePlatform[]) */,
	{ 0, 0 } /* 0x06000015 System.Boolean Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_DisallowAutoCreation() */,
	{ 0, 0 } /* 0x06000016 System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::.ctor(System.Int32,UnityEngine.RuntimePlatform[],System.Boolean) */,
	{ 0, 0 } /* 0x06000017 System.Void Unity.XRTools.ModuleLoader.IModule::LoadModule() */,
	{ 0, 0 } /* 0x06000018 System.Void Unity.XRTools.ModuleLoader.IModule::UnloadModule() */,
	{ 0, 0 } /* 0x06000019 System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorAwake() */,
	{ 0, 0 } /* 0x0600001A System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorEnable() */,
	{ 0, 0 } /* 0x0600001B System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorStart() */,
	{ 0, 0 } /* 0x0600001C System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorUpdate() */,
	{ 0, 0 } /* 0x0600001D System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorDisable() */,
	{ 0, 0 } /* 0x0600001E System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorDestroy() */,
	{ 0, 0 } /* 0x0600001F System.Void Unity.XRTools.ModuleLoader.IModuleDependency`1::ConnectDependency(T) */,
	{ 0, 0 } /* 0x06000020 System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode) */,
	{ 0, 0 } /* 0x06000021 System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnSceneUnloaded(UnityEngine.SceneManagement.Scene) */,
	{ 0, 0 } /* 0x06000022 System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene) */,
	{ 0, 0 } /* 0x06000023 System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionality(System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.XRTools.ModuleLoader.IFunctionalityProvider>) */,
	{ 0, 0 } /* 0x06000024 System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectPreparedFunctionality(System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0 } /* 0x06000025 System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionalitySingle(System.Object) */,
	{ 0, 0 } /* 0x06000026 System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0 } /* 0x06000027 System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionalitySingle(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Object) */,
	{ 0, 0 } /* 0x06000028 System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectPreparedFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces[];
Il2CppSequencePoint g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces[105] = 
{
	{ 63317, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 63317, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 63317, 1, 41, 41, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 63317, 1, 42, 42, 13, 71, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 63317, 1, 42, 42, 0, 0, 13, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 63317, 1, 43, 43, 17, 48, 16, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 63317, 1, 43, 43, 17, 48, 18, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 63317, 1, 44, 44, 9, 10, 24, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 63320, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 63320, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 63320, 2, 40, 40, 9, 10, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 63320, 2, 41, 41, 13, 48, 1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 63320, 2, 41, 41, 13, 48, 2, kSequencePointKind_StepOut, 0, 12 } /* seqPointIndex: 12 */,
	{ 63320, 2, 42, 42, 9, 10, 18, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 63322, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 63322, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 63322, 3, 15, 15, 63, 74, 0, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 63322, 3, 15, 15, 63, 74, 2, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 63322, 3, 15, 15, 75, 76, 8, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 63322, 3, 15, 15, 77, 78, 9, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 63323, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 63323, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 63323, 4, 15, 15, 66, 77, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 63323, 4, 15, 15, 66, 77, 2, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 63323, 4, 15, 15, 78, 79, 8, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 63323, 4, 15, 15, 80, 81, 9, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 63324, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 63324, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 63324, 5, 15, 15, 63, 75, 0, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 63324, 5, 15, 15, 63, 75, 2, kSequencePointKind_StepOut, 0, 29 } /* seqPointIndex: 29 */,
	{ 63324, 5, 15, 15, 76, 77, 8, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 63324, 5, 15, 15, 78, 79, 9, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 63325, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 63325, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 63325, 6, 14, 14, 28, 32, 0, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 63326, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 63326, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 63326, 6, 14, 14, 33, 45, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 63327, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 63327, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 63327, 6, 20, 20, 9, 47, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 63327, 6, 20, 20, 9, 47, 1, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 63327, 6, 21, 21, 9, 10, 7, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 63327, 6, 22, 22, 13, 32, 8, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 63327, 6, 22, 22, 13, 32, 10, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 63327, 6, 23, 23, 9, 10, 16, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 63328, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 63328, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 63328, 7, 15, 15, 63, 74, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 63328, 7, 15, 15, 63, 74, 2, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 63328, 7, 15, 15, 75, 76, 8, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 63328, 7, 15, 15, 77, 78, 9, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 63329, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 63329, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 63329, 8, 12, 12, 56, 68, 0, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 63329, 8, 12, 12, 56, 68, 2, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 63329, 8, 12, 12, 69, 70, 8, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 63329, 8, 12, 12, 71, 72, 9, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 63330, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 63330, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 63330, 9, 16, 16, 31, 35, 0, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 63331, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 63331, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 63331, 9, 16, 16, 36, 48, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 63332, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 63332, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 63332, 9, 21, 21, 54, 58, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 63333, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 63333, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 63333, 9, 21, 21, 59, 71, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 63334, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 63334, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 63334, 9, 27, 27, 44, 48, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 63335, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 63335, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 63335, 9, 36, 36, 9, 146, 0, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 63335, 9, 36, 36, 9, 146, 1, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 63335, 9, 37, 37, 9, 10, 7, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 63335, 9, 38, 38, 13, 33, 8, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 63335, 9, 38, 38, 13, 33, 10, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 63335, 9, 39, 39, 13, 51, 16, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 63335, 9, 39, 39, 13, 51, 18, kSequencePointKind_StepOut, 0, 81 } /* seqPointIndex: 81 */,
	{ 63335, 9, 40, 40, 13, 57, 24, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 63335, 9, 41, 41, 9, 10, 31, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 63351, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 63351, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 63351, 10, 26, 26, 9, 10, 0, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 63351, 10, 27, 27, 13, 56, 1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 63351, 10, 27, 27, 13, 56, 2, kSequencePointKind_StepOut, 0, 88 } /* seqPointIndex: 88 */,
	{ 63351, 10, 27, 27, 13, 56, 9, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 63351, 10, 28, 28, 9, 10, 15, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 63352, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 63352, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 63352, 10, 38, 38, 9, 10, 0, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 63352, 10, 39, 39, 13, 58, 1, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 63352, 10, 39, 39, 13, 58, 2, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 63352, 10, 39, 39, 13, 58, 8, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 63352, 10, 40, 40, 9, 10, 14, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 63353, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 63353, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 63353, 10, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 63353, 10, 52, 52, 13, 64, 1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 63353, 10, 52, 52, 13, 64, 2, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 63353, 10, 52, 52, 13, 64, 8, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 63353, 10, 53, 53, 9, 10, 14, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces[];
Il2CppSequencePoint g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Functionality Injection\\IFunctionalityProvider.cs", { 179, 0, 39, 153, 84, 222, 98, 52, 170, 70, 31, 188, 13, 215, 89, 193} }, //1 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Functionality Injection\\IFunctionalitySubscriber.cs", { 109, 65, 210, 47, 206, 141, 3, 156, 25, 214, 132, 230, 83, 162, 232, 92} }, //2 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleAssetCallbackOrderAttribute.cs", { 62, 193, 33, 2, 9, 225, 147, 123, 30, 94, 111, 66, 186, 190, 216, 129} }, //3 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleBehaviorCallbackOrderAttribute.cs", { 137, 242, 71, 161, 50, 246, 129, 203, 197, 4, 135, 29, 58, 60, 8, 83} }, //4 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleBuildCallbackOrderAttribute.cs", { 160, 18, 27, 95, 114, 123, 235, 202, 174, 231, 121, 136, 94, 207, 90, 132} }, //5 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleOrderAttribute.cs", { 128, 146, 151, 97, 138, 36, 144, 221, 41, 57, 42, 200, 73, 246, 47, 179} }, //6 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleSceneCallbackOrderAttribute.cs", { 53, 16, 253, 231, 78, 114, 26, 34, 232, 191, 87, 213, 176, 49, 174, 213} }, //7 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ModuleUnloadOrderAttribute.cs", { 255, 47, 104, 229, 202, 97, 90, 52, 116, 66, 17, 108, 77, 230, 201, 250} }, //8 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Modules\\Attributes\\ProviderSelectionOptionsAttribute.cs", { 152, 122, 121, 177, 233, 97, 186, 168, 22, 224, 37, 164, 179, 191, 127, 165} }, //9 
{ "E:\\GamePlatforms-ARGame\\IMAT3002_2223_502 Game Platforms\\Library\\PackageCache\\com.unity.xrtools.module-loader@1.4.1\\Interfaces\\Subscribers\\IUsesFunctionalityInjection.cs", { 34, 30, 127, 134, 124, 198, 141, 106, 244, 168, 55, 73, 138, 157, 163, 205} }, //10 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[10] = 
{
	{ 7553, 1 },
	{ 7556, 2 },
	{ 7558, 3 },
	{ 7559, 4 },
	{ 7560, 5 },
	{ 7561, 6 },
	{ 7562, 7 },
	{ 7563, 8 },
	{ 7564, 9 },
	{ 7573, 10 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[2] = 
{
	{ 0, 25 },
	{ 0, 20 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[40] = 
{
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::LoadProvider() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::ConnectSubscriber(System.Object) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IFunctionalityProvider::UnloadProvider() */,
	{ 25, 0, 1 } /* System.Void Unity.XRTools.ModuleLoader.FunctionalityProviderMethods::TryConnectSubscriber(TProvider,System.Object) */,
	{ 0, 0, 0 } /* TProvider Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1::get_provider() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1::set_provider(TProvider) */,
	{ 20, 1, 1 } /* System.Boolean Unity.XRTools.ModuleLoader.FunctionalitySubscriberMethods::HasProvider(Unity.XRTools.ModuleLoader.IFunctionalitySubscriber`1<TProvider>) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ImmortalModuleAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleAssetCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleBehaviorCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleBuildCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Unity.XRTools.ModuleLoader.ModuleOrderAttribute::get_order() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::set_order(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleSceneCallbackOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ModuleUnloadOrderAttribute::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_Priority() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_Priority(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.RuntimePlatform[] Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_ExcludedPlatforms() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::set_ExcludedPlatforms(UnityEngine.RuntimePlatform[]) */,
	{ 0, 0, 0 } /* System.Boolean Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::get_DisallowAutoCreation() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.ProviderSelectionOptionsAttribute::.ctor(System.Int32,UnityEngine.RuntimePlatform[],System.Boolean) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModule::LoadModule() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModule::UnloadModule() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorAwake() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorEnable() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorStart() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorUpdate() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorDisable() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleBehaviorCallbacks::OnBehaviorDestroy() */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleDependency`1::ConnectDependency(T) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnSceneUnloaded(UnityEngine.SceneManagement.Scene) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IModuleSceneCallbacks::OnActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionality(System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.XRTools.ModuleLoader.IFunctionalityProvider>) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectPreparedFunctionality(System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IProvidesFunctionalityInjection::InjectFunctionalitySingle(System.Object) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectFunctionalitySingle(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Object) */,
	{ 0, 0, 0 } /* System.Void Unity.XRTools.ModuleLoader.IUsesFunctionalityInjectionMethods::InjectPreparedFunctionality(Unity.XRTools.ModuleLoader.IUsesFunctionalityInjection,System.Collections.Generic.List`1<System.Object>) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XRTools_ModuleLoader_Interfaces;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XRTools_ModuleLoader_Interfaces = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	105,
	(Il2CppSequencePoint*)g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	10,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
