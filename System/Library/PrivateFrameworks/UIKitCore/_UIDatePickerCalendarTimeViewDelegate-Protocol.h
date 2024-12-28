//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIDatePicker, _UIDatePickerCalendarTime, _UIDatePickerCalendarTimeView;

@protocol _UIDatePickerCalendarTimeViewDelegate <NSObject>
- (UIDatePicker *)createDatePickerForTimeView:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeViewDidEndEditing:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeViewDidBeginEditing:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeViewWillBecomeFirstResponder:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeView:(_UIDatePickerCalendarTimeView *)arg1 didSelectTime:(_UIDatePickerCalendarTime *)arg2;
@end
