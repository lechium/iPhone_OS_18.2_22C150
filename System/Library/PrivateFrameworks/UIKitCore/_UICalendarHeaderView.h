//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDateFormatter, NSString, UIButton, _UICalendarDataModel, _UICalendarHeaderTitleButton;
@protocol _UICalendarHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface _UICalendarHeaderView : UIView
{
    NSDateFormatter *_longFormatter;	// 8 = 0x8
    NSDateFormatter *_shortFormatter;	// 16 = 0x10
    _UICalendarHeaderTitleButton *_monthYearButton;	// 24 = 0x18
    UIButton *_previousMonthButton;	// 32 = 0x20
    UIButton *_nextMonthButton;	// 40 = 0x28
    _Bool _expanded;	// 48 = 0x30
    id <_UICalendarHeaderViewDelegate> _delegate;	// 56 = 0x38
    _UICalendarDataModel *_dataModel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000191d155
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <_UICalendarHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateMonthButtonVisibility;	// IMP=0x000000000191d086
- (void)_updateMonthButtonEnablement;	// IMP=0x000000000191cf10
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000191cce8
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000191cb01
- (void)setExpanded:(_Bool)arg1;	// IMP=0x000000000191caed
- (void)_adjustMonth:(id)arg1;	// IMP=0x000000000191ca7a
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x000000000191c808
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000191c7f6
- (void)layoutSubviews;	// IMP=0x000000000191c382
- (void)_updateFont;	// IMP=0x000000000191c307
- (void)_updateMonthYearLabel;	// IMP=0x000000000191c159
- (void)tintColorDidChange;	// IMP=0x000000000191c10b
- (void)didMoveToWindow;	// IMP=0x000000000191c09d
- (void)didUpdateDateRange;	// IMP=0x000000000191c08b
- (void)didUpdateFontDesign;	// IMP=0x000000000191c079
- (void)didUpdateVisibleMonth;	// IMP=0x000000000191c04b
- (void)didUpdateTimeZone;	// IMP=0x000000000191c01d
- (void)didUpdateLocale;	// IMP=0x000000000191bfef
- (void)didUpdateCalendar;	// IMP=0x000000000191bfc1
- (void)_setupViewHierarchy;	// IMP=0x000000000191baf6
- (void)_setupDateFormatter;	// IMP=0x000000000191b91d
- (id)initWithDataModel:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000191b768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

