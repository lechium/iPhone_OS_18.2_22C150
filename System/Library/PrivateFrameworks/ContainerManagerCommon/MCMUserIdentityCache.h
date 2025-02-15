//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentity, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol MCMContainerClassIterator, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMUserIdentityCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_flushQueue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    _Bool _fetchedFromUM;	// 32 = 0x20
    _Bool _firstFetch;	// 33 = 0x21
    _Bool _cacheInvalid;	// 34 = 0x22
    NSDictionary *_lock_bundleToDataSeparatedIdentitiesMap;	// 40 = 0x28
    NSDictionary *_lock_personaUniqueStringToUserIdentityMap;	// 48 = 0x30
    NSDictionary *_lock_personaIDToUserIdentityMap;	// 56 = 0x38
    MCMUserIdentity *_lock_userIdentityForPersonalPersona;	// 64 = 0x40
    MCMUserIdentity *_lock_userIdentityForUnspecificPersona;	// 72 = 0x48
    NSMutableDictionary *_lock_managedPathRegistryForUserIdentity;	// 80 = 0x50
    NSMutableDictionary *_lock_libraryRepairForUserIdentity;	// 88 = 0x58
    NSSet *_previousUserIdentities;	// 96 = 0x60
    id <MCMContainerClassIterator> _classIterator;	// 104 = 0x68
    MCMUserIdentity *_defaultUserIdentity;	// 112 = 0x70
    NSHashTable *_observers;	// 120 = 0x78
    unsigned long long _savedGeneration;	// 128 = 0x80
}

+ (id)globalSystemUserIdentity;	// IMP=0x00100000000aaa67
+ (id)globalBundleUserIdentity;	// IMP=0x00100000000aaa0c
+ (_Bool)personasAreSupported;	// IMP=0x00100000000aa9e3
+ (id)defaultUserIdentity;	// IMP=0x00100000000aa963
- (void).cxx_destruct;	// IMP=0x00000000000aa89f
@property(nonatomic) unsigned long long savedGeneration; // @synthesize savedGeneration=_savedGeneration;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool cacheInvalid; // @synthesize cacheInvalid=_cacheInvalid;
@property(readonly, nonatomic) MCMUserIdentity *defaultUserIdentity; // @synthesize defaultUserIdentity=_defaultUserIdentity;
@property(readonly, nonatomic) id <MCMContainerClassIterator> classIterator; // @synthesize classIterator=_classIterator;
@property(retain, nonatomic) NSSet *previousUserIdentities; // @synthesize previousUserIdentities=_previousUserIdentities;
@property(readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity; // @synthesize lock_libraryRepairForUserIdentity=_lock_libraryRepairForUserIdentity;
@property(readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity; // @synthesize lock_managedPathRegistryForUserIdentity=_lock_managedPathRegistryForUserIdentity;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)arg1 firstFetch:(_Bool)arg2;	// IMP=0x00000000000a9f09
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x00000000000a99ac
- (void)_lock_flush;	// IMP=0x00000000000a9864
- (void)_lock_resync;	// IMP=0x00000000000a9824
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x00000000000a95e2
- (id)_lock_userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x00000000000a949b
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona; // @synthesize lock_userIdentityForUnspecificPersona=_lock_userIdentityForUnspecificPersona;
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona; // @synthesize lock_userIdentityForPersonalPersona=_lock_userIdentityForPersonalPersona;
@property(readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap; // @synthesize lock_personaIDToUserIdentityMap=_lock_personaIDToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap; // @synthesize lock_personaUniqueStringToUserIdentityMap=_lock_personaUniqueStringToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap; // @synthesize lock_bundleToDataSeparatedIdentitiesMap=_lock_bundleToDataSeparatedIdentitiesMap;
- (id)libraryRepairForUserIdentity:(id)arg1;	// IMP=0x00000000000a908b
- (id)managedUserPathRegistryForUserIdentity:(id)arg1;	// IMP=0x00000000000a8f44
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000a8e69
- (void)addObserver:(id)arg1;	// IMP=0x00000000000a8d8e
- (void)flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x00000000000a8d18
- (id)userIdentityForLegacyMobileUser;	// IMP=0x00000000000a8ce5
- (id)userIdentityForCurrentContext;	// IMP=0x00000000000a8c28
- (id)personaUniqueStringForCurrentContext;	// IMP=0x00000000000a8bff
- (id)globalSystemUserIdentity;	// IMP=0x00000000000a8bba
- (id)globalBundleUserIdentity;	// IMP=0x00000000000a8b75
- (id)userIdentitiesForContainerConfig:(id)arg1 originatorUserIdentities:(id)arg2;	// IMP=0x00000000000a8a16
- (id)userIdentityForContainerConfig:(id)arg1 originatorUserIdentity:(id)arg2;	// IMP=0x00000000000a88ee
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a87ce
- (id)allAccessibleUserIdentities;	// IMP=0x00000000000a84c7
- (void)flush;	// IMP=0x00000000000a8458
- (id)userIdentityWithPersonaID:(unsigned int)arg1;	// IMP=0x00000000000a81c3
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)arg1;	// IMP=0x00000000000a8078
- (id)unspecificUserIdentity;	// IMP=0x00000000000a7ff9
- (id)userIdentityForPersonalPersona;	// IMP=0x00000000000a7f5b
- (id)userIdentityForClient:(struct container_client *)arg1 error:(id *)arg2;	// IMP=0x00000000000a7dec
- (id)userIdentityForPersonaUniqueString:(id)arg1 POSIXUser:(id)arg2;	// IMP=0x00000000000a7af2
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x00000000000a790a
- (id)userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x00000000000a782e
- (void)_refreshFromUserManagementIfNecessary;	// IMP=0x00000000000a7807
- (id)init;	// IMP=0x00000000000a76a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

