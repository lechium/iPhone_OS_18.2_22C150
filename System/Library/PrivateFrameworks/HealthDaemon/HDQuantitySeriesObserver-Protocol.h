//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProfile, HKQuantityType;

@protocol HDQuantitySeriesObserver <NSObject>
- (void (^)(HKQuantity *, HKQuantityType *, NSDateInterval *, HKQuantitySample *, NSNumber *, _Bool))transactionalQuantityInsertHandlerForProfile:(HDProfile *)arg1 journaled:(_Bool)arg2 count:(long long)arg3;
- (void)profile:(HDProfile *)arg1 didDiscardSeriesOfType:(HKQuantityType *)arg2;
@end

