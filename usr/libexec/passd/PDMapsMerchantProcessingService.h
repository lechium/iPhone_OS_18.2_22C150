//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDMapsMerchantProcessingService : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentTransactionProcessor *_transactionProcessor;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    double _waitTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000004a101f
- (void)_processItem:(id)arg1;	// IMP=0x00100000004a0eb0
- (id)_processingItemsForScheduledActivity;	// IMP=0x00100000004a0ab5
- (void)_logScheduledActivityWithItems:(id)arg1;	// IMP=0x00100000004a0893
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000004a062a
- (void)start;	// IMP=0x00100000004a02d6
- (id)initWithDatabaseManager:(id)arg1 transactionProcessor:(id)arg2 webServiceCoordinator:(id)arg3;	// IMP=0x00100000004a01dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

