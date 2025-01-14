//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue, VGVirtualGaragePersistingDelegate;

@interface VirtualGaragePersister : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_lastPersistedVehicles;	// 16 = 0x10
    id <VGVirtualGaragePersistingDelegate> _delegate;	// 24 = 0x18
    NSArray *storeSubscriptionTypes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000020d28
@property(copy, nonatomic) NSArray *storeSubscriptionTypes; // @synthesize storeSubscriptionTypes;
@property(nonatomic) __weak id <VGVirtualGaragePersistingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storeDidChangeWithTypes:(id)arg1;	// IMP=0x0010000000020bb1
- (id)_processUpdatedSyncVehicles:(id)arg1;	// IMP=0x0010000000020819
- (void)_addOrEditVehicle:(id)arg1;	// IMP=0x001000000001f291
@property(copy, nonatomic) NSString *selectedVehicleIdentifier;
- (id)persistedVehicleForVehicle:(id)arg1;	// IMP=0x001000000001efca
- (void)saveVehicle:(id)arg1 syncAcrossDevices:(_Bool)arg2;	// IMP=0x001000000001eddc
- (void)_removeSyncVehicle:(id)arg1;	// IMP=0x001000000001ea57
- (void)removeVehicle:(id)arg1;	// IMP=0x001000000001e61f
- (void)addVehicle:(id)arg1;	// IMP=0x001000000001e47f
- (void)loadVehiclesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e16b
- (id)init;	// IMP=0x001000000001dfee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

