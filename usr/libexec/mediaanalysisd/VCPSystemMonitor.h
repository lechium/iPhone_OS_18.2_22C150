//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface VCPSystemMonitor : NSObject
{
    int _powerToken;	// 8 = 0x8
    int _screenToken;	// 12 = 0xc
    int _chargedToken;	// 16 = 0x10
    int _thermalToken;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_freeSpaceTimer;	// 24 = 0x18
    long long _recommendedState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000180aed
@property(readonly) long long recommendedState; // @synthesize recommendedState=_recommendedState;
- (int)disable;	// IMP=0x0010000000180ac1
- (int)enable;	// IMP=0x001000000018075d
- (void)checkFreeSpace;	// IMP=0x00100000001803a0
- (unsigned long long)checkThermalPressure;	// IMP=0x0010000000180268
- (id)checkFullyCharged;	// IMP=0x001000000017ff05
- (long long)checkScreenLocked;	// IMP=0x001000000017fd1d
- (long long)checkPluggedIn;	// IMP=0x001000000017fb13
- (void)dealloc;	// IMP=0x001000000017faa0
- (void)reset;	// IMP=0x001000000017fa2d
- (id)init;	// IMP=0x001000000017f9ce

@end
