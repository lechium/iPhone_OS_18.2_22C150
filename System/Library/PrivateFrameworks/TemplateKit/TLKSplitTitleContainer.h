//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class TLKLabel, TLKStackView;

__attribute__((visibility("hidden")))
@interface TLKSplitTitleContainer : UIView
{
    _Bool _useLargeTitle;	// 8 = 0x8
    TLKLabel *_titleLabel;	// 16 = 0x10
    TLKLabel *_centerLeadingTitleLabel;	// 24 = 0x18
    TLKLabel *_centerTrailingTitleLabel;	// 32 = 0x20
    TLKStackView *_titleStackView;	// 40 = 0x28
}

+ (double)widthForString:(id)arg1 font:(id)arg2;	// IMP=0x00600000000134ef
- (void).cxx_destruct;	// IMP=0x0000000000013714
@property _Bool useLargeTitle; // @synthesize useLargeTitle=_useLargeTitle;
@property(retain, nonatomic) TLKStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) TLKLabel *centerTrailingTitleLabel; // @synthesize centerTrailingTitleLabel=_centerTrailingTitleLabel;
@property(retain, nonatomic) TLKLabel *centerLeadingTitleLabel; // @synthesize centerLeadingTitleLabel=_centerLeadingTitleLabel;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)titleFont;	// IMP=0x00000000000135f2
- (_Bool)titleLabelsFitInWidth:(double)arg1 pointSize:(double)arg2;	// IMP=0x0000000000013337
- (void)layoutSubviews;	// IMP=0x00000000000130ac
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000012cb1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000012c5f
- (id)init;	// IMP=0x0000000000012a60

@end

