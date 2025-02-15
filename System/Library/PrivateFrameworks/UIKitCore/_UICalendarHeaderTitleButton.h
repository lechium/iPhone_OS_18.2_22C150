//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSString, UIImageView, _UIDatePickerLinkedLabel;

__attribute__((visibility("hidden")))
@interface _UICalendarHeaderTitleButton : UIButton
{
    _UIDatePickerLinkedLabel *_monthYearLabel;	// 8 = 0x8
    UIImageView *_chevron;	// 16 = 0x10
    NSString *_fontDesign;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001b31ad0
@property(copy, nonatomic) NSString *fontDesign; // @synthesize fontDesign=_fontDesign;
- (void)_updateFont;	// IMP=0x0000000001b3191d
- (void)_updateChevron;	// IMP=0x0000000001b317d2
- (void)layoutSubviews;	// IMP=0x0000000001b31359
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001b311fb
- (void)didMoveToWindow;	// IMP=0x0000000001b3118d
- (void)updateTitles:(id)arg1 isExpanded:(_Bool)arg2;	// IMP=0x0000000001b3104c
@property(nonatomic) struct CGAffineTransform chevronTransform;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000001b30f46
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001b30e31

@end

