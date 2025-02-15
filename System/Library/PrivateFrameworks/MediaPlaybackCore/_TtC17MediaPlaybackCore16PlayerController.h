//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC17MediaPlaybackCore16PlayerController : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *mode;	// 32 = 0x20
    MISSING_TYPE *userActionTimeout;	// 40 = 0x28
    MISSING_TYPE *currentItemTransition;	// 48 = 0x30
    MISSING_TYPE *playbackCoordinatorObservation;	// 56 = 0x38
    MISSING_TYPE *player;	// 64 = 0x40
    MISSING_TYPE *playerID;	// 80 = 0x50
    MISSING_TYPE *audioSessionController;	// 96 = 0x60
    MISSING_TYPE *applicationMusicPlayerTransitionOptions;	// 104 = 0x68
    MISSING_TYPE *coordinatedPlaybackSuspension;	// 120 = 0x78
    MISSING_TYPE *videoPlayerViewController;	// 128 = 0x80
    MISSING_TYPE *playbackStartSubscription;	// 136 = 0x88
    MISSING_TYPE *behavior;	// 144 = 0x90
    MISSING_TYPE *queue;	// 152 = 0x98
    MISSING_TYPE *fsm;	// 160 = 0xa0
    MISSING_TYPE *playerObserver;	// 208 = 0xd0
    MISSING_TYPE *playerSubscription;	// 216 = 0xd8
    MISSING_TYPE *systemObserver;	// 224 = 0xe0
    MISSING_TYPE *systemSubscription;	// 288 = 0x120
    MISSING_TYPE *nextItemTracksChangeSubscription;	// 296 = 0x128
    MISSING_TYPE *didBecomeActiveSubscription;	// 304 = 0x130
    MISSING_TYPE *willResignActiveSubscription;	// 312 = 0x138
    MISSING_TYPE *videoPlayerBehavior;	// 320 = 0x140
    MISSING_TYPE *userEventsMonitor;	// 328 = 0x148
    MISSING_TYPE *reporter;	// 336 = 0x150
    MISSING_TYPE *leaseController;	// 376 = 0x178
    MISSING_TYPE *previousItemID;	// 384 = 0x180
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)resetWithReason:(id)arg1;	// IMP=0x0000000000049138
- (void)setApplicationMusicPlayerTransitionType:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000000493e1
@property(nonatomic) float relativeVolume;
- (void)setSpatializationFormat:(long long)arg1;	// IMP=0x0000000000049218

@end

