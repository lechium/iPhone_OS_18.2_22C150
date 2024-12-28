//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKLazuliEnablementManager : NSObject
{
    CoreTelephonyClient *_client;	// 8 = 0x8
    NSMutableDictionary *_enablementCache;	// 16 = 0x10
    NSMutableDictionary *_contextToConfigurationCache;	// 24 = 0x18
    NSMutableDictionary *_registrationStateCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d625
@property(retain, nonatomic) NSMutableDictionary *registrationStateCache; // @synthesize registrationStateCache=_registrationStateCache;
@property(retain, nonatomic) NSMutableDictionary *contextToConfigurationCache; // @synthesize contextToConfigurationCache=_contextToConfigurationCache;
@property(retain, nonatomic) NSMutableDictionary *enablementCache; // @synthesize enablementCache=_enablementCache;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void)typingIndicator:(id)arg1 from:(id)arg2 withID:(id)arg3 withInfo:(id)arg4;	// IMP=0x000000000002d5b3
- (void)systemCapabilitiesChanged:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000002d5ad
- (void)requestToEnableDisplayedNotifications:(id)arg1 from:(id)arg2 withID:(id)arg3;	// IMP=0x000000000002d5a7
- (void)requestToDisableAnonymization:(id)arg1 from:(id)arg2 withID:(id)arg3;	// IMP=0x000000000002d5a1
- (void)participantRemovedFromGroupChat:(id)arg1 withConversationID:(id)arg2 withParticipant:(id)arg3;	// IMP=0x000000000002d59b
- (void)participantRemoved:(id)arg1 fromGroupChat:(id)arg2 withParticipant:(id)arg3;	// IMP=0x000000000002d595
- (void)participantAddedToGroupChat:(id)arg1 withConversationID:(id)arg2 withParticipant:(id)arg3;	// IMP=0x000000000002d58f
- (void)participantAdded:(id)arg1 toGroupChat:(id)arg2 withParticipant:(id)arg3;	// IMP=0x000000000002d589
- (void)messageSendSuccess:(id)arg1 withID:(id)arg2;	// IMP=0x000000000002d583
- (void)messageSendFailure:(id)arg1 withID:(id)arg2 withError:(id)arg3;	// IMP=0x000000000002d57d
- (void)messageReceived:(id)arg1 withID:(id)arg2 ofType:(id)arg3;	// IMP=0x000000000002d577
- (void)lazuliToggleStatus:(id)arg1 withState:(id)arg2;	// IMP=0x000000000002d571
- (void)dispositionNotification:(id)arg1 withID:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000000002d56b
- (void)chatBotInformationSearchComplete:(id)arg1 forDestination:(id)arg2 withInformation:(id)arg3;	// IMP=0x000000000002d565
- (void)_registrationCacheSetObject:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000002d45b
- (id)_registrationCacheObjectForContext:(id)arg1;	// IMP=0x000000000002d297
- (void)_enablementCacheSetObject:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000002d18d
- (id)_enablementCacheObjectForContext:(id)arg1;	// IMP=0x000000000002cfc9
- (id)fetchSystemConfiguration:(id)arg1;	// IMP=0x000000000002ce98
- (void)_cacheSetConfigurationForContext:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000002cd8e
- (id)_cacheGetConfigurationForContext:(id)arg1;	// IMP=0x000000000002cbca
- (void)systemConfigurationChanged:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000002c458
- (void)setRCSEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002bf60
- (long long)registrationStateFor:(id)arg1;	// IMP=0x000000000002be28
- (id)isRCSEnabled:(id)arg1;	// IMP=0x000000000002bce1
- (_Bool)isRCSSupportedForAnyActiveSubscription;	// IMP=0x000000000002baec
- (_Bool)isRCSEnabledForAnyActiveSubscription;	// IMP=0x000000000002b7b7
- (_Bool)_isRCSBusinessMessagingEnabledByDefaultForSubscriptionContext:(id)arg1;	// IMP=0x000000000002b6a9
- (_Bool)isRCSBusinessMessagingEnabledByDefault;	// IMP=0x000000000002b4b2
- (_Bool)_isRCSDisabledByProfileForContext:(id)arg1;	// IMP=0x000000000002b453
- (id)rcsMessagingCapabilitiesForContext:(id)arg1;	// IMP=0x000000000002b3e8
- (long long)_isRCSBusinessMessagingEnabledByUserPreferenceForSubscriptionContext:(id)arg1;	// IMP=0x000000000002b2c8
- (long long)isRCSBusinessMessagingEnabledByUserPreference;	// IMP=0x000000000002b0af
- (_Bool)_isRCSBusinessMessagingSupportedForSubscription:(id)arg1;	// IMP=0x000000000002afa1
- (_Bool)isRCSBusinessMessagingSupported;	// IMP=0x000000000002adfd
- (void)_setRCSBusinessMessagingEnabledForSubscription:(id)arg1 enabled:(id)arg2;	// IMP=0x000000000002acf1
- (void)setRCSBusinessMessagingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002ab05
- (id)getSubscriptionWithRCSBusinessMessaging;	// IMP=0x000000000002a945
- (id)ctSubscriptionInfo;	// IMP=0x000000000002a8ee
- (long long)registrationStateForSubscriptionContext:(id)arg1;	// IMP=0x000000000002a751
- (id)isRCSEnabledForSubscriptionContext:(id)arg1;	// IMP=0x000000000002a5df
- (long long)_fetchRegistrationState:(id)arg1;	// IMP=0x000000000002a38e
- (id)_fetchIsRCSEnabled:(id)arg1;	// IMP=0x0000000000029f53
- (id)init;	// IMP=0x0000000000029e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
