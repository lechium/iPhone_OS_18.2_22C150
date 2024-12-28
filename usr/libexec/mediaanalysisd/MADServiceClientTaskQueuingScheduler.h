//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MADServiceClientTaskQueuingScheduler : NSObject
{
    NSString *_clientBundleID;	// 8 = 0x8
    NSMutableArray *_pendingTaskList;	// 16 = 0x10
    NSMutableDictionary *_requestIDToScheduledTask;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managementQueue;	// 32 = 0x20
}

+ (unsigned long long)scheduledRequestLimit;	// IMP=0x00400000000c64b4
- (void).cxx_destruct;	// IMP=0x00200000000c8403
- (unsigned long long)currentOutstandingTasks;	// IMP=0x00100000000c8324
- (unsigned long long)currentPendingTasks;	// IMP=0x00100000000c8267
- (unsigned long long)cancelAllTasks;	// IMP=0x00100000000c7e20
- (void)cancelTaskWithRequestID:(unsigned long long)arg1;	// IMP=0x00100000000c78b3
- (MISSING_TYPE *)submitClientTask:withRequestID:schedulingErrorHandler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000c730b
- (_Bool)scheduleTask:(id)arg1;	// IMP=0x00100000000c67c6
- (void)completeTaskWithInfo:(id)arg1 madTaskID:(unsigned long long)arg2;	// IMP=0x00100000000c64bf
- (id)initWithClientBundleID:(id)arg1;	// IMP=0x00100000000c638b

@end
