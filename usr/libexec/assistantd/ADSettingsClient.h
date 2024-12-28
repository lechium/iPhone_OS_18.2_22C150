//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreEmbeddedSpeechRecognizer, MISSING_TYPE, NSString, NSXPCConnection;

@interface ADSettingsClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000035b51a
- (oneway void)getODDDeviceProperties:(CDUnknownBlockType)arg1;	// IMP=0x001000000035b471
- (void)createRadarForCrashWithReason:(id)arg1 process:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000035b147
- (oneway void)readSyncTokenForAceHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035b021
- (oneway void)setSyncToken:(id)arg1 forAceHost:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000035af77
- (oneway void)getCurrentActiveLanguageCodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035aedd
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035ae6c
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000035adbc
- (oneway void)areSiriSAEAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x001000000035ac1c
- (oneway void)areSiriUODAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x001000000035ab35
- (oneway void)fetchSharedUserIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x001000000035aaa7
- (oneway void)dumpAssistantState:(CDUnknownBlockType)arg1;	// IMP=0x001000000035aa19
- (oneway void)setVoiceTriggerEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a9b0
- (oneway void)isVoiceTriggerEnabled:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a983
- (oneway void)setAllowJustSiriHomeKitSetting:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a90a
- (oneway void)isJustSiriEnabledInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a89d
- (oneway void)availableLanguagesInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a830
- (oneway void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x001000000035a7df
- (oneway void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a724
- (void)adSyncVerificationServerReport:(id)arg1;	// IMP=0x001000000035a6bb
- (void)adSyncVerificationPartialResult:(id)arg1;	// IMP=0x001000000035a652
- (oneway void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000035a522
- (oneway void)getSidekickBoostsFileWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a4b5
- (oneway void)getTrialEnables:(id)arg1 doubleFactors:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000035a414
- (oneway void)getAccessoryInfoForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a385
- (oneway void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a2f6
- (oneway void)pushSCDAAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a267
- (oneway void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000035a1d8
- (oneway void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a16b
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035a0fe
- (oneway void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000035a057
- (oneway void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359fc8
- (oneway void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359f94
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359f5e
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x0010000000359f0d
- (oneway void)isSearchDataSharingStatusForced:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359e20
- (oneway void)getSearchQueriesDataSharingStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359d34
- (oneway void)setSearchQueriesDataSharingStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359c03
- (oneway void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359b07
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359ad3
- (oneway void)sendSampledAudioToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359a8a
- (oneway void)setIsHomePodInHH2Mode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003599c3
- (oneway void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003598d2
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035989c
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000035958a
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035949e
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359381
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x0010000000359377
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x001000000035936a
- (oneway void)clearShowAppsBehindSiriInCarPlayEnabled;	// IMP=0x0010000000359360
- (oneway void)setShowAppsBehindSiriInCarPlayEnabled:(_Bool)arg1;	// IMP=0x0010000000359354
- (oneway void)getShowAppsBehindSiriInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359323
- (oneway void)clearMessageWithoutConfirmationHeadphonesEnabled;	// IMP=0x0010000000359319
- (oneway void)setMessageWithoutConfirmationHeadphonesEnabled:(_Bool)arg1;	// IMP=0x001000000035930d
- (oneway void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003592dc
- (oneway void)clearMessageWithoutConfirmationInCarPlayEnabled;	// IMP=0x00100000003592d2
- (oneway void)setMessageWithoutConfirmationInCarPlayEnabled:(_Bool)arg1;	// IMP=0x00100000003592c6
- (oneway void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359295
- (oneway void)clearMessageWithoutConfirmationEnabled;	// IMP=0x001000000035928b
- (oneway void)setMessageWithoutConfirmationEnabled:(_Bool)arg1;	// IMP=0x001000000035927f
- (oneway void)getMessageWithoutConfirmationEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035924e
- (oneway void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(_Bool)arg1;	// IMP=0x0010000000359242
- (oneway void)updateAnnounceNotificationsOnHearingAidSupportedStatus;	// IMP=0x0010000000359238
- (oneway void)setAnnounceNotificationsOnHearingAidsSupported:(_Bool)arg1;	// IMP=0x001000000035922c
- (oneway void)setAnnounceNotificationsOnHearingAidsEnabled:(_Bool)arg1;	// IMP=0x0010000000359220
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x0010000000359177
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x0010000000359087
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359056
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x0010000000358fcc
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x0010000000358f29
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358ef8
- (oneway void)fetchCurrentlyRoutedHeadphonesCBUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358e8b
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x0010000000358e78
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000358e1d
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x0010000000358e0d
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000358db7
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x0010000000358dad
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x0010000000358da1
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358d70
- (oneway void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x0010000000358d64
- (oneway void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358d33
- (oneway void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x0010000000358d27
- (oneway void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000358cf6
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x0010000000358cec
- (oneway void)stopObservingBluetoothInEarDetectionStateForObserverID:(unsigned long long)arg1;	// IMP=0x0010000000358c99
- (oneway void)startObservingBluetoothInEarDetectionStateForBTAddress:(id)arg1 forObserverID:(unsigned long long)arg2;	// IMP=0x0010000000358c1e
- (oneway void)postJSDiscoveryNotificationForBTDeviceWithInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000358c18
- (id)_localizedBodyWithFormat:(id)arg1 forTriggerPhrase:(id)arg2 andName:(id)arg3;	// IMP=0x0010000000358b85
- (oneway void)getInEarDetectionStateForBTAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003589e8
- (oneway void)stopObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000003589a4
- (oneway void)startObservingBluetoothWirelessSplitterSession;	// IMP=0x0010000000358960
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035887a
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035886d
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035878b
- (oneway void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035868b
- (oneway void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035858b
- (oneway void)getHeadGesturesForCurrentlyRoutedDevice:(CDUnknownBlockType)arg1;	// IMP=0x00100000003584fa
- (oneway void)setHeadGesturesForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000358463
- (oneway void)getPersonalVolumeForCurrentlyRoutedDevice:(CDUnknownBlockType)arg1;	// IMP=0x00100000003583d2
- (oneway void)setPersonalVolumeForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035833b
- (oneway void)getConversationAwarenessForCurrentlyRoutedDevice:(CDUnknownBlockType)arg1;	// IMP=0x00100000003582aa
- (oneway void)setConversationAwarenessForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000358213
- (oneway void)_executeBlockWithCurrentlyRoutedDevice:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035808b
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000357fa8
- (oneway void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000357ed4
- (oneway void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357e1b
- (oneway void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357d62
- (MISSING_TYPE *)sendMetricsToServerWithCompletion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000357c8b
- (oneway void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357bd2
- (oneway void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357b19
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003579c9
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000357955
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x001000000035793f
- (oneway void)getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357884
- (oneway void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003577a4
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003576e0
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035761c
- (oneway void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000357558
- (oneway void)showHomeProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357525
- (oneway void)resetProfileNames:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003574f2
- (oneway void)showLocalProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003574bf
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357440
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003573c3
- (oneway void)getMultiUserCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357346
- (oneway void)showMultiUserCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000357278
- (oneway void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x00100000003571fb
- (oneway void)removeMultiUserUserWithSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000357129
- (oneway void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000357057
- (oneway void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000356f01
- (oneway void)getPersonalMultiUserDeviceIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x0010000000356b6a
- (oneway void)getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000356af9
- (oneway void)setNanoAlwaysShowRecognizedSpeech:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356ae7
- (oneway void)setNanoSiriResponseShouldAlwaysPrint:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356ad5
- (oneway void)setNanoMessageWithoutConfirmationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356ac3
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356ab1
- (oneway void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a9f
- (oneway void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a8d
- (oneway void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a7b
- (oneway void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a69
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a57
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a45
- (oneway void)setNanoDictationAutoPunctuationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a33
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a21
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356a0f
- (oneway void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x001000000035699e
- (oneway void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000035692d
- (oneway void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x0010000000356874
- (oneway void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000356806
- (oneway void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000356798
- (oneway void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000035672a
- (oneway void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000003566bc
- (oneway void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000356650
- (oneway void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003565e4
- (oneway void)postTestResultSelectedWithRcId:(id)arg1;	// IMP=0x0010000000356577
- (oneway void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00100000003564e8
- (oneway void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003563e4
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x001000000035636f
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00100000003562d9
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000035622d
- (oneway void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x0010000000356032
- (oneway void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000355e6a
- (void)_createMockServerIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000355d93
- (oneway void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000355c9c
- (oneway void)dismissUI;	// IMP=0x0010000000355c58
- (oneway void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x0010000000355af9
- (oneway void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000035587f
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035576d
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000355699
- (oneway void)setSpeechProfileExternalOfflineModelRootPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000355605
- (oneway void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000355571
- (oneway void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003554b0
- (oneway void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003553f7
- (oneway void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035533e
- (id)_localSpeechRecognizer;	// IMP=0x00100000003552ea
- (oneway void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000355195
- (oneway void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000355061
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354f6d
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354eab
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354c8c
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000354bf7
- (oneway void)getCurrentNWActivityIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000354ac3
- (oneway void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354a34
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003549c7
- (oneway void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003548e7
- (oneway void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003547e2
- (oneway void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000354729
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003546bc
- (oneway void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x00100000003546af
- (oneway void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003545f6
- (oneway void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354567
- (oneway void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003544fa
- (oneway void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035448d
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000354477
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x001000000035445f
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000354449
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000035439e
- (oneway void)_runServiceMaintenance;	// IMP=0x0010000000354358
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000035417b
- (oneway void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x001000000035410c
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000353e79
- (oneway void)_isInactiveDeviceSyncDisabled:(CDUnknownBlockType)arg1;	// IMP=0x0010000000353e3e
- (oneway void)_isInactiveDeviceSyncDisabledByTrial:(CDUnknownBlockType)arg1;	// IMP=0x0010000000353dba
- (oneway void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x0010000000353d20
- (oneway void)_setSyncNeededForReason:(id)arg1;	// IMP=0x0010000000353d13
- (oneway void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x0010000000353c7b
- (oneway void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000353be3
- (oneway void)barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000353bd8
- (oneway void)_resetSessionsAtNextRequestBoundary;	// IMP=0x0010000000353b1c
- (oneway void)_shutdownSessionIfIdle;	// IMP=0x0010000000353a5a
- (oneway void)_killDaemon;	// IMP=0x0010000000353998
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;	// IMP=0x001000000035383b
- (oneway void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x00100000003537c2
- (oneway void)setDictationAutoPunctuationEnabled:(_Bool)arg1;	// IMP=0x0010000000353771
- (oneway void)setDictationEnabled:(_Bool)arg1;	// IMP=0x0010000000353510
- (oneway void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x00100000003533fa
- (oneway void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x001000000035333f
- (oneway void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000003532d2
- (oneway void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x0010000000353265
- (void)_saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000003531bb
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x0010000000352f17
- (oneway void)retrieveAccountMessageDictionariesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000352dcf
- (oneway void)fetchSupportedLanguagesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000352cf0
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000352cda
- (id)_serviceDelegate;	// IMP=0x0010000000352cc4
- (void)connectionDisconnected;	// IMP=0x0010000000352c7a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000352c0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
