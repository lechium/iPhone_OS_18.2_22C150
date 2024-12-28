//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpController, MISSING_TYPE, NSDictionary, NSHashTable, SFAutoUnlockNotificationModel;
@protocol OS_dispatch_source;

@interface SDAutoUnlockNotificationsManager : NSObject
{
    FLFollowUpController *coreFollowUpController;	// 8 = 0x8
    id _doubleClickListener;	// 16 = 0x10
    id _cancelListener;	// 24 = 0x18
    SFAutoUnlockNotificationModel *_notificationModel;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSDictionary *_promptInfo;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_notificationTimer;	// 56 = 0x38
    CDUnknownBlockType _radarNotificationCompletion;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x004000000004517a
- (void).cxx_destruct;	// IMP=0x0020000000046aaf
@property(copy) CDUnknownBlockType radarNotificationCompletion; // @synthesize radarNotificationCompletion=_radarNotificationCompletion;
@property(retain) NSObject<OS_dispatch_source> *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain) NSDictionary *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SFAutoUnlockNotificationModel *notificationModel; // @synthesize notificationModel=_notificationModel;
- (void)invalidateNotificationTimer;	// IMP=0x0010000000046932
- (void)restartNotificationTimer:(unsigned long long)arg1;	// IMP=0x001000000004673d
- (void)dismissNotification;	// IMP=0x0010000000046737
- (void)showFileRadarNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046731
- (void)showSetupRetryNotificationWithDevice:(id)arg1;	// IMP=0x001000000004672b
- (void)dismissRequestToUnlockNotification;	// IMP=0x001000000004671a
- (MISSING_TYPE *)showRequestToUnlockNotification;	// IMP=0x00100000000463b3
- (void)showPhoneAutoRelockNotification;	// IMP=0x001000000004604c
- (void)showMacUnlockedNotificationWithDuration:(id)arg1;	// IMP=0x0010000000046046
- (void)showSuggestionNotificationWithDevice:(id)arg1;	// IMP=0x0010000000046040
- (void)showPhoneAutoUnlockNotificationWithBodyText:(id)arg1 isUpsell:(_Bool)arg2;	// IMP=0x0010000000045c8b
- (void)clearPhoneAutoUnlockUpsellNotification:(_Bool)arg1;	// IMP=0x0010000000045780
- (void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x001000000004567f
- (void)showAuthenticatedSiriForDeviceID:(id)arg1;	// IMP=0x001000000004557e
- (void)removeAutoUnlockNotification;	// IMP=0x0010000000045578
- (void)removeAuthorizationRequestNotification;	// IMP=0x0010000000045572
- (void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 navBarTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000004556c
- (void)notifyObservers:(SEL)arg1;	// IMP=0x0010000000045387
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000045313
- (void)addObserver:(id)arg1;	// IMP=0x001000000004529f
- (void)dealloc;	// IMP=0x0010000000045270
- (id)init;	// IMP=0x00100000000451cf

@end
