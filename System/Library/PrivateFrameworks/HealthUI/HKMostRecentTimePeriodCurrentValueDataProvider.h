//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HKMostRecentTimePeriodCurrentValueDataProvider
{
}

- (void)_totalDurationFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001409f8
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001407c6
- (id)_queryDateRangeFromSampleDate:(id)arg1;	// IMP=0x0000000000140608
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000140496
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000140266
- (id)currentValue;	// IMP=0x0000000000140254

@end
