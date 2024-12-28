//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessoryCapabilities, HMResidentCapabilities, NSString, NSUUID;
@protocol HMDCapabilitiesControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCapabilitiesController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    HMAccessoryCapabilities *_currentAccessoryCapabilitiesInternal;	// 32 = 0x20
    HMResidentCapabilities *_currentResidentCapabilitiesInternal;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <HMDCapabilitiesControllerDataSource> _dataSource;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000005cd11c
- (void).cxx_destruct;	// IMP=0x00000000005cbbc0
- (_Bool)areCurrentResidentCapabilitiesPresentAndDifferent:(id)arg1;	// IMP=0x00000000005cbb25
- (_Bool)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)arg1;	// IMP=0x00000000005cba8a
- (void)didRemoveCurrentAccessory:(id)arg1;	// IMP=0x00000000005cb9f8
- (void)currentAccessoryDidBecomeAvailable;	// IMP=0x00000000005cb9a4
- (void)didFinishConfiguringHomes;	// IMP=0x00000000005cb992
- (id)encodedCurrentResidentCapabilities;	// IMP=0x00000000005cb918
- (id)encodedCurrentAccessoryCapabilities;	// IMP=0x00000000005cb89e
- (id)currentResidentCapabilities;	// IMP=0x00000000005cb88c
- (id)currentAccessoryCapabilities;	// IMP=0x00000000005cb87a
@property(retain) HMResidentCapabilities *currentResidentCapabilitiesInternal; // @synthesize currentResidentCapabilitiesInternal=_currentResidentCapabilitiesInternal;
@property(retain) HMAccessoryCapabilities *currentAccessoryCapabilitiesInternal; // @synthesize currentAccessoryCapabilitiesInternal=_currentAccessoryCapabilitiesInternal;
- (void)updateCurrentAccessoryCapabilities;	// IMP=0x00000000005cb445
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000005cb346
- (id)logIdentifier;	// IMP=0x00000000005cb2ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
