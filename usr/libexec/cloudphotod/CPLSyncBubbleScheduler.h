//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLSyncSession, NSString;

@interface CPLSyncBubbleScheduler : CPLPlatformObject
{
    CPLSyncSession *_dummySession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000273a
- (void)unschedulePersistedSyncSession;	// IMP=0x0010000000002734
- (void)schedulePersistedSyncSessionIfAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002724
- (id)componentName;	// IMP=0x0010000000002717
- (void)noteSyncSessionSucceeded:(id)arg1;	// IMP=0x0010000000002702
- (void)noteSyncSession:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00100000000026ed
- (void)unscheduleSyncSession:(id)arg1;	// IMP=0x00100000000026e7
- (id)scheduleNextSyncSessionAtDate:(id)arg1;	// IMP=0x0010000000002622
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002612
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002602
- (void)noteServerHasChanges;	// IMP=0x00100000000025fc
- (void)noteClientNeedsToPull;	// IMP=0x00100000000025f6
- (void)noteScopeNeedsToPushToTransport;	// IMP=0x00100000000025f0
- (_Bool)shouldCoalesceServerChangesNotification;	// IMP=0x00100000000025e8
- (_Bool)shouldStartSyncSessionFromState:(unsigned long long)arg1;	// IMP=0x00100000000025e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

