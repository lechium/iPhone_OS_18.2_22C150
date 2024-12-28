//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol EDConversationSubscriptionProvider, EFAssertableScheduler, EMVIPReader, MFFavoritesReader, MFSystemUserNotificationCenter, MFUserNotificationCenterUpgraderDelegate;

@interface MFUserNotificationCenterUpgrader : NSObject
{
    id <MFUserNotificationCenterUpgraderDelegate> _delegate;	// 8 = 0x8
    id <MFSystemUserNotificationCenter> _systemUserNotificationCenter;	// 16 = 0x10
    id <EDConversationSubscriptionProvider> _conversationSubscriptionProvider;	// 24 = 0x18
    id <EMVIPReader> _vipReader;	// 32 = 0x20
    id <MFFavoritesReader> _favoritesReader;	// 40 = 0x28
    NSArray *_activeAccounts;	// 48 = 0x30
    id <EFAssertableScheduler> _scheduler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000be735
@property(readonly, nonatomic) id <EFAssertableScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_activeAccounts;
@property(readonly, nonatomic) id <MFFavoritesReader> favoritesReader; // @synthesize favoritesReader=_favoritesReader;
@property(readonly, nonatomic) id <EMVIPReader> vipReader; // @synthesize vipReader=_vipReader;
- (id);	// IMP=0x00100000000be703
@property(retain, nonatomic) id <MFSystemUserNotificationCenter> systemUserNotificationCenter; // @synthesize systemUserNotificationCenter=_systemUserNotificationCenter;
@property(nonatomic) __weak id <MFUserNotificationCenterUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_dataMigrationIsComplete;	// IMP=0x00100000000be6b9
- (_Bool)_canAccessDatabase;	// IMP=0x00100000000be53c
- (id)_criterionForSpecialNotifications:(id)arg1;	// IMP=0x00100000000be3cd
- (id)_criterionForExcludedDateRanges:(id)arg1;	// IMP=0x00100000000be037
- (id)_criterionForCutOffDates:(id)arg1 sinceDate:(id)arg2;	// IMP=0x00100000000bdee7
- (id)_criterionForDismissedMessages:(id)arg1;	// IMP=0x00100000000bdda4
- (id)_criterionForObservedMailboxesInAccount:(id)arg1 favoritesReader:(id)arg2;	// IMP=0x00100000000bdafb
- (id)_criteriaForAccountIDs:(id)arg1 clearedInfo:(id)arg2 since:(id)arg3 favoritesReader:(id)arg4;	// IMP=0x00100000000bcf89
- (id)_notificationMessagesForAccountIDs:(id)arg1 count:(unsigned long long)arg2 clearedInfo:(id)arg3 sinceDate:(id)arg4;	// IMP=0x00100000000bc62a
- (_Bool)_performUpgrade;	// IMP=0x00100000000bbe8e
- (id)_lastClearedInfo;	// IMP=0x00100000000bbe2a
- (void)_markUpgradeComplete;	// IMP=0x00100000000bbd58
- (_Bool)_hasBeenUpgraded;	// IMP=0x00100000000bbcf2
- (void)_upgrade;	// IMP=0x00100000000bbc42
- (void)_verifyDatabaseAccessAndPerformUpgrade;	// IMP=0x00100000000bbb89
- (void)performUpgradeIfNecessary;	// IMP=0x00100000000bbaf2
- (id)initWithDelegate:(id)arg1 systemUserNotificationCenter:(id)arg2 conversationSubscriptionProvider:(id)arg3 favoritesReader:(id)arg4 vipReader:(id)arg5 activeAccounts:(id)arg6;	// IMP=0x00100000000bb951

// Remaining properties
@property(readonly, nonatomic) id <EDConversationSubscriptionProvider> conversationSubscriptionProvider; // @synthesize conversationSubscriptionProvider=_conversationSubscriptionProvider;

@end
