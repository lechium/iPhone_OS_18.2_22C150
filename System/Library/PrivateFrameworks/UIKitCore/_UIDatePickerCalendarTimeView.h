//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSCalendar, NSLocale, NSString, UILabel, _UIDatePickerCalendarTime, _UIDatePickerCompactTimeLabel, _UIDatePickerOverlayPresentation;
@protocol _UIDatePickerCalendarTimeViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeView : UIView
{
    _Bool _showsTimeLabel;	// 8 = 0x8
    _Bool _followsSystemHourCycle;	// 9 = 0x9
    NSString *_timeLocaleIdentifier;	// 16 = 0x10
    NSArray *_clockLayoutConstraints;	// 24 = 0x18
    _UIDatePickerOverlayPresentation *_presentation;	// 32 = 0x20
    _Bool _roundsToMinuteInterval;	// 40 = 0x28
    _Bool _shouldShowTimeLabel;	// 41 = 0x29
    id <_UIDatePickerCalendarTimeViewDelegate> _delegate;	// 48 = 0x30
    NSCalendar *_calendar;	// 56 = 0x38
    NSLocale *_locale;	// 64 = 0x40
    NSString *_customFontDesign;	// 72 = 0x48
    long long _minuteInterval;	// 80 = 0x50
    _UIDatePickerCalendarTime *_selectedTime;	// 88 = 0x58
    UILabel *_timeLabel;	// 96 = 0x60
    _UIDatePickerCompactTimeLabel *_timeTextField;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000091b6c3
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool shouldShowTimeLabel; // @synthesize shouldShowTimeLabel=_shouldShowTimeLabel;
@property(readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) _Bool roundsToMinuteInterval; // @synthesize roundsToMinuteInterval=_roundsToMinuteInterval;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(copy, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x000000000091b5a0
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000091b598
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x000000000091b54c
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x000000000091b500
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x000000000091b4b4
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x000000000091b411
- (void)_updateFonts;	// IMP=0x000000000091b0a9
- (void)setSelectedDate:(id)arg1;	// IMP=0x000000000091aef4
- (void)_updateTimeLabelTitleIfNeeded;	// IMP=0x000000000091ad7b
- (void)_updateTextFieldsFromSelectedDateComponents;	// IMP=0x000000000091acee
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedDate:(id)arg3 followsSystemHourCycle:(_Bool)arg4;	// IMP=0x000000000091ab19
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedDate:(id)arg3;	// IMP=0x000000000091ab04
- (void)_reload;	// IMP=0x000000000091aa82
- (void)_reloadDateFormatters;	// IMP=0x000000000091a9bb
- (void)tintColorDidChange;	// IMP=0x000000000091a833
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000091a74a
- (id)primaryFirstResponder;	// IMP=0x000000000091a738
- (void)_updateClockLayout;	// IMP=0x000000000091a1c9
- (void)_setupViewHierarchy;	// IMP=0x0000000000919a3e
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000009199b1
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000919924
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009197cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
