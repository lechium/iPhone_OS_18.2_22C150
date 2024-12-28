//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIProfilePictureStore, ACAccount, GEOObserverHashTable, NSPersonNameComponentsFormatter, NSString, NSTimer, UIImage;
@protocol OS_dispatch_queue;

@interface UserInformationManager : NSObject
{
    NSTimer *_profilePictureReloadThrottleTimer;	// 8 = 0x8
    _Bool _hasCalledReloadProfilePictureInLast10Seconds;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_profilePictureQueue;	// 32 = 0x20
    NSString *_userName;	// 40 = 0x28
    NSString *_userGivenName;	// 48 = 0x30
    NSString *_userEmail;	// 56 = 0x38
    UIImage *_userIcon;	// 64 = 0x40
    NSPersonNameComponentsFormatter *_nameFormatter;	// 72 = 0x48
    UIImage *_loggedOutIcon;	// 80 = 0x50
    AAUIProfilePictureStore *_profilePictureStore;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x004000000090253e
- (void).cxx_destruct;	// IMP=0x002000000090393b
- (void)_throttledProfilePictureTimerUpdate:(id)arg1;	// IMP=0x00100000009038d5
- (void)_handleProfilePictureStoreDidChangeNotification:(id)arg1;	// IMP=0x001000000090351c
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000903500
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)retrieveAddressForLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000009032d8
- (void)_retrieveUserProfilePictureWithImageCreationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000902f50
- (void)_retrieveUserProfilePicture;	// IMP=0x0010000000902d5f
@property(readonly, nonatomic) UIImage *userIcon; // @synthesize userIcon=_userIcon;
@property(readonly, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(readonly, nonatomic) NSString *userGivenName; // @synthesize userGivenName=_userGivenName;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) _Bool loggedIn;
@property(readonly, nonatomic) NSPersonNameComponentsFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(readonly, nonatomic) AAUIProfilePictureStore *profilePictureStore; // @synthesize profilePictureStore=_profilePictureStore;
@property(readonly, nonatomic) UIImage *loggedOutIcon; // @synthesize loggedOutIcon=_loggedOutIcon;
@property(readonly, nonatomic) ACAccount *account;
- (void)dealloc;	// IMP=0x001000000090269e
- (id)init;	// IMP=0x0010000000902593

@end
