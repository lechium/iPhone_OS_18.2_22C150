//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADIDManager.h>

@class NSString;

@interface ADIDManager (Private)
+ (void)initialize;	// IMP=0x001000000000e642
- (void)checkForLateReconcile;	// IMP=0x0010000000012c1b
- (void)setReconcileOperations:(id)arg1;	// IMP=0x0010000000012bf2
- (id)reconcileOperations;	// IMP=0x0010000000012be1
- (_Bool)reconcileInProgress;	// IMP=0x0010000000012ba9
- (void)checkOnTask:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000129a4
- (_Bool)runTask:(id)arg1;	// IMP=0x00100000000124e3
- (_Bool)scheduleDailyUpdate;	// IMP=0x0010000000012330
- (_Bool)scheduleReconciliation:(double)arg1;	// IMP=0x001000000001201a
- (void)cancelPendingReconcile;	// IMP=0x0010000000011fcf
- (void)handleAccountChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011a94
- (void)reconcile:(CDUnknownBlockType)arg1;	// IMP=0x00100000000111d3
- (void)updateAccountData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010a4f
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x0010000000010212
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010180
- (void)performOperationWhenNotReconciling:(CDUnknownBlockType)arg1;	// IMP=0x00100000000100b1
- (id)saveAndNotifyIfNecessary;	// IMP=0x001000000000fff7
- (id)save;	// IMP=0x001000000000f73e
- (void)saveDataForPCD;	// IMP=0x001000000000f67b
- (void)incrementMonthlyResetCount;	// IMP=0x001000000000f427
- (void)notifyActiveRecordChanged;	// IMP=0x001000000000f382
- (void)deleteRecords:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f190
- (void)prepareForPushNotification;	// IMP=0x001000000000f14e
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ea00
- (id)init;	// IMP=0x001000000000e672

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

