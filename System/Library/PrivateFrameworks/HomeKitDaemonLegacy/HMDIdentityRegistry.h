//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSArray, NSMutableArray, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface HMDIdentityRegistry : HMFObject
{
    NSMutableArray *_registeredIdentities;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSRecursiveLock *_lock;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000001e1cd1
+ (id)sharedRegistry;	// IMP=0x00100000001e1c6e
- (void).cxx_destruct;	// IMP=0x00000000001deef9
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)dumpState;	// IMP=0x00000000001ddd5a
- (void)reset;	// IMP=0x00000000001ddcdc
- (void)deregisterIdentity:(id)arg1 object:(id)arg2;	// IMP=0x00000000001ddbd8
- (void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3;	// IMP=0x00000000001dd951
- (void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3;	// IMP=0x00000000001dd6ca
- (id)accountsForIdentity:(id)arg1;	// IMP=0x00000000001dd577
- (id)identitiesForAccountIdentifier:(id)arg1;	// IMP=0x00000000001dd420
- (id)identitiesForAccount:(id)arg1;	// IMP=0x00000000001dd2c9
- (id)identitiesForDevice:(id)arg1;	// IMP=0x00000000001dd13b
- (id)userForDevice:(id)arg1;	// IMP=0x00000000001dd04b
- (id)_userForIdenity:(id)arg1;	// IMP=0x00000000001dcea3
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x00000000001dce91
- (id)identityForIdentifier:(id)arg1;	// IMP=0x00000000001dcd3e
@property(readonly) NSArray *registeredIdentities;
- (id)attributeDescriptions;	// IMP=0x00000000001dcb6f
- (id)init;	// IMP=0x00000000001dcadc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
