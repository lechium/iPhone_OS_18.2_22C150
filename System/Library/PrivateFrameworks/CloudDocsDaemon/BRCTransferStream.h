//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCDeadlineSource, BRCSyncContext, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCTransferStream : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    BRCSyncContext *_syncContext;	// 16 = 0x10
    BRCDeadlineSource *_schedulingSource;	// 24 = 0x18
    long long _minSignalTime;	// 32 = 0x20
    NSMutableDictionary *_inFlightOpByID;	// 40 = 0x28
    NSObject<OS_dispatch_workloop> *_transferWorkloop;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;	// 56 = 0x38
    unsigned long long _inFlightSize;	// 64 = 0x40
    _Bool _isWaitingForTransferBatch;	// 72 = 0x48
    _Bool _hasReachedCap;	// 73 = 0x49
    _Atomic int _multipleItemsInteractiveSchedulingCount;	// 76 = 0x4c
    unsigned long long _maxCountOfBatchesInFlight;	// 80 = 0x50
    _Bool _isCancelled;	// 88 = 0x58
    CDUnknownBlockType _streamDidBecomeReadyToTransferRecords;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001c0e27
@property(readonly, nonatomic) unsigned long long inFlightSize; // @synthesize inFlightSize=_inFlightSize;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType streamDidBecomeReadyToTransferRecords; // @synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords;
- (void)suspend;	// IMP=0x00000000001c0de5
- (void)close;	// IMP=0x00000000001c08f7
- (void)cancel;	// IMP=0x00000000001c075e
- (void)resume;	// IMP=0x00000000001c0748
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;	// IMP=0x00000000001c0685
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;	// IMP=0x00000000001c053d
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;	// IMP=0x00000000001c00d6
- (void)_schedule;	// IMP=0x00000000001c00bd
- (void)_scheduleOneBatchWithQoS:(long long)arg1;	// IMP=0x00000000001bff58
- (void)addBatchOperation:(id)arg1;	// IMP=0x00000000001bfe09
- (void)_addBatchOperation:(id)arg1;	// IMP=0x00000000001bf7ca
- (void)_evaluateCap;	// IMP=0x00000000001bf596
- (void)forceSchedulingPendingInteractiveTransfers;	// IMP=0x00000000001bee48
- (void)endSchedulingMultipleItemsInteractively;	// IMP=0x00000000001bedb4
- (void)startSchedulingMultipleItemsInteractively;	// IMP=0x00000000001bed8f
- (void)_setReachedCap:(_Bool)arg1;	// IMP=0x00000000001bed44
- (void)signal;	// IMP=0x00000000001bed2e
- (void)signalWithDeadline:(long long)arg1;	// IMP=0x00000000001bed0a
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 maxCountOfBatchesInFlight:(unsigned long long)arg4;	// IMP=0x00000000001bea59
@property(readonly) NSArray *operations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
