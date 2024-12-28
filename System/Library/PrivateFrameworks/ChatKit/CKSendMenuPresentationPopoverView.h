//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKEntryViewPlusButton, CKSendMenuPopoverBlurContentsView, CKSendMenuPresentationPopoverBackdropView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKSendMenuPresentationPopoverView : UIView
{
    _Bool _layoutSubviewsEnabled;	// 8 = 0x8
    UIView *_appView;	// 16 = 0x10
    UIView *_sendMenuView;	// 24 = 0x18
    UIVisualEffectView *_blurBackgroundView;	// 32 = 0x20
    CKSendMenuPresentationPopoverBackdropView *_backdropView;	// 40 = 0x28
    CKSendMenuPopoverBlurContentsView *_blurContentsView;	// 48 = 0x30
    CKEntryViewPlusButton *_plusButton;	// 56 = 0x38
}

+ (struct CGAffineTransform)affineTransformToDownScaleSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;	// IMP=0x0060000000388906
- (void).cxx_destruct;	// IMP=0x00000000003889cb
@property(retain, nonatomic) CKEntryViewPlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(readonly, nonatomic) CKSendMenuPopoverBlurContentsView *blurContentsView; // @synthesize blurContentsView=_blurContentsView;
@property(retain, nonatomic) CKSendMenuPresentationPopoverBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) UIView *sendMenuView; // @synthesize sendMenuView=_sendMenuView;
- (void)prepareForPresentation;	// IMP=0x000000000038858e
- (id)animationForTransitioningToNewSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;	// IMP=0x00000000003883cc
- (id)animationForTransitioningToAppViewWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2;	// IMP=0x00000000003875b6
- (id)animationForPresentingInitialViewWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2;	// IMP=0x0000000000386651
- (id)_animationForDismissingContentView:(id)arg1 finalBounds:(struct CGRect)arg2 finalCenter:(struct CGPoint)arg3 finalAlpha:(double)arg4;	// IMP=0x000000000038543d
- (id)animationForDismissingWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2 finalAlpha:(double)arg3;	// IMP=0x0000000000385410
- (void)layoutSubviews;	// IMP=0x000000000038527e
- (id)contentContainerView;	// IMP=0x0000000000385261
@property(retain, nonatomic) UIView *appView; // @synthesize appView=_appView;
@property(nonatomic, getter=isLayoutSubviewsEnabled) _Bool layoutSubviewsEnabled; // @synthesize layoutSubviewsEnabled=_layoutSubviewsEnabled;
- (id)init;	// IMP=0x0000000000384e1a

@end
