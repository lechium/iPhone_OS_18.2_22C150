//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC7ChatKit31TapbackPickerCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *tapbackView;	// 8 = 0x8
    MISSING_TYPE *selectedTapbackBackgroundColor;	// 16 = 0x10
    MISSING_TYPE *tapbackBlurContainerView;	// 24 = 0x18
    MISSING_TYPE *selectionPlatter;	// 32 = 0x20
    MISSING_TYPE *tapbackPickerCellDelegate;	// 40 = 0x28
    MISSING_TYPE *gradientView;	// 48 = 0x30
    MISSING_TYPE *gradientPadding;	// 56 = 0x38
    MISSING_TYPE *gradientReferenceView;	// 64 = 0x40
    MISSING_TYPE *tapbackViewLeadingConstraint;	// 72 = 0x48
    MISSING_TYPE *tapbackViewTrailingConstraint;	// 80 = 0x50
    MISSING_TYPE *tapbackViewTopConstraint;	// 88 = 0x58
    MISSING_TYPE *tapbackViewBottomConstraint;	// 96 = 0x60
    MISSING_TYPE *selectionStateScale;	// 104 = 0x68
    MISSING_TYPE *edgeTransform;	// 112 = 0x70
    MISSING_TYPE *sectionHiddenBlurFilterRadius;	// 160 = 0xa0
    MISSING_TYPE *scrollViewEdgeBlurFilterRadius;	// 168 = 0xa8
    MISSING_TYPE *sectionHiddenOpacity;	// 176 = 0xb0
    MISSING_TYPE *scrollViewEdgeOpacity;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000008ab340
- (struct CGRect)tapbackContentContainerRect;	// IMP=0x00000000008ab2e0
- (void)prepareForReuse;	// IMP=0x00000000008ab270
@property(nonatomic) struct CGPoint center;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008aa5e0
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x00000000008a9b50
- (void)layoutSubviews;	// IMP=0x00000000008a99c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008a9440
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x00000000008a8790
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000008ab430
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000008ab410

@end
