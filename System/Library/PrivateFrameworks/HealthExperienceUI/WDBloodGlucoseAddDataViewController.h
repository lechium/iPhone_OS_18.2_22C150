//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDBloodGlucoseAddDataViewController
{
    WDAddDataManualEntrySpinner *_mealTimeEntryItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000d95a
@property(retain, nonatomic) WDAddDataManualEntrySpinner *mealTimeEntryItem; // @synthesize mealTimeEntryItem=_mealTimeEntryItem;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;	// IMP=0x000000000000d8a0
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;	// IMP=0x000000000000d895
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x000000000000d7cb
- (id)defaultMetadata;	// IMP=0x000000000000d6a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
