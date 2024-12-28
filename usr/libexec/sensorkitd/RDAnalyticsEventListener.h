//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, RDStateCache;
@protocol RDAnalyticsEventListenerDelegate;

@interface RDAnalyticsEventListener : NSObject
{
    RDStateCache *_stateCache;	// 8 = 0x8
    id <RDAnalyticsEventListenerDelegate> _delegate;	// 16 = 0x10
    NSCache *_messageTypesByIDSIdentifier;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0020000000047530
- (void).cxx_destruct;	// IMP=0x00200000000497c0
- (long long)cacheDelete:(id)arg1 purgeWithUrgency:(long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x00100000000496a0
- (void)gizmoSyncDidSyncTime:(id)arg1;	// IMP=0x0010000000049600
- (void)gizmoSync:(id)arg1 didDeliverAndUnarchive:(id)arg2 sensor:(id)arg3 keyName:(id)arg4 archiveStatus:(long long)arg5;	// IMP=0x0010000000049260
- (void)gizmoSync:(id)arg1 failedToEncryptArchive:(id)arg2 keyName:(id)arg3 sensor:(id)arg4;	// IMP=0x0010000000049140
- (void)gizmoSync:(id)arg1 failedToUnarchiveWithKey:(id)arg2 sensor:(id)arg3;	// IMP=0x0010000000049020
- (void)gizmoSync:(id)arg1 didUnarchiveWithKey:(id)arg2 sensor:(id)arg3;	// IMP=0x0010000000048f20
- (void)gizmoSync:(id)arg1 didDecryptArchiveWithKey:(id)arg2 sensor:(id)arg3;	// IMP=0x0010000000048e20
- (void)gizmoSync:(id)arg1 failedToDecryptArchiveWithKey:(id)arg2 sensor:(id)arg3;	// IMP=0x0010000000048d20
- (void)gizmoSync:(id)arg1 willRunXPCActivityNamed:(id)arg2;	// IMP=0x0010000000048b90
- (void)gizmoSync:(id)arg1 failedToStoreEncryptedArchive:(id)arg2 key:(id)arg3 sensor:(id)arg4 fileExists:(_Bool)arg5;	// IMP=0x0010000000048a50
- (void)gizmoSync:(id)arg1 failedToAddKey:(id)arg2 toKeyChainForSensor:(id)arg3;	// IMP=0x0010000000048950
- (void)service:(id)arg1 didReceiveResourceServiceMessage:(id)arg2 fromID:(id)arg3 incomingResponseIdentifier:(id)arg4 outgoingResponseIdentifier:(id)arg5;	// IMP=0x0010000000048720
- (void)service:(id)arg1 didReceiveKeyServiceMessage:(id)arg2 fromID:(id)arg3 key:(id)arg4 keyName:(id)arg5 sensor:(id)arg6 archiveURLPath:(id)arg7 deviceID:(id)arg8;	// IMP=0x0010000000048410
- (void);	// IMP=0x00100000000482b0
- (void)service:(id)arg1 didDeliverMessageWithIDSIdentifier:(id)arg2;	// IMP=0x00100000000480a0
- (void)service:(id)arg1 didFailMessageWithIDSIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x0010000000047e80
- (void)service:(id)arg1 didFailResource:(id)arg2 IDSIdentifier:(id)arg3 keyName:(id)arg4 sensor:(id)arg5 withError:(id)arg6;	// IMP=0x0010000000047d10
- (void)service:(id)arg1 didRequestToSendResource:(id)arg2 withIDSIdentifier:(id)arg3 keyName:(id)arg4 sensor:(id)arg5 isRetry:(_Bool)arg6;	// IMP=0x0010000000047bd0
- (void)service:(id)arg1 didFailIDSMessage:(id)arg2 IDSIdentifier:(id)arg3 withError:(id)arg4;	// IMP=0x0010000000047a00
- (void)service:(id)arg1 didRequestToSendIDSMessage:(id)arg2 withIDSIdentifier:(id)arg3;	// IMP=0x0010000000047640
- (void)dealloc;	// IMP=0x00100000000475f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
