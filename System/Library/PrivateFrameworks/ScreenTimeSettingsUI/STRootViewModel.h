//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, STUIUser;

__attribute__((visibility("hidden")))
@interface STRootViewModel : NSObject
{
    _Bool _canStopScreenTimeWithoutPasscode;	// 8 = 0x8
    _Bool _isCloudSyncEnabled;	// 9 = 0x9
    _Bool _isCommunicationSafetyReceivingRestricted;	// 10 = 0xa
    _Bool _isCommunicationSafetySendingRestricted;	// 11 = 0xb
    _Bool _isCommunicationSafetyNotificationEnabled;	// 12 = 0xc
    _Bool _isCommunicationSafetyAnalyticsEnabled;	// 13 = 0xd
    _Bool _hasWatchOSDevicesInternal;	// 14 = 0xe
    _Bool _hasWatchOSDevicesOnlyInternal;	// 15 = 0xf
    NSSet *_installedBundleIDs;	// 16 = 0x10
    NSDictionary *_installedBundleIDsByCategoryIdentifier;	// 24 = 0x18
    STUIUser *_me;	// 32 = 0x20
    NSArray *_children;	// 40 = 0x28
    NSArray *_devices;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingHasWatchOSDevicesOnly;	// IMP=0x0060000000096c33
+ (id)keyPathsForValuesAffectingHasWatchOSDevices;	// IMP=0x0060000000096c01
+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;	// IMP=0x0060000000096abe
+ (id)keyPathsForValuesAffectingForceParentalControls;	// IMP=0x0060000000096a2c
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;	// IMP=0x00600000000969a1
+ (id)keyPathsForValuesAffectingCanSetUpFamily;	// IMP=0x00600000000968e9
+ (id)keyPathsForValuesAffectingCanEditScreenTimePasscode;	// IMP=0x0060000000096824
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;	// IMP=0x006000000009671f
+ (id)keyPathsForValuesAffectingCanSignIn;	// IMP=0x0060000000096663
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;	// IMP=0x006000000009651b
+ (id)keyPathsForValuesAffectingIsLocalOrRemotelyManagedUserWithScreenTimeDisabled;	// IMP=0x0060000000096454
+ (id)keyPathsForValuesAffectingIsLocalOrRemotelyManagedUser;	// IMP=0x00600000000963ac
+ (id)keyPathsForValuesAffectingIsRemoteUnmanagedChild;	// IMP=0x00600000000962fa
+ (id)keyPathsForValuesAffectingWebUsageEnabled;	// IMP=0x0060000000096296
+ (id)keyPathsForValuesAffectingIsSharingUsageData;	// IMP=0x00600000000961c3
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;	// IMP=0x0060000000096086
+ (id)keyPathsForValuesAffectingCanStopScreenTime;	// IMP=0x0060000000095f8e
+ (id)keyPathsForValuesAffectingCanStartScreenTime;	// IMP=0x0060000000095ee1
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;	// IMP=0x0060000000095e7d
- (void).cxx_destruct;	// IMP=0x0000000000096d4e
@property(nonatomic) _Bool hasWatchOSDevicesOnlyInternal; // @synthesize hasWatchOSDevicesOnlyInternal=_hasWatchOSDevicesOnlyInternal;
@property(nonatomic) _Bool hasWatchOSDevicesInternal; // @synthesize hasWatchOSDevicesInternal=_hasWatchOSDevicesInternal;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) _Bool isCommunicationSafetyAnalyticsEnabled; // @synthesize isCommunicationSafetyAnalyticsEnabled=_isCommunicationSafetyAnalyticsEnabled;
@property(readonly, nonatomic) _Bool isCommunicationSafetyNotificationEnabled; // @synthesize isCommunicationSafetyNotificationEnabled=_isCommunicationSafetyNotificationEnabled;
@property(readonly, nonatomic) _Bool isCommunicationSafetySendingRestricted; // @synthesize isCommunicationSafetySendingRestricted=_isCommunicationSafetySendingRestricted;
@property(readonly, nonatomic) _Bool isCommunicationSafetyReceivingRestricted; // @synthesize isCommunicationSafetyReceivingRestricted=_isCommunicationSafetyReceivingRestricted;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) STUIUser *me; // @synthesize me=_me;
@property(copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier; // @synthesize installedBundleIDsByCategoryIdentifier=_installedBundleIDsByCategoryIdentifier;
@property(copy, nonatomic) NSSet *installedBundleIDs; // @synthesize installedBundleIDs=_installedBundleIDs;
@property(nonatomic) _Bool isCloudSyncEnabled; // @synthesize isCloudSyncEnabled=_isCloudSyncEnabled;
@property(nonatomic) _Bool canStopScreenTimeWithoutPasscode; // @synthesize canStopScreenTimeWithoutPasscode=_canStopScreenTimeWithoutPasscode;
@property(readonly) _Bool hasWatchOSDevicesOnly;
@property(readonly) _Bool hasWatchOSDevices;
@property(readonly, nonatomic) _Bool shouldShowCompatibilityAlerts;
@property(readonly, nonatomic) _Bool canToggleWebsiteData;
@property(readonly, nonatomic) _Bool forceParentalControls;
@property(readonly, nonatomic) _Bool canViewAskForTimeRequests;
@property(readonly, nonatomic) _Bool canSetUpFamily;
@property(readonly, nonatomic) _Bool canEditScreenTimePasscode;
@property(readonly, nonatomic) _Bool canToggleCloudSyncData;
@property(readonly, nonatomic) _Bool canSignIn;
@property(readonly, nonatomic) _Bool isRemotelyManagedUserWithPasscode;
@property(readonly, nonatomic) _Bool isLocalOrRemotelyManagedUserWithScreenTimeDisabled;
@property(readonly, nonatomic) _Bool isLocalOrRemotelyManagedUser;
@property(readonly, nonatomic) _Bool isRemoteUnmanagedChild;
@property(readonly, nonatomic, getter=isWebUsageEnabled) _Bool webUsageEnabled;
@property(readonly, nonatomic) _Bool isSharingUsageData;
@property(readonly, nonatomic) _Bool canStopSharingScreenTime;
@property(readonly, nonatomic) _Bool canStopScreenTime;
@property(readonly, nonatomic) _Bool canStartScreenTime;
@property(readonly, nonatomic, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
- (id)init;	// IMP=0x0000000000095de4

@end
