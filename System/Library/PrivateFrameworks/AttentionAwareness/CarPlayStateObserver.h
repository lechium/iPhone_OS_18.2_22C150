//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, NSString;
@protocol CarPlayStateObserving, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CarPlayStateObserver : NSObject
{
    _Bool _carPlayConnected;	// 8 = 0x8
    id <CarPlayStateObserving> _observer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    CARSessionStatus *_carSessionStatus;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022f06
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0000000000022ef2
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0000000000022edb
- (void)setCarPlayState:(_Bool)arg1;	// IMP=0x0000000000022e88
- (_Bool)getCarPlayState;	// IMP=0x0000000000022dfa
- (id)initWithCallbackQueue:(id)arg1 observer:(id)arg2;	// IMP=0x0000000000022cb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
