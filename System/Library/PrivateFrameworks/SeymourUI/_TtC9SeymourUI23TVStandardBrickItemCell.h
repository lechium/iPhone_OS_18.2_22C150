//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI23TVStandardBrickItemCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 11574740 = 0xb09dd4
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *tvArtworkView;	// 0 = 0x0
    MISSING_TYPE *captionLabel;	// 0 = 0x0
    MISSING_TYPE *titleLabel;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *subtitleLabel;	// 1887007839 = 0x7079745f
    MISSING_TYPE *artworkWidthConstraint;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *artworkHeightConstraint;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000088500
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000088200
- (void)prepareForReuse;	// IMP=0x0000000000088120
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000088100
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000880d0

@end
