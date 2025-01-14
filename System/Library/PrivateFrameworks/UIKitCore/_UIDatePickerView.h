//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPickerView.h"

@class NSCalendar, NSLocale, NSString, UIColor, UIDatePicker, UIFont, UILabel, _UIControlEventsGestureRecognizer, _UIDatePickerDataModel, _UIDatePickerMode, _UIDatePickerNumericKeyboardViewController, _UIDatePickerWheelsTimeLabel, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView : UIPickerView
{
    long long _loadingDate;	// 232 = 0xe8
    _Bool _allowsZeroTimeInterval;	// 240 = 0xf0
    _UIDatePickerMode *_mode;	// 248 = 0xf8
    UILabel *_hourLabel;	// 256 = 0x100
    UILabel *_minuteLabel;	// 264 = 0x108
    int _expectedAMPM;	// 272 = 0x110
    struct {
        unsigned int staggerTimeIntervals:1;
        unsigned int loadingDateOrTime:1;
        unsigned int highlightsToday:1;
        unsigned int usesBlackChrome:1;
        unsigned int updatingWithKeyInput:1;
        unsigned int isPendingManualKeyboardPresentation:1;
        unsigned int isPresentingManualKeyboard:1;
        unsigned int selectionBarTableHidden:1;
        unsigned int receivedTextInputUpdate:1;
        unsigned int isPresentingOrDismissingKeyboard:1;
    } _datePickerFlags;	// 276 = 0x114
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 280 = 0x118
    UIDatePicker *_datePicker;	// 288 = 0x120
    _UIDatePickerDataModel *_data;	// 296 = 0x128
    _UIDatePickerNumericKeyboardViewController *_numericKeyboardViewController;	// 304 = 0x130
    _UIDatePickerWheelsTimeLabel *_timeInputLabel;	// 312 = 0x138
    _UIControlEventsGestureRecognizer *_controlEventsGestureRecognizer;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000000012baa49
@property(readonly, nonatomic) _UIControlEventsGestureRecognizer *controlEventsGestureRecognizer; // @synthesize controlEventsGestureRecognizer=_controlEventsGestureRecognizer;
@property(readonly, nonatomic) _UIDatePickerWheelsTimeLabel *timeInputLabel; // @synthesize timeInputLabel=_timeInputLabel;
@property(readonly, nonatomic) _UIDatePickerNumericKeyboardViewController *numericKeyboardViewController; // @synthesize numericKeyboardViewController=_numericKeyboardViewController;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (long long)datePickerMode;	// IMP=0x00000000012ba9bb
@property(readonly, nonatomic, getter=_hrMinFont) UIFont *hrMinFont; // @dynamic hrMinFont;
- (id)_hoursStringForHour:(long long)arg1;	// IMP=0x00000000012ba8b3
- (id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2;	// IMP=0x00000000012ba805
- (long long)_selectionBarRowInComponent:(long long)arg1;	// IMP=0x00000000012ba7c1
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (_Bool)hasDefaultSize;	// IMP=0x00000000012ba71f
- (_Bool)_updateDateOrTime;	// IMP=0x00000000012ba6dc
@property(readonly, nonatomic, getter=_amPmValue) long long amPmValue; // @dynamic amPmValue;
- (id)_existingLabelForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012ba658
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012ba5d1
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012ba4d3
@property(nonatomic) _Bool highlightsToday; // @dynamic highlightsToday;
- (_Bool)staggerTimeIntervals;	// IMP=0x00000000012ba492
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000012ba480
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x00000000012ba427
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x00000000012ba36e
- (void)_dismissManualKeyboard;	// IMP=0x00000000012ba1ed
- (void)_hardwareKeyboardAvailabilityChanged:(id)arg1;	// IMP=0x00000000012ba10f
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x00000000012ba0cb
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x00000000012b9f60
@property(nonatomic) _Bool passthroughInteractionEnabled;
- (void)wheelsTimeLabel:(id)arg1 didChangeVisibility:(_Bool)arg2;	// IMP=0x00000000012b9e59
- (_Bool)wheelsTimeLabelShouldReceiveInteraction:(id)arg1;	// IMP=0x00000000012b9d22
- (void)_updateWheelsLabelForCurrentDateComponents;	// IMP=0x00000000012b9c53
- (void)timeLabelDidEndEditing:(id)arg1;	// IMP=0x00000000012b9bdf
- (void)timeLabelDidBeginEditing:(id)arg1;	// IMP=0x00000000012b9b93
- (void)timeLabelDidResignFirstResponder:(id)arg1;	// IMP=0x00000000012b9b72
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;	// IMP=0x00000000012b9b4a
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000000012b9837
- (id)primaryFirstResponder;	// IMP=0x00000000012b9825
- (unsigned long long)_permittedArrowDirectionForKeyboardPopover;	// IMP=0x00000000012b964e
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x00000000012b9520
- (_Bool)timeLabelCanBecomeFirstResponder:(id)arg1;	// IMP=0x00000000012b950b
- (_Bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;	// IMP=0x00000000012b94b8
- (long long)keyboardTypeForTimeLabel:(id)arg1;	// IMP=0x00000000012b945a
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;	// IMP=0x00000000012b9446
- (_Bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;	// IMP=0x00000000012b943e
- (void)_updateWheelsForUpdatedTextInputWithForcedUpdate:(_Bool)arg1;	// IMP=0x00000000012b8d51
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x00000000012b8c52
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000012b8a10
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000012b88f2
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000012b87ae
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000012b8740
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x00000000012b862b
- (void)_uninstallTimeInputLabelIfNeeded;	// IMP=0x00000000012b84ab
- (void)_installTimeInputLabelIfNeeded;	// IMP=0x00000000012b814d
- (struct CGRect)_currentTimeInputLabelFrame;	// IMP=0x00000000012b80c3
- (id)_currentTimeFormat;	// IMP=0x00000000012b800d
- (_Bool)_shouldInstallTimeInputLabelForDatePickerMode:(long long)arg1;	// IMP=0x00000000012b7ffd
- (void)_updateTimeInputLabelConfiguration;	// IMP=0x00000000012b7fa4
- (void)_hidePickerViewSelectionBarForTimeInputLabel:(_Bool)arg1;	// IMP=0x00000000012b7e7d
- (void)_updateTimeInputLabelPosition;	// IMP=0x00000000012b7c5d
- (id)_viewForSelectedRowInComponent:(long long)arg1;	// IMP=0x00000000012b7bc2
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome;
- (void)_setHidesLabels:(_Bool)arg1;	// IMP=0x00000000012b7a44
- (void)_resetSelectionOfTables;	// IMP=0x00000000012b7a3e
- (void)layoutSubviews;	// IMP=0x00000000012b7925
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000012b7856
- (id)shadowColor;	// IMP=0x00000000012b7844
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x00000000012b76e3
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x00000000012b75c9
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x00000000012b75ac
@property(readonly, nonatomic) double contentWidth; // @dynamic contentWidth;
@property(nonatomic) double timeInterval;
- (void)_updateEnabledCellsIncludingWMDCells:(_Bool)arg1;	// IMP=0x00000000012b7182
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000012b716e
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000012b6e72
- (void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000012b6abb
- (void)_updateTextColorForCalendarUnitLabel:(id)arg1;	// IMP=0x00000000012b6a52
- (id)_makeNewCalendarUnitLabel;	// IMP=0x00000000012b6915
- (id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1;	// IMP=0x00000000012b68f0
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4;	// IMP=0x00000000012b6384
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000012b62e6
- (id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x00000000012b61e2
- (void)_UIAppearance_setTextColor:(id)arg1;	// IMP=0x00000000012b61d0
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
- (void)_removeUnitLabels;	// IMP=0x00000000012b611d
- (void)_updateLabelColors;	// IMP=0x00000000012b6056
- (void)_updateLabels:(_Bool)arg1;	// IMP=0x00000000012b5f59
- (_Bool)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1;	// IMP=0x00000000012b5d43
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2;	// IMP=0x00000000012b5c8f
- (int)_selectedMinuteForColumn:(int)arg1;	// IMP=0x00000000012b5c53
- (int)_selectedHourForColumn:(int)arg1;	// IMP=0x00000000012b5c17
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;	// IMP=0x00000000012b5bc3
- (void)_loadDateAnimated:(_Bool)arg1;	// IMP=0x00000000012b5b33
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000012b5b13
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00000000012b5651
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000012b55f1
- (void)didChangeMinuteInterval;	// IMP=0x00000000012b5533
- (void)didChangeMode;	// IMP=0x00000000012b543f
- (void)_setMode:(id)arg1;	// IMP=0x00000000012b5221
@property(readonly, nonatomic, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000012b51e7
- (void)_updateDateForNewDateRange;	// IMP=0x00000000012b5192
- (void)didChangeMaximumDate;	// IMP=0x00000000012b5180
- (void)didChangeMinimumDate;	// IMP=0x00000000012b516e
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x00000000012b5168
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000012b4f59
- (void)_updateLocaleTimeZoneOrCalendar;	// IMP=0x00000000012b4e6b
- (void)didChangeCalendar;	// IMP=0x00000000012b4e59
- (void)didChangeTimeZone;	// IMP=0x00000000012b4e47
- (void)didChangeLocale;	// IMP=0x00000000012b4e35
@property(readonly, nonatomic) long long datePickerStyle;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x00000000012b467b
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x00000000012b4673
- (_Bool)_showingDate;	// IMP=0x00000000012b4621
- (void)_doneLoadingDateOrTime;	// IMP=0x00000000012b45fa
- (double)_tableRowHeight;	// IMP=0x00000000012b45dd
- (void)didReset;	// IMP=0x00000000012b45cb
- (void)didChangeToday;	// IMP=0x00000000012b4579
- (void)_disableCustomKeyboardIfNecessary;	// IMP=0x00000000012b44ef
- (void)_enableCustomKeyboardIfNecessary;	// IMP=0x00000000012b4468
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000012b43e9
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000012b436a
- (void)dealloc;	// IMP=0x00000000012b42e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012b40f1

// Remaining properties
@property(readonly, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property(readonly) Class superclass;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;

@end

