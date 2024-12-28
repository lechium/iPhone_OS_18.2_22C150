//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMDDevice, NSArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID, Protocol;
@protocol HMDAccountManager, NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSSet *_handles;	// 24 = 0x18
    NSMutableSet *_devices;	// 32 = 0x20
    NSString *_appleAccountSenderCorrelationIdentifier;	// 40 = 0x28
    HMDAccountIdentifier *_identifier;	// 48 = 0x30
    id <HMDAccountManager> _manager;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006f7cb7
+ (id)logCategory;	// IMP=0x00100000006f7c87
+ (id)accountWithHandle:(id)arg1;	// IMP=0x00100000006f7b9f
- (void).cxx_destruct;	// IMP=0x00000000006f6d79
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)modelBackedObjects;	// IMP=0x00000000006f6b2b
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000006f699c
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000006f663a
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000006f6549
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006f5ee5
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006f5398
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006f52b5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006f4f83
- (_Bool)mergeObject:(id)arg1;	// IMP=0x00000000006f4380
- (_Bool)shouldMergeObject:(id)arg1;	// IMP=0x00000000006f42bd
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000006f4256
- (id)logIdentifier;	// IMP=0x00000000006f41dd
- (void)removeDevice:(id)arg1;	// IMP=0x00000000006f40b7
- (void)addDevice:(id)arg1;	// IMP=0x00000000006f3fae
- (id)deviceWithModelIdentifier:(id)arg1;	// IMP=0x00000000006f3db8
- (id)deviceForHandle:(id)arg1;	// IMP=0x00000000006f3b95
- (id)deviceForIdentifier:(id)arg1;	// IMP=0x00000000006f3972
@property(readonly, copy) NSArray *devices;
- (id)accountHandleWithModelIdentifier:(id)arg1;	// IMP=0x00000000006f372a
- (void)_repairDevicesWithStaleHandle:(id)arg1;	// IMP=0x00000000006f329f
- (void)removeHandle:(id)arg1;	// IMP=0x00000000006f317b
- (void)addHandle:(id)arg1;	// IMP=0x00000000006f3101
- (void)setHandles:(id)arg1;	// IMP=0x00000000006f2e2c
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
- (void)setAppleAccountSenderCorrelationIdentifier:(id)arg1;	// IMP=0x00000000006f29c6
- (id)appleAccountSenderCorrelationIdentifier;	// IMP=0x00000000006f2980
@property(copy) NSString *senderCorrelationIdentifier;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) _Bool shouldCache;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (id)attributeDescriptions;	// IMP=0x00000000006f240c
- (id)shortDescription;	// IMP=0x00000000006f234b
- (void)isOfKnownPersonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f221a
@property(readonly, nonatomic, getter=isPresentInContacts) _Bool presentInContacts;
- (_Bool)isRelatedToAccount:(id)arg1;	// IMP=0x00000000006f1e41
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x00000000006f1d99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006f1d10
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x00000000006f1c6c
@property(readonly) id <NSCopying> backingModelKey;
- (_Bool)updateBackingModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006f1aca
@property(readonly) Protocol *backingModelType;
- (id)initWithBackingModel:(id)arg1;	// IMP=0x00000000006f18f0
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;	// IMP=0x00000000006f135f
- (id)init;	// IMP=0x00000000006f12b7
@property(readonly) HMDDevice *currentDevice;
@property(readonly, getter=isCurrentAccount) _Bool currentAccount;
- (_Bool)hasFamilyMember:(id)arg1;	// IMP=0x00000000006f7dc2
- (void)isPresentInFamilyCircleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f7cf6
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
