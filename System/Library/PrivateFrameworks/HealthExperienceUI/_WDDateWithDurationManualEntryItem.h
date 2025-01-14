//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface _WDDateWithDurationManualEntryItem
{
    WDAddDataManualEntryItem *_startItem;	// 40 = 0x28
    WDAddDataManualEntryItem *_durationItem;	// 48 = 0x30
    NSDate *_maximumStartDate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000ade5
- (void)beginEditing;	// IMP=0x000000000000adc8
- (id)generateValue;	// IMP=0x000000000000ace8
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ac5e
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x000000000000ac4c
- (void)_setupEntryItems;	// IMP=0x000000000000a9fb
- (id)tableViewCells;	// IMP=0x000000000000a969
- (id)initWithMaximumDate:(id)arg1;	// IMP=0x000000000000a8eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

