//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHealthStore.h>

@interface HKHealthStore (CompanionHealth)
- (void)ch_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016f18
- (void)ch_fetchBodyMassBeforeDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016d93
- (void)ch_calculateBMRForDate:(id)arg1 useEndOfDay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016a23
@end
