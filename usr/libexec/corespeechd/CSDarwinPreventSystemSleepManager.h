//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSFPreferences, CSPreventSystemSleepPowerAssertion;

@interface CSDarwinPreventSystemSleepManager : NSObject
{
    double _assertionTimeoutInterval;	// 8 = 0x8
    CSPreventSystemSleepPowerAssertion *_preventSystemSleepPowerAssertion;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
    CSFPreferences *_preferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000107589
@property(retain, nonatomic) CSFPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CSPreventSystemSleepPowerAssertion *preventSystemSleepPowerAssertion; // @synthesize preventSystemSleepPowerAssertion=_preventSystemSleepPowerAssertion;
@property(readonly, nonatomic) double assertionTimeoutInterval; // @synthesize assertionTimeoutInterval=_assertionTimeoutInterval;
- (void)dealloc;	// IMP=0x00100000001074f6
- (void)acquireAssertionForIdleUser;	// IMP=0x00100000001071e9
- (void)acquireAssertionForActiveUser;	// IMP=0x001000000010710e
- (void)acquireAssertion;	// IMP=0x00100000001070b6
- (void)releasePreventSystemSleepAssertion;	// IMP=0x0010000000107084
- (void)_acquirePreventSystemSleepAssertionWithTimeout:(id)arg1;	// IMP=0x0010000000106f6d
- (id)initWithTimeout:(double)arg1;	// IMP=0x0010000000106f09
- (id)initWithTimeout:(double)arg1 preferences:(id)arg2;	// IMP=0x0010000000106e8e

@end
