//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISpringTimingParameters, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject
{
    _Bool _fromViewOriginalShouldRasterize;	// 8 = 0x8
    double _fromViewLayerOriginalRasterizationScale;	// 16 = 0x10
    _Bool _toViewOriginalShouldRasterize;	// 24 = 0x18
    double _toViewLayerOriginalRasterizationScale;	// 32 = 0x20
    _Bool _transitionFromRight;	// 40 = 0x28
    long long _transitionStyle;	// 48 = 0x30
    id <UIViewControllerContextTransitioning> _transitionContext;	// 56 = 0x38
    UISpringTimingParameters *_slideTimingParameters;	// 64 = 0x40
    UIView *_toViewXFlippedScreenShot;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007c06f6
@property(retain, nonatomic) UIView *toViewXFlippedScreenShot; // @synthesize toViewXFlippedScreenShot=_toViewXFlippedScreenShot;
@property(retain, nonatomic) UISpringTimingParameters *slideTimingParameters; // @synthesize slideTimingParameters=_slideTimingParameters;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) _Bool transitionFromRight; // @synthesize transitionFromRight=_transitionFromRight;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000007bf938
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000007bf8d7
- (void)finishTransition;	// IMP=0x00000000007bf62b
- (void)interruptTabBarControllerTransition;	// IMP=0x00000000007bf619
- (id)init;	// IMP=0x00000000007bf5dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
