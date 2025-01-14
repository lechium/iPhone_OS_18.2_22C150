//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSString, UIView;
@protocol UIViewControllerAnimatedTransitioning;

@interface SVSCommonNavController : UINavigationController
{
    UIView *_dimmingView;	// 8 = 0x8
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000011e5b6
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)pushViewController:(id)arg1 transition:(int)arg2;	// IMP=0x001000000011e4e8
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000011e450
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011e392
- (void)cancelProxCardDraggingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000011e2cf
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000011e2c7
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x001000000011e21c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

