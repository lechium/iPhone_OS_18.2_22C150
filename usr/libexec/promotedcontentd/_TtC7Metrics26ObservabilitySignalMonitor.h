//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC7Metrics26ObservabilitySignalMonitor : _TtCs12_SwiftObject
{
    MISSING_TYPE *clock;	// 16 = 0x10
    MISSING_TYPE *scheduler;	// 24 = 0x18
    MISSING_TYPE *signalStore;	// 64 = 0x40
    MISSING_TYPE *stateStore;	// 104 = 0x68
}

- (void)willUploadWithBatchCount:(long long)arg1;	// IMP=0x002000000010b150
- (void)uploadSuccess;	// IMP=0x001000000010b0d0
- (void)uploadFailureWithType:(long long)arg1 code:(long long)arg2 batchIDs:(id)arg3;	// IMP=0x001000000010b070
- (void)eventSavedWithCreatedToSavedTimeInterval:(double)arg1;	// IMP=0x001000000010aaa0
- (void)eventCreatedWithCreationDate:(id)arg1;	// IMP=0x001000000010a9c0
- (void)batchExpiredWithBatchID:(id)arg1;	// IMP=0x001000000010a970
- (void)batchEnqueuedWithQueueLength:(long long)arg1;	// IMP=0x001000000010a780
- (void)batchDequeuedWithWaitingTime:(double)arg1 queueLength:(long long)arg2 batchID:(id)arg3;	// IMP=0x001000000010a720
- (void)batchClosedWithBatchLifetime:(double)arg1 eventsCount:(long long)arg2;	// IMP=0x001000000010a470

@end

