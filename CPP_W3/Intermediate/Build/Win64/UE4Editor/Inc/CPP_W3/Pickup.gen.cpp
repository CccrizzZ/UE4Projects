// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_W3/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	CPP_W3_API UClass* Z_Construct_UClass_APickup_NoRegister();
	CPP_W3_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPP_W3();
	CPP_W3_API UFunction* Z_Construct_UFunction_APickup_MyFirstEvent();
	CPP_W3_API UFunction* Z_Construct_UFunction_APickup_MyFirstFunc();
// End Cross Module References
	static FName NAME_APickup_MyFirstEvent = FName(TEXT("MyFirstEvent"));
	void APickup::MyFirstEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickup_MyFirstEvent),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyFirstFunc", &APickup::execMyFirstFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_MyFirstEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_MyFirstEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_MyFirstEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "MyFirstEvent", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_MyFirstEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_MyFirstEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_MyFirstEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_MyFirstEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_MyFirstFunc_Statics
	{
		struct Pickup_eventMyFirstFunc_Parms
		{
			bool x;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_x_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pickup_eventMyFirstFunc_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pickup_eventMyFirstFunc_Parms), &Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_x_SetBit(void* Obj)
	{
		((Pickup_eventMyFirstFunc_Parms*)Obj)->x = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pickup_eventMyFirstFunc_Parms), &Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_x_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_MyFirstFunc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_MyFirstFunc_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_MyFirstFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_MyFirstFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "MyFirstFunc", sizeof(Pickup_eventMyFirstFunc_Parms), Z_Construct_UFunction_APickup_MyFirstFunc_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_MyFirstFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_MyFirstFunc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_MyFirstFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_MyFirstFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_MyFirstFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_W3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_MyFirstEvent, "MyFirstEvent" }, // 1043584514
		{ &Z_Construct_UFunction_APickup_MyFirstFunc, "MyFirstFunc" }, // 4217650134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Var for health" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, Health), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 1021469578);
	template<> CPP_W3_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/CPP_W3"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
