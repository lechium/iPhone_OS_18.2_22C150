//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9Reminders25TTRIAccountsListsBaseCell : NUITableViewContainerCell
{
    MISSING_TYPE *ttriAccessibilityCount;	// 8 = 0x8
    MISSING_TYPE *ttriAccessibilityGroupName;	// 24 = 0x18
    MISSING_TYPE *treeCellViewModel;	// 40 = 0x28
    MISSING_TYPE *treeCellViewDelegate;	// 96 = 0x60
    MISSING_TYPE *delegate;	// 112 = 0x70
    MISSING_TYPE *iconContainerView;	// 128 = 0x80
    MISSING_TYPE *leadingControl;	// 136 = 0x88
    MISSING_TYPE *unitTest_forceLargeTextLayout;	// 144 = 0x90
    MISSING_TYPE *ttriAccessibilityAdditionalLabelAttributes;	// 152 = 0x98
    MISSING_TYPE *titleLabel;	// 160 = 0xa0
    MISSING_TYPE *subtitleLabel;	// 168 = 0xa8
    MISSING_TYPE *customAccessoryView;	// 176 = 0xb0
    MISSING_TYPE *totalIndentation;	// 184 = 0xb8
    MISSING_TYPE *needsUpdateGridSubviewRows;	// 193 = 0xc1
    MISSING_TYPE *$__lazy_storage_$_fillerView;	// 200 = 0xc8
}

+ (Class)containerViewClass;	// IMP=0x0040000000435cf0
- (void).cxx_destruct;	// IMP=0x0020000000437360
- (_Bool)ttriAccessibilityIsSpeakThisElement;	// IMP=0x00100000004371e0
- (_Bool)accessibilityActivate;	// IMP=0x0010000000437140
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000004369b0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000436800
- (void)layoutSubviews;	// IMP=0x0010000000436790
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000004366f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004366d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000004366a0
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;	// IMP=0x0010000000437800

@end

