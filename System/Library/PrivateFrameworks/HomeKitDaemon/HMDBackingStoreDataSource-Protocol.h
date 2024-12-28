//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreLocal, HMDBackingStoreOperation, HMDBackingStoreTransactionBlock, HMDHome, HMDHomeObjectLookup, NSData, NSOperationQueue, NSString;

@protocol HMDBackingStoreDataSource
@property(readonly) _Bool isAtomicSaveFeatureEnabled;
@property(readonly) NSString *activeControllerKeyUsername;
- (NSData *)dataForPersistentStoreIncrementingGeneration:(_Bool)arg1 reason:(NSString *)arg2;
- (HMDHomeObjectLookup *)createHomeObjectLookupWithHome:(HMDHome *)arg1;
- (NSOperationQueue *)backingStoreOperationQueue;
- (HMDBackingStoreLocal *)localBackingStore;
- (HMDBackingStoreOperation *)createBackingStoreOperation;
- (HMDBackingStoreOperation *)createBackingStoreLogAddTransactionOperationWithTransaction:(HMDBackingStoreTransactionBlock *)arg1;
@end
