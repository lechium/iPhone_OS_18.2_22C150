//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMessageCountQueryHandler, EDMessagePersistence, EDPersistenceHookRegistry, EMFocus, EMFocusController, EMObjectID, EMQuery, MFMailboxProvider, MSBucketBarConfigurationController, NSDictionary, NSString, UNUserNotificationCenter;
@protocol EFCancelable, EFScheduler;

@interface AppBadgeController : NSObject
{
    id <EFScheduler> _scheduler;	// 8 = 0x8
    EDMessagePersistence *_messagePersistence;	// 16 = 0x10
    EDPersistenceHookRegistry *_hookRegistry;	// 24 = 0x18
    MFMailboxProvider *_mailboxProvider;	// 32 = 0x20
    EMFocusController *_focusController;	// 40 = 0x28
    MSBucketBarConfigurationController *_bucketBarController;	// 48 = 0x30
    EDMessageCountQueryHandler *_queryHandler;	// 56 = 0x38
    EMQuery *_query;	// 64 = 0x40
    NSDictionary *_notificationSettingsByTopic;	// 72 = 0x48
    long long _oldBadgeCount;	// 80 = 0x50
    UNUserNotificationCenter *_notificationCenter;	// 88 = 0x58
    EMObjectID *_mailboxObserverID;	// 96 = 0x60
    EMFocus *_currentFocus;	// 104 = 0x68
    id <EFCancelable> _focusObservationToken;	// 112 = 0x70
}

+ (id)log;	// IMP=0x00200000000034b1
- (void).cxx_destruct;	// IMP=0x002000000000613a
@property(retain, nonatomic) id <EFCancelable> focusObservationToken; // @synthesize focusObservationToken=_focusObservationToken;
@property(retain, nonatomic) EMFocus *currentFocus; // @synthesize currentFocus=_currentFocus;
@property(retain, nonatomic) EMObjectID *mailboxObserverID; // @synthesize mailboxObserverID=_mailboxObserverID;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) long long oldBadgeCount; // @synthesize oldBadgeCount=_oldBadgeCount;
@property(copy, nonatomic) NSDictionary *notificationSettingsByTopic; // @synthesize notificationSettingsByTopic=_notificationSettingsByTopic;
@property(retain, nonatomic) EMQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) EDMessageCountQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property(retain, nonatomic) MSBucketBarConfigurationController *bucketBarController; // @synthesize bucketBarController=_bucketBarController;
@property(retain, nonatomic) EMFocusController *focusController; // @synthesize focusController=_focusController;
@property(retain, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void)bucketBarConfigurationControllerRequiresReload:(id)arg1;	// IMP=0x0010000000005f21
- (void)bucketBarConfigurationController:(id)arg1 isHidden:(_Bool)arg2 forMailboxes:(id)arg3;	// IMP=0x0010000000005e79
- (void)currentFocusChanged:(id)arg1;	// IMP=0x0010000000005d64
- (void)mailboxListChanged:(id)arg1;	// IMP=0x0010000000005cbc
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;	// IMP=0x0010000000005c56
- (void)userNotificationCenterSettingsDidChange:(id)arg1;	// IMP=0x0010000000005ad6
- (void)_startObservingCountPredicate:(id)arg1 serverCountMailboxScope:(id)arg2;	// IMP=0x0010000000005815
- (id)_excludedAccountIdentifiersByCurrentFocus;	// IMP=0x0010000000005553
- (void)_createCountQueryPredicateFromNotificationTopics;	// IMP=0x0010000000004327
- (void)setBadgeCount:(long long)arg1;	// IMP=0x001000000000406c
- (id)_enabledAndExcludedMailboxesExcludingAccountIDs:(id)arg1;	// IMP=0x0010000000003d3e
- (void)_nts_getAccountsExcludedFromUnreadCount:(out id *)arg1 includeUnreadVIPs:(out _Bool *)arg2 includeUnreadNotifiedThreads:(out _Bool *)arg3 includeUnreadPrimaries:(out _Bool *)arg4;	// IMP=0x0010000000003935
- (void)dealloc;	// IMP=0x0010000000003862
- (id)initWithMessagePersistence:(id)arg1 hookRegistry:(id)arg2 mailboxProvider:(id)arg3 focusController:(id)arg4 bucketBarController:(id)arg5;	// IMP=0x001000000000358e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

