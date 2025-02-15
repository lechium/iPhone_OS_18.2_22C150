//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject
{
    CARSessionStatus *_carSessionStatus;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_providerQueue;	// 16 = 0x10
    _Bool _isCarPlayConnected;	// 24 = 0x18
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;	// 32 = 0x20
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;	// 40 = 0x28
    NSHashTable *_delegates;	// 48 = 0x30
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x002000000018c2e4
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x001000000018c24b
+ (long long)platform;	// IMP=0x001000000018c240
+ (id)provider;	// IMP=0x001000000018c1dd
- (void).cxx_destruct;	// IMP=0x002000000018bee9
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x001000000018bd39
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)arg1;	// IMP=0x001000000018bd1b
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(_Bool)arg1;	// IMP=0x001000000018bd13
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018bc81
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018bbf4
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018bb67
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;	// IMP=0x001000000018bb5d
- (void)addDelegate:(id)arg1;	// IMP=0x001000000018bb47
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000018bb33
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000018bb1c
- (void)_updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x001000000018baeb
- (void)updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x001000000018ba9d
- (void)_isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018b9f4
- (void)isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018b967
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000018b7e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

