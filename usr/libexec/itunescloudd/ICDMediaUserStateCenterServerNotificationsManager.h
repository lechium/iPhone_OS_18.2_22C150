//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDMediaUserStateCenterServerNotificationsManagerDelegate;

@interface ICDMediaUserStateCenterServerNotificationsManager : NSObject
{
    id <ICDMediaUserStateCenterServerNotificationsManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013416b
@property(readonly, nonatomic) __weak id <ICDMediaUserStateCenterServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x001000000013407e
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x0010000000133fa7
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x0010000000133eb9
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0010000000133dcb
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000133cdd
- (void)_handleLocalStoreAccountPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0010000000133bef
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x0010000000133b01
- (void)_handleHomeUserSettingsDidChangeNotification:(id)arg1;	// IMP=0x0010000000133a13
- (void)_setupNotifications;	// IMP=0x001000000013363b
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000001335c7

@end

