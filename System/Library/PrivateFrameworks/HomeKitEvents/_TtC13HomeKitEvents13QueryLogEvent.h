//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class MISSING_TYPE, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _TtC13HomeKitEvents13QueryLogEvent : HMMLogEvent
{
    MISSING_TYPE *subqueriesEnabled;	// 8 = 0x8
    MISSING_TYPE *queryStartTime;	// 16 = 0x10
    MISSING_TYPE *numFetchedCKRecords;	// 32 = 0x20
    MISSING_TYPE *totalCKRecordSize;	// 40 = 0x28
    MISSING_TYPE *numCKQueries;	// 48 = 0x30
    MISSING_TYPE *numCKQueriesSucceeded;	// 56 = 0x38
    MISSING_TYPE *ckQueryCancelled;	// 64 = 0x40
    MISSING_TYPE *ckQueryDroppedEvents;	// 65 = 0x41
    MISSING_TYPE *ckQueryReachedLimit;	// 66 = 0x42
    MISSING_TYPE *ckQueryTerminatedStream;	// 67 = 0x43
    MISSING_TYPE *ckQueryResultNotHandled;	// 68 = 0x44
    MISSING_TYPE *ckQueryResultProcessingEncounteredError;	// 69 = 0x45
    MISSING_TYPE *ckQueryEncounteredError;	// 70 = 0x46
    MISSING_TYPE *ckQueryExecutionStartTime;	// 72 = 0x48
    MISSING_TYPE *ckQueryExecutionEndTime;	// 88 = 0x58
    MISSING_TYPE *queryStartDate;	// 5 = 0x5
    MISSING_TYPE *queryEndDate;	// 22 = 0x16
    MISSING_TYPE *limit;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *scope;	// 0 = 0x0
    MISSING_TYPE *queryType;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *numProcessedEvents;	// 0 = 0x0
    MISSING_TYPE *numIgnoredExpiredRecords;	// 10624 = 0x2980
    MISSING_TYPE *numIgnoredNoCreationDateRecords;	// 542573 = 0x8476d
    MISSING_TYPE *numIgnoredNonUUIDNameRecords;	// 10624 = 0x2980
    MISSING_TYPE *numEventsSavedToCache;	// 0 = 0x0
    MISSING_TYPE *numEmittedEvents;	// 2147484672 = 0x80000400
    MISSING_TYPE *processingDroppedEvents;	// 0 = 0x0
    MISSING_TYPE *processingReachedLimit;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *processingTerminatedStream;	// 0 = 0x0
    MISSING_TYPE *processingResultNotHandled;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *processingEncounteredError;	// 0 = 0x0
    MISSING_TYPE *cancelled;	// 553198 = 0x870ee
    MISSING_TYPE *succeeded;	// 2598 = 0xa26
    MISSING_TYPE *coreAnalyticsEventName;	// 553198 = 0x870ee
    MISSING_TYPE *coreAnalyticsEventOptions;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007f230
- (id)initWithStartTime:(double)arg1;	// IMP=0x000000000007f1d0
- (id)init;	// IMP=0x000000000007f1a0
@property(nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property(nonatomic, readonly) unsigned long long coreAnalyticsEventOptions; // @synthesize coreAnalyticsEventOptions;
@property(nonatomic, readonly) NSString *coreAnalyticsEventName;
@property(nonatomic, readonly) double startTime;

@end
