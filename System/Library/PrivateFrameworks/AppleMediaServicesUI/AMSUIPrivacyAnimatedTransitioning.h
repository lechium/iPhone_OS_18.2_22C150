//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIPrivacyAnimatedTransitioning : NSObject
{
    _Bool _presentation;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b95d
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(getter=isPresentation) _Bool presentation; // @synthesize presentation=_presentation;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b558
- (void)animateTransition:(id)arg1;	// IMP=0x000000000007b4af
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000007b4a1
- (id)_presentedViewControllerForContext:(id)arg1;	// IMP=0x000000000007b3ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

