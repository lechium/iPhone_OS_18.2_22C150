//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DownloadHandlerManager : NSObject
{
    NSMutableDictionary *_clientsByHandlerID;	// 8 = 0x8
    NSMutableDictionary *_disconnectedSessionsByClientID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSMutableDictionary *_globalHandlersByClientID;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observersQueue;	// 48 = 0x30
    NSMutableDictionary *_sessionsByID;	// 56 = 0x38
}

+ (id)handlerManager;	// IMP=0x0040000000189589
- (void)_sendMessage:(long long)arg1 forSessionID:(long long)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000018d5ef
- (id)_popDownloadSessionForSessionID:(long long)arg1;	// IMP=0x001000000018d568
- (void)_notifyObserversOfSessionChanges:(id)arg1;	// IMP=0x001000000018d3a7
- (void)_notifyObserversOfSessionChange:(id)arg1;	// IMP=0x001000000018d34a
- (void)_notifyObserversOfHandlersChange;	// IMP=0x001000000018d1a0
- (long long)_globalHandlerIDForClientID:(id)arg1;	// IMP=0x001000000018d171
- (void)_endSessionWithID:(long long)arg1 state:(long long)arg2;	// IMP=0x001000000018d111
- (void)_endDisconnectedSessionsForClientID:(id)arg1;	// IMP=0x001000000018d085
- (id)_disconnectSessionsForHandlerID:(long long)arg1;	// IMP=0x001000000018cf5d
- (id)_clientForSession:(id)arg1;	// IMP=0x001000000018ceed
- (id)_clientForProperties:(id)arg1;	// IMP=0x001000000018cde7
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000018c8c0
- (void)useCredential:(id)arg1 forAuthenticationSessionWithID:(long long)arg2;	// IMP=0x001000000018c68c
- (void)setSessionProperties:(id)arg1 forSessionWithID:(long long)arg2;	// IMP=0x001000000018c5b3
- (void)setGlobalDownloadHandlerID:(long long)arg1 forClientID:(id)arg2;	// IMP=0x001000000018c1ed
- (id)sessionForSessionID:(long long)arg1;	// IMP=0x001000000018c0b4
- (void)retrySessionWithID:(long long)arg1;	// IMP=0x001000000018bebe
- (void)resetDisavowedSessionsForHandlerWithID:(long long)arg1;	// IMP=0x001000000018bc4b
- (void)removeHandlerObserver:(id)arg1;	// IMP=0x001000000018bbde
- (void)releaseDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000018ba05
- (void)rejectSpaceForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000018b82c
- (void)performDefaultForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000018b653
- (void)pauseSessionWithID:(long long)arg1;	// IMP=0x001000000018b477
- (id)openSessionWithProperties:(id)arg1;	// IMP=0x001000000018b285
- (void)modifyDownloadHandlerWithID:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000018b0cf
- (void)finishDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000018aef6
- (void)failDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x001000000018acc2
- (void)endBackgroundTaskForSessionWithID:(long long)arg1 identifier:(id)arg2;	// IMP=0x001000000018ab7b
- (void)disconnectDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000018a9a2
- (void)disavowDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x001000000018a73d
- (void)continueAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000018a564
- (void)closeUnstartedSessionWithID:(long long)arg1;	// IMP=0x001000000018a4b9
- (_Bool)canOpenSessionWithProperties:(id)arg1;	// IMP=0x001000000018a3f3
- (void)cancelSessionWithID:(long long)arg1;	// IMP=0x001000000018a1fd
- (void)cancelAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000018a024
- (void)beginSessionWithID:(long long)arg1;	// IMP=0x0010000000189b58
- (id)beginBackgroundTaskForSessionWithID:(long long)arg1 reason:(unsigned int)arg2 expirationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001899be
- (void)addHandlerObserver:(id)arg1;	// IMP=0x0010000000189951
- (void)addDownloadHandler:(id)arg1;	// IMP=0x0010000000189606
- (void)dealloc;	// IMP=0x00100000001894d9
- (id)init;	// IMP=0x00100000001893d7

@end

