// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OpenCVPrivatePCH.h"
#include "Public/WebcamReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebcamReader() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_AWebcamReader_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_AWebcamReader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	OPENCV_API UFunction* Z_Construct_UFunction_AWebcamReader_OnNextVideoFrame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_AWebcamReader_OnNextVideoFrame = FName(TEXT("OnNextVideoFrame"));
	void AWebcamReader::OnNextVideoFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWebcamReader_OnNextVideoFrame),NULL);
	}
	void AWebcamReader::StaticRegisterNativesAWebcamReader()
	{
	}
	UFunction* Z_Construct_UFunction_AWebcamReader_OnNextVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "Blueprint Event called every time the video frame is updated" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebcamReader, "OnNextVideoFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWebcamReader_NoRegister()
	{
		return AWebcamReader::StaticClass();
	}
	UClass* Z_Construct_UClass_AWebcamReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWebcamReader_OnNextVideoFrame, "OnNextVideoFrame" }, // 2415845549
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WebcamReader.h" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The current data array" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AWebcamReader, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTexture_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The current video frame's corresponding texture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoTexture = { UE4CodeGen_Private::EPropertyClass::Object, "VideoTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AWebcamReader, VideoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_VideoTexture_MetaData, ARRAY_COUNT(NewProp_VideoTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The videos width and height (width, height)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoSize = { UE4CodeGen_Private::EPropertyClass::Struct, "VideoSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamReader, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_VideoSize_MetaData, ARRAY_COUNT(NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStreamOpen_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "If the stream has succesfully opened yet" },
			};
#endif
			auto NewProp_isStreamOpen_SetBit = [](void* Obj){ ((AWebcamReader*)Obj)->isStreamOpen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStreamOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "isStreamOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWebcamReader), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isStreamOpen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isStreamOpen_MetaData, ARRAY_COUNT(NewProp_isStreamOpen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The refresh timer" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer = { UE4CodeGen_Private::EPropertyClass::Float, "RefreshTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamReader, RefreshTimer), METADATA_PARAMS(NewProp_RefreshTimer_MetaData, ARRAY_COUNT(NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshRate = { UE4CodeGen_Private::EPropertyClass::Float, "RefreshRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebcamReader, RefreshRate), METADATA_PARAMS(NewProp_RefreshRate_MetaData, ARRAY_COUNT(NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeDeminsions_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The targeted resize width and height (width, height)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResizeDeminsions = { UE4CodeGen_Private::EPropertyClass::Struct, "ResizeDeminsions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebcamReader, ResizeDeminsions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ResizeDeminsions_MetaData, ARRAY_COUNT(NewProp_ResizeDeminsions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldResize_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "If the webcam images should be resized every frame" },
			};
#endif
			auto NewProp_ShouldResize_SetBit = [](void* Obj){ ((AWebcamReader*)Obj)->ShouldResize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldResize = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldResize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWebcamReader), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldResize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldResize_MetaData, ARRAY_COUNT(NewProp_ShouldResize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[] = {
				{ "Category", "Webcam" },
				{ "ModuleRelativePath", "Public/WebcamReader.h" },
				{ "ToolTip", "The device ID opened by the Video Stream" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraID = { UE4CodeGen_Private::EPropertyClass::Int, "CameraID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebcamReader, CameraID), METADATA_PARAMS(NewProp_CameraID_MetaData, ARRAY_COUNT(NewProp_CameraID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isStreamOpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefreshTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefreshRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResizeDeminsions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldResize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWebcamReader>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWebcamReader::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebcamReader, 3402350352);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebcamReader(Z_Construct_UClass_AWebcamReader, &AWebcamReader::StaticClass, TEXT("/Script/OpenCV"), TEXT("AWebcamReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebcamReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
