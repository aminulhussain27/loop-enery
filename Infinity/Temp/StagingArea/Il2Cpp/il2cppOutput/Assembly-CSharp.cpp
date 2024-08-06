#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<SoundType,SoundData>
struct Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4;
// System.Collections.Generic.IEqualityComparer`1<SoundType>
struct IEqualityComparer_1_t2D56A8F3E2292038D14E133350EE1248111293D7;
// System.Collections.Generic.Dictionary`2/KeyCollection<SoundType,SoundData>
struct KeyCollection_tF453C622E96BE01C006E64D947B275C97FC90ADA;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<LevelButton>
struct List_1_t512BD2E7827604F95E1F3D2EF267177681076452;
// System.Collections.Generic.List`1<Node>
struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SoundData>
struct List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B;
// System.Collections.Generic.Queue`1<UnityEngine.AudioSource>
struct Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<SoundType,SoundData>
struct ValueCollection_t159A8E04618F980281990D60EE0B4B6ABD8E7C04;
// System.Collections.Generic.Dictionary`2/Entry<SoundType,SoundData>[]
struct EntryU5BU5D_t991BB3F9D0C7E9A196938C7EB8A001B7862FA232;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LevelButton[]
struct LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD;
// LevelData[]
struct LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780;
// Node[]
struct NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8;
// NodeData[]
struct NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// SoundData[]
struct SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Node[0...,0...]
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// AudioSourcePool
struct AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonClickSound
struct ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D;
// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameStateMachine
struct GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LevelButton
struct LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3;
// LevelData
struct LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A;
// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961;
// Levels
struct Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0;
// NodeData
struct NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerProgress
struct PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD;
// PlayerProgressManager
struct PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D;
// PopUpSound
struct PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SoundData
struct SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC;
// SoundDataContainer
struct SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// SplashScreen
struct SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// SpriteAnimator
struct SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// CameraShake/<Shake>d__8
struct U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E;
// GameManager/<ShowGridInitializeEffect>d__13
struct U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8;
// GameStateMachine/<TransitionToState>d__6
struct U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006;
// LevelButton/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Node/<RotateWithDelay>d__21
struct U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SoundManager/<ReturnAudioSourceToPool>d__8
struct U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984;
// SpriteAnimator/<BlinkAndChange>d__11
struct U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC;
// SpriteAnimator/<ChangeColor>d__12
struct U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002;
// SpriteAnimator/<ChangeSize>d__13
struct U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42;
// UIManager/<ShowGameOverPopup>d__11
struct U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6;
// UIManager/<ShowScoreUpdateEffect>d__13
struct U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t512BD2E7827604F95E1F3D2EF267177681076452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundType_tEB44E5E292DCA787FB8663022C12E7C92F6A23DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24F4944197FE0B9FCD3F72A3157C3615D512B09A;
IL2CPP_EXTERN_C String_t* _stringLiteral5CEBAB82A7CF5338835BFB5ECFC8B4C302C717D6;
IL2CPP_EXTERN_C String_t* _stringLiteral73DFB0B36816C22291AA0C3B410D4F458B670D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral85CA32F2C31BFC260EF599F3A70A420711832466;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
IL2CPP_EXTERN_C String_t* _stringLiteralA573EBD7360C30E3218486FC8AB6F0C584F2A968;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DC01B4042BC688434B47EC343D01F43A6FE049;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonClickSound_OnButtonClick_m876068ABA461C6120AF6010EC539381A00DF0875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mBF710EB6468C13268C97586CB407964CE200E575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2FD6560D787AC9BAB2D75205BCEE4E60A15C1E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m57AAE0E8B05CE3D0B64E484436FA6F15487DACE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB8F7B95CD9CF8420C73305A194316DEF996FE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDADDDDEB55CCDFF23195580668F5E4F83A35ACB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC8D371B16B26BF38F2C43357ADAC7A2CF1DFC722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3_m0023261246826346556DB17CC062B3BC47696335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNode_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_mAAA58CDA50E65722F4D7461E53F847A63A429900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisLevels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14_m4789FCCEC594C6FDE8301DFF416A82574E35C3C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD_m11AE875DC5ADE5C73B5AA92DDA72EC1A13CCA49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4805793C87BB084A138CC5130512226A180D6E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D46264575EDF37805364A99162453DFF825A4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB800463BB457F895DD2EE96F3A83F977CA84527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2265C6B3AFE62C2DCEEF28B71C7E340D77731DB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_OnButtonClick_m7CFAEE0E3BF659C51FC3A40AC100A770BF5AD943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mC6886F9795D317DA3806E75A6D336CD56E55B3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m2645169CB38DE43DAE4BF05587D0FBF82497B7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF02AD64E91A8C04DC87F1947D1F6C137C5764F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SplashScreen_U3CAwakeU3Eb__1_0_m1626161C4BC967055671D6B5CC321C36F9823735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBlinkAndChangeU3Ed__11_System_Collections_IEnumerator_Reset_m400E1D439F3633BE6F66E20A30B24379ECDC245C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeColorU3Ed__12_System_Collections_IEnumerator_Reset_m829B2052355E5753B66FF4B20EC0EC1AF9116571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeSizeU3Ed__13_System_Collections_IEnumerator_Reset_mE91FFB3B1A5730CBE8C59832477AAEF430BF4A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReturnAudioSourceToPoolU3Ed__8_System_Collections_IEnumerator_Reset_mF3B4D4AA44638A307A7B92556721BFBF4082816A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotateWithDelayU3Ed__21_System_Collections_IEnumerator_Reset_mC56C7462E5ECA1746A62621F22CD98DEA9A11A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__8_System_Collections_IEnumerator_Reset_mF03B1AAEBEED16C7BD7DBF89CA6F39B022532090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowGameOverPopupU3Ed__11_System_Collections_IEnumerator_Reset_m55E75506FC31579AD3E26B4616B6E4CE2585ED1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowGridInitializeEffectU3Ed__13_System_Collections_IEnumerator_Reset_m6469183A7374F2168DCCACB41179689B62BFD097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowScoreUpdateEffectU3Ed__13_System_Collections_IEnumerator_Reset_m2BEFDB5FBF896649ABF58DA664A0BFB263B31173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTransitionToStateU3Ed__6_System_Collections_IEnumerator_Reset_m3C9E9C8DDB7E18C825C793ED0DF50391746E5CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CInitializeU3Eb__0_m12EEC82FD478162EAC1C738E72751E8632D1F808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_OnLevelComplete_m215507523025C3A317A1AD9657C9200CF3165EC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_OnLevelStart_m74E3DBFCFF3C489569159BE810F0E80284762D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CStartU3Eb__7_0_mE32DC4F72CA20C134E18F50A2E29160B06B61A54_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780;
struct NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<SoundType,SoundData>
struct Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t991BB3F9D0C7E9A196938C7EB8A001B7862FA232* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF453C622E96BE01C006E64D947B275C97FC90ADA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t159A8E04618F980281990D60EE0B4B6ABD8E7C04 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___entries_1)); }
	inline EntryU5BU5D_t991BB3F9D0C7E9A196938C7EB8A001B7862FA232* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t991BB3F9D0C7E9A196938C7EB8A001B7862FA232** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t991BB3F9D0C7E9A196938C7EB8A001B7862FA232* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___keys_7)); }
	inline KeyCollection_tF453C622E96BE01C006E64D947B275C97FC90ADA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF453C622E96BE01C006E64D947B275C97FC90ADA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF453C622E96BE01C006E64D947B275C97FC90ADA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ___values_8)); }
	inline ValueCollection_t159A8E04618F980281990D60EE0B4B6ABD8E7C04 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t159A8E04618F980281990D60EE0B4B6ABD8E7C04 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t159A8E04618F980281990D60EE0B4B6ABD8E7C04 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<LevelButton>
struct List_1_t512BD2E7827604F95E1F3D2EF267177681076452  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t512BD2E7827604F95E1F3D2EF267177681076452, ____items_1)); }
	inline LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* get__items_1() const { return ____items_1; }
	inline LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t512BD2E7827604F95E1F3D2EF267177681076452, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t512BD2E7827604F95E1F3D2EF267177681076452, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t512BD2E7827604F95E1F3D2EF267177681076452, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Node>
struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____items_1)); }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* get__items_1() const { return ____items_1; }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<SoundData>
struct List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B, ____items_1)); }
	inline SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* get__items_1() const { return ____items_1; }
	inline SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.AudioSource>
struct Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____array_0)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get__array_0() const { return ____array_0; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02  : public RuntimeObject
{
public:

public:
};


// LevelData
struct LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A  : public RuntimeObject
{
public:
	// NodeData[] LevelData::nodes
	NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* ___nodes_0;

public:
	inline static int32_t get_offset_of_nodes_0() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___nodes_0)); }
	inline NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* get_nodes_0() const { return ___nodes_0; }
	inline NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3** get_address_of_nodes_0() { return &___nodes_0; }
	inline void set_nodes_0(NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* value)
	{
		___nodes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_0), (void*)value);
	}
};


// Levels
struct Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14  : public RuntimeObject
{
public:
	// LevelData[] Levels::levels
	LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* ___levels_0;

public:
	inline static int32_t get_offset_of_levels_0() { return static_cast<int32_t>(offsetof(Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14, ___levels_0)); }
	inline LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* get_levels_0() const { return ___levels_0; }
	inline LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780** get_address_of_levels_0() { return &___levels_0; }
	inline void set_levels_0(LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* value)
	{
		___levels_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_0), (void*)value);
	}
};


// NodeData
struct NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D  : public RuntimeObject
{
public:
	// System.Int32 NodeData::startState
	int32_t ___startState_0;
	// System.Int32 NodeData::correctState
	int32_t ___correctState_1;
	// System.Int32 NodeData::x
	int32_t ___x_2;
	// System.Int32 NodeData::y
	int32_t ___y_3;
	// System.Int32 NodeData::itemIndex
	int32_t ___itemIndex_4;

public:
	inline static int32_t get_offset_of_startState_0() { return static_cast<int32_t>(offsetof(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D, ___startState_0)); }
	inline int32_t get_startState_0() const { return ___startState_0; }
	inline int32_t* get_address_of_startState_0() { return &___startState_0; }
	inline void set_startState_0(int32_t value)
	{
		___startState_0 = value;
	}

	inline static int32_t get_offset_of_correctState_1() { return static_cast<int32_t>(offsetof(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D, ___correctState_1)); }
	inline int32_t get_correctState_1() const { return ___correctState_1; }
	inline int32_t* get_address_of_correctState_1() { return &___correctState_1; }
	inline void set_correctState_1(int32_t value)
	{
		___correctState_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D, ___x_2)); }
	inline int32_t get_x_2() const { return ___x_2; }
	inline int32_t* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(int32_t value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D, ___y_3)); }
	inline int32_t get_y_3() const { return ___y_3; }
	inline int32_t* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(int32_t value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_itemIndex_4() { return static_cast<int32_t>(offsetof(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D, ___itemIndex_4)); }
	inline int32_t get_itemIndex_4() const { return ___itemIndex_4; }
	inline int32_t* get_address_of_itemIndex_4() { return &___itemIndex_4; }
	inline void set_itemIndex_4(int32_t value)
	{
		___itemIndex_4 = value;
	}
};


// PlayerProgress
struct PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD  : public RuntimeObject
{
public:
	// System.Int32 PlayerProgress::highestLevelUnlocked
	int32_t ___highestLevelUnlocked_0;
	// System.Int32 PlayerProgress::score
	int32_t ___score_1;

public:
	inline static int32_t get_offset_of_highestLevelUnlocked_0() { return static_cast<int32_t>(offsetof(PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD, ___highestLevelUnlocked_0)); }
	inline int32_t get_highestLevelUnlocked_0() const { return ___highestLevelUnlocked_0; }
	inline int32_t* get_address_of_highestLevelUnlocked_0() { return &___highestLevelUnlocked_0; }
	inline void set_highestLevelUnlocked_0(int32_t value)
	{
		___highestLevelUnlocked_0 = value;
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// CameraShake/<Shake>d__8
struct U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E  : public RuntimeObject
{
public:
	// System.Int32 CameraShake/<Shake>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraShake/<Shake>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CameraShake CameraShake/<Shake>d__8::<>4__this
	CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * ___U3CU3E4__this_2;
	// System.Single CameraShake/<Shake>d__8::<elapsed>5__2
	float ___U3CelapsedU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E, ___U3CU3E4__this_2)); }
	inline CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E, ___U3CelapsedU3E5__2_3)); }
	inline float get_U3CelapsedU3E5__2_3() const { return ___U3CelapsedU3E5__2_3; }
	inline float* get_address_of_U3CelapsedU3E5__2_3() { return &___U3CelapsedU3E5__2_3; }
	inline void set_U3CelapsedU3E5__2_3(float value)
	{
		___U3CelapsedU3E5__2_3 = value;
	}
};


// LevelButton/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091  : public RuntimeObject
{
public:
	// System.Boolean LevelButton/<>c__DisplayClass6_0::isUnlocked
	bool ___isUnlocked_0;
	// System.Int32 LevelButton/<>c__DisplayClass6_0::levelIndex
	int32_t ___levelIndex_1;

public:
	inline static int32_t get_offset_of_isUnlocked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091, ___isUnlocked_0)); }
	inline bool get_isUnlocked_0() const { return ___isUnlocked_0; }
	inline bool* get_address_of_isUnlocked_0() { return &___isUnlocked_0; }
	inline void set_isUnlocked_0(bool value)
	{
		___isUnlocked_0 = value;
	}

	inline static int32_t get_offset_of_levelIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091, ___levelIndex_1)); }
	inline int32_t get_levelIndex_1() const { return ___levelIndex_1; }
	inline int32_t* get_address_of_levelIndex_1() { return &___levelIndex_1; }
	inline void set_levelIndex_1(int32_t value)
	{
		___levelIndex_1 = value;
	}
};


// SoundManager/<ReturnAudioSourceToPool>d__8
struct U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984  : public RuntimeObject
{
public:
	// System.Int32 SoundManager/<ReturnAudioSourceToPool>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundManager/<ReturnAudioSourceToPool>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single SoundManager/<ReturnAudioSourceToPool>d__8::delay
	float ___delay_2;
	// UnityEngine.AudioSource SoundManager/<ReturnAudioSourceToPool>d__8::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984, ___audioSource_3)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_3), (void*)value);
	}
};


// SpriteAnimator/<BlinkAndChange>d__11
struct U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC  : public RuntimeObject
{
public:
	// System.Int32 SpriteAnimator/<BlinkAndChange>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpriteAnimator/<BlinkAndChange>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpriteAnimator SpriteAnimator/<BlinkAndChange>d__11::<>4__this
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC, ___U3CU3E4__this_2)); }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UIManager/<ShowGameOverPopup>d__11
struct U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6  : public RuntimeObject
{
public:
	// System.Int32 UIManager/<ShowGameOverPopup>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIManager/<ShowGameOverPopup>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UIManager UIManager/<ShowGameOverPopup>d__11::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6, ___U3CU3E4__this_2)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UIManager/<ShowScoreUpdateEffect>d__13
struct U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C  : public RuntimeObject
{
public:
	// System.Int32 UIManager/<ShowScoreUpdateEffect>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIManager/<ShowScoreUpdateEffect>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UIManager UIManager/<ShowScoreUpdateEffect>d__13::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_2;
	// System.Single UIManager/<ShowScoreUpdateEffect>d__13::<duration>5__2
	float ___U3CdurationU3E5__2_3;
	// System.Int32 UIManager/<ShowScoreUpdateEffect>d__13::<prevScore>5__3
	int32_t ___U3CprevScoreU3E5__3_4;
	// System.Int32 UIManager/<ShowScoreUpdateEffect>d__13::<endScore>5__4
	int32_t ___U3CendScoreU3E5__4_5;
	// System.Single UIManager/<ShowScoreUpdateEffect>d__13::<elapsed>5__5
	float ___U3CelapsedU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CU3E4__this_2)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CdurationU3E5__2_3)); }
	inline float get_U3CdurationU3E5__2_3() const { return ___U3CdurationU3E5__2_3; }
	inline float* get_address_of_U3CdurationU3E5__2_3() { return &___U3CdurationU3E5__2_3; }
	inline void set_U3CdurationU3E5__2_3(float value)
	{
		___U3CdurationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CprevScoreU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CprevScoreU3E5__3_4)); }
	inline int32_t get_U3CprevScoreU3E5__3_4() const { return ___U3CprevScoreU3E5__3_4; }
	inline int32_t* get_address_of_U3CprevScoreU3E5__3_4() { return &___U3CprevScoreU3E5__3_4; }
	inline void set_U3CprevScoreU3E5__3_4(int32_t value)
	{
		___U3CprevScoreU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CendScoreU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CendScoreU3E5__4_5)); }
	inline int32_t get_U3CendScoreU3E5__4_5() const { return ___U3CendScoreU3E5__4_5; }
	inline int32_t* get_address_of_U3CendScoreU3E5__4_5() { return &___U3CendScoreU3E5__4_5; }
	inline void set_U3CendScoreU3E5__4_5(int32_t value)
	{
		___U3CendScoreU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C, ___U3CelapsedU3E5__5_6)); }
	inline float get_U3CelapsedU3E5__5_6() const { return ___U3CelapsedU3E5__5_6; }
	inline float* get_address_of_U3CelapsedU3E5__5_6() { return &___U3CelapsedU3E5__5_6; }
	inline void set_U3CelapsedU3E5__5_6(float value)
	{
		___U3CelapsedU3E5__5_6 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Node>
struct Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___list_0)); }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * get_list_0() const { return ___list_0; }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7, ___current_3)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_current_3() const { return ___current_3; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SoundData>
struct Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982, ___list_0)); }
	inline List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * get_list_0() const { return ___list_0; }
	inline List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982, ___current_3)); }
	inline SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * get_current_3() const { return ___current_3; }
	inline SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE 
{
public:
	// System.Int32 GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// SoundType
struct SoundType_tEB44E5E292DCA787FB8663022C12E7C92F6A23DE 
{
public:
	// System.Int32 SoundType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SoundType_tEB44E5E292DCA787FB8663022C12E7C92F6A23DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// GameManager/<ShowGridInitializeEffect>d__13
struct U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<ShowGridInitializeEffect>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ShowGridInitializeEffect>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<ShowGridInitializeEffect>d__13::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<Node> GameManager/<ShowGridInitializeEffect>d__13::<>7__wrap1
	Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Node/<RotateWithDelay>d__21
struct U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7  : public RuntimeObject
{
public:
	// System.Int32 Node/<RotateWithDelay>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Node/<RotateWithDelay>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Node Node/<RotateWithDelay>d__21::<>4__this
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___U3CU3E4__this_2;
	// UnityEngine.Quaternion Node/<RotateWithDelay>d__21::<initialRotation>5__2
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CinitialRotationU3E5__2_3;
	// UnityEngine.Quaternion Node/<RotateWithDelay>d__21::<targetRotation>5__3
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CtargetRotationU3E5__3_4;
	// System.Single Node/<RotateWithDelay>d__21::<elapsed>5__4
	float ___U3CelapsedU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CU3E4__this_2)); }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitialRotationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CinitialRotationU3E5__2_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CinitialRotationU3E5__2_3() const { return ___U3CinitialRotationU3E5__2_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CinitialRotationU3E5__2_3() { return &___U3CinitialRotationU3E5__2_3; }
	inline void set_U3CinitialRotationU3E5__2_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CinitialRotationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetRotationU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CtargetRotationU3E5__3_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CtargetRotationU3E5__3_4() const { return ___U3CtargetRotationU3E5__3_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CtargetRotationU3E5__3_4() { return &___U3CtargetRotationU3E5__3_4; }
	inline void set_U3CtargetRotationU3E5__3_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CtargetRotationU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7, ___U3CelapsedU3E5__4_5)); }
	inline float get_U3CelapsedU3E5__4_5() const { return ___U3CelapsedU3E5__4_5; }
	inline float* get_address_of_U3CelapsedU3E5__4_5() { return &___U3CelapsedU3E5__4_5; }
	inline void set_U3CelapsedU3E5__4_5(float value)
	{
		___U3CelapsedU3E5__4_5 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SpriteAnimator/<ChangeColor>d__12
struct U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002  : public RuntimeObject
{
public:
	// System.Int32 SpriteAnimator/<ChangeColor>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpriteAnimator/<ChangeColor>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpriteAnimator SpriteAnimator/<ChangeColor>d__12::<>4__this
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * ___U3CU3E4__this_2;
	// UnityEngine.Color SpriteAnimator/<ChangeColor>d__12::fromColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fromColor_3;
	// UnityEngine.Color SpriteAnimator/<ChangeColor>d__12::toColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___toColor_4;
	// System.Single SpriteAnimator/<ChangeColor>d__12::duration
	float ___duration_5;
	// System.Single SpriteAnimator/<ChangeColor>d__12::<elapsed>5__2
	float ___U3CelapsedU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___U3CU3E4__this_2)); }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fromColor_3() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___fromColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fromColor_3() const { return ___fromColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fromColor_3() { return &___fromColor_3; }
	inline void set_fromColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fromColor_3 = value;
	}

	inline static int32_t get_offset_of_toColor_4() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___toColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_toColor_4() const { return ___toColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_toColor_4() { return &___toColor_4; }
	inline void set_toColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___toColor_4 = value;
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002, ___U3CelapsedU3E5__2_6)); }
	inline float get_U3CelapsedU3E5__2_6() const { return ___U3CelapsedU3E5__2_6; }
	inline float* get_address_of_U3CelapsedU3E5__2_6() { return &___U3CelapsedU3E5__2_6; }
	inline void set_U3CelapsedU3E5__2_6(float value)
	{
		___U3CelapsedU3E5__2_6 = value;
	}
};


// SpriteAnimator/<ChangeSize>d__13
struct U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42  : public RuntimeObject
{
public:
	// System.Int32 SpriteAnimator/<ChangeSize>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpriteAnimator/<ChangeSize>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpriteAnimator SpriteAnimator/<ChangeSize>d__13::<>4__this
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 SpriteAnimator/<ChangeSize>d__13::fromSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromSize_3;
	// UnityEngine.Vector3 SpriteAnimator/<ChangeSize>d__13::toSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toSize_4;
	// System.Single SpriteAnimator/<ChangeSize>d__13::duration
	float ___duration_5;
	// System.Single SpriteAnimator/<ChangeSize>d__13::<elapsed>5__2
	float ___U3CelapsedU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___U3CU3E4__this_2)); }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fromSize_3() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___fromSize_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_fromSize_3() const { return ___fromSize_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_fromSize_3() { return &___fromSize_3; }
	inline void set_fromSize_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___fromSize_3 = value;
	}

	inline static int32_t get_offset_of_toSize_4() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___toSize_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_toSize_4() const { return ___toSize_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_toSize_4() { return &___toSize_4; }
	inline void set_toSize_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___toSize_4 = value;
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42, ___U3CelapsedU3E5__2_6)); }
	inline float get_U3CelapsedU3E5__2_6() const { return ___U3CelapsedU3E5__2_6; }
	inline float* get_address_of_U3CelapsedU3E5__2_6() { return &___U3CelapsedU3E5__2_6; }
	inline void set_U3CelapsedU3E5__2_6(float value)
	{
		___U3CelapsedU3E5__2_6 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// SoundData
struct SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC  : public RuntimeObject
{
public:
	// SoundType SoundData::soundType
	int32_t ___soundType_0;
	// UnityEngine.AudioClip SoundData::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_1;
	// System.Single SoundData::volume
	float ___volume_2;
	// System.Boolean SoundData::loop
	bool ___loop_3;

public:
	inline static int32_t get_offset_of_soundType_0() { return static_cast<int32_t>(offsetof(SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC, ___soundType_0)); }
	inline int32_t get_soundType_0() const { return ___soundType_0; }
	inline int32_t* get_address_of_soundType_0() { return &___soundType_0; }
	inline void set_soundType_0(int32_t value)
	{
		___soundType_0 = value;
	}

	inline static int32_t get_offset_of_audioClip_1() { return static_cast<int32_t>(offsetof(SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC, ___audioClip_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_1() const { return ___audioClip_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_1() { return &___audioClip_1; }
	inline void set_audioClip_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_1), (void*)value);
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_loop_3() { return static_cast<int32_t>(offsetof(SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC, ___loop_3)); }
	inline bool get_loop_3() const { return ___loop_3; }
	inline bool* get_address_of_loop_3() { return &___loop_3; }
	inline void set_loop_3(bool value)
	{
		___loop_3 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GameStateMachine/<TransitionToState>d__6
struct U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006  : public RuntimeObject
{
public:
	// System.Int32 GameStateMachine/<TransitionToState>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameStateMachine/<TransitionToState>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameStateMachine GameStateMachine/<TransitionToState>d__6::<>4__this
	GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * ___U3CU3E4__this_2;
	// GameState GameStateMachine/<TransitionToState>d__6::newState
	int32_t ___newState_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006, ___U3CU3E4__this_2)); }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_newState_3() { return static_cast<int32_t>(offsetof(U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006, ___newState_3)); }
	inline int32_t get_newState_3() const { return ___newState_3; }
	inline int32_t* get_address_of_newState_3() { return &___newState_3; }
	inline void set_newState_3(int32_t value)
	{
		___newState_3 = value;
	}
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// SoundDataContainer
struct SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<SoundData> SoundDataContainer::soundDataList
	List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * ___soundDataList_4;

public:
	inline static int32_t get_offset_of_soundDataList_4() { return static_cast<int32_t>(offsetof(SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9, ___soundDataList_4)); }
	inline List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * get_soundDataList_4() const { return ___soundDataList_4; }
	inline List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B ** get_address_of_soundDataList_4() { return &___soundDataList_4; }
	inline void set_soundDataList_4(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * value)
	{
		___soundDataList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundDataList_4), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// AudioSourcePool
struct AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 AudioSourcePool::poolSize
	int32_t ___poolSize_5;
	// System.Collections.Generic.Queue`1<UnityEngine.AudioSource> AudioSourcePool::audioSources
	Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * ___audioSources_6;

public:
	inline static int32_t get_offset_of_poolSize_5() { return static_cast<int32_t>(offsetof(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D, ___poolSize_5)); }
	inline int32_t get_poolSize_5() const { return ___poolSize_5; }
	inline int32_t* get_address_of_poolSize_5() { return &___poolSize_5; }
	inline void set_poolSize_5(int32_t value)
	{
		___poolSize_5 = value;
	}

	inline static int32_t get_offset_of_audioSources_6() { return static_cast<int32_t>(offsetof(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D, ___audioSources_6)); }
	inline Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * get_audioSources_6() const { return ___audioSources_6; }
	inline Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 ** get_address_of_audioSources_6() { return &___audioSources_6; }
	inline void set_audioSources_6(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * value)
	{
		___audioSources_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSources_6), (void*)value);
	}
};


// ButtonClickSound
struct ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SoundType ButtonClickSound::soundType
	int32_t ___soundType_4;

public:
	inline static int32_t get_offset_of_soundType_4() { return static_cast<int32_t>(offsetof(ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D, ___soundType_4)); }
	inline int32_t get_soundType_4() const { return ___soundType_4; }
	inline int32_t* get_address_of_soundType_4() { return &___soundType_4; }
	inline void set_soundType_4(int32_t value)
	{
		___soundType_4 = value;
	}
};


// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraShake::shakeDuration
	float ___shakeDuration_4;
	// System.Single CameraShake::shakeMagnitude
	float ___shakeMagnitude_5;
	// System.Single CameraShake::dampingSpeed
	float ___dampingSpeed_6;
	// UnityEngine.Vector3 CameraShake::initialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPosition_7;

public:
	inline static int32_t get_offset_of_shakeDuration_4() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeDuration_4)); }
	inline float get_shakeDuration_4() const { return ___shakeDuration_4; }
	inline float* get_address_of_shakeDuration_4() { return &___shakeDuration_4; }
	inline void set_shakeDuration_4(float value)
	{
		___shakeDuration_4 = value;
	}

	inline static int32_t get_offset_of_shakeMagnitude_5() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeMagnitude_5)); }
	inline float get_shakeMagnitude_5() const { return ___shakeMagnitude_5; }
	inline float* get_address_of_shakeMagnitude_5() { return &___shakeMagnitude_5; }
	inline void set_shakeMagnitude_5(float value)
	{
		___shakeMagnitude_5 = value;
	}

	inline static int32_t get_offset_of_dampingSpeed_6() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___dampingSpeed_6)); }
	inline float get_dampingSpeed_6() const { return ___dampingSpeed_6; }
	inline float* get_address_of_dampingSpeed_6() { return &___dampingSpeed_6; }
	inline void set_dampingSpeed_6(float value)
	{
		___dampingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_initialPosition_7() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___initialPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPosition_7() const { return ___initialPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPosition_7() { return &___initialPosition_7; }
	inline void set_initialPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPosition_7 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.Int32> GameManager::levelCompleteEvent
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___levelCompleteEvent_5;
	// System.Action`1<System.Int32> GameManager::levelStartEvent
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___levelStartEvent_6;
	// UnityEngine.GameObject GameManager::nodePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nodePrefab_7;
	// UnityEngine.Transform GameManager::gridParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gridParent_8;
	// UnityEngine.Sprite[] GameManager::allImages
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___allImages_9;
	// Node[0...,0...] GameManager::grid
	NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* ___grid_10;
	// System.Collections.Generic.List`1<Node> GameManager::allNodes
	List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * ___allNodes_11;
	// System.Int32 GameManager::currentLevel
	int32_t ___currentLevel_12;

public:
	inline static int32_t get_offset_of_levelCompleteEvent_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelCompleteEvent_5)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_levelCompleteEvent_5() const { return ___levelCompleteEvent_5; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_levelCompleteEvent_5() { return &___levelCompleteEvent_5; }
	inline void set_levelCompleteEvent_5(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___levelCompleteEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelCompleteEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelStartEvent_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelStartEvent_6)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_levelStartEvent_6() const { return ___levelStartEvent_6; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_levelStartEvent_6() { return &___levelStartEvent_6; }
	inline void set_levelStartEvent_6(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___levelStartEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelStartEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_nodePrefab_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___nodePrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nodePrefab_7() const { return ___nodePrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nodePrefab_7() { return &___nodePrefab_7; }
	inline void set_nodePrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nodePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_gridParent_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gridParent_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gridParent_8() const { return ___gridParent_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gridParent_8() { return &___gridParent_8; }
	inline void set_gridParent_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gridParent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridParent_8), (void*)value);
	}

	inline static int32_t get_offset_of_allImages_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___allImages_9)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_allImages_9() const { return ___allImages_9; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_allImages_9() { return &___allImages_9; }
	inline void set_allImages_9(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___allImages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allImages_9), (void*)value);
	}

	inline static int32_t get_offset_of_grid_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___grid_10)); }
	inline NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* get_grid_10() const { return ___grid_10; }
	inline NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5** get_address_of_grid_10() { return &___grid_10; }
	inline void set_grid_10(NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* value)
	{
		___grid_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_10), (void*)value);
	}

	inline static int32_t get_offset_of_allNodes_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___allNodes_11)); }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * get_allNodes_11() const { return ___allNodes_11; }
	inline List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F ** get_address_of_allNodes_11() { return &___allNodes_11; }
	inline void set_allNodes_11(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * value)
	{
		___allNodes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allNodes_11), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___currentLevel_12)); }
	inline int32_t get_currentLevel_12() const { return ___currentLevel_12; }
	inline int32_t* get_address_of_currentLevel_12() { return &___currentLevel_12; }
	inline void set_currentLevel_12(int32_t value)
	{
		___currentLevel_12 = value;
	}
};


// GameStateMachine
struct GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameState GameStateMachine::currentState
	int32_t ___currentState_5;

public:
	inline static int32_t get_offset_of_currentState_5() { return static_cast<int32_t>(offsetof(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928, ___currentState_5)); }
	inline int32_t get_currentState_5() const { return ___currentState_5; }
	inline int32_t* get_address_of_currentState_5() { return &___currentState_5; }
	inline void set_currentState_5(int32_t value)
	{
		___currentState_5 = value;
	}
};


// LevelButton
struct LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LevelButton::levelIndex
	int32_t ___levelIndex_4;
	// UnityEngine.UI.Text LevelButton::levelIndextext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelIndextext_5;
	// UnityEngine.UI.Button LevelButton::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_6;
	// UnityEngine.UI.Image LevelButton::lockIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___lockIcon_7;
	// UnityEngine.UI.Image LevelButton::playIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___playIcon_8;
	// UnityEngine.UI.Image LevelButton::tickIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___tickIcon_9;

public:
	inline static int32_t get_offset_of_levelIndex_4() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___levelIndex_4)); }
	inline int32_t get_levelIndex_4() const { return ___levelIndex_4; }
	inline int32_t* get_address_of_levelIndex_4() { return &___levelIndex_4; }
	inline void set_levelIndex_4(int32_t value)
	{
		___levelIndex_4 = value;
	}

	inline static int32_t get_offset_of_levelIndextext_5() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___levelIndextext_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelIndextext_5() const { return ___levelIndextext_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelIndextext_5() { return &___levelIndextext_5; }
	inline void set_levelIndextext_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelIndextext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelIndextext_5), (void*)value);
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___button_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_6() const { return ___button_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_6), (void*)value);
	}

	inline static int32_t get_offset_of_lockIcon_7() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___lockIcon_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_lockIcon_7() const { return ___lockIcon_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_lockIcon_7() { return &___lockIcon_7; }
	inline void set_lockIcon_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___lockIcon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockIcon_7), (void*)value);
	}

	inline static int32_t get_offset_of_playIcon_8() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___playIcon_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_playIcon_8() const { return ___playIcon_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_playIcon_8() { return &___playIcon_8; }
	inline void set_playIcon_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___playIcon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playIcon_8), (void*)value);
	}

	inline static int32_t get_offset_of_tickIcon_9() { return static_cast<int32_t>(offsetof(LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3, ___tickIcon_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_tickIcon_9() const { return ___tickIcon_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_tickIcon_9() { return &___tickIcon_9; }
	inline void set_tickIcon_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___tickIcon_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tickIcon_9), (void*)value);
	}
};


// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Levels LevelManager::levels
	Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * ___levels_5;
	// UnityEngine.Transform LevelManager::levelGridParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___levelGridParent_6;
	// UnityEngine.GameObject LevelManager::levelButtonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelButtonPrefab_7;
	// System.Collections.Generic.List`1<LevelButton> LevelManager::allLevelButtons
	List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * ___allLevelButtons_8;

public:
	inline static int32_t get_offset_of_levels_5() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___levels_5)); }
	inline Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * get_levels_5() const { return ___levels_5; }
	inline Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 ** get_address_of_levels_5() { return &___levels_5; }
	inline void set_levels_5(Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * value)
	{
		___levels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelGridParent_6() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___levelGridParent_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_levelGridParent_6() const { return ___levelGridParent_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_levelGridParent_6() { return &___levelGridParent_6; }
	inline void set_levelGridParent_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___levelGridParent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelGridParent_6), (void*)value);
	}

	inline static int32_t get_offset_of_levelButtonPrefab_7() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___levelButtonPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelButtonPrefab_7() const { return ___levelButtonPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelButtonPrefab_7() { return &___levelButtonPrefab_7; }
	inline void set_levelButtonPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelButtonPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelButtonPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_allLevelButtons_8() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___allLevelButtons_8)); }
	inline List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * get_allLevelButtons_8() const { return ___allLevelButtons_8; }
	inline List_1_t512BD2E7827604F95E1F3D2EF267177681076452 ** get_address_of_allLevelButtons_8() { return &___allLevelButtons_8; }
	inline void set_allLevelButtons_8(List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * value)
	{
		___allLevelButtons_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLevelButtons_8), (void*)value);
	}
};


// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Node::rotationState
	int32_t ___rotationState_4;
	// UnityEngine.UI.Button Node::nodeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nodeButton_5;
	// UnityEngine.UI.Text Node::label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___label_6;
	// UnityEngine.UI.Image Node::nodeImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___nodeImage_7;
	// NodeData Node::nodeData
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * ___nodeData_8;
	// System.Int32 Node::<DefaultRotationState>k__BackingField
	int32_t ___U3CDefaultRotationStateU3Ek__BackingField_9;
	// System.Int32 Node::<CorrectRotationState>k__BackingField
	int32_t ___U3CCorrectRotationStateU3Ek__BackingField_10;
	// UnityEngine.Coroutine Node::rotateCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___rotateCoroutine_11;

public:
	inline static int32_t get_offset_of_rotationState_4() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___rotationState_4)); }
	inline int32_t get_rotationState_4() const { return ___rotationState_4; }
	inline int32_t* get_address_of_rotationState_4() { return &___rotationState_4; }
	inline void set_rotationState_4(int32_t value)
	{
		___rotationState_4 = value;
	}

	inline static int32_t get_offset_of_nodeButton_5() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___nodeButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nodeButton_5() const { return ___nodeButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nodeButton_5() { return &___nodeButton_5; }
	inline void set_nodeButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nodeButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_label_6() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___label_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_label_6() const { return ___label_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_label_6() { return &___label_6; }
	inline void set_label_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___label_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_6), (void*)value);
	}

	inline static int32_t get_offset_of_nodeImage_7() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___nodeImage_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_nodeImage_7() const { return ___nodeImage_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_nodeImage_7() { return &___nodeImage_7; }
	inline void set_nodeImage_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___nodeImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_nodeData_8() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___nodeData_8)); }
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * get_nodeData_8() const { return ___nodeData_8; }
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D ** get_address_of_nodeData_8() { return &___nodeData_8; }
	inline void set_nodeData_8(NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * value)
	{
		___nodeData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeData_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRotationStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___U3CDefaultRotationStateU3Ek__BackingField_9)); }
	inline int32_t get_U3CDefaultRotationStateU3Ek__BackingField_9() const { return ___U3CDefaultRotationStateU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CDefaultRotationStateU3Ek__BackingField_9() { return &___U3CDefaultRotationStateU3Ek__BackingField_9; }
	inline void set_U3CDefaultRotationStateU3Ek__BackingField_9(int32_t value)
	{
		___U3CDefaultRotationStateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CCorrectRotationStateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___U3CCorrectRotationStateU3Ek__BackingField_10)); }
	inline int32_t get_U3CCorrectRotationStateU3Ek__BackingField_10() const { return ___U3CCorrectRotationStateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCorrectRotationStateU3Ek__BackingField_10() { return &___U3CCorrectRotationStateU3Ek__BackingField_10; }
	inline void set_U3CCorrectRotationStateU3Ek__BackingField_10(int32_t value)
	{
		___U3CCorrectRotationStateU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_rotateCoroutine_11() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___rotateCoroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_rotateCoroutine_11() const { return ___rotateCoroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_rotateCoroutine_11() { return &___rotateCoroutine_11; }
	inline void set_rotateCoroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___rotateCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateCoroutine_11), (void*)value);
	}
};


// PlayerProgressManager
struct PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerProgress PlayerProgressManager::progress
	PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * ___progress_5;

public:
	inline static int32_t get_offset_of_progress_5() { return static_cast<int32_t>(offsetof(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D, ___progress_5)); }
	inline PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * get_progress_5() const { return ___progress_5; }
	inline PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD ** get_address_of_progress_5() { return &___progress_5; }
	inline void set_progress_5(PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * value)
	{
		___progress_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_5), (void*)value);
	}
};


// PopUpSound
struct PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SoundType PopUpSound::soundType
	int32_t ___soundType_4;

public:
	inline static int32_t get_offset_of_soundType_4() { return static_cast<int32_t>(offsetof(PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54, ___soundType_4)); }
	inline int32_t get_soundType_4() const { return ___soundType_4; }
	inline int32_t* get_address_of_soundType_4() { return &___soundType_4; }
	inline void set_soundType_4(int32_t value)
	{
		___soundType_4 = value;
	}
};


// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameStateMachine SceneLoader::gameStateMachine
	GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * ___gameStateMachine_4;

public:
	inline static int32_t get_offset_of_gameStateMachine_4() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___gameStateMachine_4)); }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * get_gameStateMachine_4() const { return ___gameStateMachine_4; }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 ** get_address_of_gameStateMachine_4() { return &___gameStateMachine_4; }
	inline void set_gameStateMachine_4(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * value)
	{
		___gameStateMachine_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameStateMachine_4), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SoundDataContainer SoundManager::soundDataContainer
	SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 * ___soundDataContainer_5;
	// System.Collections.Generic.Dictionary`2<SoundType,SoundData> SoundManager::soundDataDictionary
	Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * ___soundDataDictionary_6;

public:
	inline static int32_t get_offset_of_soundDataContainer_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___soundDataContainer_5)); }
	inline SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 * get_soundDataContainer_5() const { return ___soundDataContainer_5; }
	inline SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 ** get_address_of_soundDataContainer_5() { return &___soundDataContainer_5; }
	inline void set_soundDataContainer_5(SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 * value)
	{
		___soundDataContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundDataContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_soundDataDictionary_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___soundDataDictionary_6)); }
	inline Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * get_soundDataDictionary_6() const { return ___soundDataDictionary_6; }
	inline Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 ** get_address_of_soundDataDictionary_6() { return &___soundDataDictionary_6; }
	inline void set_soundDataDictionary_6(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * value)
	{
		___soundDataDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundDataDictionary_6), (void*)value);
	}
};


// SplashScreen
struct SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button SplashScreen::playButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___playButton_4;

public:
	inline static int32_t get_offset_of_playButton_4() { return static_cast<int32_t>(offsetof(SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8, ___playButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_playButton_4() const { return ___playButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_playButton_4() { return &___playButton_4; }
	inline void set_playButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___playButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playButton_4), (void*)value);
	}
};


// SpriteAnimator
struct SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color SpriteAnimator::startColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startColor_4;
	// UnityEngine.Color SpriteAnimator::endColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endColor_5;
	// UnityEngine.Vector3 SpriteAnimator::startSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startSize_6;
	// UnityEngine.Vector3 SpriteAnimator::endSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endSize_7;
	// System.Single SpriteAnimator::blinkDuration
	float ___blinkDuration_8;
	// System.Single SpriteAnimator::sizeChangeDuration
	float ___sizeChangeDuration_9;
	// System.Single SpriteAnimator::colorChangeDuration
	float ___colorChangeDuration_10;
	// UnityEngine.Coroutine SpriteAnimator::blinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___blinkCoroutine_11;
	// UnityEngine.UI.Image SpriteAnimator::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_12;

public:
	inline static int32_t get_offset_of_startColor_4() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___startColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startColor_4() const { return ___startColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startColor_4() { return &___startColor_4; }
	inline void set_startColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startColor_4 = value;
	}

	inline static int32_t get_offset_of_endColor_5() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___endColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endColor_5() const { return ___endColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endColor_5() { return &___endColor_5; }
	inline void set_endColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endColor_5 = value;
	}

	inline static int32_t get_offset_of_startSize_6() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___startSize_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startSize_6() const { return ___startSize_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startSize_6() { return &___startSize_6; }
	inline void set_startSize_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startSize_6 = value;
	}

	inline static int32_t get_offset_of_endSize_7() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___endSize_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endSize_7() const { return ___endSize_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endSize_7() { return &___endSize_7; }
	inline void set_endSize_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endSize_7 = value;
	}

	inline static int32_t get_offset_of_blinkDuration_8() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___blinkDuration_8)); }
	inline float get_blinkDuration_8() const { return ___blinkDuration_8; }
	inline float* get_address_of_blinkDuration_8() { return &___blinkDuration_8; }
	inline void set_blinkDuration_8(float value)
	{
		___blinkDuration_8 = value;
	}

	inline static int32_t get_offset_of_sizeChangeDuration_9() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___sizeChangeDuration_9)); }
	inline float get_sizeChangeDuration_9() const { return ___sizeChangeDuration_9; }
	inline float* get_address_of_sizeChangeDuration_9() { return &___sizeChangeDuration_9; }
	inline void set_sizeChangeDuration_9(float value)
	{
		___sizeChangeDuration_9 = value;
	}

	inline static int32_t get_offset_of_colorChangeDuration_10() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___colorChangeDuration_10)); }
	inline float get_colorChangeDuration_10() const { return ___colorChangeDuration_10; }
	inline float* get_address_of_colorChangeDuration_10() { return &___colorChangeDuration_10; }
	inline void set_colorChangeDuration_10(float value)
	{
		___colorChangeDuration_10 = value;
	}

	inline static int32_t get_offset_of_blinkCoroutine_11() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___blinkCoroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_blinkCoroutine_11() const { return ___blinkCoroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_blinkCoroutine_11() { return &___blinkCoroutine_11; }
	inline void set_blinkCoroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___blinkCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blinkCoroutine_11), (void*)value);
	}

	inline static int32_t get_offset_of_image_12() { return static_cast<int32_t>(offsetof(SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644, ___image_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_12() const { return ___image_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_12() { return &___image_12; }
	inline void set_image_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UIManager::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_4;
	// UnityEngine.UI.Text UIManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_5;
	// UnityEngine.GameObject UIManager::levelPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelPanel_6;
	// UnityEngine.GameObject UIManager::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_7;
	// UnityEngine.GameObject UIManager::gridPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gridPanel_8;
	// UnityEngine.UI.Button UIManager::homeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___homeButton_9;
	// UnityEngine.GameObject UIManager::particlePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___particlePrefab_10;

public:
	inline static int32_t get_offset_of_levelText_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___levelText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_4() const { return ___levelText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_4() { return &___levelText_4; }
	inline void set_levelText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelPanel_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___levelPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelPanel_6() const { return ___levelPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelPanel_6() { return &___levelPanel_6; }
	inline void set_levelPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_7() const { return ___gameOverPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_7() { return &___gameOverPanel_7; }
	inline void set_gameOverPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_gridPanel_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gridPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gridPanel_8() const { return ___gridPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gridPanel_8() { return &___gridPanel_8; }
	inline void set_gridPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gridPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_homeButton_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___homeButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_homeButton_9() const { return ___homeButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_homeButton_9() { return &___homeButton_9; }
	inline void set_homeButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___homeButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homeButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_particlePrefab_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___particlePrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_particlePrefab_10() const { return ___particlePrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_particlePrefab_10() { return &___particlePrefab_10; }
	inline void set_particlePrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___particlePrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particlePrefab_10), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;

public:
	inline static int32_t get_offset_of_m_Sprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_38() const { return ___m_Sprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_38() { return &___m_Sprite_38; }
	inline void set_m_Sprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_39)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_39() const { return ___m_OverrideSprite_39; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_39() { return &___m_OverrideSprite_39; }
	inline void set_m_OverrideSprite_39(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_40)); }
	inline int32_t get_m_Type_40() const { return ___m_Type_40; }
	inline int32_t* get_address_of_m_Type_40() { return &___m_Type_40; }
	inline void set_m_Type_40(int32_t value)
	{
		___m_Type_40 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_41)); }
	inline bool get_m_PreserveAspect_41() const { return ___m_PreserveAspect_41; }
	inline bool* get_address_of_m_PreserveAspect_41() { return &___m_PreserveAspect_41; }
	inline void set_m_PreserveAspect_41(bool value)
	{
		___m_PreserveAspect_41 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_42)); }
	inline bool get_m_FillCenter_42() const { return ___m_FillCenter_42; }
	inline bool* get_address_of_m_FillCenter_42() { return &___m_FillCenter_42; }
	inline void set_m_FillCenter_42(bool value)
	{
		___m_FillCenter_42 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_43)); }
	inline int32_t get_m_FillMethod_43() const { return ___m_FillMethod_43; }
	inline int32_t* get_address_of_m_FillMethod_43() { return &___m_FillMethod_43; }
	inline void set_m_FillMethod_43(int32_t value)
	{
		___m_FillMethod_43 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_44)); }
	inline float get_m_FillAmount_44() const { return ___m_FillAmount_44; }
	inline float* get_address_of_m_FillAmount_44() { return &___m_FillAmount_44; }
	inline void set_m_FillAmount_44(float value)
	{
		___m_FillAmount_44 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_45)); }
	inline bool get_m_FillClockwise_45() const { return ___m_FillClockwise_45; }
	inline bool* get_address_of_m_FillClockwise_45() { return &___m_FillClockwise_45; }
	inline void set_m_FillClockwise_45(bool value)
	{
		___m_FillClockwise_45 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_46)); }
	inline int32_t get_m_FillOrigin_46() const { return ___m_FillOrigin_46; }
	inline int32_t* get_address_of_m_FillOrigin_46() { return &___m_FillOrigin_46; }
	inline void set_m_FillOrigin_46(int32_t value)
	{
		___m_FillOrigin_46 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_47)); }
	inline float get_m_AlphaHitTestMinimumThreshold_47() const { return ___m_AlphaHitTestMinimumThreshold_47; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_47() { return &___m_AlphaHitTestMinimumThreshold_47; }
	inline void set_m_AlphaHitTestMinimumThreshold_47(float value)
	{
		___m_AlphaHitTestMinimumThreshold_47 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_48)); }
	inline bool get_m_Tracked_48() const { return ___m_Tracked_48; }
	inline bool* get_address_of_m_Tracked_48() { return &___m_Tracked_48; }
	inline void set_m_Tracked_48(bool value)
	{
		___m_Tracked_48 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_49)); }
	inline bool get_m_UseSpriteMesh_49() const { return ___m_UseSpriteMesh_49; }
	inline bool* get_address_of_m_UseSpriteMesh_49() { return &___m_UseSpriteMesh_49; }
	inline void set_m_UseSpriteMesh_49(bool value)
	{
		___m_UseSpriteMesh_49 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_50)); }
	inline float get_m_PixelsPerUnitMultiplier_50() const { return ___m_PixelsPerUnitMultiplier_50; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_50() { return &___m_PixelsPerUnitMultiplier_50; }
	inline void set_m_PixelsPerUnitMultiplier_50(float value)
	{
		___m_PixelsPerUnitMultiplier_50 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_51)); }
	inline float get_m_CachedReferencePixelsPerUnit_51() const { return ___m_CachedReferencePixelsPerUnit_51; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_51() { return &___m_CachedReferencePixelsPerUnit_51; }
	inline void set_m_CachedReferencePixelsPerUnit_51(float value)
	{
		___m_CachedReferencePixelsPerUnit_51 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<SoundType,SoundData>


// System.Collections.Generic.Dictionary`2<SoundType,SoundData>


// System.Collections.Generic.List`1<LevelButton>

struct List_1_t512BD2E7827604F95E1F3D2EF267177681076452_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t512BD2E7827604F95E1F3D2EF267177681076452_StaticFields, ____emptyArray_5)); }
	inline LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LevelButtonU5BU5D_t627242F75E89EDD6A3B67D3B2CA1FFB6FA5AA2FD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LevelButton>


// System.Collections.Generic.List`1<Node>

struct List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_StaticFields, ____emptyArray_5)); }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodeU5BU5D_t16D27D49D756C9A9E706FD681359D1DB338B9ED8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Node>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>


// System.Collections.Generic.List`1<SoundData>

struct List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B_StaticFields, ____emptyArray_5)); }
	inline SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SoundDataU5BU5D_t89F17789F273205FD14C0C9C4E004E80DBB7AB63* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SoundData>


// System.Collections.Generic.Queue`1<UnityEngine.AudioSource>


// System.Collections.Generic.Queue`1<UnityEngine.AudioSource>


// System.Collections.Generic.Queue`1<System.Object>


// System.Collections.Generic.Queue`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Constants


// Constants


// LevelData


// LevelData


// Levels


// Levels


// NodeData


// NodeData


// PlayerProgress


// PlayerProgress


// System.String

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// CameraShake/<Shake>d__8


// CameraShake/<Shake>d__8


// LevelButton/<>c__DisplayClass6_0


// LevelButton/<>c__DisplayClass6_0


// SoundManager/<ReturnAudioSourceToPool>d__8


// SoundManager/<ReturnAudioSourceToPool>d__8


// SpriteAnimator/<BlinkAndChange>d__11


// SpriteAnimator/<BlinkAndChange>d__11


// UIManager/<ShowGameOverPopup>d__11


// UIManager/<ShowGameOverPopup>d__11


// UIManager/<ShowScoreUpdateEffect>d__13


// UIManager/<ShowScoreUpdateEffect>d__13


// System.Collections.Generic.List`1/Enumerator<Node>


// System.Collections.Generic.List`1/Enumerator<Node>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<SoundData>


// System.Collections.Generic.List`1/Enumerator<SoundData>


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IntPtr


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// UnityEngine.Rect


// UnityEngine.Rect


// System.Single


// System.Single


// UnityEngine.UI.SpriteState


// UnityEngine.UI.SpriteState


// UnityEngine.Events.UnityEvent


// UnityEngine.Events.UnityEvent


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// UnityEngine.AsyncOperation


// UnityEngine.AsyncOperation


// UnityEngine.UI.ColorBlock

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.UI.ColorBlock


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Delegate


// System.Delegate


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// GameState


// GameState


// System.Int32Enum


// System.Int32Enum


// UnityEngine.KeyCode


// UnityEngine.KeyCode


// UnityEngine.SceneManagement.LoadSceneMode


// UnityEngine.SceneManagement.LoadSceneMode


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// SoundType


// SoundType


// UnityEngine.UI.Button/ButtonClickedEvent


// UnityEngine.UI.Button/ButtonClickedEvent


// GameManager/<ShowGridInitializeEffect>d__13


// GameManager/<ShowGridInitializeEffect>d__13


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Navigation/Mode


// UnityEngine.UI.Navigation/Mode


// Node/<RotateWithDelay>d__21


// Node/<RotateWithDelay>d__21


// UnityEngine.UI.Selectable/Transition


// UnityEngine.UI.Selectable/Transition


// SpriteAnimator/<ChangeColor>d__12


// SpriteAnimator/<ChangeColor>d__12


// SpriteAnimator/<ChangeSize>d__13


// SpriteAnimator/<ChangeSize>d__13


// UnityEngine.AudioClip


// UnityEngine.AudioClip


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.UI.Navigation


// UnityEngine.UI.Navigation


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// SoundData


// SoundData


// UnityEngine.Sprite


// UnityEngine.Sprite


// System.SystemException


// System.SystemException


// UnityEngine.TextAsset


// UnityEngine.TextAsset


// GameStateMachine/<TransitionToState>d__6


// GameStateMachine/<TransitionToState>d__6


// System.Action`1<System.Int32>


// System.Action`1<System.Int32>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.NotSupportedException


// System.NotSupportedException


// SoundDataContainer


// SoundDataContainer


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.Events.UnityAction


// UnityEngine.Events.UnityAction


// UnityEngine.AudioBehaviour


// UnityEngine.AudioBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.RectTransform

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.RectTransform


// UnityEngine.AudioSource


// UnityEngine.AudioSource


// AudioSourcePool

struct AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields
{
public:
	// AudioSourcePool AudioSourcePool::instance
	AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields, ___instance_4)); }
	inline AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * get_instance_4() const { return ___instance_4; }
	inline AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// AudioSourcePool


// ButtonClickSound


// ButtonClickSound


// CameraShake


// CameraShake


// GameManager

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::Instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___Instance_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_Instance_4() const { return ___Instance_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// GameManager


// GameStateMachine

struct GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_StaticFields
{
public:
	// GameStateMachine GameStateMachine::Instance
	GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_StaticFields, ___Instance_4)); }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * get_Instance_4() const { return ___Instance_4; }
	inline GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// GameStateMachine


// LevelButton


// LevelButton


// LevelManager

struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields
{
public:
	// LevelManager LevelManager::Instance
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields, ___Instance_4)); }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * get_Instance_4() const { return ___Instance_4; }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// LevelManager


// Node


// Node


// PlayerProgressManager

struct PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields
{
public:
	// PlayerProgressManager PlayerProgressManager::Instance
	PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields, ___Instance_4)); }
	inline PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * get_Instance_4() const { return ___Instance_4; }
	inline PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// PlayerProgressManager


// PopUpSound


// PopUpSound


// SceneLoader


// SceneLoader


// SoundManager

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::Instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___Instance_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_Instance_4() const { return ___Instance_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// SoundManager


// SplashScreen


// SplashScreen


// SpriteAnimator


// SpriteAnimator


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UIManager


// UIManager


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.Selectable

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Selectable


// UnityEngine.UI.Button


// UnityEngine.UI.Button


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Image

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_37() const { return ___s_ETC1DefaultUI_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_37() { return &___s_ETC1DefaultUI_37; }
	inline void set_s_ETC1DefaultUI_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_52() const { return ___s_VertScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_52() { return &___s_VertScratch_52; }
	inline void set_s_VertScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_53)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_53() const { return ___s_UVScratch_53; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_53() { return &___s_UVScratch_53; }
	inline void set_s_UVScratch_53(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_54() const { return ___s_Xy_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_54() { return &___s_Xy_54; }
	inline void set_s_Xy_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_55)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_55() const { return ___s_Uv_55; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_55() { return &___s_Uv_55; }
	inline void set_s_Uv_55(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_56)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_56() const { return ___m_TrackedTexturelessImages_56; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_56() { return &___m_TrackedTexturelessImages_56; }
	inline void set_m_TrackedTexturelessImages_56(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_56), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_57() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_57)); }
	inline bool get_s_Initialized_57() const { return ___s_Initialized_57; }
	inline bool* get_address_of_s_Initialized_57() { return &___s_Initialized_57; }
	inline void set_s_Initialized_57(bool value)
	{
		___s_Initialized_57 = value;
	}
};


// UnityEngine.UI.Image


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// NodeData[]
struct NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * m_Items[1];

public:
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Node[0...,0...]
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * m_Items[1];

public:
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LevelData[]
struct LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * m_Items[1];

public:
	inline LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m74B91FA8C557C84FB00E6AB017C2EB5EA45A9BB8_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m8640B63892230D506A8DECFD46A700201A30070A_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void AudioSourcePool::InitializePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool_InitializePool_m13FFFD5DCC0BF3B26D1643FA637085E376000C0B (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.AudioSource>::.ctor()
inline void Queue_1__ctor_m2645169CB38DE43DAE4BF05587D0FBF82497B7AC (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.AudioSource>::Enqueue(!0)
inline void Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009 (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 *, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.AudioSource>::get_Count()
inline int32_t Queue_1_get_Count_mF02AD64E91A8C04DC87F1947D1F6C137C5764F44_inline (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.AudioSource>::Dequeue()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Queue_1_Dequeue_mC6886F9795D317DA3806E75A6D336CD56E55B3B2 (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.UI.Button>(!!0&)
inline bool Component_TryGetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mBF710EB6468C13268C97586CB407964CE200E575 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void SoundManager::PlaySound(SoundType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, int32_t ___soundType0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC (int32_t ___key0, const RuntimeMethod* method);
// System.Void CameraShake::TriggerShake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Collections.IEnumerator CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraShake_Shake_m4D7BD837C1F6FFEA06797B1039E18A0F7BCBC2BA (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void CameraShake/<Shake>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__8__ctor_m9738298CD7CE120EB4EF7B40F5D2EE5925549F34 (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Node>::.ctor()
inline void List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Node>::GetEnumerator()
inline Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Node>::get_Current()
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Node>::MoveNext()
inline bool Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Node>::Dispose()
inline void Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320 (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Clear()
inline void List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85 (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m74B91FA8C557C84FB00E6AB017C2EB5EA45A9BB8_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Node>()
inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GameObject_GetComponent_TisNode_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_mAAA58CDA50E65722F4D7461E53F847A63A429900 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Node::Initialize(NodeData,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Initialize_m00A4373E75009E1072F7EBCA68B8D0F853D2C729 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * ___data0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___nodeSprite1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Node>::Add(!0)
inline void List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7 (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * __this, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator GameManager::ShowGridInitializeEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ShowGridInitializeEffect_mAFBE4B20C13960C54C8103FB86D06EA4C88D5B4D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void GameManager::InitializeGrid(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitializeGrid_m4828993AD8B08518B32D593F185BC380F1AB06C3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___levelData0, const RuntimeMethod* method);
// System.Int32 Node::get_RotationState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_RotationState_m17C839844165DCFD5E9BD71641E6A7C6EBF4E776_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Int32 Node::get_CorrectRotationState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_CorrectRotationState_mF89D488B10355238629B84DA21B19572374D6046_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Void PlayerProgressManager::SaveProgress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager_SaveProgress_m05C9C6480F0C53781C234EEA1FA4B2491E056767 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, int32_t ___currentlevel0, const RuntimeMethod* method);
// System.Void GameManager/<ShowGridInitializeEffect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13__ctor_m26A44B8E11F152DF30CE1DCCCB9B587CC3E11312 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameStateMachine::TransitionToState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStateMachine_TransitionToState_m2B51A9DC67A5C67BA3C924E2629A902F3993E1E5 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Void GameStateMachine/<TransitionToState>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToStateU3Ed__6__ctor_m95DD21C96BD5ED1D9264F7CB9119D3680E7024FC (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LevelButton/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6B44EC806D87619AD8F8893749E1BE3C5DD78AFB (U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LevelButton>::.ctor()
inline void List_1__ctor_mDB800463BB457F895DD2EE96F3A83F977CA84527 (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LevelManager::LoadLevelData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadLevelData_mC2C8D5A3396CF9754054136A405348220820B6E5 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method);
// System.Void LevelManager::DisplayLevelButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DisplayLevelButtons_mC17F44A7F7DAF02319B615672F3C010F7647EB9C (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Levels>(System.String)
inline Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * JsonUtility_FromJson_TisLevels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14_m4789FCCEC594C6FDE8301DFF416A82574E35C3C5 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m8640B63892230D506A8DECFD46A700201A30070A_gshared)(___json0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<LevelButton>()
inline LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * GameObject_GetComponent_TisLevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3_m0023261246826346556DB17CC062B3BC47696335 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LevelButton>::Add(!0)
inline void List_1_Add_m4805793C87BB084A138CC5130512226A180D6E4F (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * __this, LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 *, LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean LevelManager::IsLevelUnlocked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LevelManager_IsLevelUnlocked_m1872D8BA5D8171A0B7D487D4901FD48F58D54F18 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LevelButton::Initialize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton_Initialize_m3BF69C0C761AADB4BB78DF700271CAF998949E46 (LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * __this, int32_t ___levelIndex0, bool ___isUnlocked1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<LevelButton>::get_Count()
inline int32_t List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_inline (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<LevelButton>::get_Item(System.Int32)
inline LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * List_1_get_Item_m2265C6B3AFE62C2DCEEF28B71C7E340D77731DB2_inline (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * (*) (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Node::SimplifyRotationDataForLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SimplifyRotationDataForLine_m22416C1B5F198C587C9CC997907B63D1F3E3F31B (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Void Node::set_DefaultRotationState(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_DefaultRotationState_mB728CDA6B367A0AF5F32303CE7459BE43B24DE72_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Node::set_CorrectRotationState(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_CorrectRotationState_m67666E3543D3C6022F1A6850C6DE0728E54777C9_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Node::get_DefaultRotationState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_DefaultRotationState_m15898274E9A68900776C0C86CF7A93EBEA67524D_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Node::RotateNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_RotateNode_m6BC65859275AE6617B41CF65358433D105D6EC3D (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Void GameManager::CheckForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckForCompletion_mA4B7AE4F4ABE1BAE298805EEE413B42A99850560 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Node::RotateWithDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_RotateWithDelay_m6D4B4B9EE333479F949A33D2BAC08A9A94B5D77F (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Void Node/<RotateWithDelay>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWithDelayU3Ed__21__ctor_m16DF7FE447D389BADECAAE25AAA1D59B4AA2DE2A (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerProgressManager::LoadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager_LoadProgress_m9255ED98A95258C808910D265FC1DFBA52DB5FA5 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mADA45B29271AC37AA40E6491AB58B399A1117925 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<PlayerProgress>(System.String)
inline PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * JsonUtility_FromJson_TisPlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD_m11AE875DC5ADE5C73B5AA92DDA72EC1A13CCA49E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m8640B63892230D506A8DECFD46A700201A30070A_gshared)(___json0, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m491DC338B9CEC36588C29B13673484B9B22348A8 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m811133B822F43BE4C5F7101AFF433ACC857A9361 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m577A632653C7788682CD8FB6579B24B4CE507393 (const RuntimeMethod* method);
// System.Void GameStateMachine::ChangeState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateMachine_ChangeState_m83243E22DA1077FA088134ECDBAD8EF4A4082EA2 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void SoundManager::InitializeSoundDataDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_InitializeSoundDataDictionary_m84430F0F47301E893788D74B08C262768397C6BB (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void SoundManager::InitializeBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_InitializeBackgroundMusic_mA0844EF6D4671412F4893A0492938980BC5B0095 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<SoundType,SoundData>::.ctor()
inline void Dictionary_2__ctor_m2FD6560D787AC9BAB2D75205BCEE4E60A15C1E20 (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SoundData>::GetEnumerator()
inline Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982  List_1_GetEnumerator_m0D46264575EDF37805364A99162453DFF825A4DB (List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982  (*) (List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SoundData>::get_Current()
inline SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * Enumerator_get_Current_mC8D371B16B26BF38F2C43357ADAC7A2CF1DFC722_inline (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 * __this, const RuntimeMethod* method)
{
	return ((  SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * (*) (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<SoundType,SoundData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m57AAE0E8B05CE3D0B64E484436FA6F15487DACE2 (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * __this, int32_t ___key0, SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 *, int32_t, SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC *, const RuntimeMethod*))Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SoundData>::MoveNext()
inline bool Enumerator_MoveNext_mDADDDDEB55CCDFF23195580668F5E4F83A35ACB1 (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SoundData>::Dispose()
inline void Enumerator_Dispose_mB8F7B95CD9CF8420C73305A194316DEF996FE587 (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<SoundType,SoundData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314 (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * __this, int32_t ___key0, SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 *, int32_t, SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.AudioSource AudioSourcePool::GetAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * AudioSourcePool_GetAudioSource_m0632271490DC3E66B4884D06CF525A6FB0062F5A (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SoundManager::ReturnAudioSourceToPool(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundManager_ReturnAudioSourceToPool_mE129CC5FBD62DC7EEA6F998028EF8E3F70C70EF1 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource0, float ___delay1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void SoundManager/<ReturnAudioSourceToPool>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAudioSourceToPoolU3Ed__8__ctor_m24B4353F5B6A3AAE9B0D6AF57B7151A3A372185F (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SplashScreen::OnPlaybuttonclick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_OnPlaybuttonclick_m8DFCE9AD912B8E3CA8A5652D6318AB7A6B24333B (SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator SpriteAnimator::BlinkAndChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_BlinkAndChange_mFFCFB737B79823FA52FFC8137F7A6C217D5D7801 (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, const RuntimeMethod* method);
// System.Void SpriteAnimator/<BlinkAndChange>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkAndChangeU3Ed__11__ctor_m862EF41991A4BD3E67EBCC7F5B3501E7A213E591 (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SpriteAnimator/<ChangeColor>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeColorU3Ed__12__ctor_m012717323E831FB8F226889B8BFC3EDC688BC997 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SpriteAnimator/<ChangeSize>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSizeU3Ed__13__ctor_m28E7720CEA1DB8723AB807C3FBB5B99026700EC3 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_m1BF078396B21EFF0353BE64DEB195ED3BD771D10 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5 (const RuntimeMethod* method);
// System.Void UIManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScore_m9694A97791971272275BFF323E9A180510AEC896 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator UIManager::ShowGameOverPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_ShowGameOverPopup_m6A80EFB840CC8C85F488FB6167E2B39DF4F31112 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::UpdateScoreUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScoreUI_m7F2C4CF1752DB83317B8F3B59D5F137A0136F2BF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::ShowLevelCompleteParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowLevelCompleteParticle_m5D0D62F243AA3ED13EADD7DDDE2EFCA606C6EFC9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager/<ShowGameOverPopup>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGameOverPopupU3Ed__11__ctor_mD1B681D03AD68DD8C4751E8C0C5F141299748BC9 (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator UIManager::ShowScoreUpdateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_ShowScoreUpdateEffect_m25D137B89DE4FB2DBC3A6B3947A5F1E68B9E1D9E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager/<ShowScoreUpdateEffect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowScoreUpdateEffectU3Ed__13__ctor_mFD4672F68871F86010AA1715C2348620934A9DCB (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m751253D644DC9A2E111E5B57921992035E5D8401 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void UIManager::OnHomeButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GameManager/<ShowGridInitializeEffect>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13_U3CU3Em__Finally1_mF4E4A568FD4C098FF04350702D3A9ED1C5E305AF (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void GameManager/<ShowGridInitializeEffect>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13_System_IDisposable_Dispose_m3A159E1AE7FE6D2404BCD1F3B06BC3B873D65831 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_mA75B08308C46B45FDFF3F360B994CDFB6032B497 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m66F7640311F0348778AD5319B50EF800062A7A30 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void GameManager::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartLevel_m6EF4C84465DEAAC39B20FCE444E8922EBEDE24C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___levelIndex0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void AudioSourcePool::ReturnAudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool_ReturnAudioSource_m5DC6F603C3DD1E40FF312939381748CB14A790AB (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource0, const RuntimeMethod* method);
// System.Collections.IEnumerator SpriteAnimator::ChangeColor(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_ChangeColor_m3AAA6531F3F9CBE32C9E0A60548D7F1065AFDE4D (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fromColor0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___toColor1, float ___duration2, const RuntimeMethod* method);
// System.Collections.IEnumerator SpriteAnimator::ChangeSize(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_ChangeSize_mCEB86C1369E1886ADC3C5A1DF5D7C3AB399CC8FD (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromSize0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toSize1, float ___duration2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_m6320057807E1F335970F168403C601EBD2B92062 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578 (float ___f0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioSourcePool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool_Awake_mE37853B6B8029949AA933182FEF647F5BEBA3E53 (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * L_0 = ((AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// instance = this;
		((AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// InitializePool();
		AudioSourcePool_InitializePool_m13FFFD5DCC0BF3B26D1643FA637085E376000C0B(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioSourcePool::InitializePool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool_InitializePool_m13FFFD5DCC0BF3B26D1643FA637085E376000C0B (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m2645169CB38DE43DAE4BF05587D0FBF82497B7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_1 = NULL;
	{
		// audioSources = new Queue<AudioSource>();
		Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * L_0 = (Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 *)il2cpp_codegen_object_new(Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42_il2cpp_TypeInfo_var);
		Queue_1__ctor_m2645169CB38DE43DAE4BF05587D0FBF82497B7AC(L_0, /*hidden argument*/Queue_1__ctor_m2645169CB38DE43DAE4BF05587D0FBF82497B7AC_RuntimeMethod_var);
		__this->set_audioSources_6(L_0);
		// for (int i = 0; i < poolSize; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		// AudioSource audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_1, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		V_1 = L_2;
		// audioSource.playOnAwake = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = V_1;
		NullCheck(L_3);
		AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5(L_3, (bool)0, /*hidden argument*/NULL);
		// audioSources.Enqueue(audioSource);
		Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * L_4 = __this->get_audioSources_6();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = V_1;
		NullCheck(L_4);
		Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009(L_4, L_5, /*hidden argument*/Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009_RuntimeMethod_var);
		// for (int i = 0; i < poolSize; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < poolSize; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_poolSize_5();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.AudioSource AudioSourcePool::GetAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * AudioSourcePool_GetAudioSource_m0632271490DC3E66B4884D06CF525A6FB0062F5A (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mC6886F9795D317DA3806E75A6D336CD56E55B3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mF02AD64E91A8C04DC87F1947D1F6C137C5764F44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSources.Count > 0)
		Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * L_0 = __this->get_audioSources_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_mF02AD64E91A8C04DC87F1947D1F6C137C5764F44_inline(L_0, /*hidden argument*/Queue_1_get_Count_mF02AD64E91A8C04DC87F1947D1F6C137C5764F44_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// return audioSources.Dequeue();
		Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * L_2 = __this->get_audioSources_6();
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Queue_1_Dequeue_mC6886F9795D317DA3806E75A6D336CD56E55B3B2(L_2, /*hidden argument*/Queue_1_Dequeue_mC6886F9795D317DA3806E75A6D336CD56E55B3B2_RuntimeMethod_var);
		return L_3;
	}

IL_001a:
	{
		// AudioSource audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_4, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		// audioSource.playOnAwake = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5;
		NullCheck(L_6);
		AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5(L_6, (bool)0, /*hidden argument*/NULL);
		// return audioSource;
		return L_6;
	}
}
// System.Void AudioSourcePool::ReturnAudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool_ReturnAudioSource_m5DC6F603C3DD1E40FF312939381748CB14A790AB (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ___audioSource0;
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// audioSource.clip = null;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = ___audioSource0;
		NullCheck(L_1);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_1, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL, /*hidden argument*/NULL);
		// audioSources.Enqueue(audioSource);
		Queue_1_t7FB371FE05EADF17A42888618BE287F88FF60C42 * L_2 = __this->get_audioSources_6();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = ___audioSource0;
		NullCheck(L_2);
		Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m6CB215994AC8B4DC8F1D9382D11DECE5E582F009_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioSourcePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourcePool__ctor_m1F5E5413D02CD6C726E4ECF8FD780F997BA2B6D5 (AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * __this, const RuntimeMethod* method)
{
	{
		// private int poolSize = 10;
		__this->set_poolSize_5(((int32_t)10));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonClickSound::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickSound_Awake_m6EB30A0B32E663B19B7305B9E115277E0643798B (ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClickSound_OnButtonClick_m876068ABA461C6120AF6010EC539381A00DF0875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mBF710EB6468C13268C97586CB407964CE200E575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// if (TryGetComponent<Button>(out var button))
		bool L_0;
		L_0 = Component_TryGetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mBF710EB6468C13268C97586CB407964CE200E575(__this, (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D **)(&V_0), /*hidden argument*/Component_TryGetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mBF710EB6468C13268C97586CB407964CE200E575_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// button.onClick.AddListener(OnButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = V_0;
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ButtonClickSound_OnButtonClick_m876068ABA461C6120AF6010EC539381A00DF0875_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ButtonClickSound::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickSound_OnButtonClick_m876068ABA461C6120AF6010EC539381A00DF0875 (ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.PlaySound(soundType);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_1 = __this->get_soundType_4();
		NullCheck(L_0);
		SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonClickSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickSound__ctor_m1C9A28679B76F4AC82EEA33F7F2A6311D45F418F (ButtonClickSound_tD190E1A469E9025FAC9B3ED3E0DF4847E1BAA72D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraShake::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Start_m7EE21012C61A6483A1243FA54E4FDF1CF2555DAA (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent += TriggerShake;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CameraShake::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_OnEnable_mC5F0D09F47325774263C96E1D04D7F5B086A7396 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// initialPosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_initialPosition_7(L_1);
		// }
		return;
	}
}
// System.Void CameraShake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Update_mA645C66F43D75201C877BCB3505623B08C30CCAB (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// TriggerShake(0);
		CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC(__this, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void CameraShake::TriggerShake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Shake());
		RuntimeObject* L_0;
		L_0 = CameraShake_Shake_m4D7BD837C1F6FFEA06797B1039E18A0F7BCBC2BA(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraShake_Shake_m4D7BD837C1F6FFEA06797B1039E18A0F7BCBC2BA (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * L_0 = (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E *)il2cpp_codegen_object_new(U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E_il2cpp_TypeInfo_var);
		U3CShakeU3Ed__8__ctor_m9738298CD7CE120EB4EF7B40F5D2EE5925549F34(L_0, 0, /*hidden argument*/NULL);
		U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void CameraShake::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_OnDestroy_m5F0B48D876F8B530B99803CB6EFBA6BCEAA65DE7 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent -= TriggerShake;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)CameraShake_TriggerShake_m2324C66A16E4B23991A2038E673DC6756B1118DC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CameraShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake__ctor_mB96D113BFE38658F4F65E8AE2F14388045C2AF68 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// public float shakeDuration = 0.5f;
		__this->set_shakeDuration_4((0.5f));
		// public float shakeMagnitude = 0.2f;
		__this->set_shakeMagnitude_5((0.200000003f));
		// public float dampingSpeed = 1.0f;
		__this->set_dampingSpeed_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Constants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__ctor_m0EA1262B0E2FEAFEEA315AD5C2CF86C2B64DF6AF (Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::InitializeGrid(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitializeGrid_m4828993AD8B08518B32D593F185BC380F1AB06C3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___levelData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNode_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_mAAA58CDA50E65722F4D7461E53F847A63A429900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* V_4 = NULL;
	int32_t V_5 = 0;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * V_6 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// grid = new Node[Constants.GridWeidth, Constants.GridHeight];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)5, (il2cpp_array_size_t)6 };
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_0 = (NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5*)GenArrayNew(NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var, L_1);
		__this->set_grid_10(L_0);
		// if (allNodes == null)
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_2 = __this->get_allNodes_11();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// allNodes = new List<Node>();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_3 = (List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F *)il2cpp_codegen_object_new(List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F_il2cpp_TypeInfo_var);
		List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F(L_3, /*hidden argument*/List_1__ctor_mAC78328646CCC83DEDA129AFB38CA1588174167F_RuntimeMethod_var);
		__this->set_allNodes_11(L_3);
		goto IL_0065;
	}

IL_0022:
	{
		// foreach (Node node in allNodes)
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_4 = __this->get_allNodes_11();
		NullCheck(L_4);
		Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  L_5;
		L_5 = List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C(L_4, /*hidden argument*/List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		V_2 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0030:
		{
			// foreach (Node node in allNodes)
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_6;
			L_6 = Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
			// Destroy(node.gameObject);
			NullCheck(L_6);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_7, /*hidden argument*/NULL);
		}

IL_0041:
		{
			// foreach (Node node in allNodes)
			bool L_8;
			L_8 = Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0030;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// allNodes.Clear();
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_9 = __this->get_allNodes_11();
		NullCheck(L_9);
		List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85(L_9, /*hidden argument*/List_1_Clear_m4691D3380ED3D9626652E90E57C4576369ACFC85_RuntimeMethod_var);
	}

IL_0065:
	{
		// float nodeWidth = gridParent.GetComponent<RectTransform>().rect.width / Constants.GridWeidth;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_gridParent_8();
		NullCheck(L_10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11;
		L_11 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_10, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13;
		L_13 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_13/(float)(5.0f)));
		// float nodeHeight = gridParent.GetComponent<RectTransform>().rect.height / Constants.GridHeight;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_gridParent_8();
		NullCheck(L_14);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15;
		L_15 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_14, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_15);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17;
		L_17 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_17/(float)(6.0f)));
		// foreach (NodeData nodeData in levelData.nodes)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_18 = ___levelData0;
		NullCheck(L_18);
		NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* L_19 = L_18->get_nodes_0();
		V_4 = L_19;
		V_5 = 0;
		goto IL_0196;
	}

IL_00b3:
	{
		// foreach (NodeData nodeData in levelData.nodes)
		NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* L_20 = V_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_6 = L_23;
		// GameObject newNode = Instantiate(nodePrefab, gridParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_nodePrefab_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_gridParent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E(L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		// Node nodeComponent = newNode.GetComponent<Node>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = L_26;
		NullCheck(L_27);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_28;
		L_28 = GameObject_GetComponent_TisNode_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_mAAA58CDA50E65722F4D7461E53F847A63A429900(L_27, /*hidden argument*/GameObject_GetComponent_TisNode_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_mAAA58CDA50E65722F4D7461E53F847A63A429900_RuntimeMethod_var);
		V_7 = L_28;
		// float posX = nodeData.x * nodeWidth - gridParent.GetComponent<RectTransform>().rect.width / 2 + nodeWidth / 2;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_29 = V_6;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_x_2();
		float L_31 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_gridParent_8();
		NullCheck(L_32);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33;
		L_33 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_32, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_33);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		L_34 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		float L_35;
		L_35 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		float L_36 = V_0;
		V_8 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_30)), (float)L_31)), (float)((float)((float)L_35/(float)(2.0f))))), (float)((float)((float)L_36/(float)(2.0f)))));
		// float posY = nodeData.y * nodeHeight - gridParent.GetComponent<RectTransform>().rect.height / 2 + nodeHeight / 2;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_37 = V_6;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_y_3();
		float L_39 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_gridParent_8();
		NullCheck(L_40);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_41;
		L_41 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_40, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_41);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42;
		L_42 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_41, /*hidden argument*/NULL);
		V_3 = L_42;
		float L_43;
		L_43 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		float L_44 = V_1;
		V_9 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_38)), (float)L_39)), (float)((float)((float)L_43/(float)(2.0f))))), (float)((float)((float)L_44/(float)(2.0f)))));
		// newNode.transform.localPosition = new Vector3(posX, posY, 0);
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		float L_46 = V_8;
		float L_47 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_48), L_46, L_47, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_45, L_48, /*hidden argument*/NULL);
		// nodeComponent.Initialize(nodeData, allImages[nodeData.itemIndex]);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_49 = V_7;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_50 = V_6;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_51 = __this->get_allImages_9();
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_52 = V_6;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_itemIndex_4();
		NullCheck(L_51);
		int32_t L_54 = L_53;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_49);
		Node_Initialize_m00A4373E75009E1072F7EBCA68B8D0F853D2C729(L_49, L_50, L_55, /*hidden argument*/NULL);
		// grid[nodeData.x, nodeData.y] = nodeComponent;
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_56 = __this->get_grid_10();
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_57 = V_6;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_x_2();
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_y_3();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_61 = V_7;
		NullCheck(L_56);
		(L_56)->SetAt(L_58, L_60, L_61);
		// allNodes.Add(nodeComponent);
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_62 = __this->get_allNodes_11();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_63 = V_7;
		NullCheck(L_62);
		List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7(L_62, L_63, /*hidden argument*/List_1_Add_m24EEBDF2E0549F7716CF2A9911BEAED7452E9AD7_RuntimeMethod_var);
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0196:
	{
		// foreach (NodeData nodeData in levelData.nodes)
		int32_t L_65 = V_5;
		NodeDataU5BU5D_t1E62FA8D9FA03B38B3CCD992212D639431622DD3* L_66 = V_4;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_00b3;
		}
	}
	{
		// StartCoroutine(ShowGridInitializeEffect());
		RuntimeObject* L_67;
		L_67 = GameManager_ShowGridInitializeEffect_mAFBE4B20C13960C54C8103FB86D06EA4C88D5B4D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_68;
		L_68 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartLevel_m6EF4C84465DEAAC39B20FCE444E8922EBEDE24C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___levelIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B2_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B1_0 = NULL;
	LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * G_B6_0 = NULL;
	{
		// levelStartEvent?.Invoke(levelIndex);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_levelStartEvent_6();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		int32_t L_2 = ___levelIndex0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_0012:
	{
		// currentLevel = levelIndex;
		int32_t L_3 = ___levelIndex0;
		__this->set_currentLevel_12(L_3);
		// LevelData levelData = LevelManager.Instance.levels.levels.Length > levelIndex ? LevelManager.Instance.levels.levels[levelIndex] :
		// LevelManager.Instance.levels.levels[UnityEngine.Random.Range(0, LevelManager.Instance.levels.levels.Length-1)];
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_4 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_4);
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_5 = L_4->get_levels_5();
		NullCheck(L_5);
		LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* L_6 = L_5->get_levels_0();
		NullCheck(L_6);
		int32_t L_7 = ___levelIndex0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) > ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_8 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_8);
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_9 = L_8->get_levels_5();
		NullCheck(L_9);
		LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* L_10 = L_9->get_levels_0();
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_11 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_11);
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_12 = L_11->get_levels_5();
		NullCheck(L_12);
		LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* L_13 = L_12->get_levels_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_15 = L_14;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_16 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B6_0 = L_16;
		goto IL_0069;
	}

IL_0058:
	{
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_17 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_17);
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_18 = L_17->get_levels_5();
		NullCheck(L_18);
		LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* L_19 = L_18->get_levels_0();
		int32_t L_20 = ___levelIndex0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		G_B6_0 = L_22;
	}

IL_0069:
	{
		V_0 = G_B6_0;
		// InitializeGrid(levelData);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_23 = V_0;
		GameManager_InitializeGrid_m4828993AD8B08518B32D593F185BC380F1AB06C3(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::CheckForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckForCompletion_mA4B7AE4F4ABE1BAE298805EEE413B42A99850560 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B9_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B8_0 = NULL;
	{
		// foreach (Node node in allNodes)
		List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_0 = __this->get_allNodes_11();
		NullCheck(L_0);
		Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  L_1;
		L_1 = List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C(L_0, /*hidden argument*/List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000e:
		{
			// foreach (Node node in allNodes)
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_2;
			L_2 = Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
			V_1 = L_2;
			// if (node.RotationState != node.CorrectRotationState)
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Node_get_RotationState_m17C839844165DCFD5E9BD71641E6A7C6EBF4E776_inline(L_3, /*hidden argument*/NULL);
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Node_get_CorrectRotationState_mF89D488B10355238629B84DA21B19572374D6046_inline(L_5, /*hidden argument*/NULL);
			if ((((int32_t)L_4) == ((int32_t)L_6)))
			{
				goto IL_0026;
			}
		}

IL_0024:
		{
			// return;
			IL2CPP_LEAVE(0x65, FINALLY_0031);
		}

IL_0026:
		{
			// foreach (Node node in allNodes)
			bool L_7;
			L_7 = Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// PlayerProgressManager.Instance.SaveProgress(currentLevel);
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_8 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_9 = __this->get_currentLevel_12();
		NullCheck(L_8);
		PlayerProgressManager_SaveProgress_m05C9C6480F0C53781C234EEA1FA4B2491E056767(L_8, L_9, /*hidden argument*/NULL);
		// levelCompleteEvent?.Invoke(currentLevel);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = __this->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_11 = L_10;
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_005a:
	{
		int32_t L_12 = __this->get_currentLevel_12();
		NullCheck(G_B9_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B9_0, L_12, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::ShowGridInitializeEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ShowGridInitializeEffect_mAFBE4B20C13960C54C8103FB86D06EA4C88D5B4D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * L_0 = (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 *)il2cpp_codegen_object_new(U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8_il2cpp_TypeInfo_var);
		U3CShowGridInitializeEffectU3Ed__13__ctor_m26A44B8E11F152DF30CE1DCCCB9B587CC3E11312(L_0, 0, /*hidden argument*/NULL);
		U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameState GameStateMachine::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameStateMachine_get_CurrentState_m41094C35ABD20A51473520D25E0C0AF8F6C5B9D1 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, const RuntimeMethod* method)
{
	{
		// public GameState CurrentState => currentState;
		int32_t L_0 = __this->get_currentState_5();
		return L_0;
	}
}
// System.Void GameStateMachine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateMachine_Awake_mA4C9D2C75E580551E094A260C5C5A409B9307DDC (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_0 = ((GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_StaticFields*)il2cpp_codegen_static_fields_for(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_StaticFields*)il2cpp_codegen_static_fields_for(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameStateMachine::ChangeState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateMachine_ChangeState_m83243E22DA1077FA088134ECDBAD8EF4A4082EA2 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		// if (currentState != newState)
		int32_t L_0 = __this->get_currentState_5();
		int32_t L_1 = ___newState0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// StartCoroutine(TransitionToState(newState));
		int32_t L_2 = ___newState0;
		RuntimeObject* L_3;
		L_3 = GameStateMachine_TransitionToState_m2B51A9DC67A5C67BA3C924E2629A902F3993E1E5(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameStateMachine::TransitionToState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStateMachine_TransitionToState_m2B51A9DC67A5C67BA3C924E2629A902F3993E1E5 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * L_0 = (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 *)il2cpp_codegen_object_new(U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006_il2cpp_TypeInfo_var);
		U3CTransitionToStateU3Ed__6__ctor_m95DD21C96BD5ED1D9264F7CB9119D3680E7024FC(L_0, 0, /*hidden argument*/NULL);
		U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * L_2 = L_1;
		int32_t L_3 = ___newState0;
		NullCheck(L_2);
		L_2->set_newState_3(L_3);
		return L_2;
	}
}
// System.Void GameStateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateMachine__ctor_mE8382B1A79D650CCF83F34137502CEAFB63EDE96 (GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelButton::Initialize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton_Initialize_m3BF69C0C761AADB4BB78DF700271CAF998949E46 (LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * __this, int32_t ___levelIndex0, bool ___isUnlocked1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CInitializeU3Eb__0_m12EEC82FD478162EAC1C738E72751E8632D1F808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B5_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B6_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_0 = (U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m6B44EC806D87619AD8F8893749E1BE3C5DD78AFB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_1 = V_0;
		bool L_2 = ___isUnlocked1;
		NullCheck(L_1);
		L_1->set_isUnlocked_0(L_2);
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_3 = V_0;
		int32_t L_4 = ___levelIndex0;
		NullCheck(L_3);
		L_3->set_levelIndex_1(L_4);
		// this.levelIndex = levelIndex;
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_levelIndex_1();
		__this->set_levelIndex_4(L_6);
		// levelIndextext.text = (levelIndex + 1).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_levelIndextext_5();
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_levelIndex_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// button.interactable = isUnlocked;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = __this->get_button_6();
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->get_isUnlocked_0();
		NullCheck(L_11);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_11, L_13, /*hidden argument*/NULL);
		// lockIcon.enabled = !isUnlocked;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_lockIcon_7();
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = L_15->get_isUnlocked_0();
		NullCheck(L_14);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_14, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// bool isCompleted = isUnlocked && PlayerProgressManager.Instance.progress.highestLevelUnlocked > levelIndex;
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_isUnlocked_0();
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_19 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_19);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_20 = L_19->get_progress_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_highestLevelUnlocked_0();
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_levelIndex_1();
		G_B3_0 = ((((int32_t)L_21) > ((int32_t)L_23))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B3_0 = 0;
	}

IL_0082:
	{
		V_1 = (bool)G_B3_0;
		// playIcon.enabled = isUnlocked && !isCompleted;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = __this->get_playIcon_8();
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_25 = V_0;
		NullCheck(L_25);
		bool L_26 = L_25->get_isUnlocked_0();
		G_B4_0 = L_24;
		if (!L_26)
		{
			G_B5_0 = L_24;
			goto IL_0097;
		}
	}
	{
		bool L_27 = V_1;
		G_B6_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0098;
	}

IL_0097:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0098:
	{
		NullCheck(G_B6_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
		// tickIcon.enabled = isCompleted;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_tickIcon_9();
		bool L_29 = V_1;
		NullCheck(L_28);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_28, L_29, /*hidden argument*/NULL);
		// button.onClick.AddListener(() =>
		// {
		//     if (isUnlocked)
		//         GameManager.Instance.StartLevel(levelIndex);
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_30 = __this->get_button_6();
		NullCheck(L_30);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_31;
		L_31 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_30, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * L_32 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_33 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_33, L_32, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CInitializeU3Eb__0_m12EEC82FD478162EAC1C738E72751E8632D1F808_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_31);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_31, L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton__ctor_m7D35B7AC519AF91B2CEF54089E96E2195AC4E99F (LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_mF80D0E2F8270AC175D70DC24BCE7015DC00C4629 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_mE7368816FE1E54297E99A87A07760EDC3A4E6A86 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_0 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_m9B7C3BAF98CDAC3BADCE1790AA5ED55654B41172 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB800463BB457F895DD2EE96F3A83F977CA84527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t512BD2E7827604F95E1F3D2EF267177681076452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent += UpdateLevelButtonsData;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// allLevelButtons = new List<LevelButton>();
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_5 = (List_1_t512BD2E7827604F95E1F3D2EF267177681076452 *)il2cpp_codegen_object_new(List_1_t512BD2E7827604F95E1F3D2EF267177681076452_il2cpp_TypeInfo_var);
		List_1__ctor_mDB800463BB457F895DD2EE96F3A83F977CA84527(L_5, /*hidden argument*/List_1__ctor_mDB800463BB457F895DD2EE96F3A83F977CA84527_RuntimeMethod_var);
		__this->set_allLevelButtons_8(L_5);
		// LoadLevelData();
		LevelManager_LoadLevelData_mC2C8D5A3396CF9754054136A405348220820B6E5(__this, /*hidden argument*/NULL);
		// DisplayLevelButtons();
		LevelManager_DisplayLevelButtons_mC17F44A7F7DAF02319B615672F3C010F7647EB9C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelManager::LoadLevelData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadLevelData_mC2C8D5A3396CF9754054136A405348220820B6E5 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisLevels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14_m4789FCCEC594C6FDE8301DFF416A82574E35C3C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73DFB0B36816C22291AA0C3B410D4F458B670D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85CA32F2C31BFC260EF599F3A70A420711832466);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_0 = NULL;
	{
		// TextAsset jsonData = Resources.Load<TextAsset>("LevelData");
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_0;
		L_0 = Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67(_stringLiteral85CA32F2C31BFC260EF599F3A70A420711832466, /*hidden argument*/Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var);
		V_0 = L_0;
		// if (jsonData != null)
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// levels = JsonUtility.FromJson<Levels>(jsonData.text);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_3, /*hidden argument*/NULL);
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_5;
		L_5 = JsonUtility_FromJson_TisLevels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14_m4789FCCEC594C6FDE8301DFF416A82574E35C3C5(L_4, /*hidden argument*/JsonUtility_FromJson_TisLevels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14_m4789FCCEC594C6FDE8301DFF416A82574E35C3C5_RuntimeMethod_var);
		__this->set_levels_5(L_5);
		// }
		return;
	}

IL_0026:
	{
		// Debug.LogError("Failed to load level data.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral73DFB0B36816C22291AA0C3B410D4F458B670D3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelManager::DisplayLevelButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DisplayLevelButtons_mC17F44A7F7DAF02319B615672F3C010F7647EB9C (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3_m0023261246826346556DB17CC062B3BC47696335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4805793C87BB084A138CC5130512226A180D6E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * V_1 = NULL;
	{
		// for (int i = 0; i < levels.levels.Length * 2; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		// GameObject buttonObject = Instantiate(levelButtonPrefab, levelGridParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelButtonPrefab_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_levelGridParent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF9208F4E5D26BE86A2A74C14692B79D0C9F7026E_RuntimeMethod_var);
		// LevelButton levelButton = buttonObject.GetComponent<LevelButton>();
		NullCheck(L_2);
		LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * L_3;
		L_3 = GameObject_GetComponent_TisLevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3_m0023261246826346556DB17CC062B3BC47696335(L_2, /*hidden argument*/GameObject_GetComponent_TisLevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3_m0023261246826346556DB17CC062B3BC47696335_RuntimeMethod_var);
		V_1 = L_3;
		// allLevelButtons.Add(levelButton);
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_4 = __this->get_allLevelButtons_8();
		LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m4805793C87BB084A138CC5130512226A180D6E4F(L_4, L_5, /*hidden argument*/List_1_Add_m4805793C87BB084A138CC5130512226A180D6E4F_RuntimeMethod_var);
		// levelButton.Initialize(i, IsLevelUnlocked(i));
		LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = LevelManager_IsLevelUnlocked_m1872D8BA5D8171A0B7D487D4901FD48F58D54F18(__this, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		LevelButton_Initialize_m3BF69C0C761AADB4BB78DF700271CAF998949E46(L_6, L_7, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < levels.levels.Length * 2; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < levels.levels.Length * 2; i++)
		int32_t L_11 = V_0;
		Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * L_12 = __this->get_levels_5();
		NullCheck(L_12);
		LevelDataU5BU5D_tE133574D1C3560F677CA466A71EC41B2B5260780* L_13 = L_12->get_levels_0();
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)2)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelManager::UpdateLevelButtonsData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2265C6B3AFE62C2DCEEF28B71C7E340D77731DB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (allLevelButtons != null && allLevelButtons.Count > 0)
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_0 = __this->get_allLevelButtons_8();
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_1 = __this->get_allLevelButtons_8();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_inline(L_1, /*hidden argument*/List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// for (int i = 0; i < allLevelButtons.Count; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// allLevelButtons[i].Initialize(i, IsLevelUnlocked(i));
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_3 = __this->get_allLevelButtons_8();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		LevelButton_t7FE463874B6A77C846FCC54129A2659C64B9DFD3 * L_5;
		L_5 = List_1_get_Item_m2265C6B3AFE62C2DCEEF28B71C7E340D77731DB2_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m2265C6B3AFE62C2DCEEF28B71C7E340D77731DB2_RuntimeMethod_var);
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = LevelManager_IsLevelUnlocked_m1872D8BA5D8171A0B7D487D4901FD48F58D54F18(__this, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		LevelButton_Initialize_m3BF69C0C761AADB4BB78DF700271CAF998949E46(L_5, L_6, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < allLevelButtons.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < allLevelButtons.Count; i++)
		int32_t L_10 = V_0;
		List_1_t512BD2E7827604F95E1F3D2EF267177681076452 * L_11 = __this->get_allLevelButtons_8();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_inline(L_11, /*hidden argument*/List_1_get_Count_m57101252065EC47F802CFE557E6445CE65487E93_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Boolean LevelManager::IsLevelUnlocked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LevelManager_IsLevelUnlocked_m1872D8BA5D8171A0B7D487D4901FD48F58D54F18 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return index <= PlayerProgressManager.Instance.progress.highestLevelUnlocked;
		int32_t L_0 = ___index0;
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_1 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_2 = L_1->get_progress_5();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_highestLevelUnlocked_0();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void LevelManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnDestroy_mF598827E93BBAE0E1C068E11F98B6889BDA3277A (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent -= UpdateLevelButtonsData;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)LevelManager_UpdateLevelButtonsData_mA728EF7C528A27694E23AA18894A2CF44B13C680_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_mD6FAECFAF24E1996EC8147344018498B20E3DE49 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Levels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Levels__ctor_m0911434DADBBA086A2706642BD0444F5F7EADAFC (Levels_tCF46671A384C76BBCBA30CC43EFD383D15EC8C14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Node::get_RotationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_RotationState_m17C839844165DCFD5E9BD71641E6A7C6EBF4E776 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int RotationState { get { return rotationState; } private set { } }
		int32_t L_0 = __this->get_rotationState_4();
		return L_0;
	}
}
// System.Void Node::set_RotationState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_RotationState_m73DB469E867965E8023DCB8BA2604A090CAC86A5 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RotationState { get { return rotationState; } private set { } }
		return;
	}
}
// System.Int32 Node::get_DefaultRotationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_DefaultRotationState_m15898274E9A68900776C0C86CF7A93EBEA67524D (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int DefaultRotationState { get; private set; }
		int32_t L_0 = __this->get_U3CDefaultRotationStateU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Node::set_DefaultRotationState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_DefaultRotationState_mB728CDA6B367A0AF5F32303CE7459BE43B24DE72 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int DefaultRotationState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDefaultRotationStateU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 Node::get_CorrectRotationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_CorrectRotationState_mF89D488B10355238629B84DA21B19572374D6046 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int CorrectRotationState { get; private set; }
		int32_t L_0 = __this->get_U3CCorrectRotationStateU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Node::set_CorrectRotationState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_CorrectRotationState_m67666E3543D3C6022F1A6850C6DE0728E54777C9 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CorrectRotationState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCorrectRotationStateU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Node::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Start_mD5A874701C8F1F302B75996006C85C1064EFC777 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_OnButtonClick_m7CFAEE0E3BF659C51FC3A40AC100A770BF5AD943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nodeButton.onClick.RemoveListener(OnButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_nodeButton_5();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)Node_OnButtonClick_m7CFAEE0E3BF659C51FC3A40AC100A770BF5AD943_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// nodeButton.onClick.AddListener(OnButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_nodeButton_5();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)Node_OnButtonClick_m7CFAEE0E3BF659C51FC3A40AC100A770BF5AD943_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Node::Initialize(NodeData,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Initialize_m00A4373E75009E1072F7EBCA68B8D0F853D2C729 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * ___data0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___nodeSprite1, const RuntimeMethod* method)
{
	{
		// nodeData = data;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_0 = ___data0;
		__this->set_nodeData_8(L_0);
		// if (nodeData.itemIndex == 3)//If index==3 put only 0,1
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_1 = __this->get_nodeData_8();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_itemIndex_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001b;
		}
	}
	{
		// SimplifyRotationDataForLine();
		Node_SimplifyRotationDataForLine_m22416C1B5F198C587C9CC997907B63D1F3E3F31B(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// DefaultRotationState = nodeData.startState;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_3 = __this->get_nodeData_8();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_startState_0();
		Node_set_DefaultRotationState_mB728CDA6B367A0AF5F32303CE7459BE43B24DE72_inline(__this, L_4, /*hidden argument*/NULL);
		// CorrectRotationState = nodeData.correctState;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_5 = __this->get_nodeData_8();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_correctState_1();
		Node_set_CorrectRotationState_m67666E3543D3C6022F1A6850C6DE0728E54777C9_inline(__this, L_6, /*hidden argument*/NULL);
		// nodeImage.transform.rotation = Quaternion.Euler(0, 0, -DefaultRotationState * 90);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_nodeImage_7();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Node_get_DefaultRotationState_m15898274E9A68900776C0C86CF7A93EBEA67524D_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((-L_9)), (int32_t)((int32_t)90))))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_10, /*hidden argument*/NULL);
		// rotationState = DefaultRotationState;
		int32_t L_11;
		L_11 = Node_get_DefaultRotationState_m15898274E9A68900776C0C86CF7A93EBEA67524D_inline(__this, /*hidden argument*/NULL);
		__this->set_rotationState_4(L_11);
		// nodeImage.sprite = nodeSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_nodeImage_7();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = ___nodeSprite1;
		NullCheck(L_12);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Node::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_OnButtonClick_m7CFAEE0E3BF659C51FC3A40AC100A770BF5AD943 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateNode();
		Node_RotateNode_m6BC65859275AE6617B41CF65358433D105D6EC3D(__this, /*hidden argument*/NULL);
		// GameManager.Instance.CheckForCompletion();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		GameManager_CheckForCompletion_mA4B7AE4F4ABE1BAE298805EEE413B42A99850560(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Node::RotateNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_RotateNode_m6BC65859275AE6617B41CF65358433D105D6EC3D (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B4_0 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B5_1 = NULL;
	{
		// if (rotateCoroutine == null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_rotateCoroutine_11();
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		// rotationState = (rotationState + 1) % 4;
		int32_t L_1 = __this->get_rotationState_4();
		__this->set_rotationState_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)4)));
		// if (nodeData.itemIndex == 3)
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_2 = __this->get_nodeData_8();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_itemIndex_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0048;
		}
	}
	{
		// rotationState = rotationState % 2 == 0 ? rotationState % 2 : rotationState % 3;
		int32_t L_4 = __this->get_rotationState_4();
		G_B3_0 = __this;
		if (!((int32_t)((int32_t)L_4%(int32_t)2)))
		{
			G_B4_0 = __this;
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->get_rotationState_4();
		G_B5_0 = ((int32_t)((int32_t)L_5%(int32_t)3));
		G_B5_1 = G_B3_0;
		goto IL_0043;
	}

IL_003b:
	{
		int32_t L_6 = __this->get_rotationState_4();
		G_B5_0 = ((int32_t)((int32_t)L_6%(int32_t)2));
		G_B5_1 = G_B4_0;
	}

IL_0043:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_rotationState_4(G_B5_0);
	}

IL_0048:
	{
		// rotateCoroutine = StartCoroutine(RotateWithDelay());
		RuntimeObject* L_7;
		L_7 = Node_RotateWithDelay_m6D4B4B9EE333479F949A33D2BAC08A9A94B5D77F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		__this->set_rotateCoroutine_11(L_8);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Node::RotateWithDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_RotateWithDelay_m6D4B4B9EE333479F949A33D2BAC08A9A94B5D77F (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * L_0 = (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 *)il2cpp_codegen_object_new(U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7_il2cpp_TypeInfo_var);
		U3CRotateWithDelayU3Ed__21__ctor_m16DF7FE447D389BADECAAE25AAA1D59B4AA2DE2A(L_0, 0, /*hidden argument*/NULL);
		U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Node::SimplifyRotationDataForLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SimplifyRotationDataForLine_m22416C1B5F198C587C9CC997907B63D1F3E3F31B (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B2_0 = NULL;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B3_1 = NULL;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B5_0 = NULL;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * G_B6_1 = NULL;
	{
		//     nodeData.startState = nodeData.startState % 2 == 0 ? nodeData.startState % 2 :
		// nodeData.startState % 3;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_0 = __this->get_nodeData_8();
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_1 = __this->get_nodeData_8();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_startState_0();
		G_B1_0 = L_0;
		if (!((int32_t)((int32_t)L_2%(int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0024;
		}
	}
	{
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_3 = __this->get_nodeData_8();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_startState_0();
		G_B3_0 = ((int32_t)((int32_t)L_4%(int32_t)3));
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0024:
	{
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_5 = __this->get_nodeData_8();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_startState_0();
		G_B3_0 = ((int32_t)((int32_t)L_6%(int32_t)2));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_startState_0(G_B3_0);
		// nodeData.correctState = nodeData.correctState % 2 == 0 ? nodeData.correctState % 2 :
		//     nodeData.correctState % 3;
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_7 = __this->get_nodeData_8();
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_8 = __this->get_nodeData_8();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_correctState_1();
		G_B4_0 = L_7;
		if (!((int32_t)((int32_t)L_9%(int32_t)2)))
		{
			G_B5_0 = L_7;
			goto IL_005a;
		}
	}
	{
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_10 = __this->get_nodeData_8();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_correctState_1();
		G_B6_0 = ((int32_t)((int32_t)L_11%(int32_t)3));
		G_B6_1 = G_B4_0;
		goto IL_0067;
	}

IL_005a:
	{
		NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * L_12 = __this->get_nodeData_8();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_correctState_1();
		G_B6_0 = ((int32_t)((int32_t)L_13%(int32_t)2));
		G_B6_1 = G_B5_0;
	}

IL_0067:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_correctState_1(G_B6_0);
		// }
		return;
	}
}
// System.Void Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m0AEA190CB650FF922EE4686CF7E81AD5ED588C47 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NodeData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData__ctor_m84163A40B6072E92233A2A10D7DEB028906295D7 (NodeData_t0189F0D84AE092732848C6E1DAFB789D34FF487D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerProgress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgress__ctor_mB0F89FE37A01FCEBF854EE895B9C10E52FA02B5D (PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerProgressManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager_Awake_mA0809C1BF2EA24B80BA30543166AAF459E4F9842 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_0 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Instance = this;
		((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// LoadProgress();
		PlayerProgressManager_LoadProgress_m9255ED98A95258C808910D265FC1DFBA52DB5FA5(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerProgressManager::LoadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager_LoadProgress_m9255ED98A95258C808910D265FC1DFBA52DB5FA5 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD_m11AE875DC5ADE5C73B5AA92DDA72EC1A13CCA49E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DC01B4042BC688434B47EC343D01F43A6FE049);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string json = PlayerPrefs.GetString(Constants.ProgressSavingKey, "{}");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mADA45B29271AC37AA40E6491AB58B399A1117925(_stringLiteralF7DC01B4042BC688434B47EC343D01F43A6FE049, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, /*hidden argument*/NULL);
		V_0 = L_0;
		// progress = JsonUtility.FromJson<PlayerProgress>(json);
		String_t* L_1 = V_0;
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_2;
		L_2 = JsonUtility_FromJson_TisPlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD_m11AE875DC5ADE5C73B5AA92DDA72EC1A13CCA49E(L_1, /*hidden argument*/JsonUtility_FromJson_TisPlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD_m11AE875DC5ADE5C73B5AA92DDA72EC1A13CCA49E_RuntimeMethod_var);
		__this->set_progress_5(L_2);
		// }
		return;
	}
}
// System.Void PlayerProgressManager::SaveProgress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager_SaveProgress_m05C9C6480F0C53781C234EEA1FA4B2491E056767 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, int32_t ___currentlevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DC01B4042BC688434B47EC343D01F43A6FE049);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (progress.highestLevelUnlocked <= currentlevel)
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_0 = __this->get_progress_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_highestLevelUnlocked_0();
		int32_t L_2 = ___currentlevel0;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		// progress.highestLevelUnlocked++;
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_3 = __this->get_progress_5();
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_highestLevelUnlocked_0();
		NullCheck(L_4);
		L_4->set_highestLevelUnlocked_0(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0021:
	{
		// progress.score += Constants.ScorePerLevelComplete;
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_6 = __this->get_progress_5();
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_score_1();
		NullCheck(L_7);
		L_7->set_score_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)100))));
		// string json = JsonUtility.ToJson(progress);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_9 = __this->get_progress_5();
		String_t* L_10;
		L_10 = JsonUtility_ToJson_m491DC338B9CEC36588C29B13673484B9B22348A8(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// PlayerPrefs.SetString(Constants.ProgressSavingKey, json);
		String_t* L_11 = V_0;
		PlayerPrefs_SetString_m811133B822F43BE4C5F7101AFF433ACC857A9361(_stringLiteralF7DC01B4042BC688434B47EC343D01F43A6FE049, L_11, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m577A632653C7788682CD8FB6579B24B4CE507393(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerProgressManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProgressManager__ctor_m4FD422CF118E816BFA87077403E57325FD5B58E1 (PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PopUpSound::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpSound_OnEnable_m749F55403230C8868C304097039E98A3741E2D62 (PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.PlaySound(soundType);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_1 = __this->get_soundType_4();
		NullCheck(L_0);
		SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PopUpSound::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpSound_OnDisable_m86AF07F6C8206B603951B1CBE4DF66044C23E04F (PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.PlaySound(SoundType.RotateWhoosh);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D(L_0, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PopUpSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpSound__ctor_m1773F50314D08BE672DB0DD1C6E112A16F9FC088 (PopUpSound_t052736406E3867243AEEC3C653039FDC1F191F54 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader::LoadMainGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadMainGame_m4FD966F76CC24B7A996D0405CFCC736D9CE4CC23 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// gameStateMachine.ChangeState(GameState.Game);
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_0 = __this->get_gameStateMachine_4();
		NullCheck(L_0);
		GameStateMachine_ChangeState_m83243E22DA1077FA088134ECDBAD8EF4A4082EA2(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadGameOver_m0BF3D6AF5DCE9BA382E86086331C143F040EC469 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// gameStateMachine.ChangeState(GameState.Gameover);
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_0 = __this->get_gameStateMachine_4();
		NullCheck(L_0);
		GameStateMachine_ChangeState_m83243E22DA1077FA088134ECDBAD8EF4A4082EA2(L_0, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m8708D080848349110CEA260D8779F30BD5823912 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundData__ctor_mC8031F4C0DB0661832D56C2449D38B07302C83C1 (SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * __this, const RuntimeMethod* method)
{
	{
		// public float volume = 1f;
		__this->set_volume_2((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundDataContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundDataContainer__ctor_m00A81113A85DE5B6EA5B66CD64823041E1B18BB5 (SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(L_2, /*hidden argument*/NULL);
		// InitializeSoundDataDictionary();
		SoundManager_InitializeSoundDataDictionary_m84430F0F47301E893788D74B08C262768397C6BB(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// InitializeBackgroundMusic();
		SoundManager_InitializeBackgroundMusic_mA0844EF6D4671412F4893A0492938980BC5B0095(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::InitializeSoundDataDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_InitializeSoundDataDictionary_m84430F0F47301E893788D74B08C262768397C6BB (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2FD6560D787AC9BAB2D75205BCEE4E60A15C1E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m57AAE0E8B05CE3D0B64E484436FA6F15487DACE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB8F7B95CD9CF8420C73305A194316DEF996FE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDADDDDEB55CCDFF23195580668F5E4F83A35ACB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC8D371B16B26BF38F2C43357ADAC7A2CF1DFC722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D46264575EDF37805364A99162453DFF825A4DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// soundDataDictionary = new Dictionary<SoundType, SoundData>();
		Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * L_0 = (Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 *)il2cpp_codegen_object_new(Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2FD6560D787AC9BAB2D75205BCEE4E60A15C1E20(L_0, /*hidden argument*/Dictionary_2__ctor_m2FD6560D787AC9BAB2D75205BCEE4E60A15C1E20_RuntimeMethod_var);
		__this->set_soundDataDictionary_6(L_0);
		// foreach (SoundData soundData in soundDataContainer.soundDataList)
		SoundDataContainer_t5A9205CDB24C25E20E4F214FE23522E1F93983B9 * L_1 = __this->get_soundDataContainer_5();
		NullCheck(L_1);
		List_1_tF8FA3D16106B680DF70B5A6156AC9AAD61488E3B * L_2 = L_1->get_soundDataList_4();
		NullCheck(L_2);
		Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982  L_3;
		L_3 = List_1_GetEnumerator_m0D46264575EDF37805364A99162453DFF825A4DB(L_2, /*hidden argument*/List_1_GetEnumerator_m0D46264575EDF37805364A99162453DFF825A4DB_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001e:
		{
			// foreach (SoundData soundData in soundDataContainer.soundDataList)
			SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_4;
			L_4 = Enumerator_get_Current_mC8D371B16B26BF38F2C43357ADAC7A2CF1DFC722_inline((Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC8D371B16B26BF38F2C43357ADAC7A2CF1DFC722_RuntimeMethod_var);
			V_1 = L_4;
			// soundDataDictionary[soundData.soundType] = soundData;
			Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * L_5 = __this->get_soundDataDictionary_6();
			SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_soundType_0();
			SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_8 = V_1;
			NullCheck(L_5);
			Dictionary_2_set_Item_m57AAE0E8B05CE3D0B64E484436FA6F15487DACE2(L_5, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m57AAE0E8B05CE3D0B64E484436FA6F15487DACE2_RuntimeMethod_var);
		}

IL_0038:
		{
			// foreach (SoundData soundData in soundDataContainer.soundDataList)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDADDDDEB55CCDFF23195580668F5E4F83A35ACB1((Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mDADDDDEB55CCDFF23195580668F5E4F83A35ACB1_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001e;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB8F7B95CD9CF8420C73305A194316DEF996FE587((Enumerator_tC303D942A60D8C45278FC6F54CAC4262918B8982 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB8F7B95CD9CF8420C73305A194316DEF996FE587_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void SoundManager::InitializeBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_InitializeBackgroundMusic_mA0844EF6D4671412F4893A0492938980BC5B0095 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * V_0 = NULL;
	{
		// if (soundDataDictionary.TryGetValue(SoundType.BackgroundMusic, out SoundData backgroundMusicData))
		Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * L_0 = __this->get_soundDataDictionary_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314(L_0, 0, (SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// AudioSource backgroundMusicSource = AudioSourcePool.instance.GetAudioSource();
		AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * L_2 = ((AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = AudioSourcePool_GetAudioSource_m0632271490DC3E66B4884D06CF525A6FB0062F5A(L_2, /*hidden argument*/NULL);
		// backgroundMusicSource.clip = backgroundMusicData.audioClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_5 = V_0;
		NullCheck(L_5);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = L_5->get_audioClip_1();
		NullCheck(L_4);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_4, L_6, /*hidden argument*/NULL);
		// backgroundMusicSource.volume = backgroundMusicData.volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_4;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->get_volume_2();
		NullCheck(L_7);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_7, L_9, /*hidden argument*/NULL);
		// backgroundMusicSource.loop = backgroundMusicData.loop;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_7;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_loop_3();
		NullCheck(L_10);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_10, L_12, /*hidden argument*/NULL);
		// backgroundMusicSource.Play();
		NullCheck(L_10);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(SoundType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, int32_t ___soundType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundType_tEB44E5E292DCA787FB8663022C12E7C92F6A23DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA573EBD7360C30E3218486FC8AB6F0C584F2A968);
		s_Il2CppMethodInitialized = true;
	}
	SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * V_0 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_1 = NULL;
	{
		// if (soundDataDictionary.TryGetValue(soundType, out SoundData soundData))
		Dictionary_2_t837C1EBEDDBDE5960C8DDB0432382905F8E079C4 * L_0 = __this->get_soundDataDictionary_6();
		int32_t L_1 = ___soundType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314(L_0, L_1, (SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5FA19791A82E9941231E63D2F0EAA32279031314_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// AudioSource audioSource = AudioSourcePool.instance.GetAudioSource();
		AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * L_3 = ((AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = AudioSourcePool_GetAudioSource_m0632271490DC3E66B4884D06CF525A6FB0062F5A(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// audioSource.clip = soundData.audioClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = V_1;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_6 = V_0;
		NullCheck(L_6);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = L_6->get_audioClip_1();
		NullCheck(L_5);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_5, L_7, /*hidden argument*/NULL);
		// audioSource.volume = soundData.volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = V_1;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = L_9->get_volume_2();
		NullCheck(L_8);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_8, L_10, /*hidden argument*/NULL);
		// audioSource.loop = soundData.loop;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = V_1;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->get_loop_3();
		NullCheck(L_11);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_11, L_13, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = V_1;
		NullCheck(L_14);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_14, /*hidden argument*/NULL);
		// StartCoroutine(ReturnAudioSourceToPool(audioSource, soundData.audioClip.length));
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = V_1;
		SoundData_t6373EFB51D076A83946B6C12799B33840BCE35EC * L_16 = V_0;
		NullCheck(L_16);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = L_16->get_audioClip_1();
		NullCheck(L_17);
		float L_18;
		L_18 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_17, /*hidden argument*/NULL);
		RuntimeObject* L_19;
		L_19 = SoundManager_ReturnAudioSourceToPool_mE129CC5FBD62DC7EEA6F998028EF8E3F70C70EF1(__this, L_15, L_18, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_20;
		L_20 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005f:
	{
		// Debug.LogWarning("SoundManager: SoundType " + soundType + " not found!");
		RuntimeObject * L_21 = Box(SoundType_tEB44E5E292DCA787FB8663022C12E7C92F6A23DE_il2cpp_TypeInfo_var, (&___soundType0));
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		___soundType0 = *(int32_t*)UnBox(L_21);
		String_t* L_23;
		L_23 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralA573EBD7360C30E3218486FC8AB6F0C584F2A968, L_22, _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SoundManager::ReturnAudioSourceToPool(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SoundManager_ReturnAudioSourceToPool_mE129CC5FBD62DC7EEA6F998028EF8E3F70C70EF1 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * L_0 = (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 *)il2cpp_codegen_object_new(U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984_il2cpp_TypeInfo_var);
		U3CReturnAudioSourceToPoolU3Ed__8__ctor_m24B4353F5B6A3AAE9B0D6AF57B7151A3A372185F(L_0, 0, /*hidden argument*/NULL);
		U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * L_1 = L_0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = ___audioSource0;
		NullCheck(L_1);
		L_1->set_audioSource_3(L_2);
		U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SplashScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_Awake_m164FD1C8ABC333C5FFDE310FC514670848B204BF (SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplashScreen_U3CAwakeU3Eb__1_0_m1626161C4BC967055671D6B5CC321C36F9823735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playButton.onClick.AddListener(() =>
		// {
		//     OnPlaybuttonclick();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_playButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)SplashScreen_U3CAwakeU3Eb__1_0_m1626161C4BC967055671D6B5CC321C36F9823735_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SplashScreen::OnPlaybuttonclick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_OnPlaybuttonclick_m8DFCE9AD912B8E3CA8A5652D6318AB7A6B24333B (SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameStateMachine.Instance.ChangeState(GameState.Game);
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_0 = ((GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_StaticFields*)il2cpp_codegen_static_fields_for(GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		GameStateMachine_ChangeState_m83243E22DA1077FA088134ECDBAD8EF4A4082EA2(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SplashScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen__ctor_m2BA9CFA9B2945DD7C9627BD0CE0786BC5EA8707C (SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SplashScreen::<Awake>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_U3CAwakeU3Eb__1_0_m1626161C4BC967055671D6B5CC321C36F9823735 (SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * __this, const RuntimeMethod* method)
{
	{
		// OnPlaybuttonclick();
		SplashScreen_OnPlaybuttonclick_m8DFCE9AD912B8E3CA8A5652D6318AB7A6B24333B(__this, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteAnimator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAnimator_Awake_m3CCFA3D606F36B0D987E53CDAF388F371141E50C (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_image_12(L_0);
		// GameManager.Instance.levelCompleteEvent += ShowAnimation;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = L_1;
		NullCheck(L_2);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = L_2->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_4, __this, (intptr_t)((intptr_t)SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_5, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SpriteAnimator::ShowAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		// if (blinkCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_blinkCoroutine_11();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// StopCoroutine(blinkCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get_blinkCoroutine_11();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// blinkCoroutine = StartCoroutine(BlinkAndChange());
		RuntimeObject* L_2;
		L_2 = SpriteAnimator_BlinkAndChange_mFFCFB737B79823FA52FFC8137F7A6C217D5D7801(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		__this->set_blinkCoroutine_11(L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpriteAnimator::BlinkAndChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_BlinkAndChange_mFFCFB737B79823FA52FFC8137F7A6C217D5D7801 (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * L_0 = (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC *)il2cpp_codegen_object_new(U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC_il2cpp_TypeInfo_var);
		U3CBlinkAndChangeU3Ed__11__ctor_m862EF41991A4BD3E67EBCC7F5B3501E7A213E591(L_0, 0, /*hidden argument*/NULL);
		U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SpriteAnimator::ChangeColor(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_ChangeColor_m3AAA6531F3F9CBE32C9E0A60548D7F1065AFDE4D (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fromColor0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___toColor1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * L_0 = (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 *)il2cpp_codegen_object_new(U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002_il2cpp_TypeInfo_var);
		U3CChangeColorU3Ed__12__ctor_m012717323E831FB8F226889B8BFC3EDC688BC997(L_0, 0, /*hidden argument*/NULL);
		U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * L_2 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___fromColor0;
		NullCheck(L_2);
		L_2->set_fromColor_3(L_3);
		U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * L_4 = L_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___toColor1;
		NullCheck(L_4);
		L_4->set_toColor_4(L_5);
		U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * L_6 = L_4;
		float L_7 = ___duration2;
		NullCheck(L_6);
		L_6->set_duration_5(L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator SpriteAnimator::ChangeSize(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteAnimator_ChangeSize_mCEB86C1369E1886ADC3C5A1DF5D7C3AB399CC8FD (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromSize0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toSize1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * L_0 = (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 *)il2cpp_codegen_object_new(U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42_il2cpp_TypeInfo_var);
		U3CChangeSizeU3Ed__13__ctor_m28E7720CEA1DB8723AB807C3FBB5B99026700EC3(L_0, 0, /*hidden argument*/NULL);
		U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___fromSize0;
		NullCheck(L_2);
		L_2->set_fromSize_3(L_3);
		U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * L_4 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___toSize1;
		NullCheck(L_4);
		L_4->set_toSize_4(L_5);
		U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * L_6 = L_4;
		float L_7 = ___duration2;
		NullCheck(L_6);
		L_6->set_duration_5(L_7);
		return L_6;
	}
}
// System.Void SpriteAnimator::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAnimator_OnDestroy_mD55F7910037E905A41E99FB80A22CCB16BCB5163 (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent -= ShowAnimation;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)SpriteAnimator_ShowAnimation_m8D6CAADB498FFCF76EB635634EFD7A411EC1579F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SpriteAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAnimator__ctor_mABD8657AA12E9173A6DEF839438FFF65F97837ED (SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * __this, const RuntimeMethod* method)
{
	{
		// private Color startColor = Color.grey;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_grey_m1BF078396B21EFF0353BE64DEB195ED3BD771D10(/*hidden argument*/NULL);
		__this->set_startColor_4(L_0);
		// private Color endColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		__this->set_endColor_5(L_1);
		// private Vector3 startSize = new Vector3(1, 1, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_startSize_6(L_2);
		// private Vector3 endSize = new Vector3(1.2f, 1.2f, 1.2f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.20000005f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		__this->set_endSize_7(L_3);
		// private readonly float blinkDuration = 0.2f;
		__this->set_blinkDuration_8((0.200000003f));
		// private readonly float sizeChangeDuration = 0.5f;
		__this->set_sizeChangeDuration_9((0.5f));
		// private readonly float colorChangeDuration = 0.5f;
		__this->set_colorChangeDuration_10((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_OnLevelComplete_m215507523025C3A317A1AD9657C9200CF3165EC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_OnLevelStart_m74E3DBFCFF3C489569159BE810F0E80284762D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CStartU3Eb__7_0_mE32DC4F72CA20C134E18F50A2E29160B06B61A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.levelCompleteEvent += OnLevelComplete;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1->get_levelCompleteEvent_5();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)UIManager_OnLevelComplete_m215507523025C3A317A1AD9657C9200CF3165EC2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_levelCompleteEvent_5(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// GameManager.Instance.levelStartEvent += OnLevelStart;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = L_5;
		NullCheck(L_6);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = L_6->get_levelStartEvent_6();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_8, __this, (intptr_t)((intptr_t)UIManager_OnLevelStart_m74E3DBFCFF3C489569159BE810F0E80284762D06_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_9;
		L_9 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_levelStartEvent_6(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_9, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// homeButton.onClick.RemoveListener(OnHomeButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_homeButton_9();
		NullCheck(L_10);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_11;
		L_11 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_10, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_12 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_12, __this, (intptr_t)((intptr_t)UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_11, L_12, /*hidden argument*/NULL);
		// homeButton.onClick.AddListener(() =>
		// {
		//     OnHomeButtonClick();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_homeButton_9();
		NullCheck(L_13);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_14;
		L_14 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_13, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_15 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_15, __this, (intptr_t)((intptr_t)UIManager_U3CStartU3Eb__7_0_mE32DC4F72CA20C134E18F50A2E29160B06B61A54_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_14, L_15, /*hidden argument*/NULL);
		// UpdateScore();
		UIManager_UpdateScore_m9694A97791971272275BFF323E9A180510AEC896(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::OnLevelStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnLevelStart_m74E3DBFCFF3C489569159BE810F0E80284762D06 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	{
		// gridPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gridPanel_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// levelPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_levelPanel_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::OnLevelComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnLevelComplete_m215507523025C3A317A1AD9657C9200CF3165EC2 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F4944197FE0B9FCD3F72A3157C3615D512B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// levelText.text = "Level " + (obj +1).ToString() +" Completed";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_levelText_4();
		int32_t L_1 = ___obj0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_2, _stringLiteral24F4944197FE0B9FCD3F72A3157C3615D512B09A, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// StartCoroutine(ShowGameOverPopup());
		RuntimeObject* L_4;
		L_4 = UIManager_ShowGameOverPopup_m6A80EFB840CC8C85F488FB6167E2B39DF4F31112(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// UpdateScoreUI();
		UIManager_UpdateScoreUI_m7F2C4CF1752DB83317B8F3B59D5F137A0136F2BF(__this, /*hidden argument*/NULL);
		// ShowLevelCompleteParticle();
		UIManager_ShowLevelCompleteParticle_m5D0D62F243AA3ED13EADD7DDDE2EFCA606C6EFC9(__this, /*hidden argument*/NULL);
		// SoundManager.Instance.PlaySound(SoundType.LevelComplete);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_6 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_6);
		SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D(L_6, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::OnHomeButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// levelPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelPanel_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// gridPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_gridPanel_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameOverPanel_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UIManager::ShowGameOverPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_ShowGameOverPopup_m6A80EFB840CC8C85F488FB6167E2B39DF4F31112 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * L_0 = (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 *)il2cpp_codegen_object_new(U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6_il2cpp_TypeInfo_var);
		U3CShowGameOverPopupU3Ed__11__ctor_mD1B681D03AD68DD8C4751E8C0C5F141299748BC9(L_0, 0, /*hidden argument*/NULL);
		U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UIManager::UpdateScoreUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScoreUI_m7F2C4CF1752DB83317B8F3B59D5F137A0136F2BF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(ShowScoreUpdateEffect());
		RuntimeObject* L_0;
		L_0 = UIManager_ShowScoreUpdateEffect_m25D137B89DE4FB2DBC3A6B3947A5F1E68B9E1D9E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UIManager::ShowScoreUpdateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_ShowScoreUpdateEffect_m25D137B89DE4FB2DBC3A6B3947A5F1E68B9E1D9E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * L_0 = (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C *)il2cpp_codegen_object_new(U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C_il2cpp_TypeInfo_var);
		U3CShowScoreUpdateEffectU3Ed__13__ctor_mFD4672F68871F86010AA1715C2348620934A9DCB(L_0, 0, /*hidden argument*/NULL);
		U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UIManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScore_m9694A97791971272275BFF323E9A180510AEC896 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = PlayerProgressManager.Instance.progress.score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_5();
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_1 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_2 = L_1->get_progress_5();
		NullCheck(L_2);
		int32_t* L_3 = L_2->get_address_of_score_1();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void UIManager::ShowLevelCompleteParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowLevelCompleteParticle_m5D0D62F243AA3ED13EADD7DDDE2EFCA606C6EFC9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject particle = Instantiate(particlePrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_particlePrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		// Destroy(particle, Constants.ParticleShowDuration);
		Object_Destroy_m751253D644DC9A2E111E5B57921992035E5D8401(L_1, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::<Start>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CStartU3Eb__7_0_mE32DC4F72CA20C134E18F50A2E29160B06B61A54 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// OnHomeButtonClick();
		UIManager_OnHomeButtonClick_m59594761F302DF4DAACADC110B39A64652D938FC(__this, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraShake/<Shake>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__8__ctor_m9738298CD7CE120EB4EF7B40F5D2EE5925549F34 (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CameraShake/<Shake>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__8_System_IDisposable_Dispose_mEB72647BCCDEF0E0C42A55F7A9BFBEC1F1BA925A (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CameraShake/<Shake>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__8_MoveNext_m964745161AB8C1A67B78652FCBE957090A704837 (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float elapsed = 0f;
		__this->set_U3CelapsedU3E5__2_3((0.0f));
		goto IL_00a2;
	}

IL_002e:
	{
		// float x = Random.Range(-1f, 1f) * shakeMagnitude;
		float L_4;
		L_4 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-1.0f), (1.0f), /*hidden argument*/NULL);
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_shakeMagnitude_5();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_6));
		// float y = Random.Range(-1f, 1f) * shakeMagnitude;
		float L_7;
		L_7 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-1.0f), (1.0f), /*hidden argument*/NULL);
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_shakeMagnitude_5();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		// transform.localPosition = new Vector3(x, y, initialPosition.z);
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		float L_12 = V_2;
		float L_13 = V_3;
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = L_14->get_address_of_initialPosition_7();
		float L_16 = L_15->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), L_12, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_17, /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_18 = __this->get_U3CelapsedU3E5__2_3();
		float L_19;
		L_19 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__2_3(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a2:
	{
		// while (elapsed < shakeDuration)
		float L_20 = __this->get_U3CelapsedU3E5__2_3();
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_shakeDuration_4();
		if ((((float)L_20) < ((float)L_22)))
		{
			goto IL_002e;
		}
	}
	{
		// transform.localPosition = initialPosition;
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_25 = V_1;
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = L_25->get_initialPosition_7();
		NullCheck(L_24);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_24, L_26, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object CameraShake/<Shake>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54610A3900A385D46EC8CE93735652AC2A56052B (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CameraShake/<Shake>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__8_System_Collections_IEnumerator_Reset_mF03B1AAEBEED16C7BD7DBF89CA6F39B022532090 (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__8_System_Collections_IEnumerator_Reset_mF03B1AAEBEED16C7BD7DBF89CA6F39B022532090_RuntimeMethod_var)));
	}
}
// System.Object CameraShake/<Shake>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__8_System_Collections_IEnumerator_get_Current_mAA41ABF5F15B8B84C0D98907BEFAA9AFCA11CFC0 (U3CShakeU3Ed__8_tEADDD316B2F1A81D72BE4EAFF11A633D6934B49E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<ShowGridInitializeEffect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13__ctor_m26A44B8E11F152DF30CE1DCCCB9B587CC3E11312 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<ShowGridInitializeEffect>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13_System_IDisposable_Dispose_m3A159E1AE7FE6D2404BCD1F3B06BC3B873D65831 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CShowGridInitializeEffectU3Ed__13_U3CU3Em__Finally1_mF4E4A568FD4C098FF04350702D3A9ED1C5E305AF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GameManager/<ShowGridInitializeEffect>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowGridInitializeEffectU3Ed__13_MoveNext_m5A73802EE9013F894B8FCDB97D2D85C51C6E1FC7 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_004c;
				}
				case 2:
				{
					goto IL_009f;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return new WaitForSeconds(Constants.GridAppearDelay);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.200000003f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_3);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_004c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (Node node in allNodes)
			GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_2;
			NullCheck(L_4);
			List_1_tF3AE7D98EE2F8A20A70A589C3C6E1D52F352ED8F * L_5 = L_4->get_allNodes_11();
			NullCheck(L_5);
			Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7  L_6;
			L_6 = List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C(L_5, /*hidden argument*/List_1_GetEnumerator_m38D1B118E403D2E781DC55EC89D2FD103623733C_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a7;
		}

IL_006e:
		{
			// foreach (Node node in allNodes)
			Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_8;
			L_8 = Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_inline((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)L_7, /*hidden argument*/Enumerator_get_Current_m17DD8469719F417F8EBD63D81D08D70AF3218537_RuntimeMethod_var);
			// node.gameObject.SetActive(true);
			NullCheck(L_8);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
			// yield return new WaitForSeconds(Constants.GridAppearDelay);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (0.200000003f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_009f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00a7:
		{
			// foreach (Node node in allNodes)
			Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * L_11 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_12;
			L_12 = Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)L_11, /*hidden argument*/Enumerator_MoveNext_mDFA6D197C3043E908ADC84D1B9C96CE446AEDFAE_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_006e;
			}
		}

IL_00b4:
		{
			U3CShowGridInitializeEffectU3Ed__13_U3CU3Em__Finally1_mF4E4A568FD4C098FF04350702D3A9ED1C5E305AF(__this, /*hidden argument*/NULL);
			Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * L_13 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_13, sizeof(Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 ));
			// }
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		U3CShowGridInitializeEffectU3Ed__13_System_IDisposable_Dispose_m3A159E1AE7FE6D2404BCD1F3B06BC3B873D65831(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void GameManager/<ShowGridInitializeEffect>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13_U3CU3Em__Finally1_mF4E4A568FD4C098FF04350702D3A9ED1C5E305AF (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320((Enumerator_t4B1F14C4FC440423B986527F4702EA7FCE5B50F7 *)L_0, /*hidden argument*/Enumerator_Dispose_m747BCD4AAEE16E53598B13B6BC432F5E0871C320_RuntimeMethod_var);
		return;
	}
}
// System.Object GameManager/<ShowGridInitializeEffect>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGridInitializeEffectU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEB6A145824590DF4A0FFD13387D4219BF259E58B (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<ShowGridInitializeEffect>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGridInitializeEffectU3Ed__13_System_Collections_IEnumerator_Reset_m6469183A7374F2168DCCACB41179689B62BFD097 (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowGridInitializeEffectU3Ed__13_System_Collections_IEnumerator_Reset_m6469183A7374F2168DCCACB41179689B62BFD097_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ShowGridInitializeEffect>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGridInitializeEffectU3Ed__13_System_Collections_IEnumerator_get_Current_m9759813E21977AE9C59069025CC04954B5CD0DFC (U3CShowGridInitializeEffectU3Ed__13_tF8957BE285355F2EA67817AB16A3A55C3A05D8A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameStateMachine/<TransitionToState>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToStateU3Ed__6__ctor_m95DD21C96BD5ED1D9264F7CB9119D3680E7024FC (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameStateMachine/<TransitionToState>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToStateU3Ed__6_System_IDisposable_Dispose_m251D0D3C4F1EAE9C63EB4F5EE3CBC9C5A76D66B3 (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameStateMachine/<TransitionToState>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTransitionToStateU3Ed__6_MoveNext_m590FE3DB75EE3E68A4C19C67CF3111463A6613E1 (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CEBAB82A7CF5338835BFB5ECFC8B4C302C717D6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00a4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (currentState != GameState.Game)
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_currentState_5();
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		// Debug.Log("Unloading: " + currentState.ToString());
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_5 = V_1;
		NullCheck(L_5);
		int32_t* L_6 = L_5->get_address_of_currentState_5();
		RuntimeObject * L_7 = Box(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		*L_6 = *(int32_t*)UnBox(L_7);
		String_t* L_9;
		L_9 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral5CEBAB82A7CF5338835BFB5ECFC8B4C302C717D6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_9, /*hidden argument*/NULL);
		// yield return SceneManager.UnloadSceneAsync(currentState.ToString());
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_10 = V_1;
		NullCheck(L_10);
		int32_t* L_11 = L_10->get_address_of_currentState_5();
		RuntimeObject * L_12 = Box(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		*L_11 = *(int32_t*)UnBox(L_12);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_14;
		L_14 = SceneManager_UnloadSceneAsync_mA75B08308C46B45FDFF3F360B994CDFB6032B497(L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007e:
	{
		// yield return SceneManager.LoadSceneAsync(newState.ToString(), LoadSceneMode.Single);
		int32_t* L_15 = __this->get_address_of_newState_3();
		RuntimeObject * L_16 = Box(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		*L_15 = *(int32_t*)UnBox(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_18;
		L_18 = SceneManager_LoadSceneAsync_m66F7640311F0348778AD5319B50EF800062A7A30(L_17, 0, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// currentState = newState;
		GameStateMachine_tCA1F164B24AC7443662F525EA062E286BA395928 * L_19 = V_1;
		int32_t L_20 = __this->get_newState_3();
		NullCheck(L_19);
		L_19->set_currentState_5(L_20);
		// }
		return (bool)0;
	}
}
// System.Object GameStateMachine/<TransitionToState>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTransitionToStateU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8EC1C32D004F20E23FFBF58AD2828836B2374A64 (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameStateMachine/<TransitionToState>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToStateU3Ed__6_System_Collections_IEnumerator_Reset_m3C9E9C8DDB7E18C825C793ED0DF50391746E5CE3 (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTransitionToStateU3Ed__6_System_Collections_IEnumerator_Reset_m3C9E9C8DDB7E18C825C793ED0DF50391746E5CE3_RuntimeMethod_var)));
	}
}
// System.Object GameStateMachine/<TransitionToState>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTransitionToStateU3Ed__6_System_Collections_IEnumerator_get_Current_m3D52B4D7EFCD7616FA992AAF670B6EFC1C6E2716 (U3CTransitionToStateU3Ed__6_t445C3B8FA9A79D4B94AEBCA9E674E93ED1095006 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelButton/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6B44EC806D87619AD8F8893749E1BE3C5DD78AFB (U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelButton/<>c__DisplayClass6_0::<Initialize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CInitializeU3Eb__0_m12EEC82FD478162EAC1C738E72751E8632D1F808 (U3CU3Ec__DisplayClass6_0_t98F2DA28E243A444D3D359E0CBC112EBA3E12091 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isUnlocked)
		bool L_0 = __this->get_isUnlocked_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// GameManager.Instance.StartLevel(levelIndex);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_2 = __this->get_levelIndex_1();
		NullCheck(L_1);
		GameManager_StartLevel_m6EF4C84465DEAAC39B20FCE444E8922EBEDE24C1(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Node/<RotateWithDelay>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWithDelayU3Ed__21__ctor_m16DF7FE447D389BADECAAE25AAA1D59B4AA2DE2A (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Node/<RotateWithDelay>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWithDelayU3Ed__21_System_IDisposable_Dispose_m2F80BC615E26DDB2C3BFFA10008A96EA40F8615B (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Node/<RotateWithDelay>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotateWithDelayU3Ed__21_MoveNext_mB7EB381884206F1ED6603421EF14C0D8AB25183B (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Quaternion initialRotation = nodeImage.transform.rotation;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_4 = V_1;
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_nodeImage_7();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		__this->set_U3CinitialRotationU3E5__2_3(L_7);
		// Quaternion targetRotation = initialRotation * Quaternion.Euler(0, 0, -90);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = __this->get_U3CinitialRotationU3E5__2_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153(L_8, L_9, /*hidden argument*/NULL);
		__this->set_U3CtargetRotationU3E5__3_4(L_10);
		// float elapsed = 0f;
		__this->set_U3CelapsedU3E5__4_5((0.0f));
		goto IL_00bf;
	}

IL_0069:
	{
		// nodeImage.transform.rotation = Quaternion.Slerp(initialRotation, targetRotation, elapsed / Constants.GridAppearDelay);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_11 = V_1;
		NullCheck(L_11);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = L_11->get_nodeImage_7();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = __this->get_U3CinitialRotationU3E5__2_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_U3CtargetRotationU3E5__3_4();
		float L_16 = __this->get_U3CelapsedU3E5__4_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541(L_14, L_15, ((float)((float)L_16/(float)(0.200000003f))), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_17, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// elapsed += Time.deltaTime;
		float L_18 = __this->get_U3CelapsedU3E5__4_5();
		float L_19;
		L_19 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__4_5(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
	}

IL_00bf:
	{
		// while (elapsed < Constants.GridAppearDelay)
		float L_20 = __this->get_U3CelapsedU3E5__4_5();
		if ((((float)L_20) < ((float)(0.200000003f))))
		{
			goto IL_0069;
		}
	}
	{
		// nodeImage.transform.rotation = targetRotation;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_21 = V_1;
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = L_21->get_nodeImage_7();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = __this->get_U3CtargetRotationU3E5__3_4();
		NullCheck(L_23);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_23, L_24, /*hidden argument*/NULL);
		// rotateCoroutine = null;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_rotateCoroutine_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Node/<RotateWithDelay>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotateWithDelayU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCBFB5F7E72E8815A77C2DCCE77593B0E54025086 (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Node/<RotateWithDelay>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWithDelayU3Ed__21_System_Collections_IEnumerator_Reset_mC56C7462E5ECA1746A62621F22CD98DEA9A11A1E (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotateWithDelayU3Ed__21_System_Collections_IEnumerator_Reset_mC56C7462E5ECA1746A62621F22CD98DEA9A11A1E_RuntimeMethod_var)));
	}
}
// System.Object Node/<RotateWithDelay>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotateWithDelayU3Ed__21_System_Collections_IEnumerator_get_Current_m618D4C07B973040F1027E59373D726361D546DC0 (U3CRotateWithDelayU3Ed__21_t905B6768C4C17C877CC2DAD641E3894C691CF0B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager/<ReturnAudioSourceToPool>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAudioSourceToPoolU3Ed__8__ctor_m24B4353F5B6A3AAE9B0D6AF57B7151A3A372185F (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundManager/<ReturnAudioSourceToPool>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAudioSourceToPoolU3Ed__8_System_IDisposable_Dispose_m6EEF49709D3960E60EEB3059E6AF039F1D61F74C (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SoundManager/<ReturnAudioSourceToPool>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReturnAudioSourceToPoolU3Ed__8_MoveNext_m60E346C863505949717DE610D610B585F35B989A (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!audioSource.loop)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSource_3();
		NullCheck(L_5);
		bool L_6;
		L_6 = AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// AudioSourcePool.instance.ReturnAudioSource(audioSource);
		AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D * L_7 = ((AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSourcePool_t983F906AD0CC3638F95B799D2756F8E1BD31852D_il2cpp_TypeInfo_var))->get_instance_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = __this->get_audioSource_3();
		NullCheck(L_7);
		AudioSourcePool_ReturnAudioSource_m5DC6F603C3DD1E40FF312939381748CB14A790AB(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return (bool)0;
	}
}
// System.Object SoundManager/<ReturnAudioSourceToPool>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReturnAudioSourceToPoolU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m88631FD1B5ADEDF3E2CF5004ADABC06013430C91 (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundManager/<ReturnAudioSourceToPool>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAudioSourceToPoolU3Ed__8_System_Collections_IEnumerator_Reset_mF3B4D4AA44638A307A7B92556721BFBF4082816A (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReturnAudioSourceToPoolU3Ed__8_System_Collections_IEnumerator_Reset_mF3B4D4AA44638A307A7B92556721BFBF4082816A_RuntimeMethod_var)));
	}
}
// System.Object SoundManager/<ReturnAudioSourceToPool>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReturnAudioSourceToPoolU3Ed__8_System_Collections_IEnumerator_get_Current_mB444A5230299EFEDA0A2E6E3E92D1C51295FAC2A (U3CReturnAudioSourceToPoolU3Ed__8_t8E0D0E3CD6253347740E8034E8A3A4C16CC9C984 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteAnimator/<BlinkAndChange>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkAndChangeU3Ed__11__ctor_m862EF41991A4BD3E67EBCC7F5B3501E7A213E591 (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpriteAnimator/<BlinkAndChange>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkAndChangeU3Ed__11_System_IDisposable_Dispose_mF45B55D7D27E23591F0AED77C8FA9B42332BC725 (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpriteAnimator/<BlinkAndChange>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBlinkAndChangeU3Ed__11_MoveNext_mE9F4E30B3125FC13B265D361EA417783698C9AB6 (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_00bc;
			}
			case 4:
			{
				goto IL_00f0;
			}
			case 5:
			{
				goto IL_0124;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// image.enabled = false;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_3 = V_1;
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = L_3->get_image_12();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(blinkDuration);
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_blinkDuration_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// image.enabled = true;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_8 = V_1;
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8->get_image_12();
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(blinkDuration);
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_blinkDuration_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(ChangeColor(startColor, endColor, colorChangeDuration));
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_13 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_14 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_15 = V_1;
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = L_15->get_startColor_4();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_17 = V_1;
		NullCheck(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = L_17->get_endColor_5();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->get_colorChangeDuration_10();
		NullCheck(L_14);
		RuntimeObject* L_21;
		L_21 = SpriteAnimator_ChangeColor_m3AAA6531F3F9CBE32C9E0A60548D7F1065AFDE4D(L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_13);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_22;
		L_22 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_13, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00bc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(ChangeColor(endColor, startColor, colorChangeDuration));
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_23 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_24 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_25 = V_1;
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = L_25->get_endColor_5();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_27 = V_1;
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = L_27->get_startColor_4();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->get_colorChangeDuration_10();
		NullCheck(L_24);
		RuntimeObject* L_31;
		L_31 = SpriteAnimator_ChangeColor_m3AAA6531F3F9CBE32C9E0A60548D7F1065AFDE4D(L_24, L_26, L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_23);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_32;
		L_32 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_23, L_31, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_00f0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(ChangeSize(startSize, endSize, sizeChangeDuration));
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_33 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_34 = V_1;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_35 = V_1;
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = L_35->get_startSize_6();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_37 = V_1;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = L_37->get_endSize_7();
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->get_sizeChangeDuration_9();
		NullCheck(L_34);
		RuntimeObject* L_41;
		L_41 = SpriteAnimator_ChangeSize_mCEB86C1369E1886ADC3C5A1DF5D7C3AB399CC8FD(L_34, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_33);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_42;
		L_42 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_33, L_41, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_42);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0124:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object SpriteAnimator/<BlinkAndChange>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkAndChangeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC5D17BE80C813DE8AB863AC0145BDFB8B8E9A9EC (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpriteAnimator/<BlinkAndChange>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkAndChangeU3Ed__11_System_Collections_IEnumerator_Reset_m400E1D439F3633BE6F66E20A30B24379ECDC245C (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBlinkAndChangeU3Ed__11_System_Collections_IEnumerator_Reset_m400E1D439F3633BE6F66E20A30B24379ECDC245C_RuntimeMethod_var)));
	}
}
// System.Object SpriteAnimator/<BlinkAndChange>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkAndChangeU3Ed__11_System_Collections_IEnumerator_get_Current_m4F052B4531B8F53193449C3C9F1BAB008260F293 (U3CBlinkAndChangeU3Ed__11_t6AFA28113C07A8F8662990B6DC7BDB1A602FDAFC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteAnimator/<ChangeColor>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeColorU3Ed__12__ctor_m012717323E831FB8F226889B8BFC3EDC688BC997 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpriteAnimator/<ChangeColor>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeColorU3Ed__12_System_IDisposable_Dispose_mF38ACFBD2DBE2ABA29AE726C6568F6AE3F623901 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpriteAnimator/<ChangeColor>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeColorU3Ed__12_MoveNext_m4F84CAD82A7622A59CE615740ECDD9F37A4E88D7 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float elapsed = 0f;
		__this->set_U3CelapsedU3E5__2_6((0.0f));
		goto IL_007d;
	}

IL_002b:
	{
		// image.color = Color.Lerp(fromColor, toColor, elapsed / duration);
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_4 = V_1;
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_image_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_fromColor_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_toColor_4();
		float L_8 = __this->get_U3CelapsedU3E5__2_6();
		float L_9 = __this->get_duration_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_Lerp_m6320057807E1F335970F168403C601EBD2B92062(L_6, L_7, ((float)((float)L_8/(float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_10);
		// elapsed += Time.deltaTime;
		float L_11 = __this->get_U3CelapsedU3E5__2_6();
		float L_12;
		L_12 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__2_6(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007d:
	{
		// while (elapsed < duration)
		float L_13 = __this->get_U3CelapsedU3E5__2_6();
		float L_14 = __this->get_duration_5();
		if ((((float)L_13) < ((float)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpriteAnimator/<ChangeColor>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeColorU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF7FE1CD84B5AB96191155E68EF227633191497B8 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpriteAnimator/<ChangeColor>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeColorU3Ed__12_System_Collections_IEnumerator_Reset_m829B2052355E5753B66FF4B20EC0EC1AF9116571 (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeColorU3Ed__12_System_Collections_IEnumerator_Reset_m829B2052355E5753B66FF4B20EC0EC1AF9116571_RuntimeMethod_var)));
	}
}
// System.Object SpriteAnimator/<ChangeColor>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeColorU3Ed__12_System_Collections_IEnumerator_get_Current_mA6903C332F2F68B73C40A0AB12979A954B8AAC3A (U3CChangeColorU3Ed__12_t0A7DF4466D106160B1991F93955C83EC3DAD5002 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteAnimator/<ChangeSize>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSizeU3Ed__13__ctor_m28E7720CEA1DB8723AB807C3FBB5B99026700EC3 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpriteAnimator/<ChangeSize>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSizeU3Ed__13_System_IDisposable_Dispose_m67B63FE14D24A5ED59BC113DE77051758E565807 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpriteAnimator/<ChangeSize>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeSizeU3Ed__13_MoveNext_m5ECDFDF8B1136381E00088BB356F2FA0FB20AF09 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float elapsed = 0f;
		__this->set_U3CelapsedU3E5__2_6((0.0f));
		goto IL_007d;
	}

IL_002b:
	{
		// transform.localScale = Vector3.Lerp(fromSize, toSize, elapsed / duration);
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_fromSize_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_toSize_4();
		float L_8 = __this->get_U3CelapsedU3E5__2_6();
		float L_9 = __this->get_duration_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_6, L_7, ((float)((float)L_8/(float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_10, /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_11 = __this->get_U3CelapsedU3E5__2_6();
		float L_12;
		L_12 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__2_6(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007d:
	{
		// while (elapsed < duration)
		float L_13 = __this->get_U3CelapsedU3E5__2_6();
		float L_14 = __this->get_duration_5();
		if ((((float)L_13) < ((float)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		// transform.localScale = fromSize;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_fromSize_3();
		NullCheck(L_16);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_17, /*hidden argument*/NULL);
		// image.color = Color.green;
		SpriteAnimator_t7B4F49FF6C5C31F183C786F98AB1A67179037644 * L_18 = V_1;
		NullCheck(L_18);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18->get_image_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// }
		return (bool)0;
	}
}
// System.Object SpriteAnimator/<ChangeSize>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeSizeU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m49FC772E80728A3C7DC66CEFA3A2287744EBE11E (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpriteAnimator/<ChangeSize>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSizeU3Ed__13_System_Collections_IEnumerator_Reset_mE91FFB3B1A5730CBE8C59832477AAEF430BF4A01 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeSizeU3Ed__13_System_Collections_IEnumerator_Reset_mE91FFB3B1A5730CBE8C59832477AAEF430BF4A01_RuntimeMethod_var)));
	}
}
// System.Object SpriteAnimator/<ChangeSize>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CChangeSizeU3Ed__13_System_Collections_IEnumerator_get_Current_m3429F237B4F86F8C3E6C25C19601732F986349A0 (U3CChangeSizeU3Ed__13_t99AF03C1B535A3C2643DF7359437D87C7630BB42 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager/<ShowGameOverPopup>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGameOverPopupU3Ed__11__ctor_mD1B681D03AD68DD8C4751E8C0C5F141299748BC9 (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UIManager/<ShowGameOverPopup>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGameOverPopupU3Ed__11_System_IDisposable_Dispose_mBA529BE87C9E00B0212F440F22B25C4400F286FD (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UIManager/<ShowGameOverPopup>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowGameOverPopupU3Ed__11_MoveNext_m017060AC9E9DA5EA37F4B985A7626A2686C7840E (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameOverPanel.SetActive(true);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameOverPanel_7();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIManager/<ShowGameOverPopup>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGameOverPopupU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8AC68A75119528D5D6B63C0B37F1AC787C0E29AC (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UIManager/<ShowGameOverPopup>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGameOverPopupU3Ed__11_System_Collections_IEnumerator_Reset_m55E75506FC31579AD3E26B4616B6E4CE2585ED1D (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowGameOverPopupU3Ed__11_System_Collections_IEnumerator_Reset_m55E75506FC31579AD3E26B4616B6E4CE2585ED1D_RuntimeMethod_var)));
	}
}
// System.Object UIManager/<ShowGameOverPopup>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGameOverPopupU3Ed__11_System_Collections_IEnumerator_get_Current_m29B49FBEF65C77F92EF2BB126DFECB3136A8E074 (U3CShowGameOverPopupU3Ed__11_tE4148520D8FF100BE1AF1B20F8D2117E1D4602B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager/<ShowScoreUpdateEffect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowScoreUpdateEffectU3Ed__13__ctor_mFD4672F68871F86010AA1715C2348620934A9DCB (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UIManager/<ShowScoreUpdateEffect>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowScoreUpdateEffectU3Ed__13_System_IDisposable_Dispose_m42C9A0EDF69F2F2960777050E8087A4AC63609C7 (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UIManager/<ShowScoreUpdateEffect>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowScoreUpdateEffectU3Ed__13_MoveNext_m5081006ACA2477CDE8C2267B0EBAAE0A22862773 (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * G_B5_0 = NULL;
	U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ea;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float duration = 1.15f;
		__this->set_U3CdurationU3E5__2_3((1.14999998f));
		// int prevScore = PlayerProgressManager.Instance.progress.score - Constants.ScorePerLevelComplete;
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_4 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_4);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_5 = L_4->get_progress_5();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_score_1();
		__this->set_U3CprevScoreU3E5__3_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)100))));
		// prevScore = prevScore > 0 ? prevScore : 0;
		int32_t L_7 = __this->get_U3CprevScoreU3E5__3_4();
		G_B4_0 = __this;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			G_B5_0 = __this;
			goto IL_0051;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0057;
	}

IL_0051:
	{
		int32_t L_8 = __this->get_U3CprevScoreU3E5__3_4();
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
	}

IL_0057:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CprevScoreU3E5__3_4(G_B6_0);
		// int endScore = PlayerProgressManager.Instance.progress.score;
		PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D * L_9 = ((PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerProgressManager_t2F85769E0C2F89DEB56615BBA3C5455AA8CD5A1D_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_9);
		PlayerProgress_t0441211AFA7C3A18F3B6B4A5551DD51D5B6D1ECD * L_10 = L_9->get_progress_5();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_score_1();
		__this->set_U3CendScoreU3E5__4_5(L_11);
		// float elapsed = 0f;
		__this->set_U3CelapsedU3E5__5_6((0.0f));
		// SoundManager.Instance.PlaySound(SoundType.ScoreIncreasing);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_12 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_12);
		SoundManager_PlaySound_mB0783893C4359D084B4E2138AE22CFEB2559C77D(L_12, 5, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0089:
	{
		// elapsed += Time.deltaTime;
		float L_13 = __this->get_U3CelapsedU3E5__5_6();
		float L_14;
		L_14 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__5_6(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
		// float t = Mathf.Clamp01(elapsed / duration);
		float L_15 = __this->get_U3CelapsedU3E5__5_6();
		float L_16 = __this->get_U3CdurationU3E5__2_3();
		float L_17;
		L_17 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		V_2 = L_17;
		// int newScore = Mathf.RoundToInt(Mathf.Lerp(prevScore, endScore, t));
		int32_t L_18 = __this->get_U3CprevScoreU3E5__3_4();
		int32_t L_19 = __this->get_U3CendScoreU3E5__4_5();
		float L_20 = V_2;
		float L_21;
		L_21 = Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86(((float)((float)L_18)), ((float)((float)L_19)), L_20, /*hidden argument*/NULL);
		int32_t L_22;
		L_22 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// scoreText.text = newScore.ToString();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_23 = V_1;
		NullCheck(L_23);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get_scoreText_5();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_25);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ea:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00f1:
	{
		// while (elapsed < duration)
		float L_26 = __this->get_U3CelapsedU3E5__5_6();
		float L_27 = __this->get_U3CdurationU3E5__2_3();
		if ((((float)L_26) < ((float)L_27)))
		{
			goto IL_0089;
		}
	}
	{
		// UpdateScore();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_28 = V_1;
		NullCheck(L_28);
		UIManager_UpdateScore_m9694A97791971272275BFF323E9A180510AEC896(L_28, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIManager/<ShowScoreUpdateEffect>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowScoreUpdateEffectU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92821F6E18B413A0DA96C5F8A7CECEB11C227224 (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UIManager/<ShowScoreUpdateEffect>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowScoreUpdateEffectU3Ed__13_System_Collections_IEnumerator_Reset_m2BEFDB5FBF896649ABF58DA664A0BFB263B31173 (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowScoreUpdateEffectU3Ed__13_System_Collections_IEnumerator_Reset_m2BEFDB5FBF896649ABF58DA664A0BFB263B31173_RuntimeMethod_var)));
	}
}
// System.Object UIManager/<ShowScoreUpdateEffect>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowScoreUpdateEffectU3Ed__13_System_Collections_IEnumerator_get_Current_m16A314916E501052E4C17581C6522D90D8B06D05 (U3CShowScoreUpdateEffectU3Ed__13_t850BE88D27EB0943666B8AB97B4CC59354F5015C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_RotationState_m17C839844165DCFD5E9BD71641E6A7C6EBF4E776_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int RotationState { get { return rotationState; } private set { } }
		int32_t L_0 = __this->get_rotationState_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_CorrectRotationState_mF89D488B10355238629B84DA21B19572374D6046_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int CorrectRotationState { get; private set; }
		int32_t L_0 = __this->get_U3CCorrectRotationStateU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_DefaultRotationState_mB728CDA6B367A0AF5F32303CE7459BE43B24DE72_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int DefaultRotationState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDefaultRotationStateU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_CorrectRotationState_m67666E3543D3C6022F1A6850C6DE0728E54777C9_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CorrectRotationState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCorrectRotationStateU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_DefaultRotationState_m15898274E9A68900776C0C86CF7A93EBEA67524D_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// public int DefaultRotationState { get; private set; }
		int32_t L_0 = __this->get_U3CDefaultRotationStateU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
