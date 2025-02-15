//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;
@protocol STScreenTimeStateManager;

@interface STManagementStateServer : NSObject
{
    NSObject<STScreenTimeStateManager> *_screenTimeManager;	// 8 = 0x8
    NSTimer *_notificationTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005ac59
@property(retain, nonatomic) NSTimer *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain, nonatomic) NSObject<STScreenTimeStateManager> *screenTimeManager; // @synthesize screenTimeManager=_screenTimeManager;
- (void)triggerDowngradeMigrationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005abba
- (void)postNotificationForContext:(id)arg1;	// IMP=0x001000000005ab43
- (void)lastModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005aab8
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005aa2d
- (void)setLocationSharingModificationAllowed:(_Bool)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a99f
- (void)isLocationSharingModificationAllowedForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a914
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a877
- (void)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a7b1
- (void)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a6eb
- (void)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a625
- (void)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a588
- (void)applyDefaultUserPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005a51f
- (void)performMigrationFromMCXSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a494
- (void)deleteAllWebApplicationHistory:(id)arg1 clientBundleURLWrapper:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a3a7
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005a29d
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005a193
- (void)deleteAllWebApplicationHistory:(id)arg1 profileIdentifier:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059fc3
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059de1
- (void)deleteWebHistoryForDomain:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059bff
- (void)deleteWebHistoryForURLs:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059a1d
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005983b
- (void)deleteAllWebApplicationHistory:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000596b0
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000594e0
- (void)deleteWebHistoryForDomain:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059310
- (void)deleteWebHistoryForURLs:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059140
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058f70
- (void)enableWebContentFilterWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058f07
- (void)isWebContentRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058d86
- (void)isExplicitContentRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058c05
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058b7a
- (void)setContactManagementState:(long long)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058aec
- (void)primaryiCloudCardDAVAccountIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000589f6
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005896b
- (void)communicationPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058902
- (void)shouldRequestMoreTimeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005884f
- (void)authenticateRestrictionsPasscode:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005874b
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000586e2
- (void)setRestrictionsPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058630
- (void)needsToSetRestrictionsPasscodeWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058573
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000583f2
- (void)clearRestrictionsPasscodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005834c
- (void)isContentPrivacyEnabledForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000582c1
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005824c
- (void)screenTimeSyncStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000581cd
- (void)enableRemoteManagementForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058142
- (void)enableScreenTimeForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000580b7
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058042
- (void)screenTimeStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000057fc3
- (void)scheduleManagementStateUpdateNotification;	// IMP=0x0010000000057e08
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000057daf
- (id)_observedManagerKeyPaths;	// IMP=0x0010000000057d32
- (void)dealloc;	// IMP=0x0010000000057b9b
- (id)initWithScreenTimeStateManager:(id)arg1;	// IMP=0x00100000000579e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

