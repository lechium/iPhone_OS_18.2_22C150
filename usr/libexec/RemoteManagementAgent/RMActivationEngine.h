//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, RMDebounceTimer;

@interface RMActivationEngine : NSObject
{
    NSManagedObjectID *_managementSourceObjectID;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    RMDebounceTimer *_debouncer;	// 24 = 0x18
}

+ (_Bool)_isKeychainAsset:(id)arg1;	// IMP=0x0020000000009440
- (void).cxx_destruct;	// IMP=0x0020000000009a34
@property(retain, nonatomic) RMDebounceTimer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
- (void)_keychainAssetRemoved:(id)arg1 managementSourceIdentifier:(id)arg2 personaID:(id)arg3;	// IMP=0x0010000000009812
- (_Bool)_assetsRemoved:(id)arg1 managementSourceIdentifier:(id)arg2 personaID:(id)arg3;	// IMP=0x0010000000009640
- (_Bool)_removeKeychainAssets:(id)arg1;	// IMP=0x001000000000936c
- (id)_checkPredicateStatusKeysForActivations:(id)arg1 managementSource:(id)arg2;	// IMP=0x0010000000008d40
- (_Bool)_processAllDeclarations:(id)arg1;	// IMP=0x0010000000007195
- (_Bool)_processManagementProperties:(id)arg1;	// IMP=0x0010000000006c13
- (_Bool)_attachAssetReferences:(id)arg1;	// IMP=0x0010000000006069
- (_Bool)_attachConfigurationReferences:(id)arg1;	// IMP=0x0010000000005503
- (_Bool)_updateUnknownDeclarations:(id)arg1;	// IMP=0x0010000000004426
- (void)deleteObjects:(id)arg1 managementSourceIdentifier:(id)arg2 removeStatus:(_Bool)arg3;	// IMP=0x00100000000041d1
- (id)getDeclarationsMarkedForRemovalFromFetchRequest:(id)arg1 managementSource:(id)arg2;	// IMP=0x0010000000004008
- (_Bool)_deleteDeclarationsThatAreNoLongerNeeded:(id)arg1;	// IMP=0x0010000000003481
- (_Bool)_remove:(id)arg1;	// IMP=0x001000000000346f
- (_Bool)_reconcile:(id)arg1;	// IMP=0x00100000000033ba
- (_Bool)removeReturningError:(id *)arg1;	// IMP=0x0010000000002f47
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002a48
- (void)_predicateStatusItemDidChange:(id)arg1;	// IMP=0x001000000000295b
- (void)triggerAggregatingTimerAction;	// IMP=0x0010000000002864
- (id)initWithManagementSourceObjectID:(id)arg1 context:(id)arg2;	// IMP=0x0010000000002739

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

