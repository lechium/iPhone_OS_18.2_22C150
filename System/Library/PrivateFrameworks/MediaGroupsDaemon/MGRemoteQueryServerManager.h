//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGOutstandingQuery, MGRemoteQueryServer, NSString, NSUserDefaults;
@protocol MGInternalQueryRunner, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServerManager : NSObject
{
    _Bool _havePermissiveACL;	// 8 = 0x8
    _Bool _haveGroupsToAdvertise;	// 9 = 0x9
    id <MGInternalQueryRunner> _queryRunner;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    MGRemoteQueryServer *_server;	// 32 = 0x20
    NSString *_homeHash;	// 40 = 0x28
    NSUserDefaults *_airplayDefaults;	// 48 = 0x30
    MGOutstandingQuery *_query;	// 56 = 0x38
    unsigned long long _relaunchCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001c0ce
@property(nonatomic) unsigned long long relaunchCount; // @synthesize relaunchCount=_relaunchCount;
@property(retain, nonatomic) MGOutstandingQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSUserDefaults *airplayDefaults; // @synthesize airplayDefaults=_airplayDefaults;
@property(copy, nonatomic) NSString *homeHash; // @synthesize homeHash=_homeHash;
@property(nonatomic) _Bool haveGroupsToAdvertise; // @synthesize haveGroupsToAdvertise=_haveGroupsToAdvertise;
@property(nonatomic) _Bool havePermissiveACL; // @synthesize havePermissiveACL=_havePermissiveACL;
@property(retain, nonatomic) MGRemoteQueryServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <MGInternalQueryRunner> queryRunner; // @synthesize queryRunner=_queryRunner;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001bda1
- (void)serverInvalidated:(id)arg1 withError:(id)arg2;	// IMP=0x000000000001bb3c
- (void)_setupQuery;	// IMP=0x000000000001ad3e
- (void)_stopServer;	// IMP=0x000000000001abe7
- (void)_startServer;	// IMP=0x000000000001a9bc
- (_Bool)_shouldRunServer;	// IMP=0x000000000001a7c2
- (void)_updateState;	// IMP=0x000000000001a718
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000001a52f
- (id)initWithQueryRunner:(id)arg1;	// IMP=0x000000000001a371

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
