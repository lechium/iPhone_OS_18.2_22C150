//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, CMWakeGestureManager, NSMutableDictionary, NSString, SRUserAttentionSignalProviderFactory;
@protocol OS_dispatch_queue, SRUserAttentionControllerDelegate;

@interface SRUserAttentionController : NSObject
{
    SRUserAttentionSignalProviderFactory *_userAttentionSignalProviderFactory;	// 8 = 0x8
    unsigned long long _supportedAttentionAwarenessEvents;	// 16 = 0x10
    _Bool _deviceSupportsRaiseGestureDetection;	// 24 = 0x18
    AWAttentionAwarenessClient *_faceAttentionAwarenessClient;	// 32 = 0x20
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;	// 40 = 0x28
    AWAttentionAwarenessClient *_buttonPressAwarenessClient;	// 48 = 0x30
    CMWakeGestureManager *_wakeGestureManager;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;	// 64 = 0x40
    NSMutableDictionary *_attentionDetectionStatuses;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_asynchronousCallQueue;	// 80 = 0x50
    _Bool _deviceLowered;	// 88 = 0x58
    id <SRUserAttentionControllerDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000005661
@property(nonatomic, getter=_isDeviceLowered, setter=_setDeviceLowered:) _Bool deviceLowered; // @synthesize deviceLowered=_deviceLowered;
@property(nonatomic) __weak id <SRUserAttentionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_deviceSupportsFaceDetection;	// IMP=0x001000000000561c
- (void)_setDetectionStarted:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x001000000000554d
- (_Bool)_detectionStartedForType:(unsigned long long)arg1;	// IMP=0x00100000000054d1
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;	// IMP=0x0010000000005253
- (void)_stopWakeGestureManagerIfNeeded;	// IMP=0x00100000000051f2
- (void)_startWakeGestureManagerIfNeeded;	// IMP=0x001000000000517c
- (void)_handleButtonPressAttentionEvent:(id)arg1;	// IMP=0x0010000000004fa8
- (void)_handleTouchAttentionEvent:(id)arg1;	// IMP=0x0010000000004e0b
- (void)_handleFaceAttentionEvent:(id)arg1;	// IMP=0x0010000000004c33
- (_Bool)_restartFaceAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004bdc
- (_Bool)_stopButtonPressAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004ba4
- (_Bool)_stopTouchAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004b6c
- (_Bool)_stopFaceAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004b34
- (_Bool)_startButtonPressAwarenessClient:(id *)arg1;	// IMP=0x00100000000049da
- (_Bool)_startTouchAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004880
- (_Bool)_startFaceAttentionAwarenessClient:(id *)arg1;	// IMP=0x0010000000004726
- (_Bool)stopIfNeededForTypes:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000045c8
- (_Bool)stopIfNeeded:(id *)arg1;	// IMP=0x00100000000045ae
- (_Bool)startIfNeededForTypes:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000004444
- (_Bool)startIfNeeded:(id *)arg1;	// IMP=0x001000000000442a
- (void)dealloc;	// IMP=0x0010000000004391
- (id)initWithSignalProviderFactory:(id)arg1 supportedAttentionAwarenessEvents:(unsigned long long)arg2 deviceSupportsRaiseGestureDetection:(_Bool)arg3;	// IMP=0x00100000000042ef
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 deviceSupportsRaiseGestureDetection:(_Bool)arg4;	// IMP=0x0010000000004268
- (void)startIfNeededForTypes:(unsigned long long)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000056d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

