//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWatchManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _pairedWithWatch;	// 24 = 0x18
    NSArray *_connectedWatches;	// 32 = 0x20
    id <HMDIDSService> _service;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000c8ed87
+ (id)shortDescription;	// IMP=0x0010000000c8ed7a
+ (_Bool)isCompatibleWatchDevice:(id)arg1;	// IMP=0x0010000000c8ecef
+ (id)sharedManager;	// IMP=0x0010000000c8ec62
- (void).cxx_destruct;	// IMP=0x0000000000c8e250
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000000c8e0e6
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000000c8de10
- (id)connectedWatchFromDeviceID:(id)arg1;	// IMP=0x0000000000c8dbed
@property(readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property(readonly, getter=isPairedWithWatch) _Bool pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy) NSArray *watches;
- (void)__initializeConnectedDevices;	// IMP=0x0000000000c8d687
- (id)attributeDescriptions;	// IMP=0x0000000000c8d5bb
- (id)init;	// IMP=0x0000000000c8d453

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
