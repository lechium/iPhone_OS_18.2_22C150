//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLClientKeyPath, CLClientManagerAuthorizationContext;
@protocol CLIntersiloUniverse;

@interface CLDaemonConditionLedger
{
    long long _containerExtensionHandle;	// 8 = 0x8
    CLClientManagerAuthorizationContext *_authContext;	// 16 = 0x10
    id <CLIntersiloUniverse> _universe;	// 24 = 0x18
    CDUnknownBlockType _callbackHandler;	// 32 = 0x20
    CLClientKeyPath *_ckp;	// 40 = 0x28
}

@property(copy) CLClientKeyPath *ckp; // @synthesize ckp=_ckp;
@property(copy) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
- (void)refillAwaitingMonitoringConditions:(id)arg1;	// IMP=0x001000000095e5af
- (_Bool)canAddToMonitor;	// IMP=0x001000000095e57f
- (void)adjustMonitoringAccordingToClientLedgerDictionary:(id)arg1;	// IMP=0x001000000095daff
- (void)updateDaemonEvent:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000095d951
- (void)updateClientEvent:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000095d776
- (void)addMonitoringRecord:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000095d3b1
- (_Bool)removeRecordFromMonitoringWithIdentifier:(id)arg1;	// IMP=0x001000000095d2bf
- (void)removeConditionsWithIdentifiers:(id)arg1;	// IMP=0x001000000095d0d5
- (void)stopMonitoringAllConditions;	// IMP=0x001000000095d08e
- (void)updateCallbackHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000095cfcd
- (void)updateAuthorizationContext:(id)arg1;	// IMP=0x001000000095cec1
- (void)updateRecord:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000095ce92
- (void)validateClientMonitoringRecordsByIdenitifier:(id)arg1;	// IMP=0x001000000095c536
- (_Bool)isMonitoring;	// IMP=0x001000000095c40c
- (id)containerURLForClientWithClientKey:(id)arg1;	// IMP=0x001000000095aeae
- (_Bool)shouldMigrate;	// IMP=0x001000000095ae80
- (void)performMigration;	// IMP=0x001000000095aa36
- (void)dealloc;	// IMP=0x001000000095a963
- (id)initWithConfiguration:(id)arg1 clientKeyPath:(id)arg2 authorizationContext:(id)arg3 universe:(id)arg4 hasClassCAccess:(_Bool)arg5 callbackHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000095a738

@end

