//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC7ChatKit26SendMenuCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *titleBlurContainerView;	// 16 = 0x10
    MISSING_TYPE *iconImageView;	// 24 = 0x18
    MISSING_TYPE *iconBlurContainerView;	// 32 = 0x20
    MISSING_TYPE *sendMenuCellDelegate;	// 40 = 0x28
    MISSING_TYPE *iconWidthConstraint;	// 56 = 0x38
    MISSING_TYPE *iconHeightConstraint;	// 64 = 0x40
    MISSING_TYPE *iconToEdgeHorizontalConstraint;	// 72 = 0x48
    MISSING_TYPE *iconToLabelHorizontalConstraint;	// 80 = 0x50
    MISSING_TYPE *iconToTopConstraint;	// 88 = 0x58
    MISSING_TYPE *iconToBottomConstraint;	// 96 = 0x60
    MISSING_TYPE *touchRecognitionRectIsInset;	// 104 = 0x68
    MISSING_TYPE *selectionStateScale;	// 112 = 0x70
    MISSING_TYPE *sendMenuItemImageForLightMode;	// 120 = 0x78
    MISSING_TYPE *sendMenuCustomIconLayer;	// 128 = 0x80
    MISSING_TYPE *sendMenuItemImageForDarkMode;	// 136 = 0x88
    MISSING_TYPE *sendMenuItemImageCompositingFilterForLightMode;	// 144 = 0x90
    MISSING_TYPE *sendMenuItemImageCompositingFilterForDarkMode;	// 152 = 0x98
    MISSING_TYPE *sendMenuItemImageInsets;	// 160 = 0xa0
    MISSING_TYPE *titleLabelSendMenuAppearanceAnimationBlurFilterRadius;	// 192 = 0xc0
    MISSING_TYPE *titleLabelScrollViewEdgeBlurFilterRadius;	// 200 = 0xc8
    MISSING_TYPE *iconImageViewSendMenuAppearanceAnimationBlurFilterRadius;	// 208 = 0xd0
    MISSING_TYPE *iconImageViewScrollViewEdgeBlurFilterRadius;	// 216 = 0xd8
    MISSING_TYPE *iconImageViewAppearanceAnimationOpacity;	// 224 = 0xe0
    MISSING_TYPE *iconImageViewScrollViewEdgeOpacity;	// 232 = 0xe8
    MISSING_TYPE *titleLabelScrollViewEdgeOpacity;	// 240 = 0xf0
    MISSING_TYPE *titleLabelAppearanceAnimationOpacity;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000007f6cc0
- (void)prepareForReuse;	// IMP=0x00000000007f6c70
@property(nonatomic) struct CGPoint center;
- (void)layoutSubviews;	// IMP=0x00000000007f4ec0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007f43c0
@property(nonatomic) struct CGRect accessibilityFrame;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x00000000007f3b60
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000007f39a0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007f27d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007f25d0
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000007f6e00
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000007f6de0

@end
