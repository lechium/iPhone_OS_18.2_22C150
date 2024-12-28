//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILayoutGuide;

@interface UIView (SBUISystemApertureStyling)
+ (void)SBUISA_performWithoutAnimationOrRetargeting:(CDUnknownBlockType)arg1;	// IMP=0x0020000000073797
+ (void)SBUISA_animateWithSettings:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000073672
- (void)sbui_systemApertureApplyMinimumAndMaximumContentSizeCategoryForCustomLayoutMode:(_Bool)arg1;	// IMP=0x001000000001a98b
- (struct CGRect)SBSUI_sourceRectForControlCenterInvocationHint;	// IMP=0x0010000000048c0f
- (void)sb_setPresentationBoundsAndPositionFromFrame:(struct CGRect)arg1;	// IMP=0x0010000000062d06
- (void)sb_setBoundsAndPositionFromFrame:(struct CGRect)arg1;	// IMP=0x0010000000062c37
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureMinimumContentSizeLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureMaximumContentSizeLayoutGuide;
- (id)SBUISA_systemApertureLayoutGuideWithIdentifier:(id)arg1;	// IMP=0x001000000007034b
@property(readonly, nonatomic) double SBUISA_maximumAccessoryViewWidth;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureObstructedAreaLayoutGuide;
@property(readonly, nonatomic) long long SBUISA_layoutMode;
@property(readonly, nonatomic) double SBUISA_standardInteritemPadding;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureLegibleContentLayoutMarginsGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureCustomControlsContentLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureTrailingConcentricContentLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureLeadingConcentricContentLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureMinimalViewLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureTrailingViewLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *SBUISA_systemApertureLeadingViewLayoutGuide;
- (id)systemApertureElementContext;	// IMP=0x0010000000092da8
@end
