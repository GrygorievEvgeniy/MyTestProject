// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "MyCharacterAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSOR_FUNCTION(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class MYTESTPROJECT_API UMyCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UMyCharacterAttributeSet();

	UPROPERTY(BlueprintReadOnly,Category="Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSOR_FUNCTION(UMyCharacterAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly,Category="Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSOR_FUNCTION(UMyCharacterAttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly,Category="Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSOR_FUNCTION(UMyCharacterAttributeSet, Stamina)

	UPROPERTY(BlueprintReadOnly,Category="Attributes")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSOR_FUNCTION(UMyCharacterAttributeSet, MaxStamina)


protected:

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data) override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void ClampAttributeOnChange(FGameplayAttribute Attribute, float& NewValue) const;
};
