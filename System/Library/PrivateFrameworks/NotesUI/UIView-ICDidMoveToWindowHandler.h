//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ICAppearanceInfo, ICViewControllerManager, ICWindow, NSString, UIColor, UIScrollView, UITraitCollection, UIWindowScene;

@interface UIView (ICDidMoveToWindowHandler)
+ (void)ic_animateUsingSpringWithDampingRatio:(double)arg1 response:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000000ad8e0
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000000ad7b6
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x00200000000ad7a1
+ (_Bool)ic_isRTL;	// IMP=0x00200000000ab612
+ (void)ic_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000128d76
+ (void)ic_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x0020000000128d5b
+ (void)ic_performWithoutAnimationOnMainThread:(CDUnknownBlockType)arg1;	// IMP=0x0020000000128cc6
+ (void)ic_performWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x0020000000128cad
- (void)ic_addDidMoveToWindowHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000663b4
- (id)ic_animator;	// IMP=0x00100000000ad798
- (id)ic_renderImageView;	// IMP=0x00100000000ad6f7
- (id)ic_renderImage;	// IMP=0x00100000000ad55a
- (void)ic_addConstraintsToFillSuperview;	// IMP=0x00100000000ad45c
- (void)ic_addAnchorsToFillSuperviewLayoutMargins;	// IMP=0x00100000000ad1bf
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2 topPadding:(double)arg3 bottomPadding:(double)arg4 usesSafeAreaLayoutGuideHorizontally:(_Bool)arg5 usesSafeAreaLayoutGuideVertically:(_Bool)arg6;	// IMP=0x00100000000ace70
- (void)ic_addAnchorsToFillSuperviewWithPaddingFromDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 usesSafeAreaLayoutGuideHorizontally:(_Bool)arg2 usesSafeAreaLayoutGuideVertically:(_Bool)arg3;	// IMP=0x00100000000ace47
- (void)ic_addAnchorsToFillSuperviewWithPaddingFromDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 usesSafeAreaLayoutGuide:(_Bool)arg2;	// IMP=0x00100000000ace33
- (void)ic_addAnchorsToFillSuperviewWithPaddingFromDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x00100000000ace17
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2 verticalPadding:(double)arg3 usesSafeAreaLayoutGuideHorizontally:(_Bool)arg4 usesSafeAreaLayoutGuideVertically:(_Bool)arg5;	// IMP=0x00100000000acdff
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1 verticalPadding:(double)arg2 usesSafeAreaLayoutGuideHorizontally:(_Bool)arg3 usesSafeAreaLayoutGuideVertically:(_Bool)arg4;	// IMP=0x00100000000acde4
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1 verticalPadding:(double)arg2 usesSafeAreaLayoutGuide:(_Bool)arg3;	// IMP=0x00100000000acdd0
- (void)ic_addAnchorsToFillSuperviewWithPadding:(double)arg1;	// IMP=0x00100000000acdb9
- (void)ic_addAnchorsToFillSuperviewWithVerticalPadding:(double)arg1;	// IMP=0x00100000000acd9f
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2;	// IMP=0x00100000000acd83
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1;	// IMP=0x00100000000acd6c
- (void)ic_addAnchorsToFillSuperview;	// IMP=0x00100000000acd57
- (void)ic_removeAllConstraintsForSubview:(id)arg1;	// IMP=0x00100000000acb08
- (id)ic_imageViewRenderedFromViewHierarchy;	// IMP=0x00100000000aca65
- (id)ic_imageViewRenderedFromLayer;	// IMP=0x00100000000ac9c4
- (id)ic_imageRenderedFromViewHierarchyAfterScreenUpdates:(_Bool)arg1 fallback:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ac7dc
- (id)ic_imageRenderedFromViewHierarchyAfterScreenUpdates:(_Bool)arg1;	// IMP=0x00100000000ac7c8
- (id)ic_imageRenderedFromLayer;	// IMP=0x00100000000ac62b
@property(retain, nonatomic) NSString *ic_preferredContentSizeCategory;
@property(readonly, nonatomic) long long ic_behavior;
@property(readonly, nonatomic) _Bool ic_hasCompactSize;
@property(readonly, nonatomic) _Bool ic_hasCompactWidth;
@property(readonly, nonatomic) _Bool ic_hasCompactHeight;
- (_Bool)ic_inSidebar;	// IMP=0x00100000000ac39f
- (void)ic_removeShadow;	// IMP=0x00100000000ac319
- (void)ic_applyShadowWithRadius:(double)arg1 opacity:(double)arg2 offset:(struct CGSize)arg3 shadowPathIsBounds:(_Bool)arg4;	// IMP=0x00100000000ac1a1
- (void)ic_applyShadowWithRadius:(double)arg1 opacity:(double)arg2 offset:(struct CGSize)arg3;	// IMP=0x00100000000ac187
- (void)ic_applyShadow;	// IMP=0x00100000000ac15a
- (void)ic_removeRoundedCorners;	// IMP=0x00100000000ac145
- (void)ic_applyRoundedCornersFromView:(id)arg1;	// IMP=0x00100000000abf7b
- (void)ic_applyRoundedCornersWithTopLeadingRadius:(double)arg1 topTrailingRadius:(double)arg2 bottomLeadingRadius:(double)arg3 bottomTrailingRadius:(double)arg4;	// IMP=0x00100000000abe15
- (void)ic_applyRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;	// IMP=0x00100000000abc4a
- (void)ic_applyRoundedCorners:(unsigned long long)arg1;	// IMP=0x00100000000abc30
- (void)ic_applyRoundedCornersWithRadius:(double)arg1;	// IMP=0x00100000000abc17
- (void)ic_applyRoundedCorners;	// IMP=0x00100000000abbfd
@property(readonly, nonatomic) UIScrollView *ic_enclosingScrollView;
@property(readonly, nonatomic) ICWindow *ic_window;
@property(readonly, nonatomic) UIWindowScene *ic_windowScene;
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfo;
@property(copy, nonatomic) UIColor *ic_backgroundColor;
- (void)ic_crashIfWindowIsSecure;	// IMP=0x00100000000ab915
@property(readonly, nonatomic) _Bool ic_isInSecureWindow;
@property(readonly, nonatomic) UITraitCollection *ic_platformAppearanceObject;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets ic_directionalSafeAreaInsets;
@property(readonly, nonatomic) _Bool ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
- (void)ic_insertSubview:(id)arg1 belowSubview:(id)arg2;	// IMP=0x0010000000128f46
- (void)ic_setAlpha:(double)arg1;	// IMP=0x0010000000128f34
- (void)ic_setNeedsLayout;	// IMP=0x0010000000128f22
- (void)ic_setNeedsDisplay;	// IMP=0x0010000000128f10
@property(readonly, nonatomic) double ic_hairlineWidth;
@property(readonly, nonatomic) double ic_backingScaleFactor;
@end

