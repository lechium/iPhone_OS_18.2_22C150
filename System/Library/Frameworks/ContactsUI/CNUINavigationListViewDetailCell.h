//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewDetailCell
{
    long long _contentAlignment;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x006000000015947a
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;	// IMP=0x006000000015920b
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;	// IMP=0x006000000015917c
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;	// IMP=0x00600000001590ed
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;	// IMP=0x006000000015905e
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
- (void)applyStyle;	// IMP=0x0000000000159001
- (void)updateConstraints;	// IMP=0x0000000000158dfa
- (void)loadContentViewConstraints;	// IMP=0x00000000001589fb
- (void)setupAccessoryImageViewInView:(id)arg1;	// IMP=0x00000000001588d3
- (double)titleLabelFirstBaselineAnchorConstraintConstant;	// IMP=0x0000000000158871
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;	// IMP=0x000000000015880f
- (double)contentViewBottomAnchorConstraintConstant;	// IMP=0x00000000001587ad
- (double)minimumContentHeight;	// IMP=0x000000000015875e

@end
