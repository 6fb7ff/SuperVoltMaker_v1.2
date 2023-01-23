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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// CardController[]
struct CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardController
struct CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928;
// CardEntity
struct CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0;
// CardModel
struct CardModel_tEC6162579482334F393091423C767EE0EB570530;
// CardMovement
struct CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D;
// CardView
struct CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DropPlace
struct DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CardModel_tEC6162579482334F393091423C767EE0EB570530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral038E18C2904850A39375FA0AE81118E518F2ADDF;
IL2CPP_EXTERN_C String_t* _stringLiteral09CC7B8D8ACAEF137C8CFE45510E0289076FDB42;
IL2CPP_EXTERN_C String_t* _stringLiteral10B1672A27A9FDDA00FF9C9530D769BAF2A53F89;
IL2CPP_EXTERN_C String_t* _stringLiteral1615C8B12000C31452C8FE5E447728F72CDFD5F1;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9171B041BECFA894E390E3BD918245F2A36BAA;
IL2CPP_EXTERN_C String_t* _stringLiteral1F03A3A04ADC3EB399486AADA1986DDDF64A819F;
IL2CPP_EXTERN_C String_t* _stringLiteral23C741ED64B00AEB3A1BBE493D92497FA929614E;
IL2CPP_EXTERN_C String_t* _stringLiteral26CD5F9E6C1D7068B88BEFDBD9E5184B1E944B08;
IL2CPP_EXTERN_C String_t* _stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3;
IL2CPP_EXTERN_C String_t* _stringLiteral320F614F11DFF2B9D0531B6FBD2FC84953E1127A;
IL2CPP_EXTERN_C String_t* _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439;
IL2CPP_EXTERN_C String_t* _stringLiteral38A2577E53B9472A98AC32AB29090B16CEEB219B;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D025CDB9DAFC5ECD0B386F58B3196A81D73C9D5;
IL2CPP_EXTERN_C String_t* _stringLiteral566D655F4A73B412E695413DB01BB609D2DC108E;
IL2CPP_EXTERN_C String_t* _stringLiteral5C900E581B411FB40DBB1C2ABD837413CA566E62;
IL2CPP_EXTERN_C String_t* _stringLiteral62DCA95296ED08F48DDF8762225138C798CBEA96;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral67D237EAE9F1C48EA527D83EBCBF9BDC183FE232;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5971D268E69B9FB9F7560F88EE938925AACDE2;
IL2CPP_EXTERN_C String_t* _stringLiteral8751B9DF52AF22FE1FBC30D25940B70C7A9E21A9;
IL2CPP_EXTERN_C String_t* _stringLiteralA15BA27553F2BAC37032C3B9736B23B4B2809D37;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D77B04F425556E66B3C2C5111BEE0642E8DEC0;
IL2CPP_EXTERN_C String_t* _stringLiteralB761CD228AAB0A4E455F3CCBEDD2546CDFADB1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DF12C01A86D696B24C37D364059AE55D1C5CC6;
IL2CPP_EXTERN_C String_t* _stringLiteralD7441F151C43F40BA78338BCC4FD3935C440A4E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDBABC7C9903660AA7BDF5A8960C06D270DE63E64;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD0B2688386FC8F2EEC53C5C5BA18ACB8B26642;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E9E576EF85B7F8B8EB9FE7500ECB7E22D81B64;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_m26FDF9DCB85AAC0B3328042D9AE86E65B6B3C298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0_mD1C9260082EE1C9BA2F20F0A589B59624824FCF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m0829843E5AE14EC37B8C7CC267427FEE6631345C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m5CE2C5E8CF926F7275C44F55AA5AD16E381F2DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_mF3ADF17CA01CE29FB017087A1F9DB2DE88661E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisCardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_mCE12045C5E3F42EEAFA2F9800483B3A9CC18A5EB_RuntimeMethod_var;

struct CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// CardModel
struct CardModel_tEC6162579482334F393091423C767EE0EB570530  : public RuntimeObject
{
	// System.Int32 CardModel::cardID
	int32_t ___cardID_0;
	// System.String CardModel::name
	String_t* ___name_1;
	// System.Int32 CardModel::cost
	int32_t ___cost_2;
	// System.Int32 CardModel::volt
	int32_t ___volt_3;
	// System.Int32 CardModel::eco
	int32_t ___eco_4;
	// System.Int32 CardModel::range
	int32_t ___range_5;
	// UnityEngine.Sprite CardModel::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_6;
	// System.Int32 CardModel::ID2
	int32_t ___ID2_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033_2;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CardEntity
struct CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 CardEntity::cardID
	int32_t ___cardID_5;
	// System.String CardEntity::name
	String_t* ___name_6;
	// System.Int32 CardEntity::cost
	int32_t ___cost_7;
	// System.Int32 CardEntity::volt
	int32_t ___volt_8;
	// System.Int32 CardEntity::eco
	int32_t ___eco_9;
	// System.Int32 CardEntity::range
	int32_t ___range_10;
	// UnityEngine.Sprite CardEntity::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_11;
};

struct CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_StaticFields
{
	// CardEntity CardEntity::instance
	CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* ___instance_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CardController
struct CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardView CardController::view
	CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* ___view_4;
	// CardModel CardController::model
	CardModel_tEC6162579482334F393091423C767EE0EB570530* ___model_5;
	// CardMovement CardController::movement
	CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* ___movement_6;
};

// CardMovement
struct CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CardMovement::cardParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cardParent_4;
};

struct CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_StaticFields
{
	// System.Boolean CardMovement::multiTouchEnabled
	bool ___multiTouchEnabled_5;
};

// CardView
struct CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text CardView::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_4;
	// UnityEngine.UI.Text CardView::voltText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___voltText_5;
	// UnityEngine.UI.Text CardView::ecoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ecoText_6;
	// UnityEngine.UI.Text CardView::costText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___costText_7;
	// UnityEngine.UI.Text CardView::rangeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___rangeText_8;
	// UnityEngine.UI.Image CardView::iconImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___iconImage_9;
};

// DropPlace
struct DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardModel DropPlace::model
	CardModel_tEC6162579482334F393091423C767EE0EB570530* ___model_5;
	// System.Int32 DropPlace::i
	int32_t ___i_6;
	// System.Boolean DropPlace::placed
	bool ___placed_7;
};

struct DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE_StaticFields
{
	// DropPlace DropPlace::instance
	DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE* ___instance_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Random GameManager::r
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___r_4;
	// CardController GameManager::cardPrefab
	CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* ___cardPrefab_6;
	// UnityEngine.Transform GameManager::Hand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_7;
	// UnityEngine.Transform GameManager::Ocean
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Ocean_8;
	// UnityEngine.Transform GameManager::Land
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Land_9;
	// UnityEngine.Transform GameManager::Mountain
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Mountain_10;
	// UnityEngine.UI.Text GameManager::NowTurnTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NowTurnTxt_11;
	// UnityEngine.UI.Text GameManager::WeatherTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___WeatherTxt_12;
	// UnityEngine.UI.Text GameManager::DemandTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DemandTxt_13;
	// UnityEngine.UI.Text GameManager::SupplyTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SupplyTxt_14;
	// UnityEngine.UI.Text GameManager::CostPointTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CostPointTxt_15;
	// UnityEngine.UI.Text GameManager::PreviousUsage
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PreviousUsage_16;
	// UnityEngine.UI.Text GameManager::CostPoint_TotalTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CostPoint_TotalTxt_17;
	// UnityEngine.UI.Text GameManager::NowTurnTxt_Forecast
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NowTurnTxt_Forecast_18;
	// UnityEngine.UI.Text GameManager::WeatherTxt_Forecast
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___WeatherTxt_Forecast_19;
	// UnityEngine.UI.Text GameManager::DemandTxt_Forecast
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DemandTxt_Forecast_20;
	// UnityEngine.UI.Text GameManager::NowTurnTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NowTurnTxt_End_21;
	// UnityEngine.UI.Text GameManager::DemandTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DemandTxt_End_22;
	// UnityEngine.UI.Text GameManager::SupplyTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SupplyTxt_End_23;
	// UnityEngine.UI.Text GameManager::CostPointTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CostPointTxt_End_24;
	// UnityEngine.UI.Text GameManager::VoltPointTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___VoltPointTxt_End_25;
	// UnityEngine.UI.Text GameManager::EcoPointTxt_End
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EcoPointTxt_End_26;
	// UnityEngine.UI.Text GameManager::IDTxt_Range
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___IDTxt_Range_27;
	// UnityEngine.UI.Text GameManager::VoltTxt_Range
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___VoltTxt_Range_28;
	// UnityEngine.UI.Text GameManager::CostTxt_Range
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CostTxt_Range_29;
	// UnityEngine.UI.Text GameManager::Pass1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Pass1_30;
	// UnityEngine.UI.Text GameManager::Pass2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Pass2_31;
	// UnityEngine.GameObject GameManager::Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Title_32;
	// UnityEngine.GameObject GameManager::Map
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Map_33;
	// UnityEngine.GameObject GameManager::Zone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Zone_34;
	// UnityEngine.GameObject GameManager::Info
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Info_35;
	// UnityEngine.GameObject GameManager::Forecast
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Forecast_36;
	// UnityEngine.GameObject GameManager::End
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___End_37;
	// UnityEngine.GameObject GameManager::Clear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Clear_38;
	// UnityEngine.GameObject GameManager::Over
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Over_39;
	// UnityEngine.GameObject GameManager::Conf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Conf_40;
	// UnityEngine.GameObject GameManager::Rang
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Rang_41;
	// UnityEngine.GameObject GameManager::ID
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ID_42;
	// System.Boolean GameManager::process
	bool ___process_43;
	// System.Boolean GameManager::publish
	bool ___publish_44;
	// System.Int32[] GameManager::Volt_Data
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Volt_Data_45;
	// System.Int32[] GameManager::Eco_Data
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Eco_Data_46;
	// System.Int32[] GameManager::Cost_Data
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Cost_Data_47;
	// System.Int32[] GameManager::Volt
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Volt_48;
	// System.Int32[] GameManager::Eco
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Eco_49;
	// System.Int32[] GameManager::Cost
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Cost_50;
	// System.Int32[] GameManager::Range
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Range_51;
	// System.Int32[] GameManager::Demand
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Demand_52;
	// System.Int32[] GameManager::Supply
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Supply_53;
	// System.Int32[] GameManager::CostPoint
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CostPoint_54;
	// System.Int32[] GameManager::VoltPoint
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___VoltPoint_55;
	// System.Int32[] GameManager::EcoPoint
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EcoPoint_56;
	// System.Int32 GameManager::Weather
	int32_t ___Weather_57;
	// System.Int32 GameManager::NowTurn
	int32_t ___NowTurn_58;
	// System.Int32 GameManager::MaxTurn
	int32_t ___MaxTurn_59;
	// System.Int32 GameManager::CostPoint_Total
	int32_t ___CostPoint_Total_60;
	// System.String GameManager::DemandPass
	String_t* ___DemandPass_61;
	// System.String GameManager::SupplyPass
	String_t* ___SupplyPass_62;
	// System.String GameManager::CostPointPass
	String_t* ___CostPointPass_63;
	// System.String GameManager::VoltPointPass
	String_t* ___VoltPointPass_64;
	// System.String GameManager::EcoPointPass
	String_t* ___EcoPointPass_65;
	// System.String GameManager::code16
	String_t* ___code16_66;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_5;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CardController[]
struct CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68  : public RuntimeArray
{
	ALIGN_FIELD (8) CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* m_Items[1];

	inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<CardView>()
inline CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* Component_GetComponent_TisCardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0_mD1C9260082EE1C9BA2F20F0A589B59624824FCF6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<CardMovement>()
inline CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* Component_GetComponent_TisCardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_m26FDF9DCB85AAC0B3328042D9AE86E65B6B3C298 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CardModel::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardModel__ctor_m06C3A9C4A82332CB7C84C9F7B52687D172BD9418 (CardModel_tEC6162579482334F393091423C767EE0EB570530* __this, int32_t ___cardID0, const RuntimeMethod* method) ;
// System.Void CardView::Show(CardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardView_Show_m0B643238D8097DC4833F65EE41E635ABD6708935 (CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* __this, CardModel_tEC6162579482334F393091423C767EE0EB570530* ___cardModel0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void GameManager::VoltChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_VoltChange_m2D3136074485B27F145623EA91267A680054154A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void GameManager::CalcSupply(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalcSupply_m3007071BEA40B9E1CA68C83A27CC8E49CE8EE19C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void GameManager::CalcCostPoint(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalcCostPoint_m3FDFA7763061412B5BE4500891B066486F8877BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<CardEntity>(System.String)
inline CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* Resources_Load_TisCardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_mCE12045C5E3F42EEAFA2F9800483B3A9CC18A5EB (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<CardController>()
inline CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68* Component_GetComponentsInChildren_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m0829843E5AE14EC37B8C7CC267427FEE6631345C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CardController>()
inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* GameObject_GetComponent_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m5CE2C5E8CF926F7275C44F55AA5AD16E381F2DD7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void CardController::DropField(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_DropField_mFED7DFD3F0F9603F8EA4BEEA8E948180F58E1FD0 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, int32_t ___cardID0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::TurnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TurnStart_m0C86004377330ED7117D20316C52CDC59056C6BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowDay_m30754F56B5E493FA2EB3B656E0A7EAC1E5FF9014 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DecideWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DecideWeather_m5BED7D0898EB35ED082127C5E282924D312AF180 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DecideDemand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DecideDemand_mA2A27B544D2389BD4ACF1474CBEF6AD2A2307A14 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowCostPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowCostPoint_m3DDC13C3BE34C80CD9878D11C4EB33E86D7D563A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowSupply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowSupply_m447A63B3A82BAFFFF6E4DD773E4E95CFEB1F1E14 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowVoltPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowVoltPoint_m223FD525F5918B802DCFE3A166ACED4D7CA2BA98 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowEcoPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowEcoPoint_m48975781478DC95FE598C4D7C8B9BF600D32B00D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ShowForeCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowForeCast_m30DCEA71BAE3F80822A4ED8D5E94F8AD8C86426A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DrawCard(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DrawCard_mBC383B89A0418A9E1714F49AD5E75A9E830B8B64 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<CardController>(T,UnityEngine.Transform)
inline CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* Object_Instantiate_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_mF3ADF17CA01CE29FB017087A1F9DB2DE88661E92 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* (*) (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void CardController::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_Init_m8A8F2386F21980F98DA3F7F51A0BA34DF4993604 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, int32_t ___cardID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_m0804E8F6958EBEBCC478DE60FC6053EAFDAF49D5 (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void GameManager::CreateCard(System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateCard_mED782C97E1AE8EEF77F58916BDF829BD279FBCDC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___cardID0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___place1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void GameManager::GameClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void GameManager::Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Result_mB766BAA078C12FD5E90D14A550BCD401337E204B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void GameManager::ShowRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowRange_m9843FDE30042F6E6CC539D7E61B961EFD4F5CE22 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void GameManager::SelectRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SelectRange_m08AFEC876A99A4E73C543E0D576B309D9FBBAE48 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void CardController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_Awake_m209CD503432ED727936F4DBC2E58375B03DC89A0 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_m26FDF9DCB85AAC0B3328042D9AE86E65B6B3C298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0_mD1C9260082EE1C9BA2F20F0A589B59624824FCF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// view = GetComponent<CardView>();
		CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* L_0;
		L_0 = Component_GetComponent_TisCardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0_mD1C9260082EE1C9BA2F20F0A589B59624824FCF6(__this, Component_GetComponent_TisCardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0_mD1C9260082EE1C9BA2F20F0A589B59624824FCF6_RuntimeMethod_var);
		__this->___view_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___view_4), (void*)L_0);
		// movement = GetComponent<CardMovement>();
		CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* L_1;
		L_1 = Component_GetComponent_TisCardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_m26FDF9DCB85AAC0B3328042D9AE86E65B6B3C298(__this, Component_GetComponent_TisCardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D_m26FDF9DCB85AAC0B3328042D9AE86E65B6B3C298_RuntimeMethod_var);
		__this->___movement_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void CardController::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_Init_m8A8F2386F21980F98DA3F7F51A0BA34DF4993604 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, int32_t ___cardID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardModel_tEC6162579482334F393091423C767EE0EB570530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model = new CardModel(cardID); // ?????????
		int32_t L_0 = ___cardID0;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_1 = (CardModel_tEC6162579482334F393091423C767EE0EB570530*)il2cpp_codegen_object_new(CardModel_tEC6162579482334F393091423C767EE0EB570530_il2cpp_TypeInfo_var);
		CardModel__ctor_m06C3A9C4A82332CB7C84C9F7B52687D172BD9418(L_1, L_0, NULL);
		__this->___model_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_5), (void*)L_1);
		// view.Show(model); // ??
		CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* L_2 = __this->___view_4;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_3 = __this->___model_5;
		CardView_Show_m0B643238D8097DC4833F65EE41E635ABD6708935(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CardController::DestroyCard(CardController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_DestroyCard_m2E2F1C70ED9D8081A8406CB4BE9E3B3637052B70 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* ___card0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(card.gameObject);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_0 = ___card0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void CardController::DropField(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_DropField_mFED7DFD3F0F9603F8EA4BEEA8E948180F58E1FD0 (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, int32_t ___cardID0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.VoltChange(cardID,i);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		int32_t L_1 = ___cardID0;
		int32_t L_2 = ___i1;
		GameManager_VoltChange_m2D3136074485B27F145623EA91267A680054154A(L_0, L_1, L_2, NULL);
		int32_t L_3 = ___cardID0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1))) > ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = ___cardID0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, 4))) <= ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// case 5: GameManager.instance.CalcSupply(cardID,i);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		int32_t L_6 = ___cardID0;
		int32_t L_7 = ___i1;
		GameManager_CalcSupply_m3007071BEA40B9E1CA68C83A27CC8E49CE8EE19C(L_5, L_6, L_7, NULL);
		// GameManager.instance.CalcCostPoint(cardID,i);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		int32_t L_9 = ___cardID0;
		int32_t L_10 = ___i1;
		GameManager_CalcCostPoint_m3FDFA7763061412B5BE4500891B066486F8877BB(L_8, L_9, L_10, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CardController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController__ctor_m3593D3890C1A596631E325FB2C9C07D68364980D (CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* __this, const RuntimeMethod* method) 
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
// System.Void CardEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardEntity__ctor_m3E86B9D6A39452B52FDC8045FFB99C2BD5DA50D7 (CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void CardModel::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardModel__ctor_m06C3A9C4A82332CB7C84C9F7B52687D172BD9418 (CardModel_tEC6162579482334F393091423C767EE0EB570530* __this, int32_t ___cardID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisCardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_mCE12045C5E3F42EEAFA2F9800483B3A9CC18A5EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1D77B04F425556E66B3C2C5111BEE0642E8DEC0);
		s_Il2CppMethodInitialized = true;
	}
	CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* V_0 = NULL;
	{
		// public CardModel(int cardID)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// CardEntity cardEntity = Resources.Load<CardEntity>("CardEntityList/Card" + cardID);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___cardID0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1D77B04F425556E66B3C2C5111BEE0642E8DEC0, L_0, NULL);
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_2;
		L_2 = Resources_Load_TisCardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_mCE12045C5E3F42EEAFA2F9800483B3A9CC18A5EB(L_1, Resources_Load_TisCardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0_mCE12045C5E3F42EEAFA2F9800483B3A9CC18A5EB_RuntimeMethod_var);
		V_0 = L_2;
		// ID2 = cardID;
		int32_t L_3 = ___cardID0;
		__this->___ID2_7 = L_3;
		// cardID = cardEntity.cardID;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_4 = V_0;
		int32_t L_5 = L_4->___cardID_5;
		___cardID0 = L_5;
		// name = cardEntity.name;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_6 = V_0;
		String_t* L_7 = L_6->___name_6;
		__this->___name_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_7);
		// cost = cardEntity.cost;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_8 = V_0;
		int32_t L_9 = L_8->___cost_7;
		__this->___cost_2 = L_9;
		// volt = cardEntity.volt;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_10 = V_0;
		int32_t L_11 = L_10->___volt_8;
		__this->___volt_3 = L_11;
		// eco = cardEntity.eco;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_12 = V_0;
		int32_t L_13 = L_12->___eco_9;
		__this->___eco_4 = L_13;
		// range = cardEntity.range;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_14 = V_0;
		int32_t L_15 = L_14->___range_10;
		__this->___range_5 = L_15;
		// icon = cardEntity.icon;
		CardEntity_tCA1B94FC25F42A4675380DE0C5BEF56B4688FFC0* L_16 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = L_16->___icon_11;
		__this->___icon_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___icon_6), (void*)L_17);
		// }
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
// System.Void CardMovement::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardMovement_OnBeginDrag_m0AEF093EB120C2E3485718A90C08DA952A99CC24 (CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cardParent = transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		__this->___cardParent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cardParent_4), (void*)L_1);
		// transform.SetParent(cardParent.parent, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___cardParent_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_4, (bool)0, NULL);
		// GetComponent<CanvasGroup>().blocksRaycasts = false; // blocksRaycasts??????
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardMovement::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardMovement_OnDrag_m048B2EBE4233BE800CF32A8DD44204AF15F507FB (CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// transform.position = eventData.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void CardMovement::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardMovement_OnEndDrag_m51C4B2F6757BD8A8E443AC2A60B282983668A76D (CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.SetParent(cardParent, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___cardParent_4;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_0, L_1, (bool)0, NULL);
		// GetComponent<CanvasGroup>().blocksRaycasts = true; // blocksRaycasts??????
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2;
		L_2 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CardMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardMovement__ctor_mE244D15AEDF37A25E05BD1988E1750846EB2B8E9 (CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* __this, const RuntimeMethod* method) 
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
// System.Void CardView::Show(CardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardView_Show_m0B643238D8097DC4833F65EE41E635ABD6708935 (CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* __this, CardModel_tEC6162579482334F393091423C767EE0EB570530* ___cardModel0, const RuntimeMethod* method) 
{
	{
		// nameText.text = cardModel.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___nameText_4;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_1 = ___cardModel0;
		String_t* L_2 = L_1->___name_1;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// voltText.text = cardModel.volt.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___voltText_5;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_4 = ___cardModel0;
		int32_t* L_5 = (&L_4->___volt_3);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// ecoText.text = cardModel.eco.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___ecoText_6;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_8 = ___cardModel0;
		int32_t* L_9 = (&L_8->___eco_4);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// costText.text = cardModel.cost.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___costText_7;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_12 = ___cardModel0;
		int32_t* L_13 = (&L_12->___cost_2);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// rangeText.text = cardModel.range.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___rangeText_8;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_16 = ___cardModel0;
		int32_t* L_17 = (&L_16->___range_5);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// iconImage.sprite = cardModel.icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___iconImage_9;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_20 = ___cardModel0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = L_20->___icon_6;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_21, NULL);
		// }
		return;
	}
}
// System.Void CardView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardView__ctor_mC17A7A7E573EB80DE79DF2F3AC15EB7A4A90CBAE (CardView_tBA2AB0EF1B49D55A831CCC5D8DAAF69B5FDA5BD0* __this, const RuntimeMethod* method) 
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
// System.Void DropPlace::OnDrop(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropPlace_OnDrop_mD370AF1D7254819106EF960BD6A93EDE0C5FF1CA (DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m0829843E5AE14EC37B8C7CC267427FEE6631345C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m5CE2C5E8CF926F7275C44F55AA5AD16E381F2DD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C741ED64B00AEB3A1BBE493D92497FA929614E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DCA95296ED08F48DDF8762225138C798CBEA96);
		s_Il2CppMethodInitialized = true;
	}
	CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68* V_0 = NULL;
	CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// CardController[] CardList = this.GetComponentsInChildren<CardController>(); //?????????
		CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68* L_0;
		L_0 = Component_GetComponentsInChildren_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m0829843E5AE14EC37B8C7CC267427FEE6631345C(__this, Component_GetComponentsInChildren_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m0829843E5AE14EC37B8C7CC267427FEE6631345C_RuntimeMethod_var);
		V_0 = L_0;
		// CardController card = eventData.pointerDrag.GetComponent<CardController>(); // ????????????CardMovement???
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_1, NULL);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_3;
		L_3 = GameObject_GetComponent_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m5CE2C5E8CF926F7275C44F55AA5AD16E381F2DD7(L_2, GameObject_GetComponent_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_m5CE2C5E8CF926F7275C44F55AA5AD16E381F2DD7_RuntimeMethod_var);
		V_1 = L_3;
		// string Previous = card.movement.cardParent.ToString();
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_4 = V_1;
		CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* L_5 = L_4->___movement_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___cardParent_4;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_2 = L_7;
		// if (card != null && gameObject.name != Previous.Remove(Previous.Length - 28)) // ???????????????
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0287;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		String_t* L_12 = V_2;
		String_t* L_13 = V_2;
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		String_t* L_15;
		L_15 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_12, ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)28))), NULL);
		bool L_16;
		L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_11, L_15, NULL);
		if (!L_16)
		{
			goto IL_0287;
		}
	}
	{
		// if(gameObject.name == "Hand" || CardList.Length<2 && Previous.Remove(Previous.Length - 28) == "Hand")//???2???????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (L_19)
		{
			goto IL_0092;
		}
	}
	{
		CardControllerU5BU5D_t1327FC322162DA86C2E4592C9561FDC6D9C9CF68* L_20 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0287;
		}
	}
	{
		String_t* L_21 = V_2;
		String_t* L_22 = V_2;
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		String_t* L_24;
		L_24 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_21, ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)28))), NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_25)
		{
			goto IL_0287;
		}
	}

IL_0092:
	{
		// switch(gameObject.name.ToString())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		V_3 = L_28;
		String_t* L_29 = V_3;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (L_30)
		{
			goto IL_00d9;
		}
	}
	{
		String_t* L_31 = V_3;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral23C741ED64B00AEB3A1BBE493D92497FA929614E, NULL);
		if (L_32)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_33 = V_3;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral62DCA95296ED08F48DDF8762225138C798CBEA96, NULL);
		if (L_34)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_35 = V_3;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3, NULL);
		if (L_36)
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_00fe;
	}

IL_00d9:
	{
		// case "Hand":     i = 0 ; break;
		__this->___i_6 = 0;
		// case "Hand":     i = 0 ; break;
		goto IL_00fe;
	}

IL_00e2:
	{
		// case "Ocean":    i = 10; break;
		__this->___i_6 = ((int32_t)10);
		// case "Ocean":    i = 10; break;
		goto IL_00fe;
	}

IL_00ec:
	{
		// case "Land":     i = 20; break;
		__this->___i_6 = ((int32_t)20);
		// case "Land":     i = 20; break;
		goto IL_00fe;
	}

IL_00f6:
	{
		// case "Mountain": i = 30; break;
		__this->___i_6 = ((int32_t)30);
	}

IL_00fe:
	{
		// switch(card.model.ID2)
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_37 = V_1;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_38 = L_37->___model_5;
		int32_t L_39 = L_38->___ID2_7;
		V_4 = L_39;
		int32_t L_40 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_40, 1)))
		{
			case 0:
			{
				goto IL_012d;
			}
			case 1:
			{
				goto IL_012d;
			}
			case 2:
			{
				goto IL_017a;
			}
			case 3:
			{
				goto IL_01c7;
			}
			case 4:
			{
				goto IL_01c7;
			}
		}
	}
	{
		goto IL_01df;
	}

IL_012d:
	{
		// case 2: if(gameObject.name.ToString() == "Ocean" || gameObject.name == "Hand")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_42;
		L_42 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_41, NULL);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral23C741ED64B00AEB3A1BBE493D92497FA929614E, NULL);
		if (L_44)
		{
			goto IL_0160;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_46;
		L_46 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_45, NULL);
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_47)
		{
			goto IL_01df;
		}
	}

IL_0160:
	{
		// card.movement.cardParent = this.transform; // ?????????
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_48 = V_1;
		CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* L_49 = L_48->___movement_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		L_49->___cardParent_4 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->___cardParent_4), (void*)L_50);
		// placed = true;
		__this->___placed_7 = (bool)1;
		// break;
		goto IL_01df;
	}

IL_017a:
	{
		// case 3: if(gameObject.name.ToString() == "Mountain" || gameObject.name == "Hand")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_52;
		L_52 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_51, NULL);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3, NULL);
		if (L_54)
		{
			goto IL_01ad;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_56;
		L_56 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_55, NULL);
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_57)
		{
			goto IL_01df;
		}
	}

IL_01ad:
	{
		// card.movement.cardParent = this.transform; // ?????????
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_58 = V_1;
		CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* L_59 = L_58->___movement_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		L_59->___cardParent_4 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___cardParent_4), (void*)L_60);
		// placed = true;
		__this->___placed_7 = (bool)1;
		// break;
		goto IL_01df;
	}

IL_01c7:
	{
		// case 5: card.movement.cardParent = this.transform; // ?????????
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_61 = V_1;
		CardMovement_t5DA82CC588586D2A026BC8E0DD0BA90DBD0CC71D* L_62 = L_61->___movement_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		L_62->___cardParent_4 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___cardParent_4), (void*)L_63);
		// placed = true;
		__this->___placed_7 = (bool)1;
	}

IL_01df:
	{
		// if(gameObject.name != "Hand" && Previous.Remove(Previous.Length - 28) == "Hand"  && placed == true)//????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_65;
		L_65 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_64, NULL);
		bool L_66;
		L_66 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_65, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_66)
		{
			goto IL_0230;
		}
	}
	{
		String_t* L_67 = V_2;
		String_t* L_68 = V_2;
		int32_t L_69;
		L_69 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_68, NULL);
		String_t* L_70;
		L_70 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_67, ((int32_t)il2cpp_codegen_subtract(L_69, ((int32_t)28))), NULL);
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_71)
		{
			goto IL_0230;
		}
	}
	{
		bool L_72 = __this->___placed_7;
		if (!L_72)
		{
			goto IL_0230;
		}
	}
	{
		// card.DropField(card.model.ID2,i);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_73 = V_1;
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_74 = V_1;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_75 = L_74->___model_5;
		int32_t L_76 = L_75->___ID2_7;
		int32_t L_77 = __this->___i_6;
		CardController_DropField_mFED7DFD3F0F9603F8EA4BEEA8E948180F58E1FD0(L_73, L_76, L_77, NULL);
	}

IL_0230:
	{
		// if(gameObject.name == "Hand" && Previous.Remove(Previous.Length - 28) != "Hand")//????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78;
		L_78 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_79;
		L_79 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_78, NULL);
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_80)
		{
			goto IL_0287;
		}
	}
	{
		String_t* L_81 = V_2;
		String_t* L_82 = V_2;
		int32_t L_83;
		L_83 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_82, NULL);
		String_t* L_84;
		L_84 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_81, ((int32_t)il2cpp_codegen_subtract(L_83, ((int32_t)28))), NULL);
		bool L_85;
		L_85 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_84, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_85)
		{
			goto IL_0287;
		}
	}
	{
		// i += 1;
		int32_t L_86 = __this->___i_6;
		__this->___i_6 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		// card.DropField(card.model.ID2,i);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_87 = V_1;
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_88 = V_1;
		CardModel_tEC6162579482334F393091423C767EE0EB570530* L_89 = L_88->___model_5;
		int32_t L_90 = L_89->___ID2_7;
		int32_t L_91 = __this->___i_6;
		CardController_DropField_mFED7DFD3F0F9603F8EA4BEEA8E948180F58E1FD0(L_87, L_90, L_91, NULL);
	}

IL_0287:
	{
		// }
		return;
	}
}
// System.Void DropPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropPlace__ctor_mFBBAE3C8C4BBBE5932AAD1C0854D3D32635163EE (DropPlace_tEA9A570685269AD2B58E6E1B99ECD1FDE33DA8FE* __this, const RuntimeMethod* method) 
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
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartGame();
		GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// NowTurn = 1;
		__this->___NowTurn_58 = 1;
		// MaxTurn = 8;
		__this->___MaxTurn_59 = 8;
		// }
		return;
	}
}
// System.Void GameManager::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Play_m60DDAE5B98EDCA3C57FC90D32241B377FD50B160 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// this.Title.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Title_32;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// this.Map.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Map_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// this.Zone.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Zone_34;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// this.Info.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Info_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// TurnStart();
		GameManager_TurnStart_m0C86004377330ED7117D20316C52CDC59056C6BB(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::TurnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TurnStart_m0C86004377330ED7117D20316C52CDC59056C6BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if(!process){
		bool L_0 = __this->___process_43;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// ShowDay();
		GameManager_ShowDay_m30754F56B5E493FA2EB3B656E0A7EAC1E5FF9014(__this, NULL);
		// DecideWeather();
		GameManager_DecideWeather_m5BED7D0898EB35ED082127C5E282924D312AF180(__this, NULL);
		// DecideDemand();
		GameManager_DecideDemand_mA2A27B544D2389BD4ACF1474CBEF6AD2A2307A14(__this, NULL);
		// ShowCostPoint();
		GameManager_ShowCostPoint_m3DDC13C3BE34C80CD9878D11C4EB33E86D7D563A(__this, NULL);
		// ShowSupply();
		GameManager_ShowSupply_m447A63B3A82BAFFFF6E4DD773E4E95CFEB1F1E14(__this, NULL);
		// ShowVoltPoint();
		GameManager_ShowVoltPoint_m223FD525F5918B802DCFE3A166ACED4D7CA2BA98(__this, NULL);
		// ShowEcoPoint();
		GameManager_ShowEcoPoint_m48975781478DC95FE598C4D7C8B9BF600D32B00D(__this, NULL);
		// ShowForeCast();
		GameManager_ShowForeCast_m30DCEA71BAE3F80822A4ED8D5E94F8AD8C86426A(__this, NULL);
		// DrawCard(Hand);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___Hand_7;
		GameManager_DrawCard_mBC383B89A0418A9E1714F49AD5E75A9E830B8B64(__this, L_1, NULL);
		// process = true;
		__this->___process_43 = (bool)1;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void GameManager::ShowDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowDay_m30754F56B5E493FA2EB3B656E0A7EAC1E5FF9014 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F03A3A04ADC3EB399486AADA1986DDDF64A819F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral566D655F4A73B412E695413DB01BB609D2DC108E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch((NowTurn + 1) % 2)
		int32_t L_0 = __this->___NowTurn_58;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))%2));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0062;
	}

IL_0014:
	{
		// case 0: NowTurnTxt.text = (((NowTurn + 1) / 2).ToString() + "?? ??"); break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___NowTurnTxt_11;
		int32_t L_4 = __this->___NowTurn_58;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))/2));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral566D655F4A73B412E695413DB01BB609D2DC108E, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// case 0: NowTurnTxt.text = (((NowTurn + 1) / 2).ToString() + "?? ??"); break;
		goto IL_0062;
	}

IL_003d:
	{
		// case 1: NowTurnTxt.text = (((NowTurn)     / 2).ToString() + "?? ??"); break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___NowTurnTxt_11;
		int32_t L_8 = __this->___NowTurn_58;
		V_1 = ((int32_t)(L_8/2));
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral1F03A3A04ADC3EB399486AADA1986DDDF64A819F, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
	}

IL_0062:
	{
		// NowTurnTxt_End.text = NowTurnTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___NowTurnTxt_End_21;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___NowTurnTxt_11;
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void GameManager::CreateCard(System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateCard_mED782C97E1AE8EEF77F58916BDF829BD279FBCDC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___cardID0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___place1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_mF3ADF17CA01CE29FB017087A1F9DB2DE88661E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A2577E53B9472A98AC32AB29090B16CEEB219B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CardController card = Instantiate(cardPrefab, place);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_0 = __this->___cardPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___place1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_2;
		L_2 = Object_Instantiate_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_mF3ADF17CA01CE29FB017087A1F9DB2DE88661E92(L_0, L_1, Object_Instantiate_TisCardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928_mF3ADF17CA01CE29FB017087A1F9DB2DE88661E92_RuntimeMethod_var);
		// card.Init(cardID);
		CardController_t50F69953D6D37FEAB5FBD707CCA7F85DC1A24928* L_3 = L_2;
		int32_t L_4 = ___cardID0;
		CardController_Init_m8A8F2386F21980F98DA3F7F51A0BA34DF4993604(L_3, L_4, NULL);
		// card.name = "card_" + cardID;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___cardID0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral38A2577E53B9472A98AC32AB29090B16CEEB219B, L_5, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void GameManager::DecideWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DecideWeather_m5BED7D0898EB35ED082127C5E282924D312AF180 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10B1672A27A9FDDA00FF9C9530D769BAF2A53F89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D025CDB9DAFC5ECD0B386F58B3196A81D73C9D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB761CD228AAB0A4E455F3CCBEDD2546CDFADB1F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DF12C01A86D696B24C37D364059AE55D1C5CC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBABC7C9903660AA7BDF5A8960C06D270DE63E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8E9E576EF85B7F8B8EB9FE7500ECB7E22D81B64);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int[] p = new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// p[0] = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		// p[1] = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		// switch((NowTurn+1)/2)
		int32_t L_3 = __this->___NowTurn_58;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 1))/2));
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, 1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0048;
	}

IL_0034:
	{
		// case 1: p[2] = 3; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)3);
		// case 1: p[2] = 3; break;
		goto IL_0048;
	}

IL_003a:
	{
		// case 3: p[2] = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)3);
		// p[3] = 5; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)5);
		// p[3] = 5; break;
		goto IL_0048;
	}

IL_0044:
	{
		// case 4: p[2] = 4; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)4);
	}

IL_0048:
	{
		// Weather = r.Next(1,p.Length);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = __this->___r_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 1, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
		__this->___Weather_57 = L_11;
		// switch(Weather)
		int32_t L_12 = __this->___Weather_57;
		V_1 = L_12;
		int32_t L_13 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_13, 1)))
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_00b8;
			}
			case 4:
			{
				goto IL_00ca;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0082:
	{
		// case 1: WeatherTxt.text = "??"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___WeatherTxt_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralE8E9E576EF85B7F8B8EB9FE7500ECB7E22D81B64);
		// case 1: WeatherTxt.text = "??"; break;
		goto IL_00da;
	}

IL_0094:
	{
		// case 2: WeatherTxt.text = "??"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___WeatherTxt_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralB9DF12C01A86D696B24C37D364059AE55D1C5CC6);
		// case 2: WeatherTxt.text = "??"; break;
		goto IL_00da;
	}

IL_00a6:
	{
		// case 3: WeatherTxt.text = "?"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___WeatherTxt_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteralDBABC7C9903660AA7BDF5A8960C06D270DE63E64);
		// case 3: WeatherTxt.text = "?"; break;
		goto IL_00da;
	}

IL_00b8:
	{
		// case 4: WeatherTxt.text = "?"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___WeatherTxt_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralB761CD228AAB0A4E455F3CCBEDD2546CDFADB1F6);
		// case 4: WeatherTxt.text = "?"; break;
		goto IL_00da;
	}

IL_00ca:
	{
		// case 5: WeatherTxt.text = "??"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___WeatherTxt_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral4D025CDB9DAFC5ECD0B386F58B3196A81D73C9D5);
	}

IL_00da:
	{
		// switch(NowTurn-1)
		int32_t L_19 = __this->___NowTurn_58;
		if (((int32_t)il2cpp_codegen_subtract(L_19, 1)))
		{
			goto IL_00f5;
		}
	}
	{
		// case 0: PreviousUsage.text = "---%"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___PreviousUsage_16;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral10B1672A27A9FDDA00FF9C9530D769BAF2A53F89);
		// case 0: PreviousUsage.text = "---%"; break;
		return;
	}

IL_00f5:
	{
		// default: PreviousUsage.text = (Demand[NowTurn -2 ] * 100 / Supply[NowTurn -2]).ToString() + "%"; break;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___PreviousUsage_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___Demand_52;
		int32_t L_23 = __this->___NowTurn_58;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 2));
		int32_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___Supply_53;
		int32_t L_27 = __this->___NowTurn_58;
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 2));
		int32_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)100)))/L_29));
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_30, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_31);
		// }
		return;
	}
}
// System.Void GameManager::DecideDemand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DecideDemand_mA2A27B544D2389BD4ACF1474CBEF6AD2A2307A14 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (NowTurn)
		int32_t L_0 = __this->___NowTurn_58;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0092;
			}
			case 5:
			{
				goto IL_00a8;
			}
			case 6:
			{
				goto IL_00be;
			}
			case 7:
			{
				goto IL_00d4;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_0034:
	{
		// case 1 : Demand[NowTurn - 1] = 2000 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Demand_52;
		int32_t L_3 = __this->___NowTurn_58;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_3, 1))), (int32_t)((int32_t)2000));
		// case 1 : Demand[NowTurn - 1] = 2000 ;break;
		goto IL_00e8;
	}

IL_004d:
	{
		// case 2 : Demand[NowTurn - 1] = 1500 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___Demand_52;
		int32_t L_5 = __this->___NowTurn_58;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_5, 1))), (int32_t)((int32_t)1500));
		// case 2 : Demand[NowTurn - 1] = 1500 ;break;
		goto IL_00e8;
	}

IL_0066:
	{
		// case 3 : Demand[NowTurn - 1] = 3250 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___Demand_52;
		int32_t L_7 = __this->___NowTurn_58;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_7, 1))), (int32_t)((int32_t)3250));
		// case 3 : Demand[NowTurn - 1] = 3250 ;break;
		goto IL_00e8;
	}

IL_007c:
	{
		// case 4 : Demand[NowTurn - 1] = 2750 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___Demand_52;
		int32_t L_9 = __this->___NowTurn_58;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_9, 1))), (int32_t)((int32_t)2750));
		// case 4 : Demand[NowTurn - 1] = 2750 ;break;
		goto IL_00e8;
	}

IL_0092:
	{
		// case 5 : Demand[NowTurn - 1] = 2000 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___Demand_52;
		int32_t L_11 = __this->___NowTurn_58;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_11, 1))), (int32_t)((int32_t)2000));
		// case 5 : Demand[NowTurn - 1] = 2000 ;break;
		goto IL_00e8;
	}

IL_00a8:
	{
		// case 6 : Demand[NowTurn - 1] = 1500 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___Demand_52;
		int32_t L_13 = __this->___NowTurn_58;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_13, 1))), (int32_t)((int32_t)1500));
		// case 6 : Demand[NowTurn - 1] = 1500 ;break;
		goto IL_00e8;
	}

IL_00be:
	{
		// case 7 : Demand[NowTurn - 1] = 5000 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___Demand_52;
		int32_t L_15 = __this->___NowTurn_58;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 1))), (int32_t)((int32_t)5000));
		// case 7 : Demand[NowTurn - 1] = 5000 ;break;
		goto IL_00e8;
	}

IL_00d4:
	{
		// case 8 : Demand[NowTurn - 1] = 4500 ;break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___Demand_52;
		int32_t L_17 = __this->___NowTurn_58;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 1))), (int32_t)((int32_t)4500));
	}

IL_00e8:
	{
		// Demand[NowTurn - 1] += (UnityEngine.Random.Range(1, 3))*250 -500;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___Demand_52;
		int32_t L_19 = __this->___NowTurn_58;
		int32_t* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_19, 1)))));
		int32_t L_21 = *((int32_t*)L_20);
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_22, ((int32_t)250))), ((int32_t)500)))));
		// DemandTxt.text = Demand[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___DemandTxt_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___Demand_52;
		int32_t L_25 = __this->___NowTurn_58;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_25, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// DemandTxt_End.text = DemandTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___DemandTxt_End_22;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___DemandTxt_13;
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_29);
		// }
		return;
	}
}
// System.Void GameManager::ShowCostPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowCostPoint_m3DDC13C3BE34C80CD9878D11C4EB33E86D7D563A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// CostPoint_Total = CostPoint.Sum(); //??
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___CostPoint_54;
		int32_t L_1;
		L_1 = Enumerable_Sum_m0804E8F6958EBEBCC478DE60FC6053EAFDAF49D5((RuntimeObject*)L_0, NULL);
		__this->___CostPoint_Total_60 = L_1;
		// CostPointTxt.text = CostPoint[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___CostPointTxt_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___CostPoint_54;
		int32_t L_4 = __this->___NowTurn_58;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// CostPoint_TotalTxt.text = CostPoint_Total.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___CostPoint_TotalTxt_17;
		int32_t* L_7 = (&__this->___CostPoint_Total_60);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// CostPointTxt_End.text = CostPoint[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___CostPointTxt_End_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___CostPoint_54;
		int32_t L_11 = __this->___NowTurn_58;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_11, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// }
		return;
	}
}
// System.Void GameManager::ShowSupply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowSupply_m447A63B3A82BAFFFF6E4DD773E4E95CFEB1F1E14 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// SupplyTxt.text = Supply[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___SupplyTxt_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___Supply_53;
		int32_t L_2 = __this->___NowTurn_58;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_2, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// SupplyTxt_End.text = Supply[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___SupplyTxt_End_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___Supply_53;
		int32_t L_6 = __this->___NowTurn_58;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_6, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void GameManager::ShowVoltPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowVoltPoint_m223FD525F5918B802DCFE3A166ACED4D7CA2BA98 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// VoltPointTxt_End.text = VoltPoint[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___VoltPointTxt_End_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___VoltPoint_55;
		int32_t L_2 = __this->___NowTurn_58;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_2, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameManager::ShowEcoPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowEcoPoint_m48975781478DC95FE598C4D7C8B9BF600D32B00D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// EcoPointTxt_End.text = EcoPoint[NowTurn - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___EcoPointTxt_End_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___EcoPoint_56;
		int32_t L_2 = __this->___NowTurn_58;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_2, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameManager::ShowForeCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowForeCast_m30DCEA71BAE3F80822A4ED8D5E94F8AD8C86426A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// NowTurnTxt_Forecast.text = NowTurnTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NowTurnTxt_Forecast_18;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___NowTurnTxt_11;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// WeatherTxt_Forecast.text = WeatherTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___WeatherTxt_Forecast_19;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___WeatherTxt_12;
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// DemandTxt_Forecast.text  = DemandTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___DemandTxt_Forecast_20;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___DemandTxt_13;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// this.Forecast.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Forecast_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::DrawCard(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DrawCard_mBC383B89A0418A9E1714F49AD5E75A9E830B8B64 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 1; i <= 5; i++)
		V_0 = 1;
		goto IL_0010;
	}

IL_0004:
	{
		// CreateCard(i, Hand);
		int32_t L_0 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___Hand0;
		GameManager_CreateCard_mED782C97E1AE8EEF77F58916BDF829BD279FBCDC(__this, L_0, L_1, NULL);
		// for(int i = 1; i <= 5; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0010:
	{
		// for(int i = 1; i <= 5; i++)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Finish_mC34C532F631B0DDE28B3DBCD2270CEBA060161C1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform child in Hand)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Hand_7;
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in Hand)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach (Transform child in Hand)
				RuntimeObject* L_8 = V_0;
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// foreach (Transform child in Ocean)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___Ocean_8;
		RuntimeObject* L_11;
		L_11 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_10, NULL);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_13 = V_1;
					if (!L_13)
					{
						goto IL_007b;
					}
				}
				{
					RuntimeObject* L_14 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0061_1;
			}

IL_004c_1:
			{
				// foreach (Transform child in Ocean)
				RuntimeObject* L_15 = V_0;
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_16, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
			}

IL_0061_1:
			{
				// foreach (Transform child in Ocean)
				RuntimeObject* L_18 = V_0;
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// foreach (Transform child in Land)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___Land_9;
		RuntimeObject* L_21;
		L_21 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_20, NULL);
		V_0 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_22 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_23 = V_1;
					if (!L_23)
					{
						goto IL_00b9;
					}
				}
				{
					RuntimeObject* L_24 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
				}

IL_00b9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009f_1;
			}

IL_008a_1:
			{
				// foreach (Transform child in Land)
				RuntimeObject* L_25 = V_0;
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
				L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_26, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_27, NULL);
			}

IL_009f_1:
			{
				// foreach (Transform child in Land)
				RuntimeObject* L_28 = V_0;
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_008a_1;
				}
			}
			{
				goto IL_00ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ba:
	{
		// foreach (Transform child in Mountain)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___Mountain_10;
		RuntimeObject* L_31;
		L_31 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_30, NULL);
		V_0 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_33 = V_1;
					if (!L_33)
					{
						goto IL_00f7;
					}
				}
				{
					RuntimeObject* L_34 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_34);
				}

IL_00f7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00dd_1;
			}

IL_00c8_1:
			{
				// foreach (Transform child in Mountain)
				RuntimeObject* L_35 = V_0;
				RuntimeObject* L_36;
				L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
				L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_36, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_37, NULL);
			}

IL_00dd_1:
			{
				// foreach (Transform child in Mountain)
				RuntimeObject* L_38 = V_0;
				bool L_39;
				L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				if (L_39)
				{
					goto IL_00c8_1;
				}
			}
			{
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		// ShowDay();
		GameManager_ShowDay_m30754F56B5E493FA2EB3B656E0A7EAC1E5FF9014(__this, NULL);
		// ShowSupply();
		GameManager_ShowSupply_m447A63B3A82BAFFFF6E4DD773E4E95CFEB1F1E14(__this, NULL);
		// ShowEcoPoint();
		GameManager_ShowEcoPoint_m48975781478DC95FE598C4D7C8B9BF600D32B00D(__this, NULL);
		// ShowCostPoint();
		GameManager_ShowCostPoint_m3DDC13C3BE34C80CD9878D11C4EB33E86D7D563A(__this, NULL);
		// this.End.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___End_37;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::TurnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TurnEnd_m2D688BA98129DE5B5859065B382BBEE866F39DBA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1615C8B12000C31452C8FE5E447728F72CDFD5F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26CD5F9E6C1D7068B88BEFDBD9E5184B1E944B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320F614F11DFF2B9D0531B6FBD2FC84953E1127A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7441F151C43F40BA78338BCC4FD3935C440A4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD0B2688386FC8F2EEC53C5C5BA18ACB8B26642);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("------------------");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1615C8B12000C31452C8FE5E447728F72CDFD5F1, NULL);
		// for(int i = 0; i < NowTurn; i++)
		V_0 = 0;
		goto IL_00c1;
	}

IL_0011:
	{
		// Debug.Log(i + 1 + "???? ?? = " + Demand[i]);
		int32_t L_0 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Demand_52;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral320F614F11DFF2B9D0531B6FBD2FC84953E1127A, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// Debug.Log(i + 1 + "???? ?? = " + Supply[i]);
		int32_t L_6 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___Supply_53;
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteralDCD0B2688386FC8F2EEC53C5C5BA18ACB8B26642, L_10, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// Debug.Log(i + 1 + "???? ??P = " + EcoPoint[i]);
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___EcoPoint_56;
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral26CD5F9E6C1D7068B88BEFDBD9E5184B1E944B08, L_16, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// Debug.Log(i + 1 + "???? ??? = " + CostPoint[i]);
		int32_t L_18 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___CostPoint_54;
		int32_t L_21 = V_0;
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_19, _stringLiteralD7441F151C43F40BA78338BCC4FD3935C440A4E5, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// for(int i = 0; i < NowTurn; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00c1:
	{
		// for(int i = 0; i < NowTurn; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___NowTurn_58;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0011;
		}
	}
	{
		// Debug.Log("------------------");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1615C8B12000C31452C8FE5E447728F72CDFD5F1, NULL);
		// if (NowTurn>=MaxTurn)
		int32_t L_27 = __this->___NowTurn_58;
		int32_t L_28 = __this->___MaxTurn_59;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_00eb;
		}
	}
	{
		// GameClear();
		GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111(__this, NULL);
	}

IL_00eb:
	{
		// if(Demand[NowTurn - 1] > Supply[NowTurn - 1] || NowTurn % 2 ==0 && (Demand[NowTurn - 2] + Demand[NowTurn -1]) * 100 / (Supply[NowTurn - 2] + Supply[NowTurn -1]) < 90)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___Demand_52;
		int32_t L_30 = __this->___NowTurn_58;
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		int32_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___Supply_53;
		int32_t L_34 = __this->___NowTurn_58;
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_32) > ((int32_t)L_36)))
		{
			goto IL_015b;
		}
	}
	{
		int32_t L_37 = __this->___NowTurn_58;
		if (((int32_t)(L_37%2)))
		{
			goto IL_0161;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___Demand_52;
		int32_t L_39 = __this->___NowTurn_58;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 2));
		int32_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___Demand_52;
		int32_t L_43 = __this->___NowTurn_58;
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		int32_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___Supply_53;
		int32_t L_47 = __this->___NowTurn_58;
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 2));
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___Supply_53;
		int32_t L_51 = __this->___NowTurn_58;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		int32_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_41, L_45)), ((int32_t)100)))/((int32_t)il2cpp_codegen_add(L_49, L_53))))) >= ((int32_t)((int32_t)90))))
		{
			goto IL_0161;
		}
	}

IL_015b:
	{
		// GameOver();
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(__this, NULL);
	}

IL_0161:
	{
		// if(NowTurn<MaxTurn && Demand[NowTurn -1] <= Supply[NowTurn -1])
		int32_t L_54 = __this->___NowTurn_58;
		int32_t L_55 = __this->___MaxTurn_59;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_02a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->___Demand_52;
		int32_t L_57 = __this->___NowTurn_58;
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		int32_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___Supply_53;
		int32_t L_61 = __this->___NowTurn_58;
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		if ((((int32_t)L_59) > ((int32_t)L_63)))
		{
			goto IL_02a0;
		}
	}
	{
		// if(Demand[NowTurn -1] * 100 / Supply[NowTurn -1] >= 90 && Demand[NowTurn -1] * 100 / Supply[NowTurn -1] <= 95)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___Demand_52;
		int32_t L_65 = __this->___NowTurn_58;
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		int32_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___Supply_53;
		int32_t L_69 = __this->___NowTurn_58;
		int32_t L_70 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
		int32_t L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_67, ((int32_t)100)))/L_71))) < ((int32_t)((int32_t)90))))
		{
			goto IL_01f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = __this->___Demand_52;
		int32_t L_73 = __this->___NowTurn_58;
		int32_t L_74 = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		int32_t L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->___Supply_53;
		int32_t L_77 = __this->___NowTurn_58;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		int32_t L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_75, ((int32_t)100)))/L_79))) > ((int32_t)((int32_t)95))))
		{
			goto IL_01f2;
		}
	}
	{
		// VoltPoint[NowTurn -1] = 20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = __this->___VoltPoint_55;
		int32_t L_81 = __this->___NowTurn_58;
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_81, 1))), (int32_t)((int32_t)20));
	}

IL_01f2:
	{
		// if(Demand[NowTurn -1] * 100 / Supply[NowTurn -1] >= 95 && Demand[NowTurn -1] * 100 / Supply[NowTurn -1] <= 97)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___Demand_52;
		int32_t L_83 = __this->___NowTurn_58;
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		int32_t L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = __this->___Supply_53;
		int32_t L_87 = __this->___NowTurn_58;
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
		int32_t L_89 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_85, ((int32_t)100)))/L_89))) < ((int32_t)((int32_t)95))))
		{
			goto IL_024f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->___Demand_52;
		int32_t L_91 = __this->___NowTurn_58;
		int32_t L_92 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		int32_t L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___Supply_53;
		int32_t L_95 = __this->___NowTurn_58;
		int32_t L_96 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_97 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_93, ((int32_t)100)))/L_97))) > ((int32_t)((int32_t)97))))
		{
			goto IL_024f;
		}
	}
	{
		// VoltPoint[NowTurn -1] = 10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = __this->___VoltPoint_55;
		int32_t L_99 = __this->___NowTurn_58;
		(L_98)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_99, 1))), (int32_t)((int32_t)10));
	}

IL_024f:
	{
		// if(Demand[NowTurn -1] == Supply[NowTurn -1])
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = __this->___Demand_52;
		int32_t L_101 = __this->___NowTurn_58;
		int32_t L_102 = ((int32_t)il2cpp_codegen_subtract(L_101, 1));
		int32_t L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___Supply_53;
		int32_t L_105 = __this->___NowTurn_58;
		int32_t L_106 = ((int32_t)il2cpp_codegen_subtract(L_105, 1));
		int32_t L_107 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_106));
		if ((!(((uint32_t)L_103) == ((uint32_t)L_107))))
		{
			goto IL_027f;
		}
	}
	{
		// VoltPoint[NowTurn -1] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->___VoltPoint_55;
		int32_t L_109 = __this->___NowTurn_58;
		(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_109, 1))), (int32_t)0);
	}

IL_027f:
	{
		// ShowVoltPoint();
		GameManager_ShowVoltPoint_m223FD525F5918B802DCFE3A166ACED4D7CA2BA98(__this, NULL);
		// process = false;
		__this->___process_43 = (bool)0;
		// NowTurn++;
		int32_t L_110 = __this->___NowTurn_58;
		__this->___NowTurn_58 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// TurnStart();
		GameManager_TurnStart_m0C86004377330ED7117D20316C52CDC59056C6BB(__this, NULL);
	}

IL_02a0:
	{
		// }
		return;
	}
}
// System.Void GameManager::GameClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038E18C2904850A39375FA0AE81118E518F2ADDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09CC7B8D8ACAEF137C8CFE45510E0289076FDB42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9171B041BECFA894E390E3BD918245F2A36BAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C900E581B411FB40DBB1C2ABD837413CA566E62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D237EAE9F1C48EA527D83EBCBF9BDC183FE232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5971D268E69B9FB9F7560F88EE938925AACDE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8751B9DF52AF22FE1FBC30D25940B70C7A9E21A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15BA27553F2BAC37032C3B9736B23B4B2809D37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// this.Clear.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Clear_38;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// for(int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_00c7;
	}

IL_0013:
	{
		// Debug.Log("Volt[" + i + "] = " + Volt[i]);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Volt_48;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral09CC7B8D8ACAEF137C8CFE45510E0289076FDB42, L_1, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// Debug.Log("Eco[" + i + "] = " + Eco[i]);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Eco_49;
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral8751B9DF52AF22FE1FBC30D25940B70C7A9E21A9, L_6, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_9, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// Debug.Log("Cost[" + i + "] = " + Cost[i]);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___Cost_50;
		int32_t L_13 = V_0;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		String_t* L_15;
		L_15 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral038E18C2904850A39375FA0AE81118E518F2ADDF, L_11, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_14, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// Debug.Log("Range[" + i + "] = " + Range[i]);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___Range_51;
		int32_t L_18 = V_0;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))), NULL);
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral5C900E581B411FB40DBB1C2ABD837413CA566E62, L_16, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_19, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// for(int i = 0; i < 5; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c7:
	{
		// for(int i = 0; i < 5; i++)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)5)))
		{
			goto IL_0013;
		}
	}
	{
		// for(int i = 0; i < 8; i++)
		V_1 = 0;
		goto IL_01b5;
	}

IL_00d5:
	{
		// Debug.Log("Demand[" + i + "] = " + Demand[i]);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___Demand_52;
		int32_t L_25 = V_1;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25))), NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralA15BA27553F2BAC37032C3B9736B23B4B2809D37, L_23, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_27, NULL);
		// Debug.Log("Supply[" + i + "] = " + Supply[i]);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___Supply_53;
		int32_t L_30 = V_1;
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30))), NULL);
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7D5971D268E69B9FB9F7560F88EE938925AACDE2, L_28, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_31, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
		// Debug.Log("CostPoint[" + i + "] = " + CostPoint[i]);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___CostPoint_54;
		int32_t L_35 = V_1;
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), NULL);
		String_t* L_37;
		L_37 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1D9171B041BECFA894E390E3BD918245F2A36BAA, L_33, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_36, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_37, NULL);
		// Debug.Log("Supply[" + i + "] = " + Supply[i]);
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___Supply_53;
		int32_t L_40 = V_1;
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40))), NULL);
		String_t* L_42;
		L_42 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7D5971D268E69B9FB9F7560F88EE938925AACDE2, L_38, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_41, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_42, NULL);
		// Debug.Log("EcoPoint[" + i + "] = " + EcoPoint[i]);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->___EcoPoint_56;
		int32_t L_45 = V_1;
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45))), NULL);
		String_t* L_47;
		L_47 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral67D237EAE9F1C48EA527D83EBCBF9BDC183FE232, L_43, _stringLiteralEDD614E460A1263AB4F3AB984F52C0B3F6C69B89, L_46, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_47, NULL);
		// for(int i = 0; i < 8; i++)
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_01b5:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) < ((int32_t)8)))
		{
			goto IL_00d5;
		}
	}
	{
		// Result();
		GameManager_Result_mB766BAA078C12FD5E90D14A550BCD401337E204B(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// this.Over.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Over_39;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Result();
		GameManager_Result_mB766BAA078C12FD5E90D14A550BCD401337E204B(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GotoTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GotoTitle_m0ABB685419F4E7E7CFFA6FE34B7D29F55E653CB8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Title", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, 0, NULL);
		// SceneManager.LoadScene("SampleScene", LoadSceneMode.Single);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, 0, NULL);
		// StartGame();
		GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::SelectRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SelectRange_m08AFEC876A99A4E73C543E0D576B309D9FBBAE48 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, const RuntimeMethod* method) 
{
	{
		// this.Rang.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Rang_41;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// ShowRange(ID);
		int32_t L_1 = ___ID0;
		GameManager_ShowRange_m9843FDE30042F6E6CC539D7E61B961EFD4F5CE22(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ShowRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowRange_m9843FDE30042F6E6CC539D7E61B961EFD4F5CE22 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, const RuntimeMethod* method) 
{
	{
		// IDTxt_Range.text   = ID.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___IDTxt_Range_27;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___ID0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// VoltTxt_Range.text = Volt[ID - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___VoltTxt_Range_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___Volt_48;
		int32_t L_4 = ___ID0;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// CostTxt_Range.text = Cost[ID - 1].ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___CostTxt_Range_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Cost_50;
		int32_t L_8 = ___ID0;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_8, 1))))), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void GameManager::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GetValue_m90D548C745BF9B2E68A55ED0629A7BBA02CDB9DA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___dropdown0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// Text IDtxt = ID.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ID_42;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_0 = L_1;
		// Range[int.Parse(IDtxt.text) - 1] = dropdown + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Range_51;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		int32_t L_6 = ___dropdown0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_5, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1)));
		// Volt[int.Parse(IDtxt.text) - 1] = Volt_Data[int.Parse(IDtxt.text) - 1] * Range[int.Parse(IDtxt.text) - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Volt_48;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_0;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_8);
		int32_t L_10;
		L_10 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___Volt_Data_45;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = V_0;
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		int32_t L_14;
		L_14 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_13, NULL);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_16 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___Range_51;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = V_0;
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		int32_t L_20;
		L_20 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_19, NULL);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		int32_t L_22 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1))), (int32_t)((int32_t)il2cpp_codegen_multiply(L_16, L_22)));
		// Cost[int.Parse(IDtxt.text) - 1] = Cost_Data[int.Parse(IDtxt.text) - 1] * Range[int.Parse(IDtxt.text) - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___Cost_50;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = V_0;
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_24);
		int32_t L_26;
		L_26 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___Cost_Data_47;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = V_0;
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		int32_t L_30;
		L_30 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_29, NULL);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		int32_t L_32 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___Range_51;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = V_0;
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_34);
		int32_t L_36;
		L_36 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_35, NULL);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_38 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1))), (int32_t)((int32_t)il2cpp_codegen_multiply(L_32, L_38)));
		// ShowRange(int.Parse(IDtxt.text));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = V_0;
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_39);
		int32_t L_41;
		L_41 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_40, NULL);
		GameManager_ShowRange_m9843FDE30042F6E6CC539D7E61B961EFD4F5CE22(__this, L_41, NULL);
		// }
		return;
	}
}
// System.Void GameManager::PushButton_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PushButton_Range_mEE28179F26CB0E40F9D1660170F5AA754F6B3748 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// Text IDtxt = ID.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ID_42;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_0 = L_1;
		// CalcSupply(int.Parse(IDtxt.text),0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = V_0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		GameManager_CalcSupply_m3007071BEA40B9E1CA68C83A27CC8E49CE8EE19C(__this, L_4, 0, NULL);
		// CalcCostPoint(int.Parse(IDtxt.text),0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		int32_t L_7;
		L_7 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_6, NULL);
		GameManager_CalcCostPoint_m3FDFA7763061412B5BE4500891B066486F8877BB(__this, L_7, 0, NULL);
		// this.Rang.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Rang_41;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::VoltChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_VoltChange_m2D3136074485B27F145623EA91267A680054154A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___ID0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001d;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0097;
			}
		}
	}
	{
		return;
	}

IL_001d:
	{
		// case 3: if(i%10==0){
		int32_t L_1 = ___i1;
		if (((int32_t)(L_1%((int32_t)10))))
		{
			goto IL_002a;
		}
	}
	{
		// SelectRange(ID);
		int32_t L_2 = ___ID0;
		GameManager_SelectRange_m08AFEC876A99A4E73C543E0D576B309D9FBBAE48(__this, L_2, NULL);
	}

IL_002a:
	{
		// if(i%10==1)
		int32_t L_3 = ___i1;
		if ((!(((uint32_t)((int32_t)(L_3%((int32_t)10)))) == ((uint32_t)1))))
		{
			goto IL_00f8;
		}
	}
	{
		// CalcSupply(ID,1);
		int32_t L_4 = ___ID0;
		GameManager_CalcSupply_m3007071BEA40B9E1CA68C83A27CC8E49CE8EE19C(__this, L_4, 1, NULL);
		// CalcCostPoint(ID,1);
		int32_t L_5 = ___ID0;
		GameManager_CalcCostPoint_m3FDFA7763061412B5BE4500891B066486F8877BB(__this, L_5, 1, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// case 4: switch( Weather )
		int32_t L_6 = __this->___Weather_57;
		V_0 = L_6;
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_7, 1)))
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_008d;
			}
			case 4:
			{
				goto IL_008d;
			}
		}
	}
	{
		return;
	}

IL_0069:
	{
		// case 1: Volt[3] = 250; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___Volt_48;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)250));
		// case 1: Volt[3] = 250; break;
		return;
	}

IL_0077:
	{
		// case 2: Volt[3] = 125; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___Volt_48;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)125));
		// case 2: Volt[3] = 125; break;
		return;
	}

IL_0082:
	{
		// case 3: Volt[3] = 25;  break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___Volt_48;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)25));
		// case 3: Volt[3] = 25;  break;
		return;
	}

IL_008d:
	{
		// case 5: Volt[3] = 0;   break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___Volt_48;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)0);
		// case 5: Volt[3] = 0;   break;
		return;
	}

IL_0097:
	{
		// case 5: if(Weather <= 4)
		int32_t L_12 = __this->___Weather_57;
		if ((((int32_t)L_12) > ((int32_t)4)))
		{
			goto IL_00e6;
		}
	}
	{
		// switch(i/10)
		int32_t L_13 = ___i1;
		V_0 = ((int32_t)(L_13/((int32_t)10)));
		int32_t L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_14, 1)))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_00e6;
	}

IL_00bb:
	{
		// case 1: Volt[4] = 300; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___Volt_48;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)300));
		// case 1: Volt[4] = 300; break;
		goto IL_00e6;
	}

IL_00ca:
	{
		// case 2: Volt[4] = 200; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___Volt_48;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)200));
		// case 2: Volt[4] = 200; break;
		goto IL_00e6;
	}

IL_00d9:
	{
		// case 3: Volt[4] = 250 ; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___Volt_48;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)250));
	}

IL_00e6:
	{
		// if(Weather == 5){
		int32_t L_18 = __this->___Weather_57;
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_00f8;
		}
	}
	{
		// Volt[4] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___Volt_48;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void GameManager::CalcSupply(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalcSupply_m3007071BEA40B9E1CA68C83A27CC8E49CE8EE19C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (i%10)
		int32_t L_0 = ___i1;
		V_0 = ((int32_t)(L_0%((int32_t)10)));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
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
		goto IL_0052;
	}

IL_000e:
	{
		// case 0: Supply[NowTurn - 1] += Volt[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___Supply_53;
		int32_t L_4 = __this->___NowTurn_58;
		int32_t* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1)))));
		int32_t L_6 = *((int32_t*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Volt_48;
		int32_t L_8 = ___ID0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, L_10));
		// case 0: Supply[NowTurn - 1] += Volt[ID - 1]; break;
		goto IL_0052;
	}

IL_0031:
	{
		// case 1: Supply[NowTurn - 1] -= Volt[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___Supply_53;
		int32_t L_12 = __this->___NowTurn_58;
		int32_t* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		int32_t L_14 = *((int32_t*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___Volt_48;
		int32_t L_16 = ___ID0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_18));
	}

IL_0052:
	{
		// ShowSupply();
		GameManager_ShowSupply_m447A63B3A82BAFFFF6E4DD773E4E95CFEB1F1E14(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CalcEcoPoint(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalcEcoPoint_m4B9854FABE06CA64FC776A11F9E58F6164ED9F2B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (i%10)
		int32_t L_0 = ___i1;
		V_0 = ((int32_t)(L_0%((int32_t)10)));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
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
		goto IL_0052;
	}

IL_000e:
	{
		// case 0: EcoPoint[NowTurn -1] += Eco[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___EcoPoint_56;
		int32_t L_4 = __this->___NowTurn_58;
		int32_t* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1)))));
		int32_t L_6 = *((int32_t*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Eco_49;
		int32_t L_8 = ___ID0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, L_10));
		// case 0: EcoPoint[NowTurn -1] += Eco[ID - 1]; break;
		goto IL_0052;
	}

IL_0031:
	{
		// case 1: EcoPoint[NowTurn -1] -= Eco[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___EcoPoint_56;
		int32_t L_12 = __this->___NowTurn_58;
		int32_t* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		int32_t L_14 = *((int32_t*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___Eco_49;
		int32_t L_16 = ___ID0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_18));
	}

IL_0052:
	{
		// ShowEcoPoint();
		GameManager_ShowEcoPoint_m48975781478DC95FE598C4D7C8B9BF600D32B00D(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CalcCostPoint(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalcCostPoint_m3FDFA7763061412B5BE4500891B066486F8877BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___ID0, int32_t ___i1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (i%10)
		int32_t L_0 = ___i1;
		V_0 = ((int32_t)(L_0%((int32_t)10)));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
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
		goto IL_0052;
	}

IL_000e:
	{
		// case 0: CostPoint[NowTurn -1] += Cost[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___CostPoint_54;
		int32_t L_4 = __this->___NowTurn_58;
		int32_t* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1)))));
		int32_t L_6 = *((int32_t*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___Cost_50;
		int32_t L_8 = ___ID0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, L_10));
		// case 0: CostPoint[NowTurn -1] += Cost[ID - 1]; break;
		goto IL_0052;
	}

IL_0031:
	{
		// case 1: CostPoint[NowTurn -1] -= Cost[ID - 1]; break;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___CostPoint_54;
		int32_t L_12 = __this->___NowTurn_58;
		int32_t* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		int32_t L_14 = *((int32_t*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___Cost_50;
		int32_t L_16 = ___ID0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_18));
	}

IL_0052:
	{
		// ShowCostPoint();
		GameManager_ShowCostPoint_m3DDC13C3BE34C80CD9878D11C4EB33E86D7D563A(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Result_mB766BAA078C12FD5E90D14A550BCD401337E204B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(!publish)
		bool L_0 = __this->___publish_44;
		if (L_0)
		{
			goto IL_0163;
		}
	}
	{
		// for(int i = 0; i < 8; i++)
		V_0 = 0;
		goto IL_00df;
	}

IL_0012:
	{
		// DemandPass = DemandPass + (Demand[i] / 50).ToString("x2");
		String_t* L_1 = __this->___DemandPass_61;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Demand_52;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)(L_5/((int32_t)50)));
		String_t* L_6;
		L_6 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_6, NULL);
		__this->___DemandPass_61 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DemandPass_61), (void*)L_7);
		// SupplyPass = SupplyPass + (Supply[i] / 50).ToString("x2");
		String_t* L_8 = __this->___SupplyPass_62;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___Supply_53;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((int32_t)(L_12/((int32_t)50)));
		String_t* L_13;
		L_13 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_13, NULL);
		__this->___SupplyPass_62 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SupplyPass_62), (void*)L_14);
		// CostPointPass = CostPointPass + (CostPoint[i] / 100).ToString("x2");
		String_t* L_15 = __this->___CostPointPass_63;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___CostPoint_54;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = ((int32_t)(L_19/((int32_t)100)));
		String_t* L_20;
		L_20 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, L_20, NULL);
		__this->___CostPointPass_63 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CostPointPass_63), (void*)L_21);
		// VoltPointPass = VoltPointPass + (VoltPoint[i]).ToString("x2");
		String_t* L_22 = __this->___VoltPointPass_64;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___VoltPoint_55;
		int32_t L_24 = V_0;
		String_t* L_25;
		L_25 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, L_25, NULL);
		__this->___VoltPointPass_64 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VoltPointPass_64), (void*)L_26);
		// EcoPointPass = EcoPointPass + (EcoPoint[i]).ToString("x2");
		String_t* L_27 = __this->___EcoPointPass_65;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___EcoPoint_56;
		int32_t L_29 = V_0;
		String_t* L_30;
		L_30 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, L_30, NULL);
		__this->___EcoPointPass_65 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EcoPointPass_65), (void*)L_31);
		// for(int i = 0; i < 8; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00df:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_0012;
		}
	}
	{
		// code16 = DemandPass + SupplyPass + CostPointPass + VoltPointPass + EcoPointPass;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		String_t* L_36 = __this->___DemandPass_61;
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_35;
		String_t* L_38 = __this->___SupplyPass_62;
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_37;
		String_t* L_40 = __this->___CostPointPass_63;
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_39;
		String_t* L_42 = __this->___VoltPointPass_64;
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_41;
		String_t* L_44 = __this->___EcoPointPass_65;
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_44);
		String_t* L_45;
		L_45 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_43, NULL);
		__this->___code16_66 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___code16_66), (void*)L_45);
		// Pass1.text = DemandPass + SupplyPass;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = __this->___Pass1_30;
		String_t* L_47 = __this->___DemandPass_61;
		String_t* L_48 = __this->___SupplyPass_62;
		String_t* L_49;
		L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_48, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, L_49);
		// Pass2.text = DemandPass + SupplyPass;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = __this->___Pass2_31;
		String_t* L_51 = __this->___DemandPass_61;
		String_t* L_52 = __this->___SupplyPass_62;
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_51, L_52, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_53);
		// publish = true;
		__this->___publish_44 = (bool)1;
	}

IL_0163:
	{
		// GUIUtility.systemCopyBuffer = code16;
		String_t* L_54 = __this->___code16_66;
		GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8(L_54, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Random r = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___r_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_4), (void*)L_0);
		// int[] Volt_Data      = new int[5] {1500,1000,250,300,200}, //????????????(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		__this->___Volt_Data_45 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Volt_Data_45), (void*)L_2);
		// Eco_Data       = new int[5] {0,0,0,0,0}, //???????????P(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___Eco_Data_46 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Eco_Data_46), (void*)L_4);
		// Cost_Data      = new int[5] {4000,1500,80,6,300}; //????????????(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		__this->___Cost_Data_47 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Cost_Data_47), (void*)L_6);
		// public int[]    Volt      = new int[5] {1500,1000,250,300,200}, //????????????(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2B3E4CBF1A6D50B2587E2962A76818B8DF5C9D36190CB91EA5C114DA6E73C6A4_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		__this->___Volt_48 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Volt_48), (void*)L_9);
		// Eco       = new int[5] {0,0,0,0,0}, //???????????P(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___Eco_49 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Eco_49), (void*)L_11);
		// Cost      = new int[5] {4000,1500,80,6,300}, //????????????(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____2CB6E4F376AF9487E238E260F0FB690F46F9FFD224749A65FD19E45246840C91_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		__this->___Cost_50 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Cost_50), (void*)L_13);
		// Range     = new int[5] {1,1,1,1,1}, //???????????(???)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		__this->___Range_51 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Range_51), (void*)L_16);
		// Demand    = new int[8] {0,0,0,0,0,0,0,0}, //?????????
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Demand_52 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Demand_52), (void*)L_18);
		// Supply    = new int[8] {0,0,0,0,0,0,0,0}, //?????????
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Supply_53 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Supply_53), (void*)L_19);
		// CostPoint = new int[8] {0,0,0,0,0,0,0,0}, //????????????
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___CostPoint_54 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CostPoint_54), (void*)L_20);
		// VoltPoint  = new int[8] {0,0,0,0,0,0,0,0}, //?????????P
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___VoltPoint_55 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VoltPoint_55), (void*)L_21);
		// EcoPoint  = new int[8] {0,0,0,0,0,0,0,0}; //?????????P
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___EcoPoint_56 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EcoPoint_56), (void*)L_22);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___DemandPass_61 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DemandPass_61), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___SupplyPass_62 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SupplyPass_62), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___CostPointPass_63 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CostPointPass_63), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___VoltPointPass_64 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VoltPointPass_64), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___EcoPointPass_65 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EcoPointPass_65), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
		__this->___code16_66 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___code16_66), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerDragU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
