//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupsQueryAgent, MGOutstandingQuery, MGRemoteQueryClientBrowser, MGRemoteQueryClientManagerForwarder, NSArray, NSDictionary, NSSet, NSString, NSURLSession;
@protocol MGInternalQueryRunner, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryClientManager : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    id <MGInternalQueryRunner> _queryRunner;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    MGGroupsQueryAgent *_queryAgent;	// 32 = 0x20
    MGRemoteQueryClientBrowser *_browser;	// 40 = 0x28
    NSSet *_targets;	// 48 = 0x30
    NSDictionary *_queries;	// 56 = 0x38
    NSArray *_clients;	// 64 = 0x40
    NSDictionary *_watchdogs;	// 72 = 0x48
    MGRemoteQueryClientManagerForwarder *_forwarder;	// 80 = 0x50
    NSURLSession *_session;	// 88 = 0x58
    MGOutstandingQuery *_query;	// 96 = 0x60
    NSArray *_homeHashes;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000124e7
@property(copy, nonatomic) NSArray *homeHashes; // @synthesize homeHashes=_homeHashes;
@property(retain, nonatomic) MGOutstandingQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) MGRemoteQueryClientManagerForwarder *forwarder; // @synthesize forwarder=_forwarder;
@property(retain, nonatomic) NSDictionary *watchdogs; // @synthesize watchdogs=_watchdogs;
@property(retain, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) NSSet *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) MGRemoteQueryClientBrowser *browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) __weak MGGroupsQueryAgent *queryAgent; // @synthesize queryAgent=_queryAgent;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <MGInternalQueryRunner> queryRunner; // @synthesize queryRunner=_queryRunner;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000122dc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000001213a
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011f2a
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011d4a
- (void)watchdogFired:(id)arg1;	// IMP=0x0000000000011b4c
- (void)clientInvalidated:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000011916
- (void)_watchdogFired:(id)arg1;	// IMP=0x000000000001167e
- (void)_watchdogRemove:(id)arg1;	// IMP=0x0000000000011480
- (void)_watchdogReset:(id)arg1;	// IMP=0x0000000000011351
- (void)_watchdogAdd:(id)arg1;	// IMP=0x00000000000110e2
- (id)_watchdogForTarget:(id)arg1;	// IMP=0x0000000000011039
- (id)_clientsForTarget:(id)arg1;	// IMP=0x0000000000010e06
- (id)_clientsWithQuery:(id)arg1;	// IMP=0x0000000000010ad4
- (id)_clientForTarget:(id)arg1 withQuery:(id)arg2;	// IMP=0x00000000000107fb
- (id)_clientForTask:(id)arg1 includeOthers:(_Bool)arg2;	// IMP=0x00000000000103d9
- (void)_clientRemove:(id)arg1;	// IMP=0x0000000000010057
- (void)_clientStop:(id)arg1;	// IMP=0x000000000000ff1e
- (void)_clientStartWithQuery:(id)arg1 target:(id)arg2;	// IMP=0x000000000000fc89
- (void)_queryRemove:(id)arg1;	// IMP=0x000000000000f90e
- (void)_queryAdd:(id)arg1;	// IMP=0x000000000000f378
- (void)browser:(id)arg1 invalidatedWithError:(id)arg2;	// IMP=0x000000000000f049
- (void)browser:(id)arg1 lostTarget:(id)arg2;	// IMP=0x000000000000eef2
- (void)browser:(id)arg1 foundTarget:(id)arg2;	// IMP=0x000000000000ed9b
- (_Bool)_targetValidate:(id)arg1;	// IMP=0x000000000000ea37
- (void)_targetRemove:(id)arg1;	// IMP=0x000000000000e858
- (void)_targetAdd:(id)arg1;	// IMP=0x000000000000e433
- (void)_browserStop;	// IMP=0x000000000000e2dc
- (void)_browserStart;	// IMP=0x000000000000e0d5
- (void)_browserUpdateState;	// IMP=0x000000000000dffa
- (void)_setupQuery;	// IMP=0x000000000000d6e2
- (void)_invalidate;	// IMP=0x000000000000d6a5
- (void)_prepareURLSession;	// IMP=0x000000000000d37e
- (void)removeOutstandingQuery:(id)arg1;	// IMP=0x000000000000d2a9
- (void)addOutstandingQuery:(id)arg1;	// IMP=0x000000000000d1d4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000cfee
- (id)initWithQueryRunner:(id)arg1 groupsQueryAgent:(id)arg2;	// IMP=0x000000000000cdaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

