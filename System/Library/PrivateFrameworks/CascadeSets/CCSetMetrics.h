//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CCSetMetrics : NSObject
{
}

+ (void)reportAnalyticsEvent:(id)arg1 withName:(id)arg2;	// IMP=0x0080000000039fd0
+ (_Bool)shouldReportAnalyticsEventWithName:(id)arg1;	// IMP=0x0080000000039fc3
+ (double)_populationStandardDeviation:(shared_ptr_8f313438)arg1 mean:(double)arg2;	// IMP=0x0080000000039f5b
+ (id)_computeMetricsForSet:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0080000000039a9a
+ (void)computeAndReportMetricsForAllSets:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x0080000000039392
- (id)init;	// IMP=0x000000000003932e

@end
