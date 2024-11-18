// Copyright George Rolfe, All Rights Reserved.

#include "Tasks/StateTreeGameplayTagTasks.h"

#include "StateTreeExecutionContext.h"

EStateTreeRunStatus FGameplayTagSetTask::EnterState(
	FStateTreeExecutionContext& InContext,
	const FStateTreeTransitionResult& InTransition) const
{
	FInstanceDataType& InstanceData = InContext.GetInstanceData(*this);
	InstanceData.TagContainer.AddTag(InstanceData.Tag);

	return EStateTreeRunStatus::Succeeded;
}

EStateTreeRunStatus FGameplayTagRemoveTask::EnterState(
	FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const
{
	FInstanceDataType& InstanceData = InContext.GetInstanceData(*this);
	InstanceData.TagContainer.RemoveTag(InstanceData.Tag);

	return EStateTreeRunStatus::Succeeded;
}

EStateTreeRunStatus FGameplayTagContainerSetTask::EnterState(
	FStateTreeExecutionContext& InContext,
	const FStateTreeTransitionResult& InTransition) const
{
	FInstanceDataType& InstanceData = InContext.GetInstanceData(*this);
	InstanceData.TagContainer.AppendTags(InstanceData.OtherContainer);

	return EStateTreeRunStatus::Succeeded;
}

EStateTreeRunStatus FGameplayTagContainerRemoveTask::EnterState(
	FStateTreeExecutionContext& InContext, const FStateTreeTransitionResult& InTransition) const
{
	FInstanceDataType& InstanceData = InContext.GetInstanceData(*this);
	InstanceData.TagContainer.RemoveTags(InstanceData.OtherContainer);

	return EStateTreeRunStatus::Succeeded;
}
