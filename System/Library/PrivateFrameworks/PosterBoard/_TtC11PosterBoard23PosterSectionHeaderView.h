//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard23PosterSectionHeaderView : UICollectionReusableView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *posterPair;	// 24 = 0x18
    MISSING_TYPE *title;	// 32 = 0x20
    MISSING_TYPE *titleLabel;	// 48 = 0x30
    MISSING_TYPE *titleLabelSpacingFromBottomEdge;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000187720
- (void)posterPairDidUpdateLocalizedTitle:(id)arg1;	// IMP=0x00000000001876a0
- (void)layoutSubviews;	// IMP=0x00000000001875e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000187360
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000187330
- (void)prepareForReuse;	// IMP=0x0000000000186f40
@property(nonatomic, copy) NSString *title;

@end

