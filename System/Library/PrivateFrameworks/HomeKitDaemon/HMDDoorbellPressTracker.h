//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDoorbellPressTracker : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNotificationCenter *_notificationCenter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSMutableDictionary *_dateOfLastDoorbellPressByAccessoryUUID;	// 32 = 0x20
    NSMutableDictionary *_registrationsByAccessoryUUID;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000009ff5f1
- (void).cxx_destruct;	// IMP=0x00000000009ff4a8
@property(retain) NSMutableDictionary *registrationsByAccessoryUUID; // @synthesize registrationsByAccessoryUUID=_registrationsByAccessoryUUID;
@property(retain) NSMutableDictionary *dateOfLastDoorbellPressByAccessoryUUID; // @synthesize dateOfLastDoorbellPressByAccessoryUUID=_dateOfLastDoorbellPressByAccessoryUUID;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x00000000009ff366
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x00000000009fef5b
- (_Bool)doorbellPressInDateInterval:(id)arg1 doorbellAccessory:(id)arg2;	// IMP=0x00000000009fecf6
- (void)stopTrackingPressesForDoorbellAccessory:(id)arg1 registration:(id)arg2;	// IMP=0x00000000009fe766
- (void)startTrackingPressesForDoorbellAccessory:(id)arg1 registration:(id)arg2;	// IMP=0x00000000009fe179
- (id)initWithWorkQueue:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000009fe063

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

