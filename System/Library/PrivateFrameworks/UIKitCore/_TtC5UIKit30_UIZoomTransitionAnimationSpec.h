//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class MISSING_TYPE, UIViewSpringAnimationBehaviorSettings;

__attribute__((visibility("hidden")))
@interface _TtC5UIKit30_UIZoomTransitionAnimationSpec : PTSettings
{
    MISSING_TYPE *morph;	// 8 = 0x8
    MISSING_TYPE *transform;	// 16 = 0x10
    MISSING_TYPE *position;	// 24 = 0x18
    MISSING_TYPE *general;	// 32 = 0x20
    MISSING_TYPE *cornerRadiusAdjustment;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x0060000000167190
- (void).cxx_destruct;	// IMP=0x0000000000167330
- (id)initWithDefaultValues;	// IMP=0x00000000001672c0
- (void)setDefaultValues;	// IMP=0x0000000000167160
@property(nonatomic, retain) UIViewSpringAnimationBehaviorSettings *cornerRadiusAdjustment; // @synthesize cornerRadiusAdjustment;
@property(nonatomic, retain) UIViewSpringAnimationBehaviorSettings *general; // @synthesize general;
@property(nonatomic, retain) UIViewSpringAnimationBehaviorSettings *position; // @synthesize position;
@property(nonatomic, retain) UIViewSpringAnimationBehaviorSettings *transform; // @synthesize transform;
@property(nonatomic, retain) UIViewSpringAnimationBehaviorSettings *morph; // @synthesize morph;

@end
