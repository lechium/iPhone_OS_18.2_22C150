//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CloudBookmarkStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CloudTabGroupPresenceUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_processUpdateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_retryTimer;	// 16 = 0x10
    CDUnknownBlockType _currentRetryCompletionHandler;	// 24 = 0x18
    unsigned long long _nextEarliestScheduleTime;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_throttledScheduledUpdateTimer;	// 40 = 0x28
    CDUnknownBlockType _lastScheduledUpdateBlock;	// 48 = 0x30
    struct os_unfair_lock_s _lastScheduledUpdateLock;	// 56 = 0x38
    CKRecordID *_privatePresenceRecordID;	// 64 = 0x40
    CKRecord *_cachedPrivatePresenceRecord;	// 72 = 0x48
    CKRecordID *_cachedUserRecordID;	// 80 = 0x50
    NSString *_cachedSharedPresenceRecordName;	// 88 = 0x58
    CloudBookmarkStore *_store;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000003513c
@property(readonly, nonatomic) CloudBookmarkStore *store; // @synthesize store=_store;
- (id)_sharedPresenceRecordNameForUserRecordID:(id)arg1;	// IMP=0x00100000000350d8
- (id)_sharedPresenceRecordDatabaseForTabRecordZone:(id)arg1;	// IMP=0x0010000000035057
- (void)_clearRetryHandlerIsCancelling:(_Bool)arg1;	// IMP=0x0010000000034feb
- (void)_setUpRetryTimerToSetPresenceInTabWithRecordID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034ddb
- (void)_releaseLockForPrivatePresenceRecord:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034ae6
- (void)_createSharedPresenceRecordWithTabRecordID:(id)arg1 currentPrivatePresenceRecord:(id)arg2 inOperationGroup:(id)arg3 isRetry:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000034688
- (void)_replaceSharedPresenceRecordWithTabRecordID:(id)arg1 currentPrivatePresenceRecord:(id)arg2 previousPrivatePresenceRecord:(id)arg3 inOperationGroup:(id)arg4 isRetry:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003402e
- (void)_checkPrivatePresenceLockValidityWithRecord:(id)arg1 toUpdatePresenceInTabWithRecordID:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000033eb0
- (void)_acquireLockUsingPrivatePresenceRecord:(id)arg1 toSetPresenceInTabWithRecordID:(id)arg2 previousPrivatePresenceRecord:(id)arg3 inOperationGroup:(id)arg4 isRetry:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000033885
- (void)_acquireLockToSetPresenceInTabWithRecordID:(id)arg1 inOperationGroup:(id)arg2 isRetry:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003379c
- (void)_performSharedPresenceInTabHeartbeatUpdateIfNeededWithRecordID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033176
- (void)_updatePresenceInTabIfNeededWithRecordID:(id)arg1 inOperationGroup:(id)arg2 isRetry:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000032c63
- (void)_cacheUserRecordIDIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000329ea
- (void)setPresenceToTabWithRecordID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031b52
- (id)initWithCloudBookmarkStore:(id)arg1;	// IMP=0x00100000000319bc

@end

