//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUILibraryProductInfoView : UIView
{
    NSArray *_infos;	// 8 = 0x8
    NSArray *_groupedInfos;	// 16 = 0x10
    NSArray *_normalizedGroupedInfos;	// 24 = 0x18
    double _lineSpacing;	// 32 = 0x20
    UIView *_headerView;	// 40 = 0x28
    UIView *_footerView;	// 48 = 0x30
    struct UIEdgeInsets _headerMargin;	// 56 = 0x38
    struct UIEdgeInsets _footerMargin;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006422b
@property(nonatomic) struct UIEdgeInsets footerMargin; // @synthesize footerMargin=_footerMargin;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) struct UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSArray *normalizedGroupedInfos; // @synthesize normalizedGroupedInfos=_normalizedGroupedInfos;
@property(copy, nonatomic) NSArray *groupedInfos; // @synthesize groupedInfos=_groupedInfos;
@property(copy, nonatomic) NSArray *infos; // @synthesize infos=_infos;
- (unsigned long long)_columnCount;	// IMP=0x0000000000064051
@property(readonly, nonatomic) struct UIEdgeInsets padding;
@property(readonly, nonatomic) long long maxLineCount;
@property(readonly, nonatomic) double interitemSpacing;
- (double)_sectionInfoWidth;	// IMP=0x0000000000063d6c
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect)arg2;	// IMP=0x0000000000063acc
- (double)_maxWidthForGroupInfos:(id)arg1;	// IMP=0x0000000000063aba
- (_Bool)useNormalizedGroupLayout;	// IMP=0x0000000000063aa0
- (id)_getNormalizedGroupedInfos;	// IMP=0x0000000000063a52
- (void)layoutSubviews;	// IMP=0x0000000000062416
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000061627
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000615d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000060a6c

@end
