//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class TLKLabel, TLKStackView;

__attribute__((visibility("hidden")))
@interface TLKSelectableGridButton : UIButton
{
    _Bool _customHighlight;	// 8 = 0x8
    TLKLabel *_topLabel;	// 16 = 0x10
    TLKLabel *_bottomLabel;	// 24 = 0x18
    TLKStackView *_stackView;	// 32 = 0x20
}

+ (id)selectableGridButton;	// IMP=0x006000000002da92
- (void).cxx_destruct;	// IMP=0x000000000002e217
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) TLKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) TLKLabel *topLabel; // @synthesize topLabel=_topLabel;
- (void)layoutSubviews;	// IMP=0x000000000002e112
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002e0a8
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000002e03a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002dfcc
- (void)setTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000002df0f
@property(nonatomic) _Bool customHighlight;
- (void)tlk_updateForAppearance:(id)arg1;	// IMP=0x000000000002de1c
- (void)didMoveToWindow;	// IMP=0x000000000002dddb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002dce4

@end

