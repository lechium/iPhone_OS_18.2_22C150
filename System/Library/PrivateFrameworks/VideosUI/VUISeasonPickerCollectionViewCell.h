//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIImageView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerCollectionViewCell
{
    VUILabel *_titleLabel;	// 8 = 0x8
    VUILabel *_subtitleLabel;	// 16 = 0x10
    VUILabel *_secondSubtitleLabel;	// 24 = 0x18
    VUIImageView *_seasonImageView;	// 32 = 0x20
    VUISeparatorView *_topSeparatorView;	// 40 = 0x28
    VUISeparatorView *_bottomSeparatorView;	// 48 = 0x30
}

+ (void)configureSeasonPickerCell:(id)arg1 withMedia:(id)arg2 traitCollection:(id)arg3;	// IMP=0x006000000006b8a6
- (void).cxx_destruct;	// IMP=0x000000000006de8d
@property(retain, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) VUIImageView *seasonImageView; // @synthesize seasonImageView=_seasonImageView;
@property(retain, nonatomic) VUILabel *secondSubtitleLabel; // @synthesize secondSubtitleLabel=_secondSubtitleLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x000000000006cd1d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006c7ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006c2c1

@end

