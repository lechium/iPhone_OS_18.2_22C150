//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer;

@interface VOTCrashManager : NSObject
{
    _Bool _didStartFromCrashState;	// 8 = 0x8
    AXDispatchTimer *_crashloopTimer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000003054a
- (void).cxx_destruct;	// IMP=0x0000000000030a81
@property(retain, nonatomic) AXDispatchTimer *crashloopTimer; // @synthesize crashloopTimer=_crashloopTimer;
@property(nonatomic) _Bool didStartFromCrashState; // @synthesize didStartFromCrashState=_didStartFromCrashState;
- (void)_resetConsecutiveCrashCount;	// IMP=0x0010000000030a07
- (void)_incrementConsecutiveCrashCount;	// IMP=0x0010000000030924
@property(readonly, nonatomic) long long consecutiveCrashCount;
- (void)handleStartUp;	// IMP=0x00100000000305de
- (id)_init;	// IMP=0x00100000000305af

@end
