// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RegularExpressionBPLibrary.h"
#include "RegularExpression.h"
#include "Internationalization/Regex.h"

URegularExpressionBPLibrary::URegularExpressionBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


bool URegularExpressionBPLibrary::RegularString(const FString str, const FString Reg)
{
	FRegexPattern Pattern(Reg);
	FRegexMatcher regMatcher(Pattern, str);
	regMatcher.SetLimits(0, str.Len());
	return regMatcher.FindNext();
}

