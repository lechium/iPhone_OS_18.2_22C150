//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear
{
}

+ (long long)datePickerMode;	// IMP=0x00800000012b03ba
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;	// IMP=0x00000000012b07fe
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x00000000012b078f
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(_Bool)arg2;	// IMP=0x00000000012b067e
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x00000000012b0519
- (long long)yearForRow:(long long)arg1;	// IMP=0x00000000012b0495
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x00000000012b040d
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012b03c5

@end
