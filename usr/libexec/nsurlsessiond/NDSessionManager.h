//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NDTaskStorageDB, NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol NDSessionManagerDelegate, OS_dispatch_queue;

@interface NDSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSMutableDictionary *_reconnectingProxies;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSURL *_bundleDirectory;	// 32 = 0x20
    id _boost;	// 40 = 0x28
    NDTaskStorageDB *_sessionTasksDB;	// 48 = 0x30
    _Bool _isSpringBoardApp;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSXPCConnection *_xpcConn;	// 72 = 0x48
    id <NDSessionManagerDelegate> _delegate;	// 80 = 0x50
    NSString *_persona;	// 88 = 0x58
    NSString *_containerPath;	// 96 = 0x60
    CDUnknownBlockType _obliterationCompletion;	// 104 = 0x68
}

+ (id)restoreOptionsFromArchivePath:(id)arg1;	// IMP=0x0020000000022f79
- (void).cxx_destruct;	// IMP=0x0020000000022a7e
@property(copy) CDUnknownBlockType obliterationCompletion; // @synthesize obliterationCompletion=_obliterationCompletion;
@property(retain) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(retain) NSString *persona; // @synthesize persona=_persona;
@property _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property __weak id <NDSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)archiveTimerFired;	// IMP=0x0010000000022945
- (void)obliterate;	// IMP=0x001000000002288b
- (void)clientApplicationWasReinstalled;	// IMP=0x0010000000022840
- (id)getSessionWithIdentifier:(id)arg1;	// IMP=0x001000000002281a
- (void)sessionCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022566
- (void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002245b
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022353
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000222af
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022066
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021f3e
- (MISSING_TYPE *)sendPendingCallbacksForIdentifier:reply: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000021bf4
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000020860
- (_Bool)connection:(id)arg1 canUseSharedContainerIdentifier:(id)arg2;	// IMP=0x00100000000206dc
- (id)copyAndSanitizeClientConfiguration:(id)arg1;	// IMP=0x001000000001fca1
- (void)dropBoost;	// IMP=0x001000000001fc56
- (void)boost;	// IMP=0x001000000001fb2d
- (void)setWorkState;	// IMP=0x001000000001faf2
- (id)restoreState:(_Bool *)arg1;	// IMP=0x001000000001eb99
- (id)downloadDirectoryDataPath;	// IMP=0x001000000001eb2a
- (void)dealloc;	// IMP=0x001000000001eafb
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 forPersona:(id)arg4 dataSeparatedPath:(id)arg5 db:(id)arg6;	// IMP=0x001000000001e87d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
