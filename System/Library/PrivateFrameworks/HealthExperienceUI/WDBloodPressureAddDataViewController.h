//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDAddDataViewController.h"

@class NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDBloodPressureAddDataViewController : WDAddDataViewController
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;	// 48 = 0x30
    WDAddDataManualEntryItem *_systolicEntryItem;	// 56 = 0x38
    WDAddDataManualEntryItem *_diastolicEntryItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000123d2
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x0000000000012091
- (_Bool)_systolicAndDiastolicHaveValues;	// IMP=0x000000000001200c
- (id)generateHKObjects;	// IMP=0x0000000000011c13
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011619
- (id)defaultEditingItem;	// IMP=0x0000000000011604
- (long long)numberOfSections;	// IMP=0x00000000000115f9
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x0000000000011570
- (void)viewDidLoad;	// IMP=0x000000000001152d
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;	// IMP=0x0000000000011259

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

