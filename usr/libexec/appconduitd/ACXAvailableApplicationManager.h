//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXAvailableApplicationManager : NSObject
{
    _Bool _trustChangeEvaluationPending;	// 8 = 0x8
    NSDictionary *_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSUUID *_lastLSUUID;	// 32 = 0x20
    NSUUID *_ourDBUUID;	// 40 = 0x28
    unsigned long long _lastSequenceNumber;	// 48 = 0x30
    NSMutableDictionary *_companionToWatchAppsBundleIDMap;	// 56 = 0x38
    NSMutableDictionary *_appList;	// 64 = 0x40
}

+ (id)sharedApplicationManager;	// IMP=0x002000000000957c
- (void).cxx_destruct;	// IMP=0x0020000000010bf2
@property(nonatomic) _Bool trustChangeEvaluationPending; // @synthesize trustChangeEvaluationPending=_trustChangeEvaluationPending;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSMutableDictionary *companionToWatchAppsBundleIDMap; // @synthesize companionToWatchAppsBundleIDMap=_companionToWatchAppsBundleIDMap;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0010000000010758
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000010569
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000000102f9
@property(readonly, nonatomic) NSDictionary *possibleCompanionDeletableSystemAppToWatchCounterpartsMap; // @synthesize possibleCompanionDeletableSystemAppToWatchCounterpartsMap=_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;
- (id)locallyAvailableSystemAppBundleIDToCompanionBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000fbdc
- (id)locallyAvailableSystemAppBundleIDToCompanionBundleIDMapping;	// IMP=0x001000000000f92f
- (id)bundleIDsOfLocallyAvailableSystemAppsForPreWatchOSSix;	// IMP=0x001000000000f76b
- (id)bundleIDsOfLocallyAvailableSystemApps;	// IMP=0x001000000000f6bf
- (id)_bundleIDsOfLocallyAvailableSystemApps;	// IMP=0x001000000000f55c
- (id)companionBundleIDForLocallyAvailableSystemApp:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f2e1
- (_Bool)systemAppIsAvailableWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f0a6
- (id)availableSystemAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000eda3
- (id)_supplementalSystemAppBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000ed96
- (id)_systemAppBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000ed89
- (id)_supplementalSystemAppBundleIDMappingForWatchOSSixAndLater;	// IMP=0x001000000000ed70
- (id)_alwaysIgnoredSystemAppBundleIDs;	// IMP=0x001000000000ed50
- (id)gizmoAppForCompanionAppBundleID:(id)arg1;	// IMP=0x001000000000eb15
- (id)gizmoAppBundleIDsForCompanionAppBundleIDs:(id)arg1;	// IMP=0x001000000000e7dc
- (id)gizmoAppBundleIDForCompanionAppBundleID:(id)arg1;	// IMP=0x001000000000e60e
- (id)allAvailablePlaceholders;	// IMP=0x001000000000e2b8
- (id)bundleIDsOfAvailableAppsExcludingSystemApps;	// IMP=0x001000000000e0c2
- (id)allAvailableApps;	// IMP=0x001000000000df62
- (_Bool)gizmoAppIsLocallyAvailableWithBundleID:(id)arg1;	// IMP=0x001000000000ddea
- (id)gizmoAppWithBundleID:(id)arg1;	// IMP=0x001000000000dbff
- (id)infoForGizmoAppsWithBundleIDs:(id)arg1;	// IMP=0x001000000000d8f6
- (void)profileTrustChanged;	// IMP=0x001000000000d35a
- (void)applicationsUninstalledWithAppRecords:(id)arg1;	// IMP=0x001000000000ccd2
- (void)processApplication:(id)arg1 withNewApps:(id)arg2 updatedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4;	// IMP=0x001000000000c980
- (void)processApplicationRemovalWithCompanionBundleID:(id)arg1 removedApps:(id)arg2;	// IMP=0x001000000000c622
- (void)applicationsInstalledWithCompanionIdentifiers:(id)arg1;	// IMP=0x001000000000c086
- (void)applicationsInstalledWithAppRecords:(id)arg1;	// IMP=0x001000000000bf53
- (void)addGizmoBundleId:(id)arg1 forCompanionBundleID:(id)arg2 toMap:(id)arg3;	// IMP=0x001000000000be42
- (void)_onQueue_reSyncWithLS;	// IMP=0x001000000000ae3a
- (void)_onQueue_noteTrustObtainedForApps:(id)arg1 trustRemovedForApps:(id)arg2;	// IMP=0x001000000000adab
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4;	// IMP=0x001000000000ace3
- (void)_onQueue_noteDatabaseRebuild;	// IMP=0x001000000000ac9f
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;	// IMP=0x001000000000aa85
- (void)_onQueue_writeAppListToDisk;	// IMP=0x001000000000a574
- (_Bool)_verifyInternalDataStructures;	// IMP=0x001000000000a3a4
- (id)init;	// IMP=0x00100000000095d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

