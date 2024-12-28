//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, NSDictionary, NSObject, NSString;
@protocol HMDAccessoryDataStreamAdapterDelegate, HMDDataStreamBulkSendSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDataStreamAdapter : HMFObject
{
    _Bool _transportReady;	// 8 = 0x8
    _Bool _didBulkSendFail;	// 9 = 0x9
    _Bool _didBulkSendComplete;	// 10 = 0xa
    id <HMDAccessoryDataStreamAdapterDelegate> _delegate;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSString *_fileType;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
    NSString *_reason;	// 56 = 0x38
    id <HMDDataStreamBulkSendSession> _currentBulkSendSession;	// 64 = 0x40
    CDUnknownBlockType _pendingOpenSessionCallback;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000004a5923
- (void).cxx_destruct;	// IMP=0x00000000004a4df6
@property _Bool didBulkSendComplete; // @synthesize didBulkSendComplete=_didBulkSendComplete;
@property _Bool didBulkSendFail; // @synthesize didBulkSendFail=_didBulkSendFail;
@property _Bool transportReady; // @synthesize transportReady=_transportReady;
@property(copy) CDUnknownBlockType pendingOpenSessionCallback; // @synthesize pendingOpenSessionCallback=_pendingOpenSessionCallback;
@property(retain) id <HMDDataStreamBulkSendSession> currentBulkSendSession; // @synthesize currentBulkSendSession=_currentBulkSendSession;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSString *fileType; // @synthesize fileType=_fileType;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property __weak id <HMDAccessoryDataStreamAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000004a4c54
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;	// IMP=0x00000000004a4b9c
- (void)accessoryDidStartListening:(id)arg1;	// IMP=0x00000000004a4ae4
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;	// IMP=0x00000000004a4aca
- (void)_bulkSendDidComplete;	// IMP=0x00000000004a4a2f
- (void)_bulkSendDidFail;	// IMP=0x00000000004a4994
- (_Bool)_handleFrame:(id)arg1;	// IMP=0x00000000004a48f6
@property(readonly, getter=isSessionOpenInProgress) _Bool sessionOpenInProgress;
- (void)_handleAccessoryDidClose;	// IMP=0x00000000004a4743
- (void)_callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000004a4517
- (void)callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000004a4439
- (void)_openSession;	// IMP=0x00000000004a42a0
- (void)_setUpTransport;	// IMP=0x00000000004a413c
- (void)readData;	// IMP=0x00000000004a3f66
- (void)setUpWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a3dbd
@property(readonly, getter=isBulkSendActive) _Bool bulkSendActive;
- (void)dealloc;	// IMP=0x00000000004a3c24
- (void)shutDown;	// IMP=0x00000000004a3a7c
- (id)attributeDescriptions;	// IMP=0x00000000004a3891
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 fileType:(id)arg3 metadata:(id)arg4 reason:(id)arg5;	// IMP=0x00000000004a377b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
