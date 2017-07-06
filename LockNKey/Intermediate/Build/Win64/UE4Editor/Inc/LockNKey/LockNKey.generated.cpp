// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LockNKey.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1LockNKey() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
	LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacter();
	LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacterPlayerController_NoRegister();
	LOCKNKEY_API class UClass* Z_Construct_UClass_AGameCharacterPlayerController();
	LOCKNKEY_API class UClass* Z_Construct_UClass_ALockNKeyGameModeBase_NoRegister();
	LOCKNKEY_API class UClass* Z_Construct_UClass_ALockNKeyGameModeBase();
	LOCKNKEY_API class UPackage* Z_Construct_UPackage__Script_LockNKey();
	void AGameCharacter::StaticRegisterNativesAGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGameCharacter_NoRegister()
	{
		return AGameCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_LockNKey();
			OuterClass = AGameCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AGameCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Players/GameCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Players/GameCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameCharacter, 979856802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameCharacter(Z_Construct_UClass_AGameCharacter, &AGameCharacter::StaticClass, TEXT("/Script/LockNKey"), TEXT("AGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacter);
	void AGameCharacterPlayerController::StaticRegisterNativesAGameCharacterPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGameCharacterPlayerController_NoRegister()
	{
		return AGameCharacterPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameCharacterPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_LockNKey();
			OuterClass = AGameCharacterPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameCharacterPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Players/GameCharacterPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Players/GameCharacterPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameCharacterPlayerController, 3182608009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameCharacterPlayerController(Z_Construct_UClass_AGameCharacterPlayerController, &AGameCharacterPlayerController::StaticClass, TEXT("/Script/LockNKey"), TEXT("AGameCharacterPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacterPlayerController);
	void ALockNKeyGameModeBase::StaticRegisterNativesALockNKeyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALockNKeyGameModeBase_NoRegister()
	{
		return ALockNKeyGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ALockNKeyGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_LockNKey();
			OuterClass = ALockNKeyGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ALockNKeyGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LockNKeyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LockNKeyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALockNKeyGameModeBase, 1263856564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALockNKeyGameModeBase(Z_Construct_UClass_ALockNKeyGameModeBase, &ALockNKeyGameModeBase::StaticClass, TEXT("/Script/LockNKey"), TEXT("ALockNKeyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALockNKeyGameModeBase);
	UPackage* Z_Construct_UPackage__Script_LockNKey()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/LockNKey")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x50968C2D;
			Guid.B = 0x6A742C51;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
