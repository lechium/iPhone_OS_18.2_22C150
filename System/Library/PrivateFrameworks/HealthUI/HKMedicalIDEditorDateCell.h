//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKMedicalIDEditorCell.h"

@class NSDate, UIDatePicker;

__attribute__((visibility("hidden")))
@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell
{
    UIDatePicker *_picker;	// 8 = 0x8
    NSDate *_dateValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000164021
@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
- (void)commitEditing;	// IMP=0x0000000000163ffe
- (void)beginEditing;	// IMP=0x0000000000163fbd
- (void)_dateChanged:(id)arg1;	// IMP=0x0000000000163f67
- (void)_hideDatePicker;	// IMP=0x0000000000163f2a
- (void)_showDatePicker;	// IMP=0x0000000000163e88
- (void)_configureDatePicker;	// IMP=0x0000000000163c8b
- (id)formattedValue;	// IMP=0x0000000000163b95

@end

