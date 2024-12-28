//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFCancelationToken, EFPair, EMMailboxScope, EMMessageRepository, EMQuery, NSString;
@protocol EMMessageRepositoryCountQueryObserver;

__attribute__((visibility("hidden")))
@interface _EMMessageRepositoryCountingQueryObserver : NSObject
{
    EMMessageRepository *_repository;	// 8 = 0x8
    EMQuery *_query;	// 16 = 0x10
    EMMailboxScope *_serverCountMailboxScope;	// 24 = 0x18
    id <EMMessageRepositoryCountQueryObserver> _observer;	// 32 = 0x20
    EFCancelationToken *_token;	// 40 = 0x28
    EFPair *_queryIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009b8a1
@property(readonly) EFPair *queryIdentifier; // @synthesize queryIdentifier=_queryIdentifier;
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;	// IMP=0x000000000009b5e8
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;	// IMP=0x000000000009b4a0
- (void)recoverWithRemoteConnection:(id)arg1;	// IMP=0x000000000009b489
- (void)performWithRemoteConnection:(id)arg1;	// IMP=0x000000000009b475
- (void)cancel;	// IMP=0x000000000009b45f
- (void)dealloc;	// IMP=0x000000000009b3eb
- (id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4;	// IMP=0x000000000009b2b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
