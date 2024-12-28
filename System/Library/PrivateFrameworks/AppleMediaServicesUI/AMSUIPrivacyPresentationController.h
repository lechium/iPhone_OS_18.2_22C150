//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface AMSUIPrivacyPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007bf27
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x000000000007befa
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x000000000007beed
- (void)presentationTransitionWillBegin;	// IMP=0x000000000007be68
- (void)_prepareDimmingViewIfNecessary;	// IMP=0x000000000007bcf1
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x000000000007bcbd
- (_Bool)shouldRemovePresentersView;	// IMP=0x000000000007bcb5
- (void)containerViewDidLayoutSubviews;	// IMP=0x000000000007bbbc
- (void)containerViewWillLayoutSubviews;	// IMP=0x000000000007b9c7
- (long long)adaptivePresentationStyle;	// IMP=0x000000000007b9bc
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000007b96d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
