// Fill out your copyright notice in the Description page of Project Settings.

#include "DlgFunctions.h"
#include "EngineUtils.h"

bool UDlgFunctions::GetFloatByName(UObject * Target, FName VarName, float &outFloat) {

	if (Target) //make sure Target was set in blueprints. 
	{
		float FoundFloat;
		UFloatProperty* FloatProp = FindField<UFloatProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (FloatProp) //if we found variable
		{
			FoundFloat = FloatProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			outFloat = FoundFloat;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UDlgFunctions::GetBoolByName(UObject * Target, FName VarName, bool &outBool) {

	if (Target) //make sure Target was set in blueprints. 
	{
		bool FoundBool;
		UBoolProperty* Prop = FindField<UBoolProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (Prop) //if we found variable
		{
			FoundBool = Prop->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			outBool = FoundBool;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UDlgFunctions::GetIntByName(UObject * Target, FName VarName, int32 &outInt) {

	if (Target) //make sure Target was set in blueprints. 
	{
		int32 FoundInt;
		UIntProperty* Prop = FindField<UIntProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (Prop) //if we found variable
		{
			FoundInt = Prop->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			outInt = FoundInt;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UDlgFunctions::SetFloatByName(UObject * Target, FName VarName, float NewValue, float & outFloat)
{
	if (Target)
	{
		float FoundFloat;
		UFloatProperty* FloatProp = FindField<UFloatProperty>(Target->GetClass(), VarName);
		if (FloatProp)
		{
			FloatProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundFloat = FloatProp->GetPropertyValue_InContainer(Target);
			outFloat = FoundFloat;
			return true;
		}
	}
	return false;
}

bool UDlgFunctions::SetIntByName(UObject * Target, FName VarName, int32 NewValue, int32 & outInt)
{
	if (Target)
	{
		int32 FoundInt;
		UIntProperty* IntProp = FindField<UIntProperty>(Target->GetClass(), VarName);
		if (IntProp)
		{
			IntProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundInt = IntProp->GetPropertyValue_InContainer(Target);
			outInt = FoundInt;
			return true;
		}
	}
	return false;
}

bool UDlgFunctions::SetBoolByName(UObject * Target, FName VarName, bool NewValue, bool & outBool)
{
	if (Target)
	{
		bool FoundBool;
		UBoolProperty* BoolProp = FindField<UBoolProperty>(Target->GetClass(), VarName);
		if (BoolProp)
		{
			BoolProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundBool = BoolProp->GetPropertyValue_InContainer(Target);
			outBool = FoundBool;
			return true;
		}
	}
	return false;
}


