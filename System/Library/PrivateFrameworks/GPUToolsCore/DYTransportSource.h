//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DYTransport;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DYTransportSource : NSObject
{
    CDUnknownBlockType _messageHandler;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    CDUnknownBlockType _registrationHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_mqueue;	// 40 = 0x28
    DYTransport *_transport;	// 48 = 0x30
    _Atomic int _state;	// 56 = 0x38
}

@property(readonly, retain, nonatomic) DYTransport *transport; // @synthesize transport=_transport;
- (void)_dispatch:(id)arg1;	// IMP=0x000000000001824d
- (void)_cancel;	// IMP=0x00000000000181ae
- (void)_callCancellationHandler;	// IMP=0x000000000001816e
- (void)_register;	// IMP=0x00000000000180d1
- (void)_callRegistrationHandler;	// IMP=0x000000000001809c
@property(copy, nonatomic) CDUnknownBlockType registrationHandler;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler;
@property(readonly, nonatomic) _Bool cancelled;
- (void)cancel;	// IMP=0x0000000000017d56
- (void)suspend;	// IMP=0x0000000000017d48
- (void)resume;	// IMP=0x0000000000017d3a
- (void)dealloc;	// IMP=0x0000000000017cb2
- (id)_initWithQueue:(id)arg1 transport:(id)arg2;	// IMP=0x0000000000017ae9
- (id)init;	// IMP=0x0000000000017abe

@end
