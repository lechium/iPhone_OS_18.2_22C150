//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKDateTimeCell, NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;
@protocol EKEventDateEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem
{
    NSDateComponents *_startComponents;	// 32 = 0x20
    NSDateComponents *_endComponents;	// 40 = 0x28
    _Bool _timedEventEndedAtMidnight;	// 48 = 0x30
    _Bool _allDay;	// 49 = 0x31
    NSTimeZone *_startTimeZone;	// 56 = 0x38
    NSTimeZone *_endTimeZone;	// 64 = 0x40
    _Bool _showTimeZones;	// 72 = 0x48
    _Bool _needsTargetedReload;	// 73 = 0x49
    EKDateTimeCell *_modernStartDateCell;	// 80 = 0x50
    EKDateTimeCell *_modernEndDateCell;	// 88 = 0x58
    PreferencesTwoPartValueCell *_classicStartDateCell;	// 96 = 0x60
    PreferencesTwoPartValueCell *_classicEndDateCell;	// 104 = 0x68
    int _shorteningStatus;	// 112 = 0x70
    UITableViewCell *_allDayCell;	// 120 = 0x78
    UITableViewCell *_startTimeZoneCell;	// 128 = 0x80
    UITableViewCell *_endTimeZoneCell;	// 136 = 0x88
    UITableViewCell *_startDatePickerCell;	// 144 = 0x90
    UITableViewCell *_endDatePickerCell;	// 152 = 0x98
    long long _selectedSubitem;	// 160 = 0xa0
    long long _currentPickerMode;	// 168 = 0xa8
    UIDatePicker *_startDatePicker;	// 176 = 0xb0
    UIDatePicker *_endDatePicker;	// 184 = 0xb8
    _Bool _endTimeWasMessedUp;	// 192 = 0xc0
    _Bool _changingDate;	// 193 = 0xc1
    _Bool _showingInlineDatePicker;	// 194 = 0xc2
    _Bool _modifyingVisibleControls;	// 195 = 0xc3
    _Bool _pushingTZController;	// 196 = 0xc4
    long long _targetedSubitemForTimezone;	// 200 = 0xc8
    NSArray *_startPickerConstraints;	// 208 = 0xd0
    NSArray *_endPickerConstraints;	// 216 = 0xd8
    _Bool _showsAllDay;	// 224 = 0xe0
    _Bool _proposedTime;	// 225 = 0xe1
    NSDate *_pendingProposedTime;	// 232 = 0xe8
    id <EKEventDateEditItemDelegate> _eventDateEditItemDelegate;	// 240 = 0xf0
}

+ (id)_timeZoneLocalizedString;	// IMP=0x001000000000b441
- (void).cxx_destruct;	// IMP=0x000000000000f7ee
@property(nonatomic) __weak id <EKEventDateEditItemDelegate> eventDateEditItemDelegate; // @synthesize eventDateEditItemDelegate=_eventDateEditItemDelegate;
@property(retain, nonatomic) NSDate *pendingProposedTime; // @synthesize pendingProposedTime=_pendingProposedTime;
@property(nonatomic) _Bool proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool showsAllDay; // @synthesize showsAllDay=_showsAllDay;
- (_Bool)_shouldShowTimeZone;	// IMP=0x000000000000f715
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;	// IMP=0x000000000000f692
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000000f5c7
- (id)_dateInSystemCalendarFromComponents:(id)arg1;	// IMP=0x000000000000f549
- (id)_timeZoneDescription:(id)arg1;	// IMP=0x000000000000f4cf
- (void)_allDayChanged:(id)arg1;	// IMP=0x000000000000f45c
- (void)dateChanged:(id)arg1 forSubitem:(long long)arg2;	// IMP=0x000000000000f1d0
- (void)_datePickerEndedEditing:(id)arg1;	// IMP=0x000000000000f1be
- (void)_datePickerChanged:(id)arg1;	// IMP=0x000000000000f134
- (void)_updateDatePicker:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ee3d
- (_Bool)_endDateIsBeforeStartDate;	// IMP=0x000000000000ec64
- (void)_resetStartString:(_Bool)arg1 endString:(_Bool)arg2;	// IMP=0x000000000000ea8e
- (void)_resetClassicStartString:(_Bool)arg1 endString:(_Bool)arg2;	// IMP=0x000000000000e6a7
- (void)_pickNextReasonableTime;	// IMP=0x000000000000e499
- (void)_hideInlineDateControls;	// IMP=0x000000000000e2e5
- (void)_showInlineControls:(long long)arg1 forSubitem:(long long)arg2 includingInlineDatePicker:(_Bool)arg3;	// IMP=0x000000000000dae4
- (void)dateTimeCellEndedEditing:(id)arg1;	// IMP=0x000000000000da98
- (void)dateTimeCellBeganEditing:(id)arg1;	// IMP=0x000000000000da6e
- (void)dateTimeCell:(id)arg1 dateChanged:(id)arg2;	// IMP=0x000000000000da43
- (void)dateTimeCellTimeTapped:(id)arg1;	// IMP=0x000000000000da16
- (void)dateTimeCellDateTapped:(id)arg1;	// IMP=0x000000000000d9e6
- (void)_setEndTimeZone:(id)arg1;	// IMP=0x000000000000d960
- (void)_setStartTimeZone:(id)arg1;	// IMP=0x000000000000d8da
- (void)_validateTimezones;	// IMP=0x000000000000d7c0
- (void)_adjustEndDateIfNeededAfterTogglingAllDay;	// IMP=0x000000000000d74d
- (void)_setAllDay:(_Bool)arg1;	// IMP=0x000000000000d4f7
- (void)_setEndDate:(id)arg1;	// IMP=0x000000000000d3b3
- (void)_setStartDate:(id)arg1;	// IMP=0x000000000000d2cb
- (void)timeZoneViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000d274
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;	// IMP=0x000000000000d0c5
- (void)shortenCell:(id)arg1;	// IMP=0x000000000000cf03
- (void)_updateClassicDateCellColors;	// IMP=0x000000000000cbb8
- (void)_updateClassicDateCellTimeWidths;	// IMP=0x000000000000ca50
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000000c997
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000000c580
- (id)_calendarForEventComponents:(_Bool)arg1;	// IMP=0x000000000000c475
- (void)endInlineEditing;	// IMP=0x000000000000c454
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;	// IMP=0x000000000000c3d4
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x000000000000c3ba
- (_Bool)handleClassicSubitemSelection:(long long)arg1;	// IMP=0x000000000000c0e7
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000000bf35
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000000bee9
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x000000000000bda4
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000baee
- (void)setupPickerConstraintsForCell:(id)arg1 datePicker:(id)arg2;	// IMP=0x000000000000b880
- (id)_endDatePickerCell;	// IMP=0x000000000000b780
- (id)_startDatePickerCell;	// IMP=0x000000000000b680
- (void)adjustDatePickerInterval:(id)arg1;	// IMP=0x000000000000b5a2
- (id)_newDatePicker;	// IMP=0x000000000000b499
- (id)_endTimeZoneCell;	// IMP=0x000000000000b361
- (id)_startTimeZoneCell;	// IMP=0x000000000000b281
- (id)_allDayCell;	// IMP=0x000000000000b13c
- (id)_classicEndDateCell;	// IMP=0x000000000000ae2f
- (id)_classicStartDateCell;	// IMP=0x000000000000ab22
- (id)_modernEndDateCell;	// IMP=0x000000000000aa3b
- (id)_modernStartDateCell;	// IMP=0x000000000000a954
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000000a8d8
- (long long)_subitemForRow:(long long)arg1;	// IMP=0x000000000000a80a
- (long long)_rowForSubitem:(long long)arg1;	// IMP=0x000000000000a79d
- (_Bool)isInline;	// IMP=0x000000000000a795
- (unsigned long long)onSaveEditItemsToRefresh;	// IMP=0x000000000000a695
- (unsigned long long)onSaveEditorReloadBehavior;	// IMP=0x000000000000a67e
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x000000000000a4ee
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;	// IMP=0x000000000000a4e6
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;	// IMP=0x000000000000a422
- (void)_refreshDatePicker;	// IMP=0x000000000000a3c4
- (void)updateStartDateToDate:(id)arg1;	// IMP=0x000000000000a308
- (void)refreshFromCalendarItemAndStore;	// IMP=0x0000000000009eed
- (_Bool)usesClassicUI;	// IMP=0x0000000000009ed6
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000009d9c
- (id)init;	// IMP=0x0000000000009ced

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

