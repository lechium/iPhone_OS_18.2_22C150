//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC15RemindersUICore25TTRIQuickBarQuickPickView : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *contentTitle;	// 24 = 0x18
    MISSING_TYPE *items;	// 40 = 0x28
    MISSING_TYPE *needsUpdateItemImages;	// 48 = 0x30
    MISSING_TYPE *stackView;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_titleLabel;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_titleLabelTopToViewTopConstraint;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_viewTopToQuickPickStackViewTopConstraint;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_quickPickStackViewTopToTitleLabelLastBaselineConstraint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000266cd0
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)itemAction:(id)arg1;	// IMP=0x0000000000266ac0
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000265f30
- (void)layoutSubviews;	// IMP=0x0000000000265f00
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002658b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000265760

@end
