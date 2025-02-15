//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerTriggeredFeature : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _autoRemove;	// 9 = 0x9
    _Bool _repeats;	// 10 = 0xa
    _Bool _backgroundTimer;	// 11 = 0xb
    double _duration;	// 16 = 0x10
    id _userInfo;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003cddd
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic, getter=isBackgroundTimer) _Bool backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003cc5c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(_Bool)arg3 backgroundTimer:(_Bool)arg4;	// IMP=0x000000000003cac5
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(_Bool)arg3;	// IMP=0x000000000003cab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

