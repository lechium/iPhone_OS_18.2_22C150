//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDisplayTypeController, HKUnitPreferenceController, NSCalendar;

__attribute__((visibility("hidden")))
@interface _ActivitySourceDelegate : NSObject
{
    long long _activityValue;	// 8 = 0x8
    HKDisplayTypeController *_displayTypeController;	// 16 = 0x10
    HKUnitPreferenceController *_unitPreferenceController;	// 24 = 0x18
    NSCalendar *_currentCalendar;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002ad9fb
@property(readonly, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
@property(readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
- (id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(_Bool)arg8;	// IMP=0x00000000002ad7ac
- (id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2;	// IMP=0x00000000002ad6c8
- (id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3;	// IMP=0x00000000002ad36e
- (void)setUpdateDelegate:(id)arg1;	// IMP=0x00000000002ad2f4
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000002ad272
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000002ad06c
- (double)_intervalSpanForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3;	// IMP=0x00000000002acf49
- (id)initWithActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;	// IMP=0x00000000002ace7f

@end
