//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC10TVRemoteUI21FMR1HapticsController : NSObject
{
    MISSING_TYPE *hapticCapability;	// 8 = 0x8
    MISSING_TYPE *hapticEngine;	// 16 = 0x10
    MISSING_TYPE *hapticDisplayLink;	// 24 = 0x18
    MISSING_TYPE *lastRenderTime;	// 32 = 0x20
    MISSING_TYPE *tapHapticLastPlayTimestamp;	// 48 = 0x30
    MISSING_TYPE *tapHapticNextPlayDelay;	// 64 = 0x40
    MISSING_TYPE *tapHapticPlaybackPeriod;	// 80 = 0x50
    MISSING_TYPE *tapHapticContext;	// 96 = 0x60
    MISSING_TYPE *singleTapSelectedHapticPattern;	// 128 = 0x80
    MISSING_TYPE *singleTapSelectedHapticPatternIntensity;	// 136 = 0x88
    MISSING_TYPE *singleTap1HapticPattern;	// 144 = 0x90
    MISSING_TYPE *singleTap2HapticPattern;	// 152 = 0x98
    MISSING_TYPE *singleTap3HapticPattern;	// 160 = 0xa0
    MISSING_TYPE *singleTap4HapticPattern;	// 168 = 0xa8
    MISSING_TYPE *singleTap5HapticPattern;	// 176 = 0xb0
    MISSING_TYPE *connectedHapticPattern;	// 184 = 0xb8
    MISSING_TYPE *buildHapticPattern;	// 192 = 0xc0
    MISSING_TYPE *scatterHapticPattern;	// 200 = 0xc8
    MISSING_TYPE *aheadHapticPattern;	// 208 = 0xd0
    MISSING_TYPE *aheadOffHapticPattern;	// 216 = 0xd8
    MISSING_TYPE *armsReachHapticPattern;	// 224 = 0xe0
    MISSING_TYPE *armsReachOffHapticPattern;	// 232 = 0xe8
    MISSING_TYPE *preNearbyHapticPattern;	// 240 = 0xf0
    MISSING_TYPE *nearbyHapticPattern;	// 248 = 0xf8
    MISSING_TYPE *levelIncreaseHapticPattern;	// 256 = 0x100
    MISSING_TYPE *levelDecreaseHapticPattern;	// 264 = 0x108
    MISSING_TYPE *farNearHapticPattern;	// 272 = 0x110
    MISSING_TYPE *nearbyHapticLastPlayTimestamp;	// 280 = 0x118
    MISSING_TYPE *continuousHapticPattern;	// 296 = 0x128
    MISSING_TYPE *continuousHapticPlayer;	// 304 = 0x130
    MISSING_TYPE *continuousHapticFactor;	// 312 = 0x138
    MISSING_TYPE *continuousHapticRampingFactorSpring;	// 320 = 0x140
    MISSING_TYPE *playBuildHapticWorkItem;	// 328 = 0x148
    MISSING_TYPE *playScatterHapticWorkItem;	// 336 = 0x150
    MISSING_TYPE *setup;	// 344 = 0x158
    MISSING_TYPE *hapticsMayBePlaying;	// 345 = 0x159
    MISSING_TYPE *startContinuousHapticWorkItem;	// 352 = 0x160
    MISSING_TYPE *restartContinuousHapticWorkItem;	// 360 = 0x168
    MISSING_TYPE *enablePlayingAheadHaptic;	// 368 = 0x170
    MISSING_TYPE *isPlayingContinuousHapticPattern;	// 369 = 0x171
    MISSING_TYPE *playArmsReachHapticWorkItem;	// 376 = 0x178
    MISSING_TYPE *playNearbyHapticWorkItem;	// 384 = 0x180
    MISSING_TYPE *hasPlayedArmsReachHaptic;	// 392 = 0x188
    MISSING_TYPE *continuousHapticFactorLogCounter;	// 400 = 0x190
    MISSING_TYPE *lastLoggedContinuousHapticFactor;	// 408 = 0x198
    MISSING_TYPE *playedHapticPatternHandler;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x000000000009f320
- (void)hapticDisplayLinkUpdateWithDisplaylink:(id)arg1;	// IMP=0x00000000000a0970
@property(nonatomic, readonly) NSString *description;
- (void)dealloc;	// IMP=0x000000000009f300
- (id)init;	// IMP=0x000000000009f0e0

@end

