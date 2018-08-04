// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DlgFunctions.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEFUNCTIONS_API UDlgFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool GetFloatByName(UObject* Target, FName VarName, float &outFloat);
	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool GetBoolByName(UObject* Target, FName VarName, bool &outBool);
	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool GetIntByName(UObject* Target, FName VarName, int32 &outInt);

	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool SetFloatByName(UObject* Target, FName VarName, float NewValue, float &outFloat);
	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool SetIntByName(UObject* Target, FName VarName, int32 NewValue, int32 &outInt);
	UFUNCTION(BlueprintCallable, Category = "DlgFunctions|Variables")
		static bool SetBoolByName(UObject* Target, FName VarName, bool NewValue, bool &outBool);
	
	
	
	
};
