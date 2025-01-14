//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDNotificationCenter, MISSING_TYPE, RAPBatchSubmissionStatusTicket, RAPSubmissionStatusSyncHandler;

@interface RAPSubmissionStatusDownloader : NSObject
{
    RAPBatchSubmissionStatusTicket *_submissionStatusTicket;	// 8 = 0x8
    RAPSubmissionStatusSyncHandler *_syncHandler;	// 16 = 0x10
    MDNotificationCenter *_notificationCenter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000d49db9
- (void)_sendStatusChangeNotificationIfNeeded:(id)arg1;	// IMP=0x0010000000d49ab0
- (void)_checkForStatusChangeNotificationsNeededForRapInfos:(id)arg1;	// IMP=0x0010000000d49951
- (void)_updateSubmissionStatusWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d4933f
- (MISSING_TYPE *)_fetchAndUpdateRAPStatusWithOffset:batchSize:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000d48f48
- (void)_updateAllSubmissionStatusWithOffset:(long long)arg1 batchSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000d48ce2
- (void)updateSubmissionStatusesWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d48cd0
- (void)updateSubmissionStatusesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d48a93
- (void)setNotificationCenter:(id)arg1;	// IMP=0x0010000000d48a3f
- (id)init;	// IMP=0x0010000000d48940

@end

