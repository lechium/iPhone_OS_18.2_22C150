//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKHealthQueryChartCacheDataSource.h"

@class MISSING_TYPE;

@interface HKBalanceChartDataSource : HKHealthQueryChartCacheDataSource
{
    MISSING_TYPE *debugIdentifier;	// 8 = 0x8
    MISSING_TYPE *gregorianCalendar;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000040a0b0
- (id)init;	// IMP=0x000000000040a050
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;	// IMP=0x0000000000409640
- (id)queriesForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004094c0
- (_Bool)supportsChartQueryDataGeneration;	// IMP=0x0000000000407f40
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;	// IMP=0x0000000000407ee0
- (id)queryCalendar;	// IMP=0x0000000000407eb0
- (id)queryDescription;	// IMP=0x0000000000407df0
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000000407960

@end
