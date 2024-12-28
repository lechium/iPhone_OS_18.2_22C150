//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol CSDConversationServerBag <NSObject>
@property(readonly, nonatomic) _Bool faceTimeSpamReportingCheckPrefix;
@property(readonly, nonatomic) double liveLookupTimeoutSeconds;
@property(readonly, nonatomic) unsigned long long voIPDOSMinJailTimeSeconds;
@property(readonly, nonatomic) unsigned long long voIPDOSMaxJailTimeSeconds;
@property(readonly, nonatomic) unsigned long long voIPDOSTimeSeconds;
@property(readonly, nonatomic) long long voIPDOSCount;
@property(readonly, nonatomic) unsigned long long clearMuteCacheDelay;
@property(readonly, nonatomic) long long maxVoicemailLengthFudgeSeconds;
@property(readonly, nonatomic) long long maxVoicemailLengthSeconds;
@property(readonly, nonatomic) long long answeringMachineDidStopTimeout;
@property(readonly, nonatomic) unsigned long long answeringMachineAudioPowerLevelCount;
@property(readonly, nonatomic) float answeringMachineAudioPowerLevelThreshold;
@property(readonly, nonatomic) unsigned long long watchLPMDialDelay;
@property(readonly, nonatomic) unsigned long long watchInviteNotificationDelay;
@property(readonly, nonatomic) unsigned long long handoffUPlusOneLeaveDelay;
@property(readonly, nonatomic) unsigned long long handoffUPlusOneLeaveTimeout;
@property(readonly, nonatomic) unsigned long long handoffAudioDeviceTimeout;
@property(readonly, nonatomic, getter=isGuestModeSupported) _Bool guestModeSupported;
@property(readonly, nonatomic, getter=isUPlusNDowngradeAvailable) _Bool uPlusNDowngradeAvailable;
@property(readonly, nonatomic) unsigned long long maxRemoteSpatialPersonaParticipants;
@property(readonly, nonatomic, getter=isGFTDowngradeToOneToOneAvailable) _Bool gftDowngradeToOneToOneAvailable;
@property(readonly, nonatomic) unsigned long long messageRetryIntervalMillis;
// Error: Property attributes should begin with the type ('T') attribute, property name: messageRetryMaxAttempts
// Property attributes: (null)

@property(readonly, copy, nonatomic) NSDictionary *activityIdentifierBundleIDMapping;
@property(readonly, nonatomic) unsigned long long letMeInRequestUINotificationGracePeriod;
@property(readonly, nonatomic) unsigned long long letMeInRequestRecoveryTimeout;
@property(readonly, nonatomic) unsigned long long letMeInRequestNotificationTimeout;
@property(readonly, nonatomic) unsigned long long linkSyncRecoverTimeLimit;
@property(readonly, nonatomic) unsigned long long linkSyncRecoverFailureLimit;
@property(readonly, nonatomic) unsigned long long webNicknameLengthLimit;
@property(readonly, nonatomic) unsigned long long inactiveLinkCacheLimit;
@property(readonly, nonatomic) unsigned long long inactiveLinkPseudonymExpiry;
@property(readonly, nonatomic) unsigned long long linkRenewalExtensionTime;
@property(readonly, nonatomic) unsigned long long linkRemainingTimeBeforeAutoRenewal;
@property(readonly, nonatomic) unsigned long long linkPseudonymExpiry;
@property(readonly, nonatomic) unsigned long long maxKickMemberRetries;
@property(readonly, nonatomic) unsigned long long maxActiveParticipantFetchRetries;
@property(readonly, nonatomic) unsigned long long addParticipantFromQRTime;
@property(readonly, nonatomic, getter=isFaceTimeMyselfEnabled) _Bool FaceTimeMyselfEnabled;
@property(readonly, nonatomic, getter=shouldRingForIncomingCallEnabled) _Bool ringForIncomingCallEnabled;
@property(readonly, nonatomic, getter=isControlMessageOverQREnabled) _Bool controlMessageOverQREnabled;
@property(readonly, nonatomic, getter=isUPlusOneSessionCapabilitiesEnabled) _Bool uPlusOneSessionCapabilitiesEnabled;
@property(readonly, nonatomic, getter=isNoConversationParticipantEndCallEnabled) _Bool noConversationParticipantEndCallEnabled;
@property(readonly, nonatomic, getter=isLetMeInRequestUIForUnknownParticipantEnabled) _Bool letMeInRequestUIForUnknownParticipantEnabled;
@property(readonly, nonatomic, getter=isSharePlayVersionCheckEnabled) _Bool sharePlayVersionCheckEnabled;
@property(readonly, nonatomic, getter=isMSNPillDataSourceEnabled) _Bool msnPillDataSourceEnabled;
@property(readonly, nonatomic, getter=isModernGFTEnabled) _Bool modernGFTEnabled;
@property(readonly, nonatomic, getter=isParticipantIDToURIIncludedInPush) _Bool participantIDToURIIncludedInPush;
@property(readonly, nonatomic, getter=isAutomaticUpgradingEnabled) _Bool automaticUpgradingEnabled;
@property(readonly, nonatomic, getter=isShortMKIEnabled) _Bool shortMKIEnabled;
@property(readonly, nonatomic) unsigned long long groupFaceTimeTLESampleRate;
@property(readonly, nonatomic) unsigned long long uPlusOneAuthTagSampleRate;
@property(readonly, nonatomic) unsigned long long activeParticipantRefreshDelay;
@property(readonly, nonatomic) unsigned long long rebroadcastTimeThreshold;
@property(readonly, nonatomic) unsigned long long noConversationParticipantTimeout;
@property(readonly, nonatomic) unsigned long long AVCBlobRecoveryTimeout;
@property(readonly, nonatomic) unsigned long long AVCBlobRecoveryGracePeriod;
@property(readonly, nonatomic) unsigned long long greenTeaHandoffTimeout;
@property(readonly, nonatomic) unsigned long long sessionCleanupTimeout;
@property(readonly, nonatomic) unsigned long long activeParticipantPruningTimeout;
- (_Bool)gftaasPseudonymsEnabled:(NSString *)arg1;
- (NSString *)stableBundleIdentifierForLocalBundleIdentifier:(NSString *)arg1;
- (NSString *)localBundleIDForActivityIdentifier:(NSString *)arg1;
@end
