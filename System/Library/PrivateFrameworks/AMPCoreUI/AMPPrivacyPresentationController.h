//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface AMPPrivacyPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c53b
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x000000000000c50e
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x000000000000c501
- (void)presentationTransitionWillBegin;	// IMP=0x000000000000c47c
- (void)_prepareDimmingViewIfNecessary;	// IMP=0x000000000000c305
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x000000000000c2d1
- (_Bool)shouldRemovePresentersView;	// IMP=0x000000000000c2c9
- (void)containerViewDidLayoutSubviews;	// IMP=0x000000000000c1d0
- (void)containerViewWillLayoutSubviews;	// IMP=0x000000000000bfdb
- (long long)adaptivePresentationStyle;	// IMP=0x000000000000bfd0
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000000bf81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

