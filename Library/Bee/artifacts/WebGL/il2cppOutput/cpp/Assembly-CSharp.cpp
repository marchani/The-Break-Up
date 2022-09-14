#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct KeyCollection_t8C30BB65AF9FBFAECB1B7A76382CFE1DC807151A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct ValueCollection_t20C4B5EA5EC869170588CB5DDAC13DDC9F5D9543;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>[]
struct EntryU5BU5D_t1DF161BBA1FE167C231EEDBD09BAD629DB62DD4D;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CreditsGUI
struct CreditsGUI_t4E1AF7250239CC881A9DF5B3FF301C77ACF5E660;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyParticleSystem
struct DestroyParticleSystem_t354960DA9518228ACAA86037A937D6F720183434;
// Fading
struct Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98;
// FallingObject
struct FallingObject_t4FF8E859CF387AA43C31B8CCEA9AE129249ADC48;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InstructionsGUI
struct InstructionsGUI_tECA58A7269F4F382D24EE3699C4E24300180ACCA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LevelBackground
struct LevelBackground_t1659550FA2B2A08EEEF288D4AD67A59C8AB5C158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NotificationsManager
struct NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayAgainButton
struct PlayAgainButton_t347E782A7C9E970F17B138B0A8C70812B3D788A8;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ReturnToMenuButton
struct ReturnToMenuButton_t4DD6DE58AEDB49A5721E0EFF8D29B68083944D50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// SummaryScreen
struct SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TitleScreen
struct TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// GameManager/<SteinCaught>d__38
struct U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral050FD79488ECABE161C5AE383CC61BEA2CC5661B;
IL2CPP_EXTERN_C String_t* _stringLiteral058EEC3BA9E9B3C9BCCE201B9279BB5D0C5FBA9D;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E;
IL2CPP_EXTERN_C String_t* _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral1361198F6A05C8982DAB9037E3B5CEB857DAE064;
IL2CPP_EXTERN_C String_t* _stringLiteral156BB0A931775BFD5B3AF7CF35A83F40E72526F7;
IL2CPP_EXTERN_C String_t* _stringLiteral18FEC8D68332856E58021B07EC6B9B56762C5680;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5DE793FAA5BB06F2632467BD633C7E220E95A1;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral245D5F516F5A2F44F3D9EB4615042FFCA8028CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral26D02F58E4FE363BF003CF813CA8583FB218F00E;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3B9C6F88EA2FD6EC80D9559C14E9604DFBDD71;
IL2CPP_EXTERN_C String_t* _stringLiteral30C33488D5EA27ABA94EEC849728FF515D0D8EE8;
IL2CPP_EXTERN_C String_t* _stringLiteral32A327A8B13833EA8DC1415D955F03A762C7E038;
IL2CPP_EXTERN_C String_t* _stringLiteral32FF795651C0A9F610E891F8C140C781CD7FBE7A;
IL2CPP_EXTERN_C String_t* _stringLiteral3842B3536C3E874CA910AFC194A9EDA4E9CF748B;
IL2CPP_EXTERN_C String_t* _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral524EAB519DBC62B135E861D82014B696E06331EE;
IL2CPP_EXTERN_C String_t* _stringLiteral546F548EAF5A09838FA46FCCE340586AD2E76F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral67C432D5B9035B7D2346FEDB3F19EF74B409D764;
IL2CPP_EXTERN_C String_t* _stringLiteral792FA712F2D7BC1613EF6021356D415E0989EB21;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA84EF0BD3F6EC77E3F0A3826DE1EE323762620;
IL2CPP_EXTERN_C String_t* _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA91639B144BCB1EA4B2C50A82F79931EDD439E41;
IL2CPP_EXTERN_C String_t* _stringLiteralAF27F5E51B71BCB3292F6514F6ED43D48B5F3686;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF41C0FFCD2C16A3C74E1E70773FDD03E8DCA97;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C8660EB7B049EAC4A3F790C27CC37957A0FEB9;
IL2CPP_EXTERN_C String_t* _stringLiteralD40C0B4F5ED320578CEDC2EF68AD990C7B52E3D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB7F38364A206504AEB9B3CF5F490D50A01795B;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC2E2AA0E436676AF9C2B44DF08E800FF51FB7E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B159DB72C4D8855ACD3475CF9BFF2A2CB59515;
IL2CPP_EXTERN_C String_t* _stringLiteralF3566822B3AF0DDA46BDC1C39E5C2354139E8B7E;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B342A4983F370CA1631F28D59E0F04B70ED214;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7406B69F387A8C895A2538CD1C1D2F0B4D3040;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7B8C8E7F1A1BBCBD46B7324ADCEB1413BDFA55;
IL2CPP_EXTERN_C String_t* _stringLiteralFF52F43C979D417592F5859E8EDFA957A7FE8631;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFading_tA7703267D26B6619789A03FDD24A3785BFB33B98_m7B0BF5AB992606B0D30ACBA326EDFD867177B921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2_m8C225B6FED94BA728462001506C16840530384CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m8AAD59C23F43ABD863568F9AD4B596ABA0EF107B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m188E9A32AFCE7F597D92B260228D6A4DF660D006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEEBEB5983240878D9AA32046C5CAA08715FA6768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1DFEACA4A32616C9BFC25A4629DC35E2AD71BC32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB08F26E42980CC39EEE2A65C46F4112BC7C9358A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_PlayAgainOnClick_m04829D0FA6C5F291D2FA6C850A1A39A3F3A1F66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_ReturnToMenuOnClick_m5B8654274E304A0B7C39877909B9B6A303E4A268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mAFEEE179F2859D6C82F01ECB5977E9D6B0F913D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m02175D0B702A29B29C5CDB7308C820B625725D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSteinCaughtU3Ed__38_System_Collections_IEnumerator_Reset_m7E8BF9E5E8825D8E4EF1833F9D14CB4B98EB8265_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1DF161BBA1FE167C231EEDBD09BAD629DB62DD4D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8C30BB65AF9FBFAECB1B7A76382CFE1DC807151A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t20C4B5EA5EC869170588CB5DDAC13DDC9F5D9543* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<SteinCaught>d__38
struct U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B  : public RuntimeObject
{
	// System.Int32 GameManager/<SteinCaught>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<SteinCaught>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<SteinCaught>d__38::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
struct Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>
struct Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CreditsGUI
struct CreditsGUI_t4E1AF7250239CC881A9DF5B3FF301C77ACF5E660  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text CreditsGUI::credits
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___credits_4;
};

// DestroyParticleSystem
struct DestroyParticleSystem_t354960DA9518228ACAA86037A937D6F720183434  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fading
struct Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D Fading::fadeOutTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___fadeOutTexture_4;
	// System.Single Fading::fadeSpeed
	float ___fadeSpeed_5;
	// UnityEngine.Rect Fading::ScreenRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___ScreenRect_6;
	// System.Single Fading::alpha
	float ___alpha_7;
	// System.Int32 Fading::fadeDir
	int32_t ___fadeDir_8;
};

// FallingObject
struct FallingObject_t4FF8E859CF387AA43C31B8CCEA9AE129249ADC48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FallingObject::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
	// System.Int32 FallingObject::speed
	int32_t ___speed_5;
	// UnityEngine.AudioClip[] FallingObject::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::gameOver
	bool ___gameOver_6;
	// System.Int32 GameManager::currentLevel
	int32_t ___currentLevel_7;
	// System.Int32 GameManager::numSteinsCaught
	int32_t ___numSteinsCaught_8;
	// System.Int32 GameManager::numTotalSteinsCaught
	int32_t ___numTotalSteinsCaught_9;
	// System.Int32 GameManager::numSteinsBroken
	int32_t ___numSteinsBroken_10;
	// System.Int32 GameManager::bestScore
	int32_t ___bestScore_11;
	// System.Int32 GameManager::lastBest
	int32_t ___lastBest_12;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
	// NotificationsManager GameManager::notifications
	NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* ___notifications_5;
};

// InstructionsGUI
struct InstructionsGUI_tECA58A7269F4F382D24EE3699C4E24300180ACCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text InstructionsGUI::instructions
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___instructions_4;
};

// LevelBackground
struct LevelBackground_t1659550FA2B2A08EEEF288D4AD67A59C8AB5C158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer LevelBackground::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_4;
	// System.Int32 LevelBackground::buildingID
	int32_t ___buildingID_5;
};

// NotificationsManager
struct NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>> NotificationsManager::Listeners
	Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* ___Listeners_4;
};

// PlayAgainButton
struct PlayAgainButton_t347E782A7C9E970F17B138B0A8C70812B3D788A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PlayAgainButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_4;
	// UnityEngine.UI.Image PlayAgainButton::buttonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonImage_5;
	// UnityEngine.UI.Text PlayAgainButton::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_6;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::lastX
	float ___lastX_4;
	// UnityEngine.GameObject PlayerController::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_5;
	// UnityEngine.AudioClip PlayerController::clip1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1_6;
	// UnityEngine.AudioClip PlayerController::explosionClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___explosionClip_7;
	// System.Int32 PlayerController::startingHealth
	int32_t ___startingHealth_8;
	// System.Int32 PlayerController::currentHealth
	int32_t ___currentHealth_9;
	// UnityEngine.UI.Slider PlayerController::healthSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthSlider_10;
	// UnityEngine.UI.Image PlayerController::damageImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___damageImage_11;
	// System.Single PlayerController::flashSpeed
	float ___flashSpeed_12;
	// UnityEngine.Color PlayerController::flashColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flashColor_13;
	// System.Boolean PlayerController::damaged
	bool ___damaged_14;
	// UnityEngine.Transform PlayerController::ThisTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ThisTransform_15;
};

// ReturnToMenuButton
struct ReturnToMenuButton_t4DD6DE58AEDB49A5721E0EFF8D29B68083944D50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button ReturnToMenuButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_4;
	// UnityEngine.UI.Image ReturnToMenuButton::buttonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonImage_5;
	// UnityEngine.UI.Text ReturnToMenuButton::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_6;
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Score::score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_4;
};

// SummaryScreen
struct SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SummaryScreen::summaryText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___summaryText_4;
	// UnityEngine.UI.Button SummaryScreen::playNextLevelButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___playNextLevelButton_5;
	// UnityEngine.UI.Button SummaryScreen::viewCreditsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___viewCreditsButton_6;
};

// TitleScreen
struct TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// System.Boolean GameManager::get_GameOver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_CurrentLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// NotificationsManager GameManager::get_Notifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002 (const RuntimeMethod* method) ;
// System.Void NotificationsManager::PostNotification(UnityEngine.Component,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Sender0, String_t* ___NotificationName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_IsPlaying_m571DF72FBE485EC4A61364C1C45548B79C1FEF7B (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) ;
// System.Void PlayerController::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Death_m192038221F40E89AF6336C97B6E2C417EB1D0B25 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void GameManager::set_GameOver(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_GameOver_m47EBB005D7DE24B92F278C7F81B82AC6B72E35CA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void NotificationsManager::AddListener(UnityEngine.Component,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Sender0, String_t* ___NotificationName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_NumSteinsCaught()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_NumTotalSteinsCaught()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_BestScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_LastBest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_LastBest_mC297E908197D006730BB9555F690A7E2989FA1F3_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_NumSteinsBroken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsBroken_mA00D8404A9BA98FF675156F93156AC6E1441A425_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_CurrentLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_CurrentLevel_mB197C3DAF174859B6C922D4913DE7C1856F1CC98 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameObject_AddComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mAFEEE179F2859D6C82F01ECB5977E9D6B0F913D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<NotificationsManager>()
inline NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* Component_GetComponent_TisNotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2_m8C225B6FED94BA728462001506C16840530384CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void GameManager::set_LastBest(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_LastBest_m5D487B9459D2846D80C506AD114DF0B314CE1F72_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_BestScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_BestScore_m4846CAD581E2B98D7C70A05C3569B23ECA474D6B_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_NumSteinsCaught(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_NumSteinsCaught_m1F02C9D494559D55D9000CF6B8828E72EA537215 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_NumSteinsBroken(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_NumSteinsBroken_m7EB7680DDB865FD15AE19A9A7605EE91BCDFB08A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::set_NumTotalSteinsCaught(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_NumTotalSteinsCaught_mEED631F223FA6E416221E0D2718F6DBE0064F7F9_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void GameManager/<SteinCaught>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSteinCaughtU3Ed__38__ctor_m53829D438009EDEDD1F22A697CBE70E441C22195 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Fading>()
inline Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* Component_GetComponent_TisFading_tA7703267D26B6619789A03FDD24A3785BFB33B98_m7B0BF5AB992606B0D30ACBA326EDFD867177B921 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Fading::BeginFade(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Fading_BeginFade_mEE2622EBC4EAD6268E788D9B2BC94FA225F61D83 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, int32_t ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9 (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
inline void List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0 (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, String_t* ___key0, List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, String_t*, List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::get_Item(TKey)
inline List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850 (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
inline void List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_inline (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
inline int32_t List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758 (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
inline Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
inline void Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_inline (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, RuntimeObject* ___value1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
inline bool Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::Clear()
inline void Dictionary_2_Clear_m8AAD59C23F43ABD863568F9AD4B596ABA0EF107B (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor()
inline void Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636 (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::GetEnumerator()
inline Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF Dictionary_2_GetEnumerator_m188E9A32AFCE7F597D92B260228D6A4DF660D006 (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF (*) (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::Dispose()
inline void Enumerator_Dispose_mEEBEB5983240878D9AA32046C5CAA08715FA6768 (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
inline KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 Enumerator_get_Current_mB08F26E42980CC39EEE2A65C46F4112BC7C9358A_inline (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 (*) (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::get_Value()
inline List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline (KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6* __this, const RuntimeMethod* method)
{
	return ((  List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* (*) (KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m02175D0B702A29B29C5CDB7308C820B625725D8A_inline (KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<UnityEngine.Component>>::MoveNext()
inline bool Enumerator_MoveNext_m1DFEACA4A32616C9BFC25A4629DC35E2AD71BC32 (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void NotificationsManager::RemoveRedundancies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_RemoveRedundancies_mFEF6BAC793301DCA0854E425F5187FC10AC6968C (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
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
// System.Void FallingObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingObject_Update_mCEB66A0097E28ADFDC2B7C3B98058D40378EFC19 (FallingObject_t4FF8E859CF387AA43C31B8CCEA9AE129249ADC48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18FEC8D68332856E58021B07EC6B9B56762C5680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA91639B144BCB1EA4B2C50A82F79931EDD439E41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8224EB348914F18B459158B0498D27694A7CD12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.Instance.GameOver == true) return;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		bool L_1;
		L_1 = GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameManager.Instance.GameOver == true) return;
		return;
	}

IL_000d:
	{
		// if ((GameManager.Instance.CurrentLevel == 2) && (this.CompareTag("bomb"))) speed = 32;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_3;
		L_3 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		bool L_4;
		L_4 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(__this, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// if ((GameManager.Instance.CurrentLevel == 2) && (this.CompareTag("bomb"))) speed = 32;
		__this->___speed_5 = ((int32_t)32);
	}

IL_002f:
	{
		// if ((GameManager.Instance.CurrentLevel == 3) && (this.CompareTag("bomb"))) speed = 34;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_6;
		L_6 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_7;
		L_7 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(__this, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// if ((GameManager.Instance.CurrentLevel == 3) && (this.CompareTag("bomb"))) speed = 34;
		__this->___speed_5 = ((int32_t)34);
	}

IL_0051:
	{
		// if ((GameManager.Instance.CurrentLevel == 4) && (this.CompareTag("bomb"))) speed = 36;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8;
		L_8 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_9;
		L_9 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_10;
		L_10 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(__this, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		// if ((GameManager.Instance.CurrentLevel == 4) && (this.CompareTag("bomb"))) speed = 36;
		__this->___speed_5 = ((int32_t)36);
	}

IL_0073:
	{
		// if ((GameManager.Instance.CurrentLevel == 5) && (this.CompareTag("bomb"))) speed = 38;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11;
		L_11 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_12;
		L_12 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			goto IL_0095;
		}
	}
	{
		bool L_13;
		L_13 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(__this, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		// if ((GameManager.Instance.CurrentLevel == 5) && (this.CompareTag("bomb"))) speed = 38;
		__this->___speed_5 = ((int32_t)38);
	}

IL_0095:
	{
		// transform.position = new Vector3 (transform.position.x,
		//                                   transform.position.y - (speed * Time.deltaTime),
		//                                   transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		int32_t L_21 = __this->___speed_5;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), L_17, ((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(((float)L_21), L_22)))), L_25, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_26, NULL);
		// if (transform.position.y < 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___y_3;
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_0176;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(audioClips[Random.Range(0, audioClips.Length)]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30;
		L_30 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = __this->___audioClips_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_32 = __this->___audioClips_6;
		int32_t L_33;
		L_33 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_32)->max_length)), NULL);
		int32_t L_34 = L_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_35 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_30, L_35, NULL);
		// Instantiate(prefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_36, L_38, L_39, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// if (this.CompareTag("stein"))
		bool L_41;
		L_41 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(__this, _stringLiteralA91639B144BCB1EA4B2C50A82F79931EDD439E41, NULL);
		if (!L_41)
		{
			goto IL_0153;
		}
	}
	{
		// GameManager.Notifications.PostNotification (this, "SteinBroken");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_42;
		L_42 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436(L_42, __this, _stringLiteral18FEC8D68332856E58021B07EC6B9B56762C5680, NULL);
	}

IL_0153:
	{
		// transform.position = new Vector3(Random.Range(0, 60), 50, -16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_44;
		L_44 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)60), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), ((float)L_44), (50.0f), (-16.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_45, NULL);
	}

IL_0176:
	{
		// }
		return;
	}
}
// System.Void FallingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingObject__ctor_m5671BB566287CEF454B680CBE86A2F49C43C61CC (FallingObject_t4FF8E859CF387AA43C31B8CCEA9AE129249ADC48* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelBackground::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelBackground_Start_mDF742C0E153544E5CBC7ED29D7EFC531F2EE5250 (LevelBackground_t1659550FA2B2A08EEEF288D4AD67A59C8AB5C158* __this, const RuntimeMethod* method) 
{
	{
		// if (buildingID == GameManager.Instance.CurrentLevel)
		int32_t L_0 = __this->___buildingID_5;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_2;
		L_2 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_1, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		// meshRenderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->___meshRenderer_4;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_4;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelBackground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelBackground__ctor_m8B9048FAE10EA7DC0BB7A47954D7DA359C37D7AA (LevelBackground_t1659550FA2B2A08EEEF288D4AD67A59C8AB5C158* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// currentHealth = startingHealth;
		int32_t L_0 = __this->___startingHealth_8;
		__this->___currentHealth_9 = L_0;
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Animation>().Stop();  // this stops Unity from playing the character's default animation.
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756(L_0, NULL);
		// ThisTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___ThisTransform_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ThisTransform_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (damaged == true)
		bool L_0 = __this->___damaged_14;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// damageImage.color = flashColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___damageImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___flashColor_13;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		goto IL_0047;
	}

IL_001b:
	{
		// damageImage.color = Color.Lerp (damageImage.color, Color.clear, flashSpeed * Time.deltaTime);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___damageImage_11;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___damageImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		float L_7 = __this->___flashSpeed_12;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_9);
	}

IL_0047:
	{
		// damaged = false;
		__this->___damaged_14 = (bool)0;
		// if (Input.GetKey("right"))
		bool L_10;
		L_10 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_10)
		{
			goto IL_00a0;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x + 0.45f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)il2cpp_codegen_add(L_14, (0.449999988f))), L_17, L_20, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_21, NULL);
	}

IL_00a0:
	{
		// if (Input.GetKey("left"))
		bool L_22;
		L_22 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_22)
		{
			goto IL_00f2;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x - 0.45f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), ((float)il2cpp_codegen_subtract(L_26, (0.449999988f))), L_29, L_32, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_33, NULL);
	}

IL_00f2:
	{
		// if (lastX != transform.position.x)
		float L_34 = __this->___lastX_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___x_2;
		if ((((float)L_34) == ((float)L_37)))
		{
			goto IL_012f;
		}
	}
	{
		// if (!GetComponent<Animation>().IsPlaying("catch"))
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_38;
		L_38 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		bool L_39;
		L_39 = Animation_IsPlaying_m571DF72FBE485EC4A61364C1C45548B79C1FEF7B(L_38, _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB, NULL);
		if (L_39)
		{
			goto IL_0152;
		}
	}
	{
		// GetComponent<Animation>().Play("step");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_40;
		L_40 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		bool L_41;
		L_41 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_40, _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048, NULL);
		goto IL_0152;
	}

IL_012f:
	{
		// if (!GetComponent<Animation>().IsPlaying("catch"))
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_42;
		L_42 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		bool L_43;
		L_43 = Animation_IsPlaying_m571DF72FBE485EC4A61364C1C45548B79C1FEF7B(L_42, _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB, NULL);
		if (L_43)
		{
			goto IL_0152;
		}
	}
	{
		// GetComponent<Animation>().Play("idle");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_44;
		L_44 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		bool L_45;
		L_45 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_44, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
	}

IL_0152:
	{
		// lastX = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		__this->___lastX_4 = L_48;
		// }
		return;
	}
}
// System.Void PlayerController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// damaged = true;
		__this->___damaged_14 = (bool)1;
		// currentHealth -= amount;
		int32_t L_0 = __this->___currentHealth_9;
		int32_t L_1 = ___amount0;
		__this->___currentHealth_9 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// healthSlider.value = currentHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___healthSlider_10;
		int32_t L_3 = __this->___currentHealth_9;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)L_3));
		// if ((currentHealth <= 0) && (GameManager.Instance.GameOver == false))
		int32_t L_4 = __this->___currentHealth_9;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		bool L_6;
		L_6 = GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		// Death();
		PlayerController_Death_m192038221F40E89AF6336C97B6E2C417EB1D0B25(__this, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Death_m192038221F40E89AF6336C97B6E2C417EB1D0B25 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GameOver = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_set_GameOver_m47EBB005D7DE24B92F278C7F81B82AC6B72E35CA(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter_m2FC01282FAEE546C4408E6B901DBB3EB5A5BF989 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral050FD79488ECABE161C5AE383CC61BEA2CC5661B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA91639B144BCB1EA4B2C50A82F79931EDD439E41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8224EB348914F18B459158B0498D27694A7CD12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.CompareTag("bomb"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// Instantiate(explosion, col.gameObject.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___explosion_5;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// GetComponent<AudioSource>().PlayOneShot(explosionClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___explosionClip_7;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_10, L_11, NULL);
		// GetComponent<Animation>().Stop();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_12;
		L_12 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756(L_12, NULL);
		// TakeDamage(20);
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(__this, ((int32_t)20), NULL);
		goto IL_009d;
	}

IL_0059:
	{
		// else if (col.gameObject.CompareTag("stein"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		bool L_15;
		L_15 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_14, _stringLiteralA91639B144BCB1EA4B2C50A82F79931EDD439E41, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// GameManager.Notifications.PostNotification (this, "SteinCaught");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_16;
		L_16 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436(L_16, __this, _stringLiteral050FD79488ECABE161C5AE383CC61BEA2CC5661B, NULL);
		// GetComponent<Animation>().Play("catch");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_17;
		L_17 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		bool L_18;
		L_18 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_17, _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB, NULL);
		// GetComponent<AudioSource>().PlayOneShot(clip1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19;
		L_19 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20 = __this->___clip1_6;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_19, L_20, NULL);
	}

IL_009d:
	{
		// col.gameObject.transform.position = new Vector3 (Random.Range (0, 60), 50, -16);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_21 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		int32_t L_24;
		L_24 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)60), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)L_24), (50.0f), (-16.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_25, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// private int startingHealth = 100;
		__this->___startingHealth_8 = ((int32_t)100);
		// public float flashSpeed = 5.0f;
		__this->___flashSpeed_12 = (5.0f);
		// public Color flashColor = new Color (1.0f, 0.0f, 0.0f, 0.1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		__this->___flashColor_13 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CreditsGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsGUI_Start_mEEC058F178A92C338A54AFC7D1280048CD936489 (CreditsGUI_t4E1AF7250239CC881A9DF5B3FF301C77ACF5E660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26D02F58E4FE363BF003CF813CA8583FB218F00E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32A327A8B13833EA8DC1415D955F03A762C7E038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral546F548EAF5A09838FA46FCCE340586AD2E76F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7B8C8E7F1A1BBCBD46B7324ADCEB1413BDFA55);
		s_Il2CppMethodInitialized = true;
	}
	{
		// credits.text = "Developed by\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___credits_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral26D02F58E4FE363BF003CF813CA8583FB218F00E);
		// credits.text += "Carlos Marchani\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___credits_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral546F548EAF5A09838FA46FCCE340586AD2E76F3A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// credits.text += "Based on The Break-Up Game in\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___credits_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral32A327A8B13833EA8DC1415D955F03A762C7E038, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// credits.text += "Unity 4.x Game Development by Example";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___credits_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9;
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralFE7B8C8E7F1A1BBCBD46B7324ADCEB1413BDFA55, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Void CreditsGUI::ReturnToMenuOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsGUI_ReturnToMenuOnClick_mB9C64D907269FD705F4365D0CF280ADE2EF6207D (CreditsGUI_t4E1AF7250239CC881A9DF5B3FF301C77ACF5E660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("title");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, NULL);
		// }
		return;
	}
}
// System.Void CreditsGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsGUI__ctor_m6F2C71A74B76ECB1AEDB81F41618712B7E7F493E (CreditsGUI_t4E1AF7250239CC881A9DF5B3FF301C77ACF5E660* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InstructionsGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsGUI_Start_m1250750A17EBADFA23E627D6DDB0064F2D4593AD (InstructionsGUI_tECA58A7269F4F382D24EE3699C4E24300180ACCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156BB0A931775BFD5B3AF7CF35A83F40E72526F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA84EF0BD3F6EC77E3F0A3826DE1EE323762620);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFF41C0FFCD2C16A3C74E1E70773FDD03E8DCA97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C8660EB7B049EAC4A3F790C27CC37957A0FEB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB7F38364A206504AEB9B3CF5F490D50A01795B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1B159DB72C4D8855ACD3475CF9BFF2A2CB59515);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF52F43C979D417592F5859E8EDFA957A7FE8631);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instructions.text = "The Break-Up puts you in the role of a guy who's\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___instructions_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral9EA84EF0BD3F6EC77E3F0A3826DE1EE323762620);
		// instructions.text += "been kicked out of his apartment by his girlfriend.\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralD3C8660EB7B049EAC4A3F790C27CC37957A0FEB9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// instructions.text += "Your most prized possessions are your Beer Steins of the\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralE1B159DB72C4D8855ACD3475CF9BFF2A2CB59515, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// instructions.text += "World collection and your cartoon bomb collection, and your\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9;
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralDCB7F38364A206504AEB9B3CF5F490D50A01795B, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// instructions.text += "ex-girlfriend is throwing both of them out of the window!\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13;
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_14);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteralFF52F43C979D417592F5859E8EDFA957A7FE8631, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// instructions.text += "The bombs, naturally, are lit.  You have to catch the\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = L_17;
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteral156BB0A931775BFD5B3AF7CF35A83F40E72526F7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// instructions.text += "fragile beer steins and avoid the bombs.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___instructions_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21;
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_22);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteralCFF41C0FFCD2C16A3C74E1E70773FDD03E8DCA97, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// }
		return;
	}
}
// System.Void InstructionsGUI::ReturnToMenuOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsGUI_ReturnToMenuOnClick_m73B660AC912DB5720684A65768115A8BA1B74431 (InstructionsGUI_tECA58A7269F4F382D24EE3699C4E24300180ACCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("title");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, NULL);
		// }
		return;
	}
}
// System.Void InstructionsGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsGUI__ctor_mD21877AA74C3BD419798C6D581E86EF69258888B (InstructionsGUI_tECA58A7269F4F382D24EE3699C4E24300180ACCA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayAgainButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAgainButton_Start_m3846A8A1805277AE65CA918EE04018A6A87961F9 (PlayAgainButton_t347E782A7C9E970F17B138B0A8C70812B3D788A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_PlayAgainOnClick_m04829D0FA6C5F291D2FA6C850A1A39A3F3A1F66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Notifications.AddListener (this, "GameOver");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_0;
		L_0 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_0, __this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		// buttonImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___buttonImage_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// buttonText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___buttonText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// button.onClick.AddListener (GameManager.Instance.PlayAgainOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___button_4;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, L_5, (intptr_t)((void*)GameManager_PlayAgainOnClick_m04829D0FA6C5F291D2FA6C850A1A39A3F3A1F66C_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayAgainButton::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAgainButton_GameOver_mBB8063285BDA841C92C81D3A02A1125E896C7129 (PlayAgainButton_t347E782A7C9E970F17B138B0A8C70812B3D788A8* __this, const RuntimeMethod* method) 
{
	{
		// buttonImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___buttonImage_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// buttonText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___buttonText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayAgainButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAgainButton__ctor_m30B2196A87E7284A551D49B1EB4569B40D07DDE9 (PlayAgainButton_t347E782A7C9E970F17B138B0A8C70812B3D788A8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ReturnToMenuButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToMenuButton_Start_m8B60B73EC8CF27A9CC02242F170D5977C4773FE3 (ReturnToMenuButton_t4DD6DE58AEDB49A5721E0EFF8D29B68083944D50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_ReturnToMenuOnClick_m5B8654274E304A0B7C39877909B9B6A303E4A268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Notifications.AddListener (this, "GameOver");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_0;
		L_0 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_0, __this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		// buttonImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___buttonImage_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// buttonText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___buttonText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// button.onClick.AddListener (GameManager.Instance.ReturnToMenuOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___button_4;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, L_5, (intptr_t)((void*)GameManager_ReturnToMenuOnClick_m5B8654274E304A0B7C39877909B9B6A303E4A268_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void ReturnToMenuButton::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToMenuButton_GameOver_m8588CE911D88E5CA487F04DDC2390F3AB2F95DE9 (ReturnToMenuButton_t4DD6DE58AEDB49A5721E0EFF8D29B68083944D50* __this, const RuntimeMethod* method) 
{
	{
		// buttonImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___buttonImage_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// buttonText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___buttonText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReturnToMenuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToMenuButton__ctor_m25B9377A675D2B58E9F4AB588479902D547B2748 (ReturnToMenuButton_t4DD6DE58AEDB49A5721E0EFF8D29B68083944D50* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5DE793FAA5BB06F2632467BD633C7E220E95A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score.text = "0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___score_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// GameManager.Notifications.AddListener (this, "NumSteinsCaughtUpdated");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_1;
		L_1 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_1, __this, _stringLiteral1D5DE793FAA5BB06F2632467BD633C7E220E95A1, NULL);
		// GameManager.Notifications.AddListener (this, "GameOver");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_2;
		L_2 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_2, __this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		// }
		return;
	}
}
// System.Void Score::NumSteinsCaughtUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_NumSteinsCaughtUpdated_m8FB5E5EA29BE12B81FF36775B1BA554365710508 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (GameManager.Instance.GameOver == false)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		bool L_1;
		L_1 = GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// score.text = GameManager.Instance.NumSteinsCaught.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___score_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_4;
		L_4 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Score::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_GameOver_m40731DA011372B68EE68D174B94ADC90C193FF33 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30C33488D5EA27ABA94EEC849728FF515D0D8EE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32FF795651C0A9F610E891F8C140C781CD7FBE7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF27F5E51B71BCB3292F6514F6ED43D48B5F3686);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = "Steins: " + GameManager.Instance.NumTotalSteinsCaught.ToString() +
		//              "\nYour best: " + GameManager.Instance.BestScore;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_1;
		L_1 = GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271_inline(L_0, NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_4;
		L_4 = GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline(L_3, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralAF27F5E51B71BCB3292F6514F6ED43D48B5F3686, L_2, _stringLiteral30C33488D5EA27ABA94EEC849728FF515D0D8EE8, L_5, NULL);
		V_0 = L_6;
		// if (GameManager.Instance.BestScore > GameManager.Instance.LastBest)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7;
		L_7 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_8;
		L_8 = GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline(L_7, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9;
		L_9 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_10;
		L_10 = GameManager_get_LastBest_mC297E908197D006730BB9555F690A7E2989FA1F3_inline(L_9, NULL);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		// str += "\nNEW RECORD!";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral32FF795651C0A9F610E891F8C140C781CD7FBE7A, NULL);
		V_0 = L_12;
	}

IL_0056:
	{
		// score.text = str;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___score_4;
		String_t* L_14 = V_0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SummaryScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryScreen_Start_mEFD404020D9060B96616911C9D0D53D282123284 (SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral058EEC3BA9E9B3C9BCCE201B9279BB5D0C5FBA9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245D5F516F5A2F44F3D9EB4615042FFCA8028CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3B9C6F88EA2FD6EC80D9559C14E9604DFBDD71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3842B3536C3E874CA910AFC194A9EDA4E9CF748B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524EAB519DBC62B135E861D82014B696E06331EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792FA712F2D7BC1613EF6021356D415E0989EB21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD40C0B4F5ED320578CEDC2EF68AD990C7B52E3D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCC2E2AA0E436676AF9C2B44DF08E800FF51FB7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3566822B3AF0DDA46BDC1C39E5C2354139E8B7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B342A4983F370CA1631F28D59E0F04B70ED214);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_3 = NULL;
	{
		// int numSteinsDropped = GameManager.Instance.NumSteinsCaught + GameManager.Instance.NumSteinsBroken;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_1;
		L_1 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_0, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_3;
		L_3 = GameManager_get_NumSteinsBroken_mA00D8404A9BA98FF675156F93156AC6E1441A425_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		// float percentSteinsCaught = ( (float)GameManager.Instance.NumSteinsCaught / numSteinsDropped) * 100;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_5;
		L_5 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_4, NULL);
		int32_t L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)(((float)L_5)/((float)L_6))), (100.0f)));
		// summaryText.text = "Level " + GameManager.Instance.CurrentLevel + " completed\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___summaryText_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8;
		L_8 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_9;
		L_9 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_8, NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_10, _stringLiteral2F3B9C6F88EA2FD6EC80D9559C14E9604DFBDD71, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		// summaryText.text += "You saved " + GameManager.Instance.NumSteinsCaught.ToString() + " steins from your precious collection!\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_13);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15;
		L_15 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_16;
		L_16 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_15, NULL);
		V_2 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_18;
		L_18 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_14, _stringLiteralDCC2E2AA0E436676AF9C2B44DF08E800FF51FB7E, L_17, _stringLiteral3842B3536C3E874CA910AFC194A9EDA4E9CF748B, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// summaryText.text += "Saved " + GameManager.Instance.NumSteinsCaught.ToString() + " out of " + numSteinsDropped.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___summaryText_4;
		V_3 = L_19;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = V_3;
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_23);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		ArrayElementTypeCheck (L_25, _stringLiteral058EEC3BA9E9B3C9BCCE201B9279BB5D0C5FBA9D);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral058EEC3BA9E9B3C9BCCE201B9279BB5D0C5FBA9D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27;
		L_27 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_28;
		L_28 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_27, NULL);
		V_2 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_26;
		ArrayElementTypeCheck (L_30, _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_32);
		String_t* L_33;
		L_33 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_31, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_33);
		// summaryText.text += " (" + percentSteinsCaught.ToString("F0") + "%)\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = L_34;
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_35);
		String_t* L_37;
		L_37 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_38;
		L_38 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_36, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, L_37, _stringLiteralF3566822B3AF0DDA46BDC1C39E5C2354139E8B7E, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_38);
		// if (GameManager.Instance.CurrentLevel == 5)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_39;
		L_39 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_40;
		L_40 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_39, NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)5))))
		{
			goto IL_0175;
		}
	}
	{
		// summaryText.text += "A couple of months pass before you start dating another girl,\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = L_41;
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_42);
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_43, _stringLiteral245D5F516F5A2F44F3D9EB4615042FFCA8028CC9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_44);
		// summaryText.text += "and just a few weeks later... not this time!\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = L_45;
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_46);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, _stringLiteral792FA712F2D7BC1613EF6021356D415E0989EB21, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, L_48);
		// summaryText.text += "Way to go grow up, buddy.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = L_49;
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_50);
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_51, _stringLiteral524EAB519DBC62B135E861D82014B696E06331EE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_52);
		// viewCreditsButton.gameObject.SetActive (true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_53 = __this->___viewCreditsButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		return;
	}

IL_0175:
	{
		// summaryText.text += "A couple of months pass before you start dating another girl,\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = L_55;
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_56);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_57, _stringLiteral245D5F516F5A2F44F3D9EB4615042FFCA8028CC9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_56, L_58);
		// summaryText.text += "and just a few weeks later... another bad break up!\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = L_59;
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		String_t* L_62;
		L_62 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_61, _stringLiteralF4B342A4983F370CA1631F28D59E0F04B70ED214, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_62);
		// summaryText.text += "Time to save your steins again...";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = __this->___summaryText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = L_63;
		String_t* L_65;
		L_65 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_64);
		String_t* L_66;
		L_66 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_65, _stringLiteralD40C0B4F5ED320578CEDC2EF68AD990C7B52E3D6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_64, L_66);
		// playNextLevelButton.gameObject.SetActive (true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_67 = __this->___playNextLevelButton_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SummaryScreen::playNextLevelButtonOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryScreen_playNextLevelButtonOnClick_mF957B4B37D342875E86E6042EA3BEA1358874BD8 (SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameManager.Instance.CurrentLevel++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = L_0;
		int32_t L_2;
		L_2 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		GameManager_set_CurrentLevel_mB197C3DAF174859B6C922D4913DE7C1856F1CC98(L_1, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		// Application.LoadLevel ("game");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		// }
		return;
	}
}
// System.Void SummaryScreen::viewCreditsOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryScreen_viewCreditsOnClick_m97D7503899E9FB799F0EF5183A8938455EBBE998 (SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1361198F6A05C8982DAB9037E3B5CEB857DAE064);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("credits");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral1361198F6A05C8982DAB9037E3B5CEB857DAE064, NULL);
		// }
		return;
	}
}
// System.Void SummaryScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryScreen__ctor_m87825CF99205A788C09AE5F5F200422381CACA55 (SummaryScreen_t77D2A894F68C8CE5EEC5883C86F753E47346249B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TitleScreen::ViewInstructionsOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreen_ViewInstructionsOnClick_mFB9FBB49CDE8FB85D5BC9742E39654370F506D11 (TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C432D5B9035B7D2346FEDB3F19EF74B409D764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("instructions");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral67C432D5B9035B7D2346FEDB3F19EF74B409D764, NULL);
		// }
		return;
	}
}
// System.Void TitleScreen::PlayGameOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreen_PlayGameOnClick_m812C8AF182007F5AD6A4F926BDD815AEE361AF01 (TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.CurrentLevel = 1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_set_CurrentLevel_mB197C3DAF174859B6C922D4913DE7C1856F1CC98(L_0, 1, NULL);
		// Application.LoadLevel ("game");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		// }
		return;
	}
}
// System.Void TitleScreen::ViewCreditsOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreen_ViewCreditsOnClick_m8E5AEDB74CFE3C265B67AE219594ECCB97FFC4B0 (TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1361198F6A05C8982DAB9037E3B5CEB857DAE064);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("credits");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral1361198F6A05C8982DAB9037E3B5CEB857DAE064, NULL);
		// }
		return;
	}
}
// System.Void TitleScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreen__ctor_mFF0E57C57ABC86C80B1265C83B901C55689A5086 (TitleScreen_t06E68A71C15D71C67E56B336FF8BEBBD60A1F07D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mAFEEE179F2859D6C82F01ECB5977E9D6B0F913D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) instance =
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (instance == null) instance =
		//     new GameObject ("GameManager").AddComponent<GameManager> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameObject_AddComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mAFEEE179F2859D6C82F01ECB5977E9D6B0F913D1(L_2, GameObject_AddComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mAFEEE179F2859D6C82F01ECB5977E9D6B0F913D1_RuntimeMethod_var);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
	}

IL_0021:
	{
		// return instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		return L_4;
	}
}
// NotificationsManager GameManager::get_Notifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2_m8C225B6FED94BA728462001506C16840530384CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (notifications == null) notifications =
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___notifications_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (notifications == null) notifications =
		//     Instance.GetComponent<NotificationsManager> ();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_3;
		L_3 = Component_GetComponent_TisNotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2_m8C225B6FED94BA728462001506C16840530384CE(L_2, Component_GetComponent_TisNotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2_m8C225B6FED94BA728462001506C16840530384CE_RuntimeMethod_var);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___notifications_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___notifications_5), (void*)L_3);
	}

IL_001c:
	{
		// return notifications;
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___notifications_5;
		return L_4;
	}
}
// System.Boolean GameManager::get_GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return gameOver; }
		bool L_0 = __this->___gameOver_6;
		return L_0;
	}
}
// System.Void GameManager::set_GameOver(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_GameOver_m47EBB005D7DE24B92F278C7F81B82AC6B72E35CA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOver = value;
		bool L_0 = ___value0;
		__this->___gameOver_6 = L_0;
		// if (gameOver == true)
		bool L_1 = __this->___gameOver_6;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// LastBest = BestScore;
		int32_t L_2;
		L_2 = GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline(__this, NULL);
		GameManager_set_LastBest_m5D487B9459D2846D80C506AD114DF0B314CE1F72_inline(__this, L_2, NULL);
		// if (NumTotalSteinsCaught > BestScore)
		int32_t L_3;
		L_3 = GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271_inline(__this, NULL);
		int32_t L_4;
		L_4 = GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline(__this, NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		// BestScore = NumTotalSteinsCaught;
		int32_t L_5;
		L_5 = GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271_inline(__this, NULL);
		GameManager_set_BestScore_m4846CAD581E2B98D7C70A05C3569B23ECA474D6B_inline(__this, L_5, NULL);
	}

IL_0035:
	{
		// Notifications.PostNotification(this, "GameOver");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_6;
		L_6 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436(L_6, __this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Int32 GameManager::get_CurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return currentLevel; }
		int32_t L_0 = __this->___currentLevel_7;
		return L_0;
	}
}
// System.Void GameManager::set_CurrentLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_CurrentLevel_mB197C3DAF174859B6C922D4913DE7C1856F1CC98 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// currentLevel = value;
		int32_t L_0 = ___value0;
		__this->___currentLevel_7 = L_0;
		// NumSteinsCaught = 0;
		GameManager_set_NumSteinsCaught_m1F02C9D494559D55D9000CF6B8828E72EA537215(__this, 0, NULL);
		// NumSteinsBroken = 0;
		GameManager_set_NumSteinsBroken_m7EB7680DDB865FD15AE19A9A7605EE91BCDFB08A_inline(__this, 0, NULL);
		// if (currentLevel == 1)
		int32_t L_1 = __this->___currentLevel_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		// GameOver = false;
		GameManager_set_GameOver_m47EBB005D7DE24B92F278C7F81B82AC6B72E35CA(__this, (bool)0, NULL);
		// NumTotalSteinsCaught = 0;
		GameManager_set_NumTotalSteinsCaught_mEED631F223FA6E416221E0D2718F6DBE0064F7F9_inline(__this, 0, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Int32 GameManager::get_NumSteinsCaught()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numSteinsCaught; }
		int32_t L_0 = __this->___numSteinsCaught_8;
		return L_0;
	}
}
// System.Void GameManager::set_NumSteinsCaught(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_NumSteinsCaught_m1F02C9D494559D55D9000CF6B8828E72EA537215 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5DE793FAA5BB06F2632467BD633C7E220E95A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numSteinsCaught = value;
		int32_t L_0 = ___value0;
		__this->___numSteinsCaught_8 = L_0;
		// GameManager.Notifications.PostNotification (this, "NumSteinsCaughtUpdated");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_1;
		L_1 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436(L_1, __this, _stringLiteral1D5DE793FAA5BB06F2632467BD633C7E220E95A1, NULL);
		// }
		return;
	}
}
// System.Int32 GameManager::get_NumTotalSteinsCaught()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numTotalSteinsCaught; }
		int32_t L_0 = __this->___numTotalSteinsCaught_9;
		return L_0;
	}
}
// System.Void GameManager::set_NumTotalSteinsCaught(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_NumTotalSteinsCaught_mEED631F223FA6E416221E0D2718F6DBE0064F7F9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { numTotalSteinsCaught = value; }
		int32_t L_0 = ___value0;
		__this->___numTotalSteinsCaught_9 = L_0;
		// set { numTotalSteinsCaught = value; }
		return;
	}
}
// System.Int32 GameManager::get_NumSteinsBroken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsBroken_mA00D8404A9BA98FF675156F93156AC6E1441A425 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numSteinsBroken; }
		int32_t L_0 = __this->___numSteinsBroken_10;
		return L_0;
	}
}
// System.Void GameManager::set_NumSteinsBroken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_NumSteinsBroken_m7EB7680DDB865FD15AE19A9A7605EE91BCDFB08A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { numSteinsBroken = value; }
		int32_t L_0 = ___value0;
		__this->___numSteinsBroken_10 = L_0;
		// set { numSteinsBroken = value; }
		return;
	}
}
// System.Int32 GameManager::get_BestScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return bestScore; }
		int32_t L_0 = __this->___bestScore_11;
		return L_0;
	}
}
// System.Void GameManager::set_BestScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_BestScore_m4846CAD581E2B98D7C70A05C3569B23ECA474D6B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { bestScore = value; }
		int32_t L_0 = ___value0;
		__this->___bestScore_11 = L_0;
		// set { bestScore = value; }
		return;
	}
}
// System.Int32 GameManager::get_LastBest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_LastBest_mC297E908197D006730BB9555F690A7E2989FA1F3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return lastBest; }
		int32_t L_0 = __this->___lastBest_12;
		return L_0;
	}
}
// System.Void GameManager::set_LastBest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_LastBest_m5D487B9459D2846D80C506AD114DF0B314CE1F72 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { lastBest = value; }
		int32_t L_0 = ___value0;
		__this->___lastBest_12 = L_0;
		// set { lastBest = value; }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((instance) && (instance.GetInstanceID() != GetInstanceID()))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		int32_t L_4;
		L_4 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		// DestroyImmediate (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		return;
	}

IL_002a:
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral050FD79488ECABE161C5AE383CC61BEA2CC5661B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18FEC8D68332856E58021B07EC6B9B56762C5680);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Notifications.AddListener (this, "SteinCaught");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_0;
		L_0 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_0, __this, _stringLiteral050FD79488ECABE161C5AE383CC61BEA2CC5661B, NULL);
		// Notifications.AddListener (this, "SteinBroken");
		NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* L_1;
		L_1 = GameManager_get_Notifications_m42D84B9567D5287FFE6744E23F178FECB41D0002(NULL);
		NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831(L_1, __this, _stringLiteral18FEC8D68332856E58021B07EC6B9B56762C5680, NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayAgainOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayAgainOnClick_m04829D0FA6C5F291D2FA6C850A1A39A3F3A1F66C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentLevel = 1;
		GameManager_set_CurrentLevel_mB197C3DAF174859B6C922D4913DE7C1856F1CC98(__this, 1, NULL);
		// Application.LoadLevel ("Game");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ReturnToMenuOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ReturnToMenuOnClick_m5B8654274E304A0B7C39877909B9B6A303E4A268 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel ("Title");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::SteinCaught()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_SteinCaught_mDEAAF611B99793B9173AF9279D19FE880373FB8C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* L_0 = (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B*)il2cpp_codegen_object_new(U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B_il2cpp_TypeInfo_var);
		U3CSteinCaughtU3Ed__38__ctor_m53829D438009EDEDD1F22A697CBE70E441C22195(L_0, 0, NULL);
		U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::SteinBroken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SteinBroken_mD687A950AB03BC9E3A760D76737EEAC724E288C3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// NumSteinsBroken++;
		int32_t L_0;
		L_0 = GameManager_get_NumSteinsBroken_mA00D8404A9BA98FF675156F93156AC6E1441A425_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		GameManager_set_NumSteinsBroken_m7EB7680DDB865FD15AE19A9A7605EE91BCDFB08A_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// private int currentLevel = 1;
		__this->___currentLevel_7 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<SteinCaught>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSteinCaughtU3Ed__38__ctor_m53829D438009EDEDD1F22A697CBE70E441C22195 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<SteinCaught>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSteinCaughtU3Ed__38_System_IDisposable_Dispose_m259E9DB6E517EDEF82DE32DFE3210089DC404598 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<SteinCaught>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSteinCaughtU3Ed__38_MoveNext_m4249CCB1CDD6DDC2E65238CFD4C3BCF99A1E2778 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFading_tA7703267D26B6619789A03FDD24A3785BFB33B98_m7B0BF5AB992606B0D30ACBA326EDFD867177B921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC7406B69F387A8C895A2538CD1C1D2F0B4D3040);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NumSteinsCaught++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		int32_t L_5;
		L_5 = GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline(L_4, NULL);
		V_2 = L_5;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		int32_t L_7 = V_2;
		GameManager_set_NumSteinsCaught_m1F02C9D494559D55D9000CF6B8828E72EA537215(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		// numTotalSteinsCaught++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		int32_t L_10 = L_9->___numTotalSteinsCaught_9;
		L_8->___numTotalSteinsCaught_9 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// if (numSteinsCaught >= 20)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		int32_t L_12 = L_11->___numSteinsCaught_8;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)20))))
		{
			goto IL_008a;
		}
	}
	{
		// if (CurrentLevel == 5)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		int32_t L_14;
		L_14 = GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)5))))
		{
			goto IL_0057;
		}
	}
	{
		// BestScore = 100;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		GameManager_set_BestScore_m4846CAD581E2B98D7C70A05C3569B23ECA474D6B_inline(L_15, ((int32_t)100), NULL);
	}

IL_0057:
	{
		// float fadeTime = GetComponent<Fading> ().BeginFade (1);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = V_1;
		Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* L_17;
		L_17 = Component_GetComponent_TisFading_tA7703267D26B6619789A03FDD24A3785BFB33B98_m7B0BF5AB992606B0D30ACBA326EDFD867177B921(L_16, Component_GetComponent_TisFading_tA7703267D26B6619789A03FDD24A3785BFB33B98_m7B0BF5AB992606B0D30ACBA326EDFD867177B921_RuntimeMethod_var);
		float L_18;
		L_18 = Fading_BeginFade_mEE2622EBC4EAD6268E788D9B2BC94FA225F61D83(L_17, 1, NULL);
		V_3 = L_18;
		// yield return new WaitForSeconds (fadeTime);
		float L_19 = V_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0079:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Application.LoadLevel ("Summary");
		Application_LoadLevel_mC3B1E3C869BDA2BE6B30AB846F34991A016E4415(_stringLiteralFC7406B69F387A8C895A2538CD1C1D2F0B4D3040, NULL);
	}

IL_008a:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<SteinCaught>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSteinCaughtU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA02960472B26C33C9657A5E168EA8A7E218C0072 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<SteinCaught>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSteinCaughtU3Ed__38_System_Collections_IEnumerator_Reset_m7E8BF9E5E8825D8E4EF1833F9D14CB4B98EB8265 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSteinCaughtU3Ed__38_System_Collections_IEnumerator_Reset_m7E8BF9E5E8825D8E4EF1833F9D14CB4B98EB8265_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<SteinCaught>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSteinCaughtU3Ed__38_System_Collections_IEnumerator_get_Current_mC8EBAA50306720D9EBA6D978EC7B97CC87CA5D49 (U3CSteinCaughtU3Ed__38_tD37256BEAA881786EFEA253DC6E15D066960359B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NotificationsManager::AddListener(UnityEngine.Component,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_AddListener_m6BA3623B67A84B3FB2FD16779EDDDAB3BE163831 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Sender0, String_t* ___NotificationName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Listeners.ContainsKey(NotificationName))
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = __this->___Listeners_4;
		String_t* L_1 = ___NotificationName1;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9(L_0, L_1, Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Listeners.Add(NotificationName, new List<Component>());
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_3 = __this->___Listeners_4;
		String_t* L_4 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_5 = (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*)il2cpp_codegen_object_new(List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var);
		List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0(L_5, List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var);
		Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E(L_3, L_4, L_5, Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E_RuntimeMethod_var);
	}

IL_001f:
	{
		// Listeners[NotificationName].Add(Sender);
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_6 = __this->___Listeners_4;
		String_t* L_7 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_8;
		L_8 = Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850(L_6, L_7, Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_9 = ___Sender0;
		List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_inline(L_8, L_9, List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NotificationsManager::RemoveListener(UnityEngine.Component,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_RemoveListener_m6EC9FD1D0B57BA43F4E38F0F9C5D931269389D11 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Sender0, String_t* ___NotificationName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!Listeners.ContainsKey(NotificationName))
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = __this->___Listeners_4;
		String_t* L_1 = ___NotificationName1;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9(L_0, L_1, Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// for (int i = Listeners[NotificationName].Count - 1; i >= 0; i--)
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_3 = __this->___Listeners_4;
		String_t* L_4 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_5;
		L_5 = Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850(L_3, L_4, Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		int32_t L_6;
		L_6 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_5, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_005a;
	}

IL_0025:
	{
		// if (Listeners[NotificationName][i].GetInstanceID() == Sender.GetInstanceID())
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_7 = __this->___Listeners_4;
		String_t* L_8 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_9;
		L_9 = Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850(L_7, L_8, Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		int32_t L_10 = V_0;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11;
		L_11 = List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E(L_9, L_10, List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
		int32_t L_12;
		L_12 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_11, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_13 = ___Sender0;
		int32_t L_14;
		L_14 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_13, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0056;
		}
	}
	{
		// Listeners[NotificationName].RemoveAt(i);
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_15 = __this->___Listeners_4;
		String_t* L_16 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_17;
		L_17 = Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850(L_15, L_16, Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		int32_t L_18 = V_0;
		List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758(L_17, L_18, List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758_RuntimeMethod_var);
	}

IL_0056:
	{
		// for (int i = Listeners[NotificationName].Count - 1; i >= 0; i--)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_005a:
	{
		// for (int i = Listeners[NotificationName].Count - 1; i >= 0; i--)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NotificationsManager::PostNotification(UnityEngine.Component,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_PostNotification_m902B8D8056834428C92BB6512EDA6FD55B4F0436 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Sender0, String_t* ___NotificationName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Listeners.ContainsKey(NotificationName))
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = __this->___Listeners_4;
		String_t* L_1 = ___NotificationName1;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9(L_0, L_1, Dictionary_2_ContainsKey_m7C322CAFE3760A3F2F4286E28E297AFDA4821FD9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// foreach (Component Listener in Listeners[NotificationName])
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_3 = __this->___Listeners_4;
		String_t* L_4 = ___NotificationName1;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_5;
		L_5 = Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850(L_3, L_4, Dictionary_2_get_Item_m5981BD7EB1D1DD4648DE16061F5E685E028F9850_RuntimeMethod_var);
		Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 L_6;
		L_6 = List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA(L_5, List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF((&V_0), Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0023_1:
			{
				// foreach (Component Listener in Listeners[NotificationName])
				Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
				L_7 = Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_inline((&V_0), Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var);
				// Listener.SendMessage(NotificationName, Sender, SendMessageOptions.DontRequireReceiver );
				String_t* L_8 = ___NotificationName1;
				Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_9 = ___Sender0;
				Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(L_7, L_8, L_9, 1, NULL);
			}

IL_0032_1:
			{
				// foreach (Component Listener in Listeners[NotificationName])
				bool L_10;
				L_10 = Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF((&V_0), Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void NotificationsManager::ClearListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_ClearListeners_m03488F2CB5EE575DC7D4F925B924ABCC521A56B5 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m8AAD59C23F43ABD863568F9AD4B596ABA0EF107B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Listeners.Clear();
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = __this->___Listeners_4;
		Dictionary_2_Clear_m8AAD59C23F43ABD863568F9AD4B596ABA0EF107B(L_0, Dictionary_2_Clear_m8AAD59C23F43ABD863568F9AD4B596ABA0EF107B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NotificationsManager::RemoveRedundancies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_RemoveRedundancies_mFEF6BAC793301DCA0854E425F5187FC10AC6968C (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m188E9A32AFCE7F597D92B260228D6A4DF660D006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEEBEB5983240878D9AA32046C5CAA08715FA6768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DFEACA4A32616C9BFC25A4629DC35E2AD71BC32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB08F26E42980CC39EEE2A65C46F4112BC7C9358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m02175D0B702A29B29C5CDB7308C820B625725D8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* V_0 = NULL;
	Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Dictionary<string, List<Component>> TmpListeners = new Dictionary<string, List<Component>>();
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*)il2cpp_codegen_object_new(Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636(L_0, Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (KeyValuePair<string, List<Component>> Item in Listeners)
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_1 = __this->___Listeners_4;
		Enumerator_t3D0B00A3DC76ECD1B1309B460139CE068C3E78EF L_2;
		L_2 = Dictionary_2_GetEnumerator_m188E9A32AFCE7F597D92B260228D6A4DF660D006(L_1, Dictionary_2_GetEnumerator_m188E9A32AFCE7F597D92B260228D6A4DF660D006_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEEBEB5983240878D9AA32046C5CAA08715FA6768((&V_1), Enumerator_Dispose_mEEBEB5983240878D9AA32046C5CAA08715FA6768_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0014_1:
			{
				// foreach (KeyValuePair<string, List<Component>> Item in Listeners)
				KeyValuePair_2_t13816E4139D47707F113C8ECA1031C4B837D37D6 L_3;
				L_3 = Enumerator_get_Current_mB08F26E42980CC39EEE2A65C46F4112BC7C9358A_inline((&V_1), Enumerator_get_Current_mB08F26E42980CC39EEE2A65C46F4112BC7C9358A_RuntimeMethod_var);
				V_2 = L_3;
				// for (int i = Item.Value.Count - 1; i >= 0; i--)
				List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_4;
				L_4 = KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline((&V_2), KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
				int32_t L_5;
				L_5 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_4, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
				goto IL_0053_1;
			}

IL_002d_1:
			{
				// if (Item.Value[i] == null)
				List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_6;
				L_6 = KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline((&V_2), KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
				int32_t L_7 = V_3;
				Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8;
				L_8 = List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E(L_6, L_7, List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_004f_1;
				}
			}
			{
				// Item.Value.RemoveAt(i);
				List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_10;
				L_10 = KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline((&V_2), KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
				int32_t L_11 = V_3;
				List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758(L_10, L_11, List_1_RemoveAt_m368958771563E41E02575898EC523845137B8758_RuntimeMethod_var);
			}

IL_004f_1:
			{
				// for (int i = Item.Value.Count - 1; i >= 0; i--)
				int32_t L_12 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
			}

IL_0053_1:
			{
				// for (int i = Item.Value.Count - 1; i >= 0; i--)
				int32_t L_13 = V_3;
				if ((((int32_t)L_13) >= ((int32_t)0)))
				{
					goto IL_002d_1;
				}
			}
			{
				// if (Item.Value.Count > 0)
				List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_14;
				L_14 = KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline((&V_2), KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
				int32_t L_15;
				L_15 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_14, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
				if ((((int32_t)L_15) <= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}
			{
				// TmpListeners.Add (Item.Key, Item.Value);
				Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_16 = V_0;
				String_t* L_17;
				L_17 = KeyValuePair_2_get_Key_m02175D0B702A29B29C5CDB7308C820B625725D8A_inline((&V_2), KeyValuePair_2_get_Key_m02175D0B702A29B29C5CDB7308C820B625725D8A_RuntimeMethod_var);
				List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_18;
				L_18 = KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_inline((&V_2), KeyValuePair_2_get_Value_mA9ABDC5C4E49CB104B1C4752A9641B3F37E9DD59_RuntimeMethod_var);
				Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E(L_16, L_17, L_18, Dictionary_2_Add_m2BC2AA16C061CB119D4A088D51DB36BED98F391E_RuntimeMethod_var);
			}

IL_007a_1:
			{
				// foreach (KeyValuePair<string, List<Component>> Item in Listeners)
				bool L_19;
				L_19 = Enumerator_MoveNext_m1DFEACA4A32616C9BFC25A4629DC35E2AD71BC32((&V_1), Enumerator_MoveNext_m1DFEACA4A32616C9BFC25A4629DC35E2AD71BC32_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// Listeners = TmpListeners;
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_20 = V_0;
		__this->___Listeners_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Listeners_4), (void*)L_20);
		// }
		return;
	}
}
// System.Void NotificationsManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_OnEnable_mB8CEB34B2B47AC4AB2AA860AB5BF7132B0797CA3 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnLevelFinishedLoading;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void NotificationsManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_OnDisable_m3E55C64B921047625B1AAFE47DB70084FF15B3A6 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnLevelFinishedLoading;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// }
		return;
	}
}
// System.Void NotificationsManager::OnLevelFinishedLoading(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager_OnLevelFinishedLoading_mDFF51AEFA0EE4DB89F3F00DFDC6435B67CE908A0 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// RemoveRedundancies();
		NotificationsManager_RemoveRedundancies_mFEF6BAC793301DCA0854E425F5187FC10AC6968C(__this, NULL);
		// }
		return;
	}
}
// System.Void NotificationsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationsManager__ctor_m1408D6F2F3E8C3D269591FA75D2843EB478AEF86 (NotificationsManager_t66B0C1A82C0F46CE1A772A322FC542DCE11C7BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, List<Component>> Listeners = new Dictionary<string, List<Component>>();
		Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B* L_0 = (Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B*)il2cpp_codegen_object_new(Dictionary_2_t01EB43EA8864469CF358DC629C7AFB0FDAFAFC6B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636(L_0, Dictionary_2__ctor_mDDAEA31EED08E7DB703311B6BEBE9D93264CD636_RuntimeMethod_var);
		__this->___Listeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Listeners_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DestroyParticleSystem::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyParticleSystem_LateUpdate_m655A2CFB745FC28F6EA757A7EA76418DA481D912 (DestroyParticleSystem_t354960DA9518228ACAA86037A937D6F720183434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GetComponent<ParticleSystem>().IsAlive())
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		bool L_1;
		L_1 = ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void DestroyParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyParticleSystem__ctor_mCC8EAB895A8BD7603C6E2FCA32523A24A12C8806 (DestroyParticleSystem_t354960DA9518228ACAA86037A937D6F720183434* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_Start_mAE89672DDC567CAE01F120EFD135AE3CEEEBBBC6 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fadeOutTexture = new Texture2D (1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 1, 1, NULL);
		__this->___fadeOutTexture_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadeOutTexture_4), (void*)L_0);
		// fadeOutTexture.SetPixel (0, 0, new Color (255, 0, 0, 0f));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___fadeOutTexture_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (255.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_1, 0, 0, L_2, NULL);
		// fadeOutTexture.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___fadeOutTexture_4;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_Update_m7FA14F17FB5BC78736C401476F4B4044530A03A9 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	{
		// ScreenRect.x = 0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___ScreenRect_6);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_0, (0.0f), NULL);
		// ScreenRect.y = 0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->___ScreenRect_6);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_1, (0.0f), NULL);
		// ScreenRect.width = Screen.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (&__this->___ScreenRect_6);
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_2, ((float)L_3), NULL);
		// ScreenRect.height = Screen.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->___ScreenRect_6);
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_4, ((float)L_5), NULL);
		// }
		return;
	}
}
// System.Void Fading::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_OnEnable_m95E1A0509641F74DE674A5C22F14AD270F547AFF (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnLevelFinishedLoading;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fading::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_OnDisable_m022495A20F647EFD7E5C32BF0B0C2B28F894BB39 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnLevelFinishedLoading;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fading::OnLevelFinishedLoading(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_OnLevelFinishedLoading_mDA7B2F722E08BC0E8F4B0F3CE377D9A15DFAD190 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// BeginFade(-1);
		float L_0;
		L_0 = Fading_BeginFade_mEE2622EBC4EAD6268E788D9B2BC94FA225F61D83(__this, (-1), NULL);
		// }
		return;
	}
}
// System.Void Fading::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading_OnGUI_mCFAFBFDA437FB156B6C823BE30D3D0368EB59CA9 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// alpha += fadeDir * fadeSpeed * Time.deltaTime;
		float L_0 = __this->___alpha_7;
		int32_t L_1 = __this->___fadeDir_8;
		float L_2 = __this->___fadeSpeed_5;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___alpha_7 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_1), L_2)), L_3))));
		// alpha = Mathf.Clamp01 (alpha);
		float L_4 = __this->___alpha_7;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_4, NULL);
		__this->___alpha_7 = L_5;
		// fadeOutTexture.SetPixel (0, 0, new Color (255, 255, 255, alpha));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___fadeOutTexture_4;
		float L_7 = __this->___alpha_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (255.0f), (255.0f), (255.0f), L_7, /*hidden argument*/NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_6, 0, 0, L_8, NULL);
		// fadeOutTexture.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___fadeOutTexture_4;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		// GUI.DrawTexture (ScreenRect, fadeOutTexture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10 = __this->___ScreenRect_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___fadeOutTexture_4;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Single Fading::BeginFade(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Fading_BeginFade_mEE2622EBC4EAD6268E788D9B2BC94FA225F61D83 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, int32_t ___direction0, const RuntimeMethod* method) 
{
	{
		// fadeDir = direction;
		int32_t L_0 = ___direction0;
		__this->___fadeDir_8 = L_0;
		// return (fadeSpeed);
		float L_1 = __this->___fadeSpeed_5;
		return L_1;
	}
}
// System.Void Fading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fading__ctor_mAEC3D9D00F261202929D94DD00C9EE9E5D4119D6 (Fading_tA7703267D26B6619789A03FDD24A3785BFB33B98* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeSpeed = 0.8f;
		__this->___fadeSpeed_5 = (0.800000012f);
		// private float alpha = 1.0f;
		__this->___alpha_7 = (1.0f);
		// private int fadeDir = -1;
		__this->___fadeDir_8 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return gameOver; }
		bool L_0 = __this->___gameOver_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentLevel_m52290305CE1EABA4DC69930F589C4F592EE80EC3_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return currentLevel; }
		int32_t L_0 = __this->___currentLevel_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsCaught_mA2CB23B0D43A988D0A0141535B8C1FDECB0B45ED_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numSteinsCaught; }
		int32_t L_0 = __this->___numSteinsCaught_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumTotalSteinsCaught_mF4EBFD4C9C834395A2F3E08250CB5CD2F9C98271_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numTotalSteinsCaught; }
		int32_t L_0 = __this->___numTotalSteinsCaught_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_BestScore_mB41913D93F2DC2092BD07502CB4D5EFF81FAF31A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return bestScore; }
		int32_t L_0 = __this->___bestScore_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_LastBest_mC297E908197D006730BB9555F690A7E2989FA1F3_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return lastBest; }
		int32_t L_0 = __this->___lastBest_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_NumSteinsBroken_mA00D8404A9BA98FF675156F93156AC6E1441A425_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return numSteinsBroken; }
		int32_t L_0 = __this->___numSteinsBroken_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_LastBest_m5D487B9459D2846D80C506AD114DF0B314CE1F72_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { lastBest = value; }
		int32_t L_0 = ___value0;
		__this->___lastBest_12 = L_0;
		// set { lastBest = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_BestScore_m4846CAD581E2B98D7C70A05C3569B23ECA474D6B_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { bestScore = value; }
		int32_t L_0 = ___value0;
		__this->___bestScore_11 = L_0;
		// set { bestScore = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_NumSteinsBroken_m7EB7680DDB865FD15AE19A9A7605EE91BCDFB08A_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { numSteinsBroken = value; }
		int32_t L_0 = ___value0;
		__this->___numSteinsBroken_10 = L_0;
		// set { numSteinsBroken = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_NumTotalSteinsCaught_mEED631F223FA6E416221E0D2718F6DBE0064F7F9_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { numTotalSteinsCaught = value; }
		int32_t L_0 = ___value0;
		__this->___numTotalSteinsCaught_9 = L_0;
		// set { numTotalSteinsCaught = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
