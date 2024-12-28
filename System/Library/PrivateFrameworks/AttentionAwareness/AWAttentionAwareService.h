//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarPlayStateObserver, LockScreenStateObserver, MotionActivityObserver, NSMutableDictionary, NSString, ScreenStateObserver;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwareService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_schedulers;	// 16 = 0x10
    int _supportedEventsNotify;	// 24 = 0x18
    unsigned long long _supportedEvents;	// 32 = 0x20
    ScreenStateObserver *_screenStateObserver;	// 40 = 0x28
    CarPlayStateObserver *_carPlayStateObserver;	// 48 = 0x30
    MotionActivityObserver *_motionActivityObserver;	// 56 = 0x38
    LockScreenStateObserver *_lockScreenStateObserver;	// 64 = 0x40
    unsigned long long _clientCount;	// 72 = 0x48
}

+ (id)sharedAttentionService;	// IMP=0x00100000000148e9
- (void).cxx_destruct;	// IMP=0x0000000000013b8a
@property unsigned long long clientCount; // @synthesize clientCount=_clientCount;
- (void)LockScreenStateChanging:(_Bool)arg1;	// IMP=0x0000000000013935
- (void)MotionStateChanging:(_Bool)arg1;	// IMP=0x00000000000136f4
- (void)carPlayStateChanging:(_Bool)arg1;	// IMP=0x0000000000013691
- (void)screenStateChanging:(_Bool)arg1;	// IMP=0x000000000001362e
- (id)getFaceDetectScheduler;	// IMP=0x0000000000013611
- (id)getMotionDetectScheduler;	// IMP=0x00000000000135f4
- (void)crashWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013355
- (void)getUnitTestSamplerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013108
- (void)_createUnitTestScheduler;	// IMP=0x000000000001301e
- (void)outputPowerLogWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012f67
- (void)setDebugPreference:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012ca2
- (void)getDebugPreferences:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012c34
- (void)getSupportedEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012bda
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000012b8c
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x0000000000012afe
- (void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 clientId:(id)arg4 unitTestMode:(_Bool)arg5 reply:(CDUnknownBlockType)arg6 subscribeForStreamingEvents:(_Bool)arg7;	// IMP=0x00000000000127b4
- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3;	// IMP=0x00000000000124a2
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000012352
- (void)dealloc;	// IMP=0x0000000000012314
- (id)init;	// IMP=0x0000000000011ff7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
