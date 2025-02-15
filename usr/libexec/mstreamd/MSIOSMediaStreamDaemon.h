//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSMediaStreamDaemon.h>

@class APSConnection, MSPowerAssertionManager, NSMutableDictionary, NSString, NSXPCListener;

@interface MSIOSMediaStreamDaemon : MSMediaStreamDaemon
{
    NSXPCListener *_center;	// 8 = 0x8
    APSConnection *_prodAPSConnection;	// 16 = 0x10
    APSConnection *_devAPSConnection;	// 24 = 0x18
    MSPowerAssertionManager *_powerAssertionManager;	// 32 = 0x20
    NSMutableDictionary *_personIDToPowerBudgetPersistedValuesMap;	// 40 = 0x28
    NSMutableDictionary *_personIDToPowerBudgetMap;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000004c63
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetMap; // @synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap;
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetPersistedValuesMap; // @synthesize personIDToPowerBudgetPersistedValuesMap=_personIDToPowerBudgetPersistedValuesMap;
- (_Bool)mayDownloadPersonID:(id)arg1;	// IMP=0x0010000000004bf7
- (void);	// IMP=0x0010000000004bba
- (void)didEndForegroundFocusForPersonID:(id)arg1;	// IMP=0x0010000000004b7d
- (void)didBeginForegroundFocusForPersonID:(id)arg1;	// IMP=0x0010000000004b40
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;	// IMP=0x0010000000004b03
- (void)_serverSideConfigurationDidChange:(id)arg1;	// IMP=0x001000000000494e
- (void)MSPowerBudgetGotSignificantEvent:(id)arg1;	// IMP=0x0010000000004903
- (void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2;	// IMP=0x001000000000455a
- (id)MSPowerBudgetDidRequestPersistedValues:(id)arg1;	// IMP=0x001000000000432f
- (id)_powerBudgetForPersonID:(id)arg1;	// IMP=0x0010000000004103
- (void)_readPowerBudgetParametersForPersonID:(id)arg1;	// IMP=0x001000000000400a
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;	// IMP=0x0010000000003caa
- (void)pauseManagerDidUnpause:(id)arg1;	// IMP=0x0010000000003c4c
- (void)pauseManagerDidPause:(id)arg1;	// IMP=0x0010000000003bee
- (_Bool)isWaitingForAuth;	// IMP=0x0010000000003ba3
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;	// IMP=0x0010000000003b36
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;	// IMP=0x0010000000003ac9
- (void)forgetEverythingForPersonID:(id)arg1;	// IMP=0x00100000000039a8
- (void)unpauseForUUID:(id)arg1;	// IMP=0x0010000000003918
- (void)pauseForUUID:(id)arg1;	// IMP=0x0010000000003888
- (void)resetServerStateForPersonID:(id)arg1;	// IMP=0x0010000000003798
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;	// IMP=0x0010000000003784
- (void)serverSideConfigurationForPersonID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000036a6
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000034f5
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000000341f
- (void)_updatePushNotificationTopicsOutListenToProduction:(_Bool *)arg1 outListenToDevelopment:(_Bool *)arg2;	// IMP=0x001000000000321f
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;	// IMP=0x0010000000003198
- (void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003043
- (void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002eee
- (void)stop;	// IMP=0x0010000000002e79
- (void)start;	// IMP=0x001000000000279e
- (void)didUnidle;	// IMP=0x001000000000272c
- (void)didIdle;	// IMP=0x00100000000026ad
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000246b
- (void)dealloc;	// IMP=0x00100000000023f7
- (id)init;	// IMP=0x00100000000021f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

