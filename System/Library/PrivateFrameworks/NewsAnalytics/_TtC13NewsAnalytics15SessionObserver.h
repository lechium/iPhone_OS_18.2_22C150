//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13NewsAnalytics15SessionObserver : NSObject
{
    MISSING_TYPE *sessionManager;	// 8 = 0x8
    MISSING_TYPE *aggregateStateModeProvider;	// 16 = 0x10
    MISSING_TYPE *cloudContext;	// 56 = 0x38
    MISSING_TYPE *client;	// 64 = 0x40
    MISSING_TYPE *fsidProvider;	// 72 = 0x48
    MISSING_TYPE *onboardingVersion;	// 80 = 0x50
    MISSING_TYPE *appExtensionCommunicator;	// 88 = 0x58
    MISSING_TYPE *kind;	// 128 = 0x80
    MISSING_TYPE *tracker;	// 136 = 0x88
    MISSING_TYPE *sessionStartSource;	// 144 = 0x90
    MISSING_TYPE *tabiDataProvider;	// 152 = 0x98
    MISSING_TYPE *liveActivityCountDataProvider;	// 192 = 0xc0
    MISSING_TYPE *userEmbeddingDataProvider;	// 232 = 0xe8
    MISSING_TYPE *sessionURLManager;	// 272 = 0x110
    MISSING_TYPE *window;	// 280 = 0x118
    MISSING_TYPE *sceneSessionIdentifier;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000179130
- (id)init;	// IMP=0x00000000001797a0
@property(nonatomic, copy) NSString *sceneSessionIdentifier;
- (void)dealloc;	// IMP=0x0000000000179110
- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;	// IMP=0x00000000000273b0
- (void)bundleSubscriptionDidSubscribe:(id)arg1;	// IMP=0x00000000000274d0
- (void)bundleSubscriptionDidExpire:(id)arg1;	// IMP=0x0000000000027350
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)arg1;	// IMP=0x0000000000047b10
- (void)pushContentEnvironmentData;	// IMP=0x00000000000b4ae0
- (void)familySharingStatusDidChange:(id)arg1;	// IMP=0x00000000000bf9e0
- (void)pushOrientationData;	// IMP=0x00000000000fad80
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000012d2f0
- (void)contentSizeCategoryDidChange;	// IMP=0x0000000000176850
- (void)sessionWillEndWithEndReason:(id)arg1;	// IMP=0x000000000017c090
- (void)sessionWillResignActive;	// IMP=0x000000000017a820
- (void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2 url:(id)arg3;	// IMP=0x000000000017a6e0
- (void)networkReachabilityConnectivityDidChange:(id)arg1;	// IMP=0x000000000017c260
- (void)pushUserSubscriptionContextData;	// IMP=0x00000000001f3ff0
- (void)userInfoDidChangePuzzleNotificationsEnabled:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fb170
- (void)userInfoDidChangeAdsUserID:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fb000
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fb390
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fb3a0
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fb380
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000001fae90
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;	// IMP=0x0000000000263260
- (void)offerDidChange:(id)arg1;	// IMP=0x000000000027bd00
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;	// IMP=0x0000000000284240
- (void)shortcutList:(id)arg1 didAddShortcuts:(id)arg2 changedShortcuts:(id)arg3 removedShortcuts:(id)arg4;	// IMP=0x00000000002843f0

@end

