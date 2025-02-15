//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXVoiceOverActivity, SCRCThreadKey;

@interface VOTOutputComponent : NSObject
{
    unsigned long long _currentOutputActionID;	// 8 = 0x8
    SCRCThreadKey *_threadKey;	// 16 = 0x10
    AXVoiceOverActivity *_lastUsedActivity;	// 24 = 0x18
    double _lastUsedActivityTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000d655
@property(nonatomic) double lastUsedActivityTime; // @synthesize lastUsedActivityTime=_lastUsedActivityTime;
@property(retain, nonatomic) AXVoiceOverActivity *lastUsedActivity; // @synthesize lastUsedActivity=_lastUsedActivity;
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x001000000000d61c
- (id)determineLanguageForEvent:(id)arg1;	// IMP=0x001000000000d55b
- (id)determineLanguageForAction:(id)arg1 overrideLanguage:(id)arg2 targetLanguage:(id)arg3;	// IMP=0x001000000000d336
- (void)notifyActionComplete:(id)arg1;	// IMP=0x001000000000d1c3
- (void)notifyRangeWillOutput:(struct _NSRange)arg1 container:(id)arg2;	// IMP=0x001000000000d067
- (void)handleEvent:(id)arg1;	// IMP=0x001000000000d061
- (void)preprocessAction:(id)arg1;	// IMP=0x001000000000d05b
- (void)setCurrentOutputActionID:(unsigned long long)arg1;	// IMP=0x001000000000d051
- (id)determineActivityForAction:(id)arg1;	// IMP=0x001000000000cd11
- (double)outputMutedActivityLastToggleTime;	// IMP=0x0010000000157a99
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x0010000000157a72
- (_Bool)determineOutputMutedForActivity:(id)arg1;	// IMP=0x001000000000cb6f
- (void)performAction:(id)arg1 owner:(id)arg2;	// IMP=0x001000000000c9de
- (id)init;	// IMP=0x001000000000c97a

@end

