//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostSupportObjectExtractor.h>

@interface SignpostSupportObjectExtractor (Notifications)
+ (_Bool)dateRangeOfLogArchiveWithPath:(id)arg1 startDateOut:(id *)arg2 endDateOut:(id *)arg3 errorOut:(id *)arg4;	// IMP=0x0020000000002f5e
+ (id)_eventSourceForPath:(id)arg1 errorOut:(id *)arg2;	// IMP=0x002000000000292b
+ (_Bool)getDataSourceDateRange:(id)arg1 earliestDateOut:(id *)arg2 latestDateOut:(id *)arg3 errorsOut:(id *)arg4;	// IMP=0x00200000000032f1
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 shouldCalculateAnimationFramerate:(_Bool)arg2 targetQueue:(id)arg3 errorOut:(id *)arg4;	// IMP=0x0010000000001ee2
- (void)_processStreamedOSLogEventProxy:(id)arg1 shouldCalculateFramerate:(_Bool)arg2;	// IMP=0x0010000000001865
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id *)arg2;	// IMP=0x0010000000001848
- (_Bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;	// IMP=0x0010000000002d94
- (_Bool)processFileWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorsOut:(id *)arg4;	// IMP=0x001000000000304c
- (_Bool)_processLogEventStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;	// IMP=0x001000000000777b
- (void)_processOSLogEventProxy:(id)arg1;	// IMP=0x00100000000071b0
- (_Bool)processTraceFileWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;	// IMP=0x001000000000817d
- (_Bool)processTraceFileWithPath:(id)arg1 errorOut:(id *)arg2;	// IMP=0x00100000000080fb

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock;
@end

