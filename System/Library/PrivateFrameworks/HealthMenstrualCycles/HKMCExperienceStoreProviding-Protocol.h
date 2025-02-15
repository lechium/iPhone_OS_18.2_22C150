//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKMCCachedPregnancyModel, HKMCPregnancyModeSetupCompletionRecord, NSUUID;
@protocol HKMCExperienceStoreObserver;

@protocol HKMCExperienceStoreProviding
- (HKMCCachedPregnancyModel *)getCachedPregnancyModelWithError:(id *)arg1;
- (void)deleteAllPregnancySetupRecordsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)deleteSetupRecord:(HKMCPregnancyModeSetupCompletionRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)persistSetupRecord:(HKMCPregnancyModeSetupCompletionRecord *)arg1 mergeWith:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)persistSetupRecord:(HKMCPregnancyModeSetupCompletionRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchExperienceModelWithCompletion:(void (^)(HKMCExperienceModel *, NSError *))arg1;
- (void)unregisterObserver:(id <HKMCExperienceStoreObserver>)arg1;
- (void)registerObserver:(id <HKMCExperienceStoreObserver>)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

