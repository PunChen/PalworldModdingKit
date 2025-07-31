#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalArenaRank.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "EPalTribeID.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_IntVal.h"
#include "PalPlayerRecordDataUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalPlayerRecordDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPlayerRecordDataUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_TribeIdFlag_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_TribeIdCount_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_RankMaxCount_ForServer(const UObject* WorldContextObject, const FGuid RequestPlayerUId, int32 OldRank, int32 ToRank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_Int_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const FName Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_BossDefeatCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalBossType BossType, const EPalBossBattleDifficulty Difficulty, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_BossDefeat_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalBossType Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_Bool_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const FName Key, const bool bValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_ArenaSoloClearCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalArenaRank Rank, const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static bool GetRecordData_TribeIdFlag(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintPure)
    static int32 GetRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_Int(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BossDefeatCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalBossType Key, const EPalBossBattleDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BossDefeat(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalBossType Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BoolCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRecordData_Bool(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_ArenaSoloClearCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalArenaRank Rank);
    
    UFUNCTION(BlueprintPure)
    static bool ContainsRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key);
    
};

