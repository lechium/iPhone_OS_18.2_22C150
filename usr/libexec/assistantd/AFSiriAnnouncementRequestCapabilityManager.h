//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

@interface AFSiriAnnouncementRequestCapabilityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 24 = 0x18
    long long _platform;	// 32 = 0x20
}

+ (_Bool)_supportsAnnouncementType:(long long)arg1 forSupportedIntents:(id)arg2 forBundleId:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x002000000031fb07
+ (id)_requiredPlatformsForNotificationAnnouncementType:(long long)arg1;	// IMP=0x001000000031fab5
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)arg1;	// IMP=0x001000000031fa7f
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContent:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x001000000031f8f2
+ (id)_candidateAnnounceNotificationTypesFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContentType:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x001000000031f37d
+ (id)supportedAnnouncementTypesForBundleId:(id)arg1 onPlatform:(long long)arg2;	// IMP=0x001000000031ef62
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x001000000031ee21
- (void).cxx_destruct;	// IMP=0x002000000031ea0a
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x001000000031e8b9
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x001000000031e768
- (void)removeObserver:(id)arg1;	// IMP=0x001000000031e6a9
- (void)addObserver:(id)arg1;	// IMP=0x001000000031e5ea
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000031e5cd
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000031e5b0
- (id)initWithPlatform:(long long)arg1;	// IMP=0x001000000031e4b9

@end

