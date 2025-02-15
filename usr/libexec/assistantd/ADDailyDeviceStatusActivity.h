//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ADDailyDeviceStatusActivity : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)taskFromActivity:(id)arg1;	// IMP=0x00200000000d627e
+ (id)xpcCriteria;	// IMP=0x00100000000d620d
+ (const char *)activityIdentifier;	// IMP=0x00100000000d6200
- (void).cxx_destruct;	// IMP=0x00200000000d4c86
- (id)fetchVoiceTriggerSettings;	// IMP=0x00100000000d4bbf
- (void)fetchICUserIdentityForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d494c
- (void)fetchAppleMusicSubscriptionForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d4807
- (id)getVolumeCapacity;	// IMP=0x00100000000d4660
- (void)_triggerABCForNullAssistantIdentifier;	// IMP=0x00100000000d453c
- (id)_truncatedGradingOptInStateChanges:(id)arg1;	// IMP=0x00100000000d4343
- (int)getAdaptiveVolumeUserIntent:(int)arg1;	// IMP=0x00100000000d432c
- (int)getSiriDataSharingOptInStatus;	// IMP=0x00100000000d4310
- (void)fetchEnrolledUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d3d15
- (int)_locationAccessPermission;	// IMP=0x00100000000d3c9d
- (_Bool)_preciseLocationEnabled;	// IMP=0x00100000000d3c26
- (_Bool)_isSiriCapableDigitalCarKeyAvailable;	// IMP=0x00100000000d3a72
- (id)_buildDailySelfTriggerSuppressionMetrics;	// IMP=0x00100000000d3a59
- (id)_buildDailyVoiceTriggerMetrics:(id)arg1;	// IMP=0x00100000000d38ba
- (void)buildDailyDeviceStatusHeartbeatMetricsWithSiriEnabled:(_Bool)arg1 onLockscreen:(_Bool)arg2 dictationEnabled:(_Bool)arg3 voiceTriggerEnabled:(_Bool)arg4 starkHasBeenActiveWithin24Hours:(_Bool)arg5 raiseToSpeakEnabled:(_Bool)arg6 activeAppleAudioDevices:(id)arg7 spokenNotificationsEnabled:(_Bool)arg8 announceNotificationsEnabledOnHeadphones:(_Bool)arg9 carplayAnnounceEnablementType:(long long)arg10 isAnnounceNotificationsMutedForCarPlay:(_Bool)arg11 shouldSkipTriggerlessReplyConfirmation:(_Bool)arg12 spokenNotificationsProxCardSeen:(_Bool)arg13 spokenNotificationsControlCenterModuleEnabled:(_Bool)arg14 spokenNotificationsWhitelistSettings:(unsigned long long)arg15 announceCallsEnabled:(_Bool)arg16 preciseLocationEnabled:(_Bool)arg17 locationAccessPermission:(int)arg18 adaptiveSiriVolumeEnabled:(_Bool)arg19 adaptiveSiriVolumePermanentOffsetEnabled:(_Bool)arg20 adaptiveSiriVolumePermanentOffsetFactor:(id)arg21 adaptiveSiriVolumeMostRecentIntent:(id)arg22 isRemoteDarwinVoiceTriggerEnabled:(_Bool)arg23 autoSendSettings:(id)arg24 siriInCallEnablementState:(int)arg25 hangUpEnablementState:(int)arg26 heartbeatQueuedTime:(unsigned long long)arg27 siriVoiceTriggerSettings:(id)arg28 isShowAppsBehindSiriEnabledOnCarPlay:(_Bool)arg29 isSiriCapableDigitalCarKeyAvailable:(_Bool)arg30 connectedBTCarHeadunits:(id)arg31 withCompletion:(CDUnknownBlockType)arg32;	// IMP=0x00100000000d1a04
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0d6d
- (id)init;	// IMP=0x00100000000d0cc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

