// Copyright George Rolfe, All Rights Reserved.

#pragma once

#include "CoreTypes.h"
#include "StateTreeTaskBase.h"

#include "StateTreeGameplayTagTasks.generated.h"

USTRUCT()
struct STATETREEPLUS_API FGameplayTagModifyTaskInstanceData
{
	GENERATED_BODY()

	/** */
	UPROPERTY(EditAnywhere, Category = Parameter)
	FGameplayTagContainer TagContainer;

	/** */
	UPROPERTY(EditAnywhere, Category = Parameter)
	FGameplayTag Tag;
};

/**
 * 
 */
USTRUCT(DisplayName="Set Tag", Category = "Gameplay Tags")
struct STATETREEPLUS_API FGameplayTagSetTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FGameplayTagModifyTaskInstanceData;

	FGameplayTagSetTask() = default;

public:
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const override;

#if WITH_EDITOR
	virtual FName GetIconName() const override
	{
		return FName("StateTreeEditorStyle|Node.Tag");
	}

	virtual FColor GetIconColor() const override
	{
		return UE::StateTree::Colors::DarkGrey;
	}
#endif
};

USTRUCT(DisplayName="Remove Tag", Category = "Gameplay Tags")
struct STATETREEPLUS_API FGameplayTagRemoveTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FGameplayTagModifyTaskInstanceData;

	FGameplayTagRemoveTask() = default;

public:
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const override;

#if WITH_EDITOR
	virtual FName GetIconName() const override
	{
		return FName("StateTreeEditorStyle|Node.Tag");
	}

	virtual FColor GetIconColor() const override
	{
		return UE::StateTree::Colors::DarkGrey;
	}
#endif
};

USTRUCT()
struct STATETREEPLUS_API FGameplayTagContainerModifyTaskInstanceData
{
	GENERATED_BODY()

	/** */
	UPROPERTY(EditAnywhere, Category = Parameter)
	FGameplayTagContainer TagContainer;

	/** */
	UPROPERTY(EditAnywhere, Category = Parameter)
	FGameplayTagContainer OtherContainer;
};

USTRUCT(DisplayName="Set Tags", Category = "Gameplay Tags")
struct STATETREEPLUS_API FGameplayTagContainerSetTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FGameplayTagContainerModifyTaskInstanceData;

	FGameplayTagContainerSetTask() = default;

public:
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const override;

#if WITH_EDITOR
	virtual FName GetIconName() const override
	{
		return FName("StateTreeEditorStyle|Node.Tag");
	}

	virtual FColor GetIconColor() const override
	{
		return UE::StateTree::Colors::DarkGrey;
	}
#endif
};

USTRUCT(DisplayName="Remove Tags", Category = "Gameplay Tags")
struct STATETREEPLUS_API FGameplayTagContainerRemoveTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FGameplayTagContainerModifyTaskInstanceData;

	FGameplayTagContainerRemoveTask() = default;

public:
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const override;

#if WITH_EDITOR
	virtual FName GetIconName() const override
	{
		return FName("StateTreeEditorStyle|Node.Tag");
	}

	virtual FColor GetIconColor() const override
	{
		return UE::StateTree::Colors::DarkGrey;
	}
#endif
};
