//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudKitController, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BCCloudKitTransactionManager : NSObject
{
    BCCloudKitController *_cloudKitController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionAccessQueue;	// 16 = 0x10
    NSMutableDictionary *_transactions;	// 24 = 0x18
    NSMutableDictionary *_transactionCompletionCallbacks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000042d93
@property(retain, nonatomic) NSMutableDictionary *transactionCompletionCallbacks; // @synthesize transactionCompletionCallbacks=_transactionCompletionCallbacks;
@property(retain, nonatomic) NSMutableDictionary *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionAccessQueue; // @synthesize transactionAccessQueue=_transactionAccessQueue;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
- (void)transactionCompleted:(id)arg1;	// IMP=0x001000000004294b
- (void)signalFetchChangesTransaction:(id)arg1;	// IMP=0x00100000000426f7
- (void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004230f
- (void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2;	// IMP=0x00100000000422fa
- (void)signalDataChangeTransactionForEntityName:(id)arg1 notificationName:(id)arg2;	// IMP=0x00100000000420f6
- (id)initWithCloudKitController:(id)arg1;	// IMP=0x0010000000041ff6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

