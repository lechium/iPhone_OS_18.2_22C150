//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDevicePearl, BKFaceDetectOperation, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionStreamer : NSObject
{
    BKDevicePearl *_pearlDevice;	// 8 = 0x8
    BKFaceDetectOperation *_pendingPresenceOperation;	// 16 = 0x10
    BKFaceDetectOperation *_finishingPresenceOperation;	// 24 = 0x18
    CDUnknownBlockType _callbackBlock;	// 32 = 0x20
    CDUnknownBlockType _notificationBlock;	// 40 = 0x28
    _Bool _attentionStreamerRunning;	// 48 = 0x30
    _Bool _unitTest;	// 49 = 0x31
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    _Bool _eyeReliefStarted;	// 64 = 0x40
    int _attentionAwareFeaturesEnabledNotification;	// 68 = 0x44
    _Bool _isAttentionAwareFeaturesEnabled;	// 72 = 0x48
    int _displayNotifyToken;	// 76 = 0x4c
    _Bool _displayOn;	// 80 = 0x50
    _Bool _smartCoverClosed;	// 81 = 0x51
    int _activeOperationNotification;	// 84 = 0x54
    _Bool _matchOrEnrollOperationActive;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000b8bd
- (id)unitTestDevice;	// IMP=0x000000000000b8af
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;	// IMP=0x000000000000b66c
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;	// IMP=0x000000000000ad95
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x000000000000ab57
- (void)setSmartCoverState:(_Bool)arg1;	// IMP=0x000000000000a921
- (void)sendNotification:(unsigned long long)arg1;	// IMP=0x000000000000a908
- (_Bool)isAttentionAwareFeaturesEnabled;	// IMP=0x000000000000a8ff
- (void)setIsAttentionAwareFeaturesEnabled:(_Bool)arg1;	// IMP=0x000000000000a8f6
- (_Bool)attentionStreamerRunning;	// IMP=0x000000000000a8ed
- (CDStruct_2a4d9400)getStreamerOptions;	// IMP=0x000000000000a8d4
- (id)cancelEventStream;	// IMP=0x000000000000a75c
- (id)streamEventWithBlock:(CDUnknownBlockType)arg1 options:(CDStruct_2a4d9400)arg2 operationStartFailedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009ec0
- (void)setNotificationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009e60
- (id)initForUnitTest:(_Bool)arg1 queue:(id)arg2;	// IMP=0x0000000000009a8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

