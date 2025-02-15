//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCommitTransition : NSObject
{
    UIViewController *_viewController;	// 8 = 0x8
    UIWindow *_currentCommitEffectWindow;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000012436e8
@property(retain, nonatomic) UIWindow *currentCommitEffectWindow; // @synthesize currentCommitEffectWindow=_currentCommitEffectWindow;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)_shouldReduceMotion;	// IMP=0x00000000012436a2
- (void)_applyCommitEffectTransformToView:(id)arg1;	// IMP=0x00000000012435ad
- (id)_preferredTransitionAnimatorForReducedMotion;	// IMP=0x0000000001243545
- (id)_preferredTransitionAnimator;	// IMP=0x00000000012434c6
- (void)performTransitionWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001242d5d
- (id)initWithPresentedViewController:(id)arg1;	// IMP=0x0000000001242c65

@end

