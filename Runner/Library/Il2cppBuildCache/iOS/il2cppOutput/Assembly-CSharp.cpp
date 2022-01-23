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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonManager
struct ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31;
// ButtonManager2
struct ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Coin
struct Coin_t327139A024DB28F40ED5C48479FA8AB572E86550;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ConstantEnemy
struct ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Countdown
struct Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20;
// Countdown2
struct Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyDamage
struct EnemyDamage_tEF23A23B840586B154FC055C0D9B458E1A061431;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// IDamage
struct IDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t32463C505981FAA3FE78829467992AC7309CD9CA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovingPlayerAnimation
struct MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SaveLoadManager
struct SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62;
// SavingLoading
struct SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386;
// ScrollBackground
struct ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// SerializedData
struct SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB;
// ShootingEnemy
struct ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
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
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ShootingEnemy/<FireLasers>d__6
struct U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02D4A49E6B71E2F45FC0E19296A54FD172B05B63;
IL2CPP_EXTERN_C String_t* _stringLiteral195DDAC8993DCAB63BCF9D605A9706FDFA2DD6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDCB583DD2FB88ECE1A54D680FA064968601213;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral278EFF11C840DBA305398085C93A811533F0A4B3;
IL2CPP_EXTERN_C String_t* _stringLiteral27DD98CC6AAE46FF181924F86CCB7151CFB5FB7B;
IL2CPP_EXTERN_C String_t* _stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7;
IL2CPP_EXTERN_C String_t* _stringLiteral387BD21EF3DE1E8C61A51D4E59E4F098FEAD38A6;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral41FC9BECFDE0DE50E45E30A467DE120EE9B9906B;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2A63FFFC02F104F7056E77D21552CDC9680A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6299BBC5749078086CAC06A6901C1F91A4E05766;
IL2CPP_EXTERN_C String_t* _stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB;
IL2CPP_EXTERN_C String_t* _stringLiteralA67C0E85C3F433E0D3E1CF90FE178DB800E25CED;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4BDE79D7AB9924AE6078032A2B7CE3E709DDCA;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5950F3E9B7A4DD41E3B3209B63C6AF83747854;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3AEF74160D4E070F520C1DF36A7D6233A9835A;
IL2CPP_EXTERN_C String_t* _stringLiteralE21BD7257B69894EDD5B808D90660D99FE00857F;
IL2CPP_EXTERN_C String_t* _stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A80764B21FE4246B2B2BAB53747FD966FC8688;
IL2CPP_EXTERN_C String_t* _stringLiteralF65EFDAE97D02BE7B48BF6A8100D8BC8E6B6AF3F;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1BAB3BE3478E8E4F58954A71104639B1A5295D;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager2_QuitGame_m1BA15B67B0F10C1C2C421680740D9C650A43A063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager2_StartGame_m8E973B07FAAED90A1138F72C98495DB1EE95073E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager2_Welcome_m509FA1C57F8677C1CFA14BB6BB3224A8F713E5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager_EndScene_mC81027942DDBB3518477A667E87156E53619C39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager_QuitGame_mA3C1A5001CD110D0E4A02D0F787D9E981447F131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager_StartGame_m5EAD695A3079D8B0B8E03782A6E58858DCB2690C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_mBBAC6208F58D595AE3F745C8330AFF4E4F76556D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnSceneLoad_m00906DC5737E5FADB26D5D1DA87AE6FB56860BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_m88B95EB716AF40192B3F1A2278550E70C4820F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireLasersU3Ed__6_System_Collections_IEnumerator_Reset_mF2C2A6AE112CC5102434891E3D69F368A15EB20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


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

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SerializedData
struct SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB  : public RuntimeObject
{
public:
	// System.Int32 SerializedData::ser_PlayerScore
	int32_t ___ser_PlayerScore_0;
	// System.Int32 SerializedData::ser_PlayerLives
	int32_t ___ser_PlayerLives_1;
	// System.Int32 SerializedData::ser_PlayerHighScore
	int32_t ___ser_PlayerHighScore_2;

public:
	inline static int32_t get_offset_of_ser_PlayerScore_0() { return static_cast<int32_t>(offsetof(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB, ___ser_PlayerScore_0)); }
	inline int32_t get_ser_PlayerScore_0() const { return ___ser_PlayerScore_0; }
	inline int32_t* get_address_of_ser_PlayerScore_0() { return &___ser_PlayerScore_0; }
	inline void set_ser_PlayerScore_0(int32_t value)
	{
		___ser_PlayerScore_0 = value;
	}

	inline static int32_t get_offset_of_ser_PlayerLives_1() { return static_cast<int32_t>(offsetof(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB, ___ser_PlayerLives_1)); }
	inline int32_t get_ser_PlayerLives_1() const { return ___ser_PlayerLives_1; }
	inline int32_t* get_address_of_ser_PlayerLives_1() { return &___ser_PlayerLives_1; }
	inline void set_ser_PlayerLives_1(int32_t value)
	{
		___ser_PlayerLives_1 = value;
	}

	inline static int32_t get_offset_of_ser_PlayerHighScore_2() { return static_cast<int32_t>(offsetof(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB, ___ser_PlayerHighScore_2)); }
	inline int32_t get_ser_PlayerHighScore_2() const { return ___ser_PlayerHighScore_2; }
	inline int32_t* get_address_of_ser_PlayerHighScore_2() { return &___ser_PlayerHighScore_2; }
	inline void set_ser_PlayerHighScore_2(int32_t value)
	{
		___ser_PlayerHighScore_2 = value;
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

// ShootingEnemy/<FireLasers>d__6
struct U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC  : public RuntimeObject
{
public:
	// System.Int32 ShootingEnemy/<FireLasers>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShootingEnemy/<FireLasers>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ShootingEnemy ShootingEnemy/<FireLasers>d__6::<>4__this
	ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC, ___U3CU3E4__this_2)); }
	inline ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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

// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A, ___value___2)); }
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D, ___value___2)); }
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


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
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


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_binder_2)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// ButtonManager
struct ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button ButtonManager::gameButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___gameButton_4;
	// UnityEngine.UI.Button ButtonManager::endScene
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___endScene_5;
	// UnityEngine.UI.Button ButtonManager::quitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___quitButton_6;

public:
	inline static int32_t get_offset_of_gameButton_4() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___gameButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_gameButton_4() const { return ___gameButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_gameButton_4() { return &___gameButton_4; }
	inline void set_gameButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___gameButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_endScene_5() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___endScene_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_endScene_5() const { return ___endScene_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_endScene_5() { return &___endScene_5; }
	inline void set_endScene_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___endScene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endScene_5), (void*)value);
	}

	inline static int32_t get_offset_of_quitButton_6() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___quitButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_quitButton_6() const { return ___quitButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_quitButton_6() { return &___quitButton_6; }
	inline void set_quitButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___quitButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quitButton_6), (void*)value);
	}
};


// ButtonManager2
struct ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button ButtonManager2::welcomeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___welcomeButton_4;
	// UnityEngine.UI.Button ButtonManager2::level1Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___level1Button_5;
	// UnityEngine.UI.Button ButtonManager2::quitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___quitButton_6;

public:
	inline static int32_t get_offset_of_welcomeButton_4() { return static_cast<int32_t>(offsetof(ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7, ___welcomeButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_welcomeButton_4() const { return ___welcomeButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_welcomeButton_4() { return &___welcomeButton_4; }
	inline void set_welcomeButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___welcomeButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___welcomeButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_level1Button_5() { return static_cast<int32_t>(offsetof(ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7, ___level1Button_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_level1Button_5() const { return ___level1Button_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_level1Button_5() { return &___level1Button_5; }
	inline void set_level1Button_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___level1Button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___level1Button_5), (void*)value);
	}

	inline static int32_t get_offset_of_quitButton_6() { return static_cast<int32_t>(offsetof(ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7, ___quitButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_quitButton_6() const { return ___quitButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_quitButton_6() { return &___quitButton_6; }
	inline void set_quitButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___quitButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quitButton_6), (void*)value);
	}
};


// Coin
struct Coin_t327139A024DB28F40ED5C48479FA8AB572E86550  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Coin::coinSoundEffect
	float ___coinSoundEffect_4;
	// UnityEngine.AudioClip Coin::coinSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___coinSound_5;

public:
	inline static int32_t get_offset_of_coinSoundEffect_4() { return static_cast<int32_t>(offsetof(Coin_t327139A024DB28F40ED5C48479FA8AB572E86550, ___coinSoundEffect_4)); }
	inline float get_coinSoundEffect_4() const { return ___coinSoundEffect_4; }
	inline float* get_address_of_coinSoundEffect_4() { return &___coinSoundEffect_4; }
	inline void set_coinSoundEffect_4(float value)
	{
		___coinSoundEffect_4 = value;
	}

	inline static int32_t get_offset_of_coinSound_5() { return static_cast<int32_t>(offsetof(Coin_t327139A024DB28F40ED5C48479FA8AB572E86550, ___coinSound_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_coinSound_5() const { return ___coinSound_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_coinSound_5() { return &___coinSound_5; }
	inline void set_coinSound_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___coinSound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinSound_5), (void*)value);
	}
};


// ConstantEnemy
struct ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ConstantEnemy::playerSpeed
	float ___playerSpeed_4;
	// System.Single ConstantEnemy::playerRotation
	float ___playerRotation_5;
	// UnityEngine.GameObject ConstantEnemy::character
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character_6;
	// IDamage ConstantEnemy::enemyDamage
	RuntimeObject* ___enemyDamage_7;
	// System.Int32 ConstantEnemy::health
	int32_t ___health_8;

public:
	inline static int32_t get_offset_of_playerSpeed_4() { return static_cast<int32_t>(offsetof(ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341, ___playerSpeed_4)); }
	inline float get_playerSpeed_4() const { return ___playerSpeed_4; }
	inline float* get_address_of_playerSpeed_4() { return &___playerSpeed_4; }
	inline void set_playerSpeed_4(float value)
	{
		___playerSpeed_4 = value;
	}

	inline static int32_t get_offset_of_playerRotation_5() { return static_cast<int32_t>(offsetof(ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341, ___playerRotation_5)); }
	inline float get_playerRotation_5() const { return ___playerRotation_5; }
	inline float* get_address_of_playerRotation_5() { return &___playerRotation_5; }
	inline void set_playerRotation_5(float value)
	{
		___playerRotation_5 = value;
	}

	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341, ___character_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character_6() const { return ___character_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyDamage_7() { return static_cast<int32_t>(offsetof(ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341, ___enemyDamage_7)); }
	inline RuntimeObject* get_enemyDamage_7() const { return ___enemyDamage_7; }
	inline RuntimeObject** get_address_of_enemyDamage_7() { return &___enemyDamage_7; }
	inline void set_enemyDamage_7(RuntimeObject* value)
	{
		___enemyDamage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyDamage_7), (void*)value);
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341, ___health_8)); }
	inline int32_t get_health_8() const { return ___health_8; }
	inline int32_t* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(int32_t value)
	{
		___health_8 = value;
	}
};


// Countdown2
struct Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Countdown2::startingTime
	float ___startingTime_4;
	// System.Single Countdown2::currentTime
	float ___currentTime_5;
	// UnityEngine.UI.Text Countdown2::CountDownTimer
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CountDownTimer_6;

public:
	inline static int32_t get_offset_of_startingTime_4() { return static_cast<int32_t>(offsetof(Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5, ___startingTime_4)); }
	inline float get_startingTime_4() const { return ___startingTime_4; }
	inline float* get_address_of_startingTime_4() { return &___startingTime_4; }
	inline void set_startingTime_4(float value)
	{
		___startingTime_4 = value;
	}

	inline static int32_t get_offset_of_currentTime_5() { return static_cast<int32_t>(offsetof(Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5, ___currentTime_5)); }
	inline float get_currentTime_5() const { return ___currentTime_5; }
	inline float* get_address_of_currentTime_5() { return &___currentTime_5; }
	inline void set_currentTime_5(float value)
	{
		___currentTime_5 = value;
	}

	inline static int32_t get_offset_of_CountDownTimer_6() { return static_cast<int32_t>(offsetof(Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5, ___CountDownTimer_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CountDownTimer_6() const { return ___CountDownTimer_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CountDownTimer_6() { return &___CountDownTimer_6; }
	inline void set_CountDownTimer_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CountDownTimer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CountDownTimer_6), (void*)value);
	}
};


// EnemyDamage
struct EnemyDamage_tEF23A23B840586B154FC055C0D9B458E1A061431  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields
{
public:
	// System.Int32 GameData::_PlayerScore
	int32_t ____PlayerScore_4;
	// System.Int32 GameData::_PlayerLives
	int32_t ____PlayerLives_5;
	// System.Int32 GameData::_PlayerHighScore
	int32_t ____PlayerHighScore_6;

public:
	inline static int32_t get_offset_of__PlayerScore_4() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields, ____PlayerScore_4)); }
	inline int32_t get__PlayerScore_4() const { return ____PlayerScore_4; }
	inline int32_t* get_address_of__PlayerScore_4() { return &____PlayerScore_4; }
	inline void set__PlayerScore_4(int32_t value)
	{
		____PlayerScore_4 = value;
	}

	inline static int32_t get_offset_of__PlayerLives_5() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields, ____PlayerLives_5)); }
	inline int32_t get__PlayerLives_5() const { return ____PlayerLives_5; }
	inline int32_t* get_address_of__PlayerLives_5() { return &____PlayerLives_5; }
	inline void set__PlayerLives_5(int32_t value)
	{
		____PlayerLives_5 = value;
	}

	inline static int32_t get_offset_of__PlayerHighScore_6() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields, ____PlayerHighScore_6)); }
	inline int32_t get__PlayerHighScore_6() const { return ____PlayerHighScore_6; }
	inline int32_t* get_address_of__PlayerHighScore_6() { return &____PlayerHighScore_6; }
	inline void set__PlayerHighScore_6(int32_t value)
	{
		____PlayerHighScore_6 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameManager::playerScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___playerScoreText_4;
	// UnityEngine.UI.Text GameManager::livesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___livesText_5;
	// UnityEngine.UI.Text GameManager::hscoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___hscoreText_6;
	// UnityEngine.GameObject GameManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_7;

public:
	inline static int32_t get_offset_of_playerScoreText_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerScoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_playerScoreText_4() const { return ___playerScoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_playerScoreText_4() { return &___playerScoreText_4; }
	inline void set_playerScoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___playerScoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_livesText_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___livesText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_livesText_5() const { return ___livesText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_livesText_5() { return &___livesText_5; }
	inline void set_livesText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___livesText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livesText_5), (void*)value);
	}

	inline static int32_t get_offset_of_hscoreText_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___hscoreText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_hscoreText_6() const { return ___hscoreText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_hscoreText_6() { return &___hscoreText_6; }
	inline void set_hscoreText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___hscoreText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hscoreText_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefab_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_7() const { return ___playerPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_7() { return &___playerPrefab_7; }
	inline void set_playerPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_7), (void*)value);
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::_GameInstance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ____GameInstance_8;

public:
	inline static int32_t get_offset_of__GameInstance_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ____GameInstance_8)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get__GameInstance_8() const { return ____GameInstance_8; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of__GameInstance_8() { return &____GameInstance_8; }
	inline void set__GameInstance_8(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		____GameInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GameInstance_8), (void*)value);
	}
};


// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Health::intialHealth
	int32_t ___intialHealth_4;
	// System.Int32 Health::nowHealth
	int32_t ___nowHealth_5;
	// GameManager Health::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_6;

public:
	inline static int32_t get_offset_of_intialHealth_4() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___intialHealth_4)); }
	inline int32_t get_intialHealth_4() const { return ___intialHealth_4; }
	inline int32_t* get_address_of_intialHealth_4() { return &___intialHealth_4; }
	inline void set_intialHealth_4(int32_t value)
	{
		___intialHealth_4 = value;
	}

	inline static int32_t get_offset_of_nowHealth_5() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___nowHealth_5)); }
	inline int32_t get_nowHealth_5() const { return ___nowHealth_5; }
	inline int32_t* get_address_of_nowHealth_5() { return &___nowHealth_5; }
	inline void set_nowHealth_5(int32_t value)
	{
		___nowHealth_5 = value;
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___gameManager_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}
};


// MovingPlayerAnimation
struct MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator MovingPlayerAnimation::a
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___a_4;

public:
	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6, ___a_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_a_4() const { return ___a_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___a_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_4), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D Player::playerRigidBody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___playerRigidBody_5;
	// UnityEngine.BoxCollider2D Player::playerBoxCollider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___playerBoxCollider_6;
	// UnityEngine.LayerMask Player::groundMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundMask_7;

public:
	inline static int32_t get_offset_of_playerRigidBody_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerRigidBody_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_playerRigidBody_5() const { return ___playerRigidBody_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_playerRigidBody_5() { return &___playerRigidBody_5; }
	inline void set_playerRigidBody_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___playerRigidBody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRigidBody_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerBoxCollider_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerBoxCollider_6)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_playerBoxCollider_6() const { return ___playerBoxCollider_6; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_playerBoxCollider_6() { return &___playerBoxCollider_6; }
	inline void set_playerBoxCollider_6(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___playerBoxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerBoxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_groundMask_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___groundMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundMask_7() const { return ___groundMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundMask_7() { return &___groundMask_7; }
	inline void set_groundMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundMask_7 = value;
	}
};

struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields
{
public:
	// Player Player::_playerInstance
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____playerInstance_4;

public:
	inline static int32_t get_offset_of__playerInstance_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields, ____playerInstance_4)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get__playerInstance_4() const { return ____playerInstance_4; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of__playerInstance_4() { return &____playerInstance_4; }
	inline void set__playerInstance_4(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		____playerInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerInstance_4), (void*)value);
	}
};


// SaveLoadManager
struct SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerializedData SaveLoadManager::serializedData
	SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * ___serializedData_4;

public:
	inline static int32_t get_offset_of_serializedData_4() { return static_cast<int32_t>(offsetof(SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62, ___serializedData_4)); }
	inline SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * get_serializedData_4() const { return ___serializedData_4; }
	inline SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB ** get_address_of_serializedData_4() { return &___serializedData_4; }
	inline void set_serializedData_4(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * value)
	{
		___serializedData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedData_4), (void*)value);
	}
};


// SavingLoading
struct SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScrollBackground
struct ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ScrollBackground::scrollSpeedBackground
	float ___scrollSpeedBackground_4;
	// UnityEngine.Vector2 ScrollBackground::offSet
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offSet_5;
	// UnityEngine.Material ScrollBackground::backgroundMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___backgroundMaterial_6;

public:
	inline static int32_t get_offset_of_scrollSpeedBackground_4() { return static_cast<int32_t>(offsetof(ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951, ___scrollSpeedBackground_4)); }
	inline float get_scrollSpeedBackground_4() const { return ___scrollSpeedBackground_4; }
	inline float* get_address_of_scrollSpeedBackground_4() { return &___scrollSpeedBackground_4; }
	inline void set_scrollSpeedBackground_4(float value)
	{
		___scrollSpeedBackground_4 = value;
	}

	inline static int32_t get_offset_of_offSet_5() { return static_cast<int32_t>(offsetof(ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951, ___offSet_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offSet_5() const { return ___offSet_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offSet_5() { return &___offSet_5; }
	inline void set_offSet_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offSet_5 = value;
	}

	inline static int32_t get_offset_of_backgroundMaterial_6() { return static_cast<int32_t>(offsetof(ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951, ___backgroundMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_backgroundMaterial_6() const { return ___backgroundMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_backgroundMaterial_6() { return &___backgroundMaterial_6; }
	inline void set_backgroundMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___backgroundMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMaterial_6), (void*)value);
	}
};


// ShootingEnemy
struct ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShootingEnemy::laser
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laser_4;
	// UnityEngine.Transform ShootingEnemy::fire
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___fire_5;
	// System.Single ShootingEnemy::laserForce
	float ___laserForce_6;
	// UnityEngine.Coroutine ShootingEnemy::enemyFire
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___enemyFire_7;

public:
	inline static int32_t get_offset_of_laser_4() { return static_cast<int32_t>(offsetof(ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C, ___laser_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laser_4() const { return ___laser_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laser_4() { return &___laser_4; }
	inline void set_laser_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laser_4), (void*)value);
	}

	inline static int32_t get_offset_of_fire_5() { return static_cast<int32_t>(offsetof(ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C, ___fire_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_fire_5() const { return ___fire_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_fire_5() { return &___fire_5; }
	inline void set_fire_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___fire_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fire_5), (void*)value);
	}

	inline static int32_t get_offset_of_laserForce_6() { return static_cast<int32_t>(offsetof(ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C, ___laserForce_6)); }
	inline float get_laserForce_6() const { return ___laserForce_6; }
	inline float* get_address_of_laserForce_6() { return &___laserForce_6; }
	inline void set_laserForce_6(float value)
	{
		___laserForce_6 = value;
	}

	inline static int32_t get_offset_of_enemyFire_7() { return static_cast<int32_t>(offsetof(ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C, ___enemyFire_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_enemyFire_7() const { return ___enemyFire_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_enemyFire_7() { return &___enemyFire_7; }
	inline void set_enemyFire_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___enemyFire_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyFire_7), (void*)value);
	}
};


// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Timer::startingTime
	float ___startingTime_4;
	// System.Single Timer::currentTime
	float ___currentTime_5;
	// UnityEngine.UI.Text Timer::CountDownTimer
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CountDownTimer_6;

public:
	inline static int32_t get_offset_of_startingTime_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___startingTime_4)); }
	inline float get_startingTime_4() const { return ___startingTime_4; }
	inline float* get_address_of_startingTime_4() { return &___startingTime_4; }
	inline void set_startingTime_4(float value)
	{
		___startingTime_4 = value;
	}

	inline static int32_t get_offset_of_currentTime_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___currentTime_5)); }
	inline float get_currentTime_5() const { return ___currentTime_5; }
	inline float* get_address_of_currentTime_5() { return &___currentTime_5; }
	inline void set_currentTime_5(float value)
	{
		___currentTime_5 = value;
	}

	inline static int32_t get_offset_of_CountDownTimer_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___CountDownTimer_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CountDownTimer_6() const { return ___CountDownTimer_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CountDownTimer_6() { return &___CountDownTimer_6; }
	inline void set_CountDownTimer_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CountDownTimer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CountDownTimer_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Countdown
struct Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20  : public Timer_t32ADF3155A88C37628B80D227C821651666DD405
{
public:

public:
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341
{
public:
	// IDamage Enemy::enemyDamage
	RuntimeObject* ___enemyDamage_9;

public:
	inline static int32_t get_offset_of_enemyDamage_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyDamage_9)); }
	inline RuntimeObject* get_enemyDamage_9() const { return ___enemyDamage_9; }
	inline RuntimeObject** get_address_of_enemyDamage_9() { return &___enemyDamage_9; }
	inline void set_enemyDamage_9(RuntimeObject* value)
	{
		___enemyDamage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyDamage_9), (void*)value);
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

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

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

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

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
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
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, float ___volume2, const RuntimeMethod* method);
// System.Void GameManager::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_m471627301E7FE70EF25ECB012AFD903C597C7DE6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void GameManager::ReduceHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReduceHealth_m32F1655A4092F5F52A21F4C800A04409B5CD3C28 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void ConstantEnemy::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_TakeDamage_m22B429063459B7BCD09390398474891FAE1D34A3 (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, int32_t ___d0, const RuntimeMethod* method);
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method);
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method);
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void ConstantEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_Start_m8EE68065799BEE0D320D184EE8576A0F1B48E8CF (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<IDamage>()
inline RuntimeObject* Component_GetComponent_TisIDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_mBBAC6208F58D595AE3F745C8330AFF4E4F76556D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ConstantEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_Update_mBB0CE22D0590C7AEC566AFCF8A8855915CCA1C62 (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void ConstantEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy__ctor_m402766FA583B8B7303EE2699670E74E8C27AD88D (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Int32 GameData::get_PlayerHighScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 GameData::get_PlayerScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline (const RuntimeMethod* method);
// System.Void GameData::set_PlayerScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline (int32_t ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 GameData::get_PlayerLives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline (const RuntimeMethod* method);
// System.Void GameData::set_PlayerLives(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void GameData::set_PlayerHighScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline (int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SaveLoadManager>()
inline SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SaveLoadManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_LoadData_m60ACA3FAE7F1134539322D9DFEFB12FD73BCCDFE (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void SaveLoadManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_SaveData_m13770BE8235CCD0F329AF51795FF8424DFB95C6D (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SavingLoading>()
inline SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SavingLoading::SaveData1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading_SaveData1_mD89B3DAE48FF08E3E7B971D387A475321A317FFB (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void GameManager::CoinScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CoinScore_mC4BB0FF3D62FF173E61F846142DFFC494320DA3E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::PlayerDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDie_m0B345F9894C64F455653A90152F8B1793EB0DCFD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::ConstantEnemyDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ConstantEnemyDie_mDFFDAF21B984A57CC3AA555983FCBFE0BAC22D8C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Player::PlayerMovementBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMovementBoundaries_m83F34810341FF60B30596B1EAF9A23EA280F3654 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMove_mFC0FB4B4A0AC203A8D25E5EB505D588C1F81D4E9 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single Player::MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_MoveSpeed_mC85F02E362FD768FA5B6097CC06A3F5848F1E297 (const RuntimeMethod* method);
// System.Single GameData::XMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_XMin_mA517CC0DDBDBB80F5E4330B335A2D4B02525B3A5 (const RuntimeMethod* method);
// System.Single GameData::XMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_XMax_m93C31E0FED88AAB212DDF5BD4FEE8BDFC9A13490 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single GameData::YMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_YMin_m2FF79CE773241CD1791BC73DE9016D6986FF3B8A (const RuntimeMethod* method);
// System.Single GameData::YMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_YMax_m289D7D979A4A66268FABEE69F162F066A2194DAC (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean Player::Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_Ground_m983BC9D0F3806E1A68EEF2A779A39462B34889AC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::BoxCast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_BoxCast_mC01E3080DDFD22AF63CDA4B2E22B220B088F25CA (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, float ___angle2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction3, float ___distance4, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Void SerializedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedData__ctor_mC5F19450ECFC5813B020A9273C4670F0B985A28A (SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<SerializedData>(System.String)
inline SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * JsonUtility_FromJson_TisSerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_m88B95EB716AF40192B3F1A2278550E70C4820F79 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void SavingLoading::LoadData1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading_LoadData1_mC44844CFA6C16061526ED095A632BFB43A0CC8EE (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Create_m2C278C920C8B40322EB632EC620A83B021C90725 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ShootingEnemy::FireLasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingEnemy_FireLasers_mA93CA08C255AFB23C7C2A17A953152D38514E72E (ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void ShootingEnemy/<FireLasers>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireLasersU3Ed__6__ctor_mE99516CD118003D0B2D7CDA182CFC5E0B59E4C8C (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void ButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Start_m63BF9078AF0D191B6DECB859E6FD04816757A739 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager_EndScene_mC81027942DDBB3518477A667E87156E53619C39E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager_QuitGame_mA3C1A5001CD110D0E4A02D0F787D9E981447F131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager_StartGame_m5EAD695A3079D8B0B8E03782A6E58858DCB2690C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameButton.onClick.AddListener(StartGame);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_gameButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)ButtonManager_StartGame_m5EAD695A3079D8B0B8E03782A6E58858DCB2690C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// endScene.onClick.AddListener(EndScene);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_endScene_5();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ButtonManager_EndScene_mC81027942DDBB3518477A667E87156E53619C39E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// quitButton.onClick.AddListener(QuitGame);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_quitButton_6();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)ButtonManager_QuitGame_mA3C1A5001CD110D0E4A02D0F787D9E981447F131_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_StartGame_m5EAD695A3079D8B0B8E03782A6E58858DCB2690C (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6299BBC5749078086CAC06A6901C1F91A4E05766);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Game - Play Level 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6299BBC5749078086CAC06A6901C1F91A4E05766, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::EndScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_EndScene_mC81027942DDBB3518477A667E87156E53619C39E (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1BAB3BE3478E8E4F58954A71104639B1A5295D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Game - EndScene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFF1BAB3BE3478E8E4F58954A71104639B1A5295D, /*hidden argument*/NULL);
		// SceneManager.LoadScene("EndScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_QuitGame_mA3C1A5001CD110D0E4A02D0F787D9E981447F131 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA67C0E85C3F433E0D3E1CF90FE178DB800E25CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("You have clicked the quit button!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA67C0E85C3F433E0D3E1CF90FE178DB800E25CED, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_m0AFBC8424681B66413E58480A32977592BE613CA (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
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
// System.Void ButtonManager2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager2_Start_mE7D1182F6F96CD5A55F25EEB124A8E583367646B (ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager2_QuitGame_m1BA15B67B0F10C1C2C421680740D9C650A43A063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager2_StartGame_m8E973B07FAAED90A1138F72C98495DB1EE95073E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonManager2_Welcome_m509FA1C57F8677C1CFA14BB6BB3224A8F713E5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// welcomeButton.onClick.AddListener(Welcome);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_welcomeButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)ButtonManager2_Welcome_m509FA1C57F8677C1CFA14BB6BB3224A8F713E5A9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// level1Button.onClick.AddListener(StartGame);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_level1Button_5();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ButtonManager2_StartGame_m8E973B07FAAED90A1138F72C98495DB1EE95073E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// quitButton.onClick.AddListener(QuitGame);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_quitButton_6();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)ButtonManager2_QuitGame_m1BA15B67B0F10C1C2C421680740D9C650A43A063_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager2::Welcome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager2_Welcome_m509FA1C57F8677C1CFA14BB6BB3224A8F713E5A9 (ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02D4A49E6B71E2F45FC0E19296A54FD172B05B63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2A63FFFC02F104F7056E77D21552CDC9680A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Welcome - Game Runner");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5C2A63FFFC02F104F7056E77D21552CDC9680A1B, /*hidden argument*/NULL);
		// SceneManager.LoadScene("WelcomeScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral02D4A49E6B71E2F45FC0E19296A54FD172B05B63, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager2::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager2_StartGame_m8E973B07FAAED90A1138F72C98495DB1EE95073E (ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6299BBC5749078086CAC06A6901C1F91A4E05766);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Game - Play Level 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6299BBC5749078086CAC06A6901C1F91A4E05766, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager2::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager2_QuitGame_m1BA15B67B0F10C1C2C421680740D9C650A43A063 (ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA67C0E85C3F433E0D3E1CF90FE178DB800E25CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("You have clicked the quit button!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA67C0E85C3F433E0D3E1CF90FE178DB800E25CED, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager2__ctor_m215BC611F178C4639EDBACA365698FFAD7E7F9AE (ButtonManager2_t8975037716697C0BF15923DC3D145DAFD0DDA4E7 * __this, const RuntimeMethod* method)
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
// System.Void Coin::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_OnTriggerEnter2D_mFE68D8E2A8001055898E7AFB4E188ABE948BD7B2 (Coin_t327139A024DB28F40ED5C48479FA8AB572E86550 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF65EFDAE97D02BE7B48BF6A8100D8BC8E6B6AF3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.Log("Destroy Coin");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF65EFDAE97D02BE7B48BF6A8100D8BC8E6B6AF3F, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(coinSound, Camera.main.transform.position, coinSoundEffect);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_coinSound_5();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_coinSoundEffect_4();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_5, L_8, L_9, /*hidden argument*/NULL);
		// GameManager._GameInstance.AddScore();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__GameInstance_8();
		NullCheck(L_10);
		GameManager_AddScore_m471627301E7FE70EF25ECB012AFD903C597C7DE6(L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin__ctor_mF977D2CE7F9F781D0E5B1226BD2757CC523DB637 (Coin_t327139A024DB28F40ED5C48479FA8AB572E86550 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] [Range(0, 1)] float coinSoundEffect = 0.75f;
		__this->set_coinSoundEffect_4((0.75f));
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
// System.Void ConstantEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_Start_m8EE68065799BEE0D320D184EE8576A0F1B48E8CF (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConstantEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_Update_mBB0CE22D0590C7AEC566AFCF8A8855915CCA1C62 (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// character = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_character_6(L_0);
		// Quaternion r = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_0 = L_1;
		// if (character != null) r = Quaternion.LookRotation(transform.position - character.transform.position, Vector3.forward);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_character_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// if (character != null) r = Quaternion.LookRotation(transform.position - character.transform.position, Vector3.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_character_6();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004f:
	{
		// r.x = 0f;
		(&V_0)->set_x_0((0.0f));
		// r.y = 0f;
		(&V_0)->set_y_1((0.0f));
		// transform.rotation = Quaternion.Slerp(transform.rotation, r, Time.deltaTime * 4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_0;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)(4.0f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ConstantEnemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_OnTriggerEnter2D_mD1425703E48F90C2B12C8719964F1CEBB57F9BD2 (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral195DDAC8993DCAB63BCF9D605A9706FDFA2DD6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.Log("Reduce Lives");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral195DDAC8993DCAB63BCF9D605A9706FDFA2DD6CA, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// GameManager._GameInstance.ReduceHealth();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__GameInstance_8();
		NullCheck(L_5);
		GameManager_ReduceHealth_m32F1655A4092F5F52A21F4C800A04409B5CD3C28(L_5, /*hidden argument*/NULL);
		// TakeDamage(50);
		ConstantEnemy_TakeDamage_m22B429063459B7BCD09390398474891FAE1D34A3(__this, ((int32_t)50), /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ConstantEnemy::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy_TakeDamage_m22B429063459B7BCD09390398474891FAE1D34A3 (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, int32_t ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health -= d;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = ___d0;
		__this->set_health_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(health <= 0)
		int32_t L_2 = __this->get_health_8();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void ConstantEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantEnemy__ctor_m402766FA583B8B7303EE2699670E74E8C27AD88D (ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 * __this, const RuntimeMethod* method)
{
	{
		// public float playerSpeed = 10f;
		__this->set_playerSpeed_4((10.0f));
		// public float playerRotation = 180f;
		__this->set_playerRotation_5((180.0f));
		// private int health = 5;
		__this->set_health_8(5);
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
// System.Void Countdown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown_Start_m4EDEE1C587E3BA10C738C384E38BF5E85A4264E9 (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Countdown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown_Update_m4230BF1A0AAF57C1351FB052AF55D6F99F8A5A17 (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Countdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown__ctor_m046FB7F09BC45D1C33491F89DD01A93BBD31880E (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8(__this, /*hidden argument*/NULL);
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
// System.Void Countdown2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown2_Start_mB3F32AA7FE7C8476DFE235D838E4D95F613D14A7 (Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5 * __this, const RuntimeMethod* method)
{
	{
		// currentTime = startingTime;
		float L_0 = __this->get_startingTime_4();
		__this->set_currentTime_5(L_0);
		// }
		return;
	}
}
// System.Void Countdown2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown2_Update_m6A42D9FF59B2066BB525CC5C0BD067CC5FE02778 (Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime -= 1 * Time.deltaTime;
		float L_0 = __this->get_currentTime_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentTime_5(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)))));
		// print(currentTime);
		float L_2 = __this->get_currentTime_5();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_4, /*hidden argument*/NULL);
		// CountDownTimer.text = currentTime.ToString("0");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_CountDownTimer_6();
		float* L_6 = __this->get_address_of_currentTime_5();
		String_t* L_7;
		L_7 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_6, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// CountDownTimer.color = Color.blue;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_CountDownTimer_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// if (currentTime <= 1)
		float L_10 = __this->get_currentTime_5();
		if ((!(((float)L_10) <= ((float)(1.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// CountDownTimer.color = Color.red;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_CountDownTimer_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// currentTime = 0;
		__this->set_currentTime_5((0.0f));
		// SceneManager.LoadScene("EndScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Countdown2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown2__ctor_mAE00978AAC5AA5330AE0F76DA0D87B5BDF0D2A44 (Countdown2_tAB87D966E0DFD8B769C802041256B685DD8D1CC5 * __this, const RuntimeMethod* method)
{
	{
		// private float startingTime = 10f;
		__this->set_startingTime_4((10.0f));
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_mBBAC6208F58D595AE3F745C8330AFF4E4F76556D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		ConstantEnemy_Start_m8EE68065799BEE0D320D184EE8576A0F1B48E8CF(__this, /*hidden argument*/NULL);
		// enemyDamage = GetComponent<IDamage>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponent_TisIDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_mBBAC6208F58D595AE3F745C8330AFF4E4F76556D(__this, /*hidden argument*/Component_GetComponent_TisIDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_mBBAC6208F58D595AE3F745C8330AFF4E4F76556D_RuntimeMethod_var);
		__this->set_enemyDamage_9(L_0);
		// enemyDamage.health = 2;
		RuntimeObject* L_1 = __this->get_enemyDamage_9();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void IDamage::set_health(System.Int32) */, IDamage_tA481E6B6A4265EFE89F0E8F3058B9B32CCBAB4A9_il2cpp_TypeInfo_var, L_1, 2);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		ConstantEnemy_Update_mBB0CE22D0590C7AEC566AFCF8A8855915CCA1C62(__this, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, character.transform.position, 2f * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((ConstantEnemy_t58E1CE1A1CC64E751BEE0CC374C656085ED25341 *)__this)->get_character_6();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_5, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5950F3E9B7A4DD41E3B3209B63C6AF83747854);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("Destroy enemy");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDB5950F3E9B7A4DD41E3B3209B63C6AF83747854, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// GameManager._GameInstance.ReduceHealth();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__GameInstance_8();
		NullCheck(L_5);
		GameManager_ReduceHealth_m32F1655A4092F5F52A21F4C800A04409B5CD3C28(L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		ConstantEnemy__ctor_m402766FA583B8B7303EE2699670E74E8C27AD88D(__this, /*hidden argument*/NULL);
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
// System.Void EnemyDamage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_Start_mF1705E2E8BFDDEAB52331BD6A7C327004FD852C4 (EnemyDamage_tEF23A23B840586B154FC055C0D9B458E1A061431 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyDamage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_Update_m6B1BD3AC8382898BD3B2C9BF81937E8C8366661A (EnemyDamage_tEF23A23B840586B154FC055C0D9B458E1A061431 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyDamage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage__ctor_mE9F367DB2F4DDFA93A692B968230969A211E990D (EnemyDamage_tEF23A23B840586B154FC055C0D9B458E1A061431 * __this, const RuntimeMethod* method)
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
// System.Single GameData::XMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_XMin_mA517CC0DDBDBB80F5E4330B335A2D4B02525B3A5 (const RuntimeMethod* method)
{
	{
		// float XMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x + 1.0f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		// return XMin;
		return ((float)il2cpp_codegen_add((float)L_3, (float)(1.0f)));
	}
}
// System.Single GameData::XMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_XMax_m93C31E0FED88AAB212DDF5BD4FEE8BDFC9A13490 (const RuntimeMethod* method)
{
	{
		// float XMax = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, 0)).x - 1.0f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		// return XMax;
		return ((float)il2cpp_codegen_subtract((float)L_3, (float)(1.0f)));
	}
}
// System.Single GameData::YMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_YMin_m2FF79CE773241CD1791BC73DE9016D6986FF3B8A (const RuntimeMethod* method)
{
	{
		// float YMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).y + 1.0f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		// return YMin;
		return ((float)il2cpp_codegen_add((float)L_3, (float)(1.0f)));
	}
}
// System.Single GameData::YMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_YMax_m289D7D979A4A66268FABEE69F162F066A2194DAC (const RuntimeMethod* method)
{
	{
		// float YMax = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, 0)).y - 1.0f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		// return YMax;
		return ((float)il2cpp_codegen_subtract((float)L_3, (float)(1.0f)));
	}
}
// System.Int32 GameData::get_PlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerScore; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerScore_4();
		return L_0;
	}
}
// System.Void GameData::set_PlayerScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerScore = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerScore_4(L_0);
		// set { _PlayerScore = value; }
		return;
	}
}
// System.Int32 GameData::get_PlayerLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerLives; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerLives_5();
		return L_0;
	}
}
// System.Void GameData::set_PlayerLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerLives = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerLives_5(L_0);
		// set { _PlayerLives = value; }
		return;
	}
}
// System.Int32 GameData::get_PlayerHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerHighScore; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerHighScore_6();
		return L_0;
	}
}
// System.Void GameData::set_PlayerHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerHighScore = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerHighScore_6(L_0);
		// set { _PlayerHighScore = value; }
		return;
	}
}
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mF787127A0B2A0A3EBFA33BAB7050087D66E80F14 (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnSceneLoad_m00906DC5737E5FADB26D5D1DA87AE6FB56860BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_GameInstance == null) //singleton pattern
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__GameInstance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// _GameInstance = this;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set__GameInstance_8(__this);
		// }
		goto IL_002d;
	}

IL_0015:
	{
		// else if (_GameInstance != this)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__GameInstance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// SceneManager.sceneLoaded += OnSceneLoad;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_5 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_5, __this, (intptr_t)((intptr_t)GameManager_OnSceneLoad_m00906DC5737E5FADB26D5D1DA87AE6FB56860BBB_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_5, /*hidden argument*/NULL);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::HighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HighScore_m0AAD85A9CDFC6F267E13915F82586017BECBEE73 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EDCB583DD2FB88ECE1A54D680FA064968601213);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameData.PlayerHighScore > PlayerPrefs.GetInt("_PlayerHighScore"))
		int32_t L_0;
		L_0 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1EDCB583DD2FB88ECE1A54D680FA064968601213, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		// PlayerPrefs.SetInt("_PlayerHighScore", GameData.PlayerHighScore);
		int32_t L_2;
		L_2 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1EDCB583DD2FB88ECE1A54D680FA064968601213, L_2, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void GameManager::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_m471627301E7FE70EF25ECB012AFD903C597C7DE6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// GameData.PlayerScore += 1;
		int32_t L_0;
		L_0 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// playerScoreText.text = GameData.PlayerScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_playerScoreText_4();
		int32_t L_2;
		L_2 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void GameManager::ReduceHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReduceHealth_m32F1655A4092F5F52A21F4C800A04409B5CD3C28 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// GameData.PlayerLives -= 1;
		int32_t L_0;
		L_0 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// hscoreText.text = GameData.PlayerLives.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_hscoreText_6();
		int32_t L_2;
		L_2 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameData.PlayerScore = 0;
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(0, /*hidden argument*/NULL);
		// GameData.PlayerLives = 2;
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(2, /*hidden argument*/NULL);
		// GameData.PlayerHighScore = 0;
		GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline(0, /*hidden argument*/NULL);
		// GetComponent<SaveLoadManager>().LoadData();
		SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * L_0;
		L_0 = Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		NullCheck(L_0);
		SaveLoadManager_LoadData_m60ACA3FAE7F1134539322D9DFEFB12FD73BCCDFE(L_0, /*hidden argument*/NULL);
		// playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_playerScoreText_4();
		int32_t L_2;
		L_2 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// livesText.text = "Lives: " + GameData.PlayerLives.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_livesText_5();
		int32_t L_6;
		L_6 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// hscoreText.text = "High Score: " + GameData.PlayerHighScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_hscoreText_6();
		int32_t L_10;
		L_10 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// }
		return;
	}
}
// System.Void GameManager::CoinScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CoinScore_mC4BB0FF3D62FF173E61F846142DFFC494320DA3E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameData.PlayerScore++;
		int32_t L_0;
		L_0 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_playerScoreText_4();
		int32_t L_2;
		L_2 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// GetComponent<SaveLoadManager>().SaveData();
		SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * L_5;
		L_5 = Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		NullCheck(L_5);
		SaveLoadManager_SaveData_m13770BE8235CCD0F329AF51795FF8424DFB95C6D(L_5, /*hidden argument*/NULL);
		// if (GameData.PlayerLives < 5)
		int32_t L_6;
		L_6 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)5)))
		{
			goto IL_004d;
		}
	}
	{
		// GetComponent<SaveLoadManager>().SaveData();
		SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * L_7;
		L_7 = Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		NullCheck(L_7);
		SaveLoadManager_SaveData_m13770BE8235CCD0F329AF51795FF8424DFB95C6D(L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// SceneManager.LoadScene("EndGame");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ConstantEnemyDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ConstantEnemyDie_mDFFDAF21B984A57CC3AA555983FCBFE0BAC22D8C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("EndGame");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE, /*hidden argument*/NULL);
		// GetComponent<SavingLoading>().SaveData1();
		SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * L_0;
		L_0 = Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3(__this, /*hidden argument*/Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3_RuntimeMethod_var);
		NullCheck(L_0);
		SavingLoading_SaveData1_mD89B3DAE48FF08E3E7B971D387A475321A317FFB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayerDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDie_m0B345F9894C64F455653A90152F8B1793EB0DCFD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameData.PlayerLives--;
		int32_t L_0;
		L_0 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// livesText.text = "Lives: " + GameData.PlayerLives.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_livesText_5();
		int32_t L_2;
		L_2 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// if (GameData.PlayerLives > 0)
		int32_t L_5;
		L_5 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		// Instantiate(playerPrefab, new Vector3(-5f, 0f, 0f), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_playerPrefab_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (-5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// GetComponent<SavingLoading>().SaveData1();
		SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * L_10;
		L_10 = Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3(__this, /*hidden argument*/Component_GetComponent_TisSavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386_m91D04E3ED292CDBB616D680B06B684F0278749B3_RuntimeMethod_var);
		NullCheck(L_10);
		SavingLoading_SaveData1_mD89B3DAE48FF08E3E7B971D387A475321A317FFB(L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0067:
	{
		// SceneManager.LoadScene("EndGame");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnSceneLoad(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnSceneLoad_m00906DC5737E5FADB26D5D1DA87AE6FB56860BBB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FC9BECFDE0DE50E45E30A467DE120EE9B9906B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE21BD7257B69894EDD5B808D90660D99FE00857F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A80764B21FE4246B2B2BAB53747FD966FC8688);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (scene.name == "GameOver")
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b5;
		}
	}
	{
		// print("Score = " + GameData.PlayerScore.ToString());
		int32_t L_2;
		L_2 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9A553A5812034280DADF1649074C46CB3C83B3BB, L_3, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_4, /*hidden argument*/NULL);
		// Text scoretext = GameObject.Find("Scoretext").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF5A80764B21FE4246B2B2BAB53747FD966FC8688, /*hidden argument*/NULL);
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		// scoretext.text = "Score : " + GameData.PlayerScore.ToString();
		int32_t L_7;
		L_7 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// Text highscoretext = GameObject.Find("Highscoretext").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral41FC9BECFDE0DE50E45E30A467DE120EE9B9906B, /*hidden argument*/NULL);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		// highscoretext.text = "High Score : " + GameData.PlayerHighScore.ToString();
		int32_t L_12;
		L_12 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE21BD7257B69894EDD5B808D90660D99FE00857F, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// if (GameData.PlayerScore > GameData.PlayerHighScore) GameData.PlayerHighScore = GameData.PlayerScore;
		int32_t L_15;
		L_15 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		int32_t L_16;
		L_16 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_009e;
		}
	}
	{
		// if (GameData.PlayerScore > GameData.PlayerHighScore) GameData.PlayerHighScore = GameData.PlayerScore;
		int32_t L_17;
		L_17 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline(L_17, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// GameData.PlayerScore = 0;
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(0, /*hidden argument*/NULL);
		// GameData.PlayerLives = 2;
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(2, /*hidden argument*/NULL);
		// GetComponent<SaveLoadManager>().SaveData();
		SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * L_18;
		L_18 = Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62_m87E37A5DE16FA96E7CA452C16C530B8FE020F114_RuntimeMethod_var);
		NullCheck(L_18);
		SaveLoadManager_SaveData_m13770BE8235CCD0F329AF51795FF8424DFB95C6D(L_18, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void GameManager::Welcome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Welcome_m6DBC7020000E15A5F47767E5EFFD1A8718343D33 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Level1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Level1_mF06A370049F571988BFDCC211F16E8B17239E391 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene"); //loads the scene with the name GameScene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameLevel2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameLevel2_m1B64B6FFBCC061A18B1B503BAD67296D0D6EF92D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral278EFF11C840DBA305398085C93A811533F0A4B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene2"); //loads the scene with the name GameScene2
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral278EFF11C840DBA305398085C93A811533F0A4B3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("EndScene"); //loads the scene with the name EndScene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_QuitGame_mB499D5DDCD90223C6FBF396BF466D86BC6BFC230 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// Debug.Log("Quit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, /*hidden argument*/NULL);
		// }
		return;
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
// System.Void Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(nowHealth);
		int32_t L_0 = __this->get_nowHealth_5();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// nowHealth = intialHealth;
		int32_t L_3 = __this->get_intialHealth_4();
		__this->set_nowHealth_5(L_3);
		// gameManager = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4;
		L_4 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_6(L_4);
		// }
		return;
	}
}
// System.Void Health::TakeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_mB98FE811D56FEF04A9CB6629EDD1B7A7EE44318D (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387BD21EF3DE1E8C61A51D4E59E4F098FEAD38A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nowHealth--;
		int32_t L_0 = __this->get_nowHealth_5();
		__this->set_nowHealth_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// Debug.Log(nowHealth);
		int32_t L_1 = __this->get_nowHealth_5();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if (nowHealth <= 0)
		int32_t L_4 = __this->get_nowHealth_5();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		// if (gameObject.tag == "Coin" && gameManager != null) gameManager.CoinScore();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gameManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// if (gameObject.tag == "Coin" && gameManager != null) gameManager.CoinScore();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gameManager_6();
		NullCheck(L_10);
		GameManager_CoinScore_mC4BB0FF3D62FF173E61F846142DFFC494320DA3E(L_10, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (gameObject.tag == "Player" && gameManager != null) gameManager.PlayerDie();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14 = __this->get_gameManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// if (gameObject.tag == "Player" && gameManager != null) gameManager.PlayerDie();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_16 = __this->get_gameManager_6();
		NullCheck(L_16);
		GameManager_PlayerDie_m0B345F9894C64F455653A90152F8B1793EB0DCFD(L_16, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// if (gameObject.tag == "ConstantEnemy" && gameManager != null) gameManager.ConstantEnemyDie();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral387BD21EF3DE1E8C61A51D4E59E4F098FEAD38A6, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20 = __this->get_gameManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		// if (gameObject.tag == "ConstantEnemy" && gameManager != null) gameManager.ConstantEnemyDie();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_22 = __this->get_gameManager_6();
		NullCheck(L_22);
		GameManager_ConstantEnemyDie_mDFFDAF21B984A57CC3AA555983FCBFE0BAC22D8C(L_22, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// Die();
		Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE(__this, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Update_mBCA15B9BB7DC24D8DD34C254D94064723BC0B368 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_mD50C73D87211EAE260B38B2936F01722E31B9416 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int intialHealth = 10;
		__this->set_intialHealth_4(((int32_t)10));
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
// System.Void MovingPlayerAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlayerAnimation_Start_m9C03F0A978C638DEE4859A63A2A836F9C888672E (MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// a = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_a_4(L_0);
		// }
		return;
	}
}
// System.Void MovingPlayerAnimation::OnCollisionEnter2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlayerAnimation_OnCollisionEnter2D_m40923F9C37D6800339352B43A5309F5709E9B02A (MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4BDE79D7AB9924AE6078032A2B7CE3E709DDCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// a.SetBool("PlayerAnimation", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_a_4();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralBD4BDE79D7AB9924AE6078032A2B7CE3E709DDCA, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MovingPlayerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlayerAnimation__ctor_m74F2FF8B1DDE51A0E70994E453BEE6B29ADE4B54 (MovingPlayerAnimation_t7B7D7416972708BEF9AA6D78A3E21A2AAAECD7A6 * __this, const RuntimeMethod* method)
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRigidBody= transform.GetComponent<Rigidbody2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_playerRigidBody_5(L_1);
		// playerBoxCollider = transform.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_3;
		L_3 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_2, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_playerBoxCollider_6(L_3);
		// if (_playerInstance != null && _playerInstance != this)
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get__playerInstance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get__playerInstance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, __this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0048:
	{
		// _playerInstance = this;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set__playerInstance_4(__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// PlayerMovementBoundaries();
		Player_PlayerMovementBoundaries_m83F34810341FF60B30596B1EAF9A23EA280F3654(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// PlayerMove();
		Player_PlayerMove_mFC0FB4B4A0AC203A8D25E5EB505D588C1F81D4E9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMove_mFC0FB4B4A0AC203A8D25E5EB505D588C1F81D4E9 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// var deltaX = Input.GetAxis("Horizontal") * Time.deltaTime * MoveSpeed();
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2;
		L_2 = Player_MoveSpeed_mC85F02E362FD768FA5B6097CC06A3F5848F1E297(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// var newXPos = transform.position.x + deltaX;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)L_5, (float)L_6));
		// newXPos = Mathf.Clamp(newXPos, GameData.XMin(), GameData.XMax());
		float L_7 = V_1;
		float L_8;
		L_8 = GameData_XMin_mA517CC0DDBDBB80F5E4330B335A2D4B02525B3A5(/*hidden argument*/NULL);
		float L_9;
		L_9 = GameData_XMax_m93C31E0FED88AAB212DDF5BD4FEE8BDFC9A13490(/*hidden argument*/NULL);
		float L_10;
		L_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// var deltaY = Input.GetAxis("Vertical") * Time.deltaTime * MoveSpeed();
		float L_11;
		L_11 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13;
		L_13 = Player_MoveSpeed_mC85F02E362FD768FA5B6097CC06A3F5848F1E297(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_13));
		// var newYPos = transform.position.y + deltaY;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)L_16, (float)L_17));
		// newYPos = Mathf.Clamp(newYPos, GameData.YMin(), GameData.YMax());
		float L_18 = V_3;
		float L_19;
		L_19 = GameData_YMin_m2FF79CE773241CD1791BC73DE9016D6986FF3B8A(/*hidden argument*/NULL);
		float L_20;
		L_20 = GameData_YMax_m289D7D979A4A66268FABEE69F162F066A2194DAC(/*hidden argument*/NULL);
		float L_21;
		L_21 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_18, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// this.transform.position = new Vector2(newXPos, newYPos);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_23 = V_1;
		float L_24 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_26, /*hidden argument*/NULL);
		// if (Ground() && Input.GetKeyDown(KeyCode.Space))
		bool L_27;
		L_27 = Player_Ground_m983BC9D0F3806E1A68EEF2A779A39462B34889AC(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_28;
		L_28 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		// float playerVelocity = 7f;
		V_4 = (7.0f);
		// playerRigidBody.velocity = Vector2.up * playerVelocity;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29 = __this->get_playerRigidBody_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_31 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Single Player::MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_MoveSpeed_mC85F02E362FD768FA5B6097CC06A3F5848F1E297 (const RuntimeMethod* method)
{
	{
		// float moveSpeed = 10f;
		// return moveSpeed;
		return (10.0f);
	}
}
// System.Void Player::PlayerMovementBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PlayerMovementBoundaries_m83F34810341FF60B30596B1EAF9A23EA280F3654 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// GameData.XMin();
		float L_0;
		L_0 = GameData_XMin_mA517CC0DDBDBB80F5E4330B335A2D4B02525B3A5(/*hidden argument*/NULL);
		// GameData.XMax();
		float L_1;
		L_1 = GameData_XMax_m93C31E0FED88AAB212DDF5BD4FEE8BDFC9A13490(/*hidden argument*/NULL);
		// GameData.YMin();
		float L_2;
		L_2 = GameData_YMin_m2FF79CE773241CD1791BC73DE9016D6986FF3B8A(/*hidden argument*/NULL);
		// GameData.YMax();
		float L_3;
		L_3 = GameData_YMax_m289D7D979A4A66268FABEE69F162F066A2194DAC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Player::Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_Ground_m983BC9D0F3806E1A68EEF2A779A39462B34889AC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D groundRayCast = Physics2D.BoxCast(playerBoxCollider.bounds.center, playerBoxCollider.bounds.size, 0f, Vector2.down * .2f, groundMask);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0 = __this->get_playerBoxCollider_6();
		NullCheck(L_0);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4 = __this->get_playerBoxCollider_6();
		NullCheck(L_4);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_8, (0.200000003f), /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_10 = __this->get_groundMask_7();
		int32_t L_11;
		L_11 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_12;
		L_12 = Physics2D_BoxCast_mC01E3080DDFD22AF63CDA4B2E22B220B088F25CA(L_3, L_7, (0.0f), L_9, ((float)((float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		// return groundRayCast.collider != null;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13;
		L_13 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
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
// System.Void SaveLoadManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_Start_m2AD86C915FEE47076AB10254AF2FD72F151A96EF (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serializedData = new SerializedData();
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_0 = (SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB *)il2cpp_codegen_object_new(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		SerializedData__ctor_mC5F19450ECFC5813B020A9273C4670F0B985A28A(L_0, /*hidden argument*/NULL);
		__this->set_serializedData_4(L_0);
		// }
		return;
	}
}
// System.Void SaveLoadManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_SaveData_m13770BE8235CCD0F329AF51795FF8424DFB95C6D (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// serializedData.ser_PlayerScore = GameData.PlayerScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_0 = __this->get_serializedData_4();
		int32_t L_1;
		L_1 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_ser_PlayerScore_0(L_1);
		// serializedData.ser_PlayerLives = GameData.PlayerLives;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_2 = __this->get_serializedData_4();
		int32_t L_3;
		L_3 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_ser_PlayerLives_1(L_3);
		// serializedData.ser_PlayerHighScore = GameData.PlayerHighScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_4 = __this->get_serializedData_4();
		int32_t L_5;
		L_5 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_ser_PlayerHighScore_2(L_5);
		// string s = JsonUtility.ToJson(serializedData);
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_6 = __this->get_serializedData_4();
		String_t* L_7;
		L_7 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Debug.Log(s);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("RunnerData", s);
		String_t* L_9 = V_0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveLoadManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager_LoadData_m60ACA3FAE7F1134539322D9DFEFB12FD73BCCDFE (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_m88B95EB716AF40192B3F1A2278550E70C4820F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (PlayerPrefs.HasKey("RunnerData"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		// loadedjsonData = PlayerPrefs.GetString("RunnerData");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral2940C5D3602D34BF9E4BF9A0E5B03F99AED9A0DA, /*hidden argument*/NULL);
		V_0 = L_1;
		// serializedData = JsonUtility.FromJson<SerializedData>(loadedjsonData);
		String_t* L_2 = V_0;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_3;
		L_3 = JsonUtility_FromJson_TisSerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_m88B95EB716AF40192B3F1A2278550E70C4820F79(L_2, /*hidden argument*/JsonUtility_FromJson_TisSerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_m88B95EB716AF40192B3F1A2278550E70C4820F79_RuntimeMethod_var);
		__this->set_serializedData_4(L_3);
		// GameData.PlayerScore = serializedData.ser_PlayerScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_4 = __this->get_serializedData_4();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ser_PlayerScore_0();
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(L_5, /*hidden argument*/NULL);
		// GameData.PlayerLives = serializedData.ser_PlayerLives;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_6 = __this->get_serializedData_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_ser_PlayerLives_1();
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(L_7, /*hidden argument*/NULL);
		// GameData.PlayerHighScore = serializedData.ser_PlayerHighScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_8 = __this->get_serializedData_4();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_ser_PlayerHighScore_2();
		GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline(L_9, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void SaveLoadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadManager__ctor_mDB326F9F70007FFACC1F22E5C321B624E0E272AD (SaveLoadManager_t8950DF1426D1E63A725F684F76A350978A07EB62 * __this, const RuntimeMethod* method)
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
// System.Void SavingLoading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading_Start_m78030B2D6E137F95D4FDF648E67BD78255636DFA (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// LoadData1();
		SavingLoading_LoadData1_mC44844CFA6C16061526ED095A632BFB43A0CC8EE(__this, /*hidden argument*/NULL);
		// }
		goto IL_0015;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0008;
		}
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Object)
		// catch
		// Debug.Log("Exception caught");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC3AEF74160D4E070F520C1DF36A7D6233A9835A)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	} // end catch (depth: 1)

IL_0015:
	{
		// }
		return;
	}
}
// System.Void SavingLoading::SaveData1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading_SaveData1_mD89B3DAE48FF08E3E7B971D387A475321A317FFB (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27DD98CC6AAE46FF181924F86CCB7151CFB5FB7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08);
		s_Il2CppMethodInitialized = true;
	}
	SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * V_0 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_1 = NULL;
	{
		// SerializedData serializedData = new SerializedData();
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_0 = (SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB *)il2cpp_codegen_object_new(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		SerializedData__ctor_mC5F19450ECFC5813B020A9273C4670F0B985A28A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// serializedData.ser_PlayerScore = GameData.PlayerScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_1 = V_0;
		int32_t L_2;
		L_2 = GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_ser_PlayerScore_0(L_2);
		// serializedData.ser_PlayerLives = GameData.PlayerLives;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_3 = V_0;
		int32_t L_4;
		L_4 = GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_ser_PlayerLives_1(L_4);
		// serializedData.ser_PlayerHighScore = GameData.PlayerHighScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_5 = V_0;
		int32_t L_6;
		L_6 = GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_ser_PlayerHighScore_2(L_6);
		// BinaryFormatter f = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_7 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_7, /*hidden argument*/NULL);
		// Debug.Log(Application.persistentDataPath);
		String_t* L_8;
		L_8 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// FileStream files = File.Create(Application.persistentDataPath + "/gamedata.save");
		String_t* L_9;
		L_9 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, _stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08, /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_11;
		L_11 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// f.Serialize(files, serializedData);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12 = V_1;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_13 = V_0;
		NullCheck(L_7);
		BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B(L_7, L_12, L_13, /*hidden argument*/NULL);
		// files.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = V_1;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_14);
		// Debug.Log("Game Data Saved");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral27DD98CC6AAE46FF181924F86CCB7151CFB5FB7B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SavingLoading::LoadData1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading_LoadData1_mC44844CFA6C16061526ED095A632BFB43A0CC8EE (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08);
		s_Il2CppMethodInitialized = true;
	}
	SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * V_0 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_1 = NULL;
	{
		// SerializedData loadedData = new SerializedData();
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_0 = (SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB *)il2cpp_codegen_object_new(SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var);
		SerializedData__ctor_mC5F19450ECFC5813B020A9273C4670F0B985A28A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (File.Exists(Application.persistentDataPath + "/gamedata.save") == true)
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08, /*hidden argument*/NULL);
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		// BinaryFormatter b = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_4 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_4, /*hidden argument*/NULL);
		// FileStream filestream = File.Open(Application.persistentDataPath + "/gamedata.save", FileMode.Open);
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, _stringLiteralF06A0520859A254BFD367B5C8D3FA2A11A1A1E08, /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7;
		L_7 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_6, 3, /*hidden argument*/NULL);
		V_1 = L_7;
		// loadedData = (SerializedData)b.Deserialize(filestream);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_8 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_9;
		L_9 = BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC(L_4, L_8, /*hidden argument*/NULL);
		V_0 = ((SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB *)CastclassClass((RuntimeObject*)L_9, SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB_il2cpp_TypeInfo_var));
		// filestream.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_10);
		// if (loadedData != null)
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_11 = V_0;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// GameData.PlayerScore = loadedData.ser_PlayerScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ser_PlayerScore_0();
		GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline(L_13, /*hidden argument*/NULL);
		// GameData.PlayerLives = loadedData.ser_PlayerLives;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_ser_PlayerLives_1();
		GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline(L_15, /*hidden argument*/NULL);
		// GameData.PlayerHighScore = loadedData.ser_PlayerHighScore;
		SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_ser_PlayerHighScore_2();
		GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline(L_17, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void SavingLoading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavingLoading__ctor_m9CCCAE3DC80722C5068084C9AFF8F4298C1CF799 (SavingLoading_t12725528DF37A4D90C10434ACF6042D7E4044386 * __this, const RuntimeMethod* method)
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
// System.Void ScrollBackground::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollBackground_Start_m6C6E6A47F1F0915E5ADF9733EA33BB8CAA5D558A (ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// backgroundMaterial = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_6(L_1);
		// offSet = new Vector2(scrollSpeedBackground, 0f);
		float L_2 = __this->get_scrollSpeedBackground_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_offSet_5(L_3);
		// }
		return;
	}
}
// System.Void ScrollBackground::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollBackground_Update_m00D44D6E0B21CF0DFAE601DC0EB6FA2B0A2EE237 (ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951 * __this, const RuntimeMethod* method)
{
	{
		// backgroundMaterial.mainTextureOffset += offSet * Time.deltaTime;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_backgroundMaterial_6();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_offSet_5();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollBackground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollBackground__ctor_mF2E8B5FA4341B1B06A501DC440FBC8B5BAE29380 (ScrollBackground_t58555F875AA5982FCA2D8F06C34A25F023CC4951 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float scrollSpeedBackground = 0.02f;
		__this->set_scrollSpeedBackground_4((0.0199999996f));
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
// System.Void SerializedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedData__ctor_mC5F19450ECFC5813B020A9273C4670F0B985A28A (SerializedData_tD76B8D36860E81A3696C43F68E8D646BA1F537AB * __this, const RuntimeMethod* method)
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
// System.Void ShootingEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingEnemy_Start_mDE08E64B426E64A425A49789CBA67C0C77C92B17 (ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * __this, const RuntimeMethod* method)
{
	{
		// enemyFire = StartCoroutine(FireLasers());
		RuntimeObject* L_0;
		L_0 = ShootingEnemy_FireLasers_mA93CA08C255AFB23C7C2A17A953152D38514E72E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		__this->set_enemyFire_7(L_1);
		// }
		return;
	}
}
// System.Void ShootingEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingEnemy_Update_m72034A1F63795DCC6DFBB213CE5F546FC4A31A8E (ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ShootingEnemy::FireLasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingEnemy_FireLasers_mA93CA08C255AFB23C7C2A17A953152D38514E72E (ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * L_0 = (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC *)il2cpp_codegen_object_new(U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC_il2cpp_TypeInfo_var);
		U3CFireLasersU3Ed__6__ctor_mE99516CD118003D0B2D7CDA182CFC5E0B59E4C8C(L_0, 0, /*hidden argument*/NULL);
		U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ShootingEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingEnemy__ctor_m1CA695E49F7364CAB4A8305E34955F699903307E (ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * __this, const RuntimeMethod* method)
{
	{
		// public float laserForce = 20;
		__this->set_laserForce_6((20.0f));
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// currentTime = startingTime;
		float L_0 = __this->get_startingTime_4();
		__this->set_currentTime_5(L_0);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral278EFF11C840DBA305398085C93A811533F0A4B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime -= 1 * Time.deltaTime;
		float L_0 = __this->get_currentTime_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentTime_5(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)))));
		// print(currentTime);
		float L_2 = __this->get_currentTime_5();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_4, /*hidden argument*/NULL);
		// CountDownTimer.text = currentTime.ToString("0");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_CountDownTimer_6();
		float* L_6 = __this->get_address_of_currentTime_5();
		String_t* L_7;
		L_7 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_6, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// CountDownTimer.color = Color.blue;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_CountDownTimer_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// if (currentTime <= 1)
		float L_10 = __this->get_currentTime_5();
		if ((!(((float)L_10) <= ((float)(1.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// CountDownTimer.color = Color.red;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_CountDownTimer_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// currentTime = 0;
		__this->set_currentTime_5((0.0f));
		// SceneManager.LoadScene("GameScene2");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral278EFF11C840DBA305398085C93A811533F0A4B3, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// protected float startingTime = 8f;
		__this->set_startingTime_4((8.0f));
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
// System.Void ShootingEnemy/<FireLasers>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireLasersU3Ed__6__ctor_mE99516CD118003D0B2D7CDA182CFC5E0B59E4C8C (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ShootingEnemy/<FireLasers>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireLasersU3Ed__6_System_IDisposable_Dispose_m9CA906E76F791DC1A8EFF589B5723A15B17A9BAA (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ShootingEnemy/<FireLasers>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireLasersU3Ed__6_MoveNext_mCFAD62A1B1E4069BB6CF99EC8AD8A460D88EFA3E (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// float timer = 3f;
		V_2 = (3.0f);
		// GameObject enemyLaser = Instantiate(laser, fire.position, transform.rotation);
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_laser_4();
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_6 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6->get_fire_5();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_9 = V_1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D enemy = enemyLaser.GetComponent<Rigidbody2D>();
		NullCheck(L_12);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13;
		L_13 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_12, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// enemy.AddForce(transform.up * laserForce);
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_15, /*hidden argument*/NULL);
		ShootingEnemy_t41996B29EF9F881562B924A807703E988E68813C * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get_laserForce_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_18, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_13, L_20, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(timer);
		float L_21 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object ShootingEnemy/<FireLasers>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireLasersU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m59277392CF59F0EA4F26475D26E4653245BA7B76 (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ShootingEnemy/<FireLasers>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireLasersU3Ed__6_System_Collections_IEnumerator_Reset_mF2C2A6AE112CC5102434891E3D69F368A15EB20C (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireLasersU3Ed__6_System_Collections_IEnumerator_Reset_mF2C2A6AE112CC5102434891E3D69F368A15EB20C_RuntimeMethod_var)));
	}
}
// System.Object ShootingEnemy/<FireLasers>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireLasersU3Ed__6_System_Collections_IEnumerator_get_Current_m1359BA9C0A3F1C7BE5932CFC2FA4E366CB49639D (U3CFireLasersU3Ed__6_tF95F2B2C52FC9F7D1BE150F36DB36F3C5E82B9DC * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerHighScore_m34B520C90E4BAD44C50D2E160A3DB7724CF5EF50_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerHighScore; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerHighScore_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerScore_mE34EBC1BB866F9C9837B27AE34FEC41C055E1AD5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerScore; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerScore_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerScore_mBD1DBDA37D755ABB0CFB4C2548BA825878CB20F4_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerScore = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerScore_4(L_0);
		// set { _PlayerScore = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameData_get_PlayerLives_mC1F4808FCC1B735ECF63DC2AF10CDE681E342CFC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _PlayerLives; }
		int32_t L_0 = ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->get__PlayerLives_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerLives_mAAB8F1F3E13CD1EF90A452989B69539F29DDF641_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerLives = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerLives_5(L_0);
		// set { _PlayerLives = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_set_PlayerHighScore_m06FC635C08BC59DF6AC6BA9CAFDE4B416A76AB51_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _PlayerHighScore = value; }
		int32_t L_0 = ___value0;
		((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_StaticFields*)il2cpp_codegen_static_fields_for(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var))->set__PlayerHighScore_6(L_0);
		// set { _PlayerHighScore = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
