//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPlaybackUpNextConfig : NSObject
{
    _Bool _disablePostPlayTypeHLSQueryParam;	// 8 = 0x8
    double _bootstrapInterval;	// 16 = 0x10
    double _documentUpdateOffsetInterval;	// 24 = 0x18
    unsigned long long _maximumAutoPlayableItems;	// 32 = 0x20
    double _minAutoPlayStopTime;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    double _autoPlayTimerDuration;	// 56 = 0x38
    double _minTimeIntervalFromEndToDisplay;	// 64 = 0x40
}

@property(nonatomic) _Bool disablePostPlayTypeHLSQueryParam; // @synthesize disablePostPlayTypeHLSQueryParam=_disablePostPlayTypeHLSQueryParam;
@property(nonatomic) double minTimeIntervalFromEndToDisplay; // @synthesize minTimeIntervalFromEndToDisplay=_minTimeIntervalFromEndToDisplay;
@property(nonatomic) double autoPlayTimerDuration; // @synthesize autoPlayTimerDuration=_autoPlayTimerDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double minAutoPlayStopTime; // @synthesize minAutoPlayStopTime=_minAutoPlayStopTime;
@property(nonatomic) unsigned long long maximumAutoPlayableItems; // @synthesize maximumAutoPlayableItems=_maximumAutoPlayableItems;
@property(nonatomic) double documentUpdateOffsetInterval; // @synthesize documentUpdateOffsetInterval=_documentUpdateOffsetInterval;
@property(nonatomic) double bootstrapInterval; // @synthesize bootstrapInterval=_bootstrapInterval;
- (id)init;	// IMP=0x00000000001e5c53

@end
