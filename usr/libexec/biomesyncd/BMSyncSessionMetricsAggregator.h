//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;
@protocol OS_xpc_object;

@interface BMSyncSessionMetricsAggregator : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006e63
- (void)compactAndDeleteSessionLogs;	// IMP=0x0010000000006e4d
- (void)enforceMaxSessionLogPrunePolicy;	// IMP=0x0010000000006e37
- (void)computeAggregatedSessionLogsWithHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006e21
- (void)computeAndSendAggregatedMetrics;	// IMP=0x0010000000006dec
- (id)initWithDatabase:(id)arg1 activity:(id)arg2;	// IMP=0x0010000000006d53

@end
