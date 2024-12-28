//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol ADServiceDelegate;

@interface ADService : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_managedStorageDomains;	// 16 = 0x10
    NSArray *_firstUnlockRestrictedCommands;	// 24 = 0x18
    NSArray *_controlCenterLockRestrictedCommands;	// 32 = 0x20
    _Bool _requiresBootMaintenance;	// 40 = 0x28
    id <ADServiceDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000304828
@property(nonatomic) __weak id <ADServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requiresBootMaintenance; // @synthesize requiresBootMaintenance=_requiresBootMaintenance;
@property(copy, nonatomic) NSArray *controlCenterLockRestrictedCommands; // @synthesize controlCenterLockRestrictedCommands=_controlCenterLockRestrictedCommands;
@property(copy, nonatomic) NSArray *firstUnlockRestrictedCommands; // @synthesize firstUnlockRestrictedCommands=_firstUnlockRestrictedCommands;
@property(copy, nonatomic) NSSet *managedStorageDomains; // @synthesize managedStorageDomains=_managedStorageDomains;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isSystemService;	// IMP=0x0010000000304783
- (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000304580
- (void)reload;	// IMP=0x001000000030457a
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000304568
- (void)resetExternalResources;	// IMP=0x0010000000304562
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3 reason:(long long)arg4;	// IMP=0x001000000030455c
- (void)fetchSyncSnapshotForInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000304546
- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000030452c
- (void)clearDomainObjects;	// IMP=0x0010000000304526
- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000304513
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000304496
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000304490
- (id)lockRestrictedCommands;	// IMP=0x0010000000304488
- (id)customVocabSyncInfo;	// IMP=0x0010000000304480
- (id)syncKeys;	// IMP=0x0010000000304478
- (_Bool)usesManagedStorageForDomain:(id)arg1;	// IMP=0x0010000000304462
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000030445a
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000304452
- (id)domains;	// IMP=0x001000000030444a
- (id)handle;	// IMP=0x0010000000304442
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
