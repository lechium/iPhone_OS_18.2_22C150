//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIView, VUIImageView, VUILabel, VUITextBadgeView, _TtC8VideosUI21StyledProgressBarView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI18UnifiedOverlayView
{
    MISSING_TYPE *overlayLayout;	// 8 = 0x8
    MISSING_TYPE *isLockupSelected;	// 16 = 0x10
    MISSING_TYPE *isLockupSelectionHidden;	// 17 = 0x11
    MISSING_TYPE *progressView;	// 24 = 0x18
    MISSING_TYPE *appImageView;	// 32 = 0x20
    MISSING_TYPE *logoImageView;	// 40 = 0x28
    MISSING_TYPE *textLabel;	// 48 = 0x30
    MISSING_TYPE *subtitleLabel;	// 56 = 0x38
    MISSING_TYPE *badgeView;	// 64 = 0x40
    MISSING_TYPE *selectionGradientView;	// 72 = 0x48
    MISSING_TYPE *selectionView;	// 80 = 0x50
    MISSING_TYPE *textBadge;	// 88 = 0x58
    MISSING_TYPE *protectionView;	// 96 = 0x60
    MISSING_TYPE *unfocusedProtectionView;	// 104 = 0x68
    MISSING_TYPE *scorecardView;	// 112 = 0x70
    MISSING_TYPE *legacyScorecardView;	// 120 = 0x78
    MISSING_TYPE *cornerRadius;	// 128 = 0x80
    MISSING_TYPE *selectionViewModel;	// 136 = 0x88
    MISSING_TYPE *logoSize;	// 144 = 0x90
    MISSING_TYPE *backgroundImageForMaterial;	// 168 = 0xa8
    MISSING_TYPE *forcesProtectionOnFocus;	// 176 = 0xb0
    MISSING_TYPE *wantsUnfocusedCornerBlur;	// 177 = 0xb1
    MISSING_TYPE *scoreboardViewModel;	// 184 = 0xb8
    MISSING_TYPE *originalScoreboardViewModel;	// 192 = 0xc0
    MISSING_TYPE *backgroundImageHasChanged;	// 200 = 0xc8
    MISSING_TYPE *scorecardViewBackgroundImage;	// 208 = 0xd0
    MISSING_TYPE *endingTimestamp;	// 216 = 0xd8
    MISSING_TYPE *startingTimestamp;	// 232 = 0xe8
    MISSING_TYPE *textBadgeHasMaterial;	// 241 = 0xf1
    MISSING_TYPE *pendingOperation;	// 248 = 0xf8
    MISSING_TYPE *isOperationCancelledObserver;	// 256 = 0x100
    MISSING_TYPE *isOperationFinishedObserver;	// 264 = 0x108
    MISSING_TYPE *gradientSizeHeightMultiplier;	// 272 = 0x110
    MISSING_TYPE *overlayUpdater;	// 280 = 0x118
    MISSING_TYPE *shouldUpdateTextBadgeBackground;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000094f070
@property(nonatomic, readonly) VUITextBadgeView *accessibilityTextBadge;
@property(nonatomic, readonly) UIView *accessibilityBadgeView;
@property(nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) VUILabel *accessibilityTextLabel;
@property(nonatomic, readonly) VUIImageView *accessibilityLogoImageView;
@property(nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property(nonatomic, readonly) _TtC8VideosUI21StyledProgressBarView *accessibilityProgressView;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000951061
- (void)dealloc;	// IMP=0x000000000094f053
- (void)vui_willMoveToWindow:(id)arg1;	// IMP=0x000000000094efa3
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000094eed1
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000094ee14
@property(nonatomic, readonly) _Bool vuiDebugUI;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000094eda6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000094eb52
@property(nonatomic, retain) VUILabel *textLabel; // @synthesize textLabel;
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000006cf114
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;	// IMP=0x00000000006cf060
- (struct UIEdgeInsets)marginsForRow:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000006cf016
- (double)maximumWidthForScorecardView:(id)arg1;	// IMP=0x00000000006cef20
- (id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;	// IMP=0x00000000006ceea0
- (long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;	// IMP=0x00000000006cedd9
- (long long)numberOfRowsInScorecardView:(id)arg1;	// IMP=0x00000000006ced13
- (long long)styleForScorecardView:(id)arg1;	// IMP=0x00000000006cec7f
- (void)textBadgeViewContentsUpdated:(id)arg1;	// IMP=0x00000000009518fd
- (void)sampleWithImage:(id)arg1;	// IMP=0x0000000000951962

@end
