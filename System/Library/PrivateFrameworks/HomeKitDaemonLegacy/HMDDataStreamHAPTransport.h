//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristic, HMDDataStreamFrameReader, HMDHAPAccessory, NSMutableArray, NSNumber, NSString;
@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamHAPTransport : NSObject
{
    _Bool _isWriteInProgress;	// 8 = 0x8
    _Bool _lastAccessoryRequestToSendFlag;	// 9 = 0x9
    id <HMDDataStreamTransportDelegate> delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    HMDCharacteristic *_transportCharacteristic;	// 40 = 0x28
    HMDCharacteristic *_interruptCharacteristic;	// 48 = 0x30
    NSNumber *_sessionIdentifier;	// 56 = 0x38
    unsigned long long _maxControllerTransportMTU;	// 64 = 0x40
    HMDDataStreamFrameReader *_byteReader;	// 72 = 0x48
    NSString *_logIdentifier;	// 80 = 0x50
    NSString *_notificationClientIdentifier;	// 88 = 0x58
    NSMutableArray *_pendingWrites;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000006fa096
- (void).cxx_destruct;	// IMP=0x00000000006f99b9
@property _Bool lastAccessoryRequestToSendFlag; // @synthesize lastAccessoryRequestToSendFlag=_lastAccessoryRequestToSendFlag;
@property _Bool isWriteInProgress; // @synthesize isWriteInProgress=_isWriteInProgress;
@property(readonly) NSMutableArray *pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property(readonly) NSString *notificationClientIdentifier; // @synthesize notificationClientIdentifier=_notificationClientIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(readonly) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(readonly) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) HMDCharacteristic *interruptCharacteristic; // @synthesize interruptCharacteristic=_interruptCharacteristic;
@property(retain) HMDCharacteristic *transportCharacteristic; // @synthesize transportCharacteristic=_transportCharacteristic;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000006f9886
- (void)_handleInterruptCharacteristicValue:(id)arg1;	// IMP=0x00000000006f93d1
- (void)_handleCharacteristicsValueUpdated:(id)arg1;	// IMP=0x00000000006f9319
- (void)_handleReceivedData:(id)arg1;	// IMP=0x00000000006f9034
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000006f8f4b
- (void)_cancelAllPendingWritesWithError:(id)arg1;	// IMP=0x00000000006f8db9
- (void)_removeAndMarkCompleteAllCompletedWrites;	// IMP=0x00000000006f8bbc
- (void)_stopTransportForWriteFailureError:(id)arg1;	// IMP=0x00000000006f8b61
- (void)_handleCompletionWithResponseTuples:(id)arg1;	// IMP=0x00000000006f82cc
- (void)_doNextWriteOperation;	// IMP=0x00000000006f7dce
- (void)_writeCharacteristicRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f7c21
- (id)_buildWriteRequestWithError:(id *)arg1 shouldForceClose:(_Bool)arg2;	// IMP=0x00000000006f77c4
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;	// IMP=0x00000000006f7547
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f7485
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;	// IMP=0x00000000006f73cd
- (void)_notifyDelegateDidFailWithError:(id)arg1;	// IMP=0x00000000006f7315
- (void)_notifyDelegateDidClose;	// IMP=0x00000000006f72a4
- (void)_notifyDelegateDidOpen;	// IMP=0x00000000006f7233
- (void)_deregisterForMessages;	// IMP=0x00000000006f705d
- (void)_registerForMessages;	// IMP=0x00000000006f6ea4
- (void)_teardownSessionWithError:(id)arg1;	// IMP=0x00000000006f6c13
- (void)_stopWithError:(id)arg1;	// IMP=0x00000000006f6b13
- (void)close;	// IMP=0x00000000006f699e
- (void)connect;	// IMP=0x00000000006f64ac
- (_Bool)_isRunning;	// IMP=0x00000000006f6479
- (void)dealloc;	// IMP=0x00000000006f644a
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;	// IMP=0x00000000006f6270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

