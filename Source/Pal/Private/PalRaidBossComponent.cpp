#include "PalRaidBossComponent.h"
#include "Net/UnrealNetwork.h"

UPalRaidBossComponent::UPalRaidBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemainBattleTimer = 600.00f;
    this->CurrentState = EPalRaidBossBattleStateType::Standy;
}


void UPalRaidBossComponent::OnSpawnBossPal(AActor* Pal) {
}

void UPalRaidBossComponent::OnDisposeBaseCamp(UPalBaseCampModel* Model) {
}

void UPalRaidBossComponent::OnDeadPal(FPalDeadInfo DeadInfo) {
}

void UPalRaidBossComponent::OnCapturePal(APalCharacter* SelfCharacter, APalCharacter* Attacker) {
}

bool UPalRaidBossComponent::IsValidPlayerInCamp(APalPlayerCharacter* Player) {
    return false;
}

FGuid UPalRaidBossComponent::GetStartRequestPlayerUID() const {
    return FGuid{};
}

APalPlayerCharacter* UPalRaidBossComponent::GetStartRequestPlayerCharacter() const {
    return NULL;
}

FName UPalRaidBossComponent::GetStartItemName() {
    return NAME_None;
}

float UPalRaidBossComponent::GetRemainTimer() {
    return 0.0f;
}

FGuid UPalRaidBossComponent::GetCampID() const {
    return FGuid{};
}

APalPlayerCharacter* UPalRaidBossComponent::FindInRangePlayers(TArray<APalPlayerCharacter*>& Players, bool OnlyAlive) {
    return NULL;
}

void UPalRaidBossComponent::CallOnEnd_ToAll_Implementation(EPalRaidBossBattleFinishType FinishType) {
}

void UPalRaidBossComponent::AddGroupCharacter(UPalIndividualCharacterHandle* PalHandle, bool IsBoss) {
}

void UPalRaidBossComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalRaidBossComponent, RaidBossPalList);
    DOREPLIFETIME(UPalRaidBossComponent, BaseCanpID);
    DOREPLIFETIME(UPalRaidBossComponent, BaseCampLocation);
    DOREPLIFETIME(UPalRaidBossComponent, RemainBattleTimer);
    DOREPLIFETIME(UPalRaidBossComponent, StartItemName);
}


