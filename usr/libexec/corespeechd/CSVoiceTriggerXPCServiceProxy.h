//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriAssertionMonitor, NSHashTable, NSMutableSet;

@interface CSVoiceTriggerXPCServiceProxy : NSObject
{
    _Bool _isPhraseSpotterBypassed;	// 8 = 0x8
    _Bool _isRaiseToSpeakBypassed;	// 9 = 0x9
    NSMutableSet *_activationAssertions;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    CSSiriAssertionMonitor *_assertionMonitor;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000000a963
- (void).cxx_destruct;	// IMP=0x0020000000009a94
@property(retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor; // @synthesize assertionMonitor=_assertionMonitor;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isRaiseToSpeakBypassed; // @synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed;
@property(nonatomic) _Bool isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
- (id)fetchVoiceTriggerStats;	// IMP=0x00100000000099c8
- (void)notifyServiceConnectionLost;	// IMP=0x001000000000974e
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x00100000000096cf
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x0010000000009601
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x0010000000009533
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x0010000000009366
- (id)_fetchAssertionMonitor;	// IMP=0x001000000000932c
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000009316
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000009300
- (id)initWithAssertionMonitor:(id)arg1;	// IMP=0x001000000000922f
- (id)init;	// IMP=0x001000000000921b

@end

