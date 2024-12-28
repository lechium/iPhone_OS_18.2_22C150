//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (UserNotificationsServer)
- (_Bool)_uns_connection:(id)arg1 valueForEntitlementKey:(id)arg2 matchesValue:(id)arg3;	// IMP=0x00600000000155ee
- (_Bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForManagementDomainOfBundleIdentifier:(id)arg2;	// IMP=0x00600000000154cb
- (_Bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForBundleIdentifier:(id)arg2;	// IMP=0x00600000000154af
- (id)uns_getClientConnectionDetails;	// IMP=0x006000000001549e
- (void)uns_setConnectionDetails:(id)arg1;	// IMP=0x0060000000015488
- (_Bool)uns_isInternalUserNotificationsTool;	// IMP=0x00600000000153be
- (_Bool)uns_hasEntitlement:(id)arg1 capability:(id)arg2;	// IMP=0x00600000000152b2
- (_Bool)uns_isAllowedToWriteSettings;	// IMP=0x006000000001525e
- (_Bool)uns_isAllowedToReadSettings;	// IMP=0x006000000001520a
- (_Bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x0060000000014e05
- (_Bool)uns_requestContainsDisallowedPrivateUserInfo:(id)arg1;	// IMP=0x0060000000014cec
- (_Bool)uns_isAllowedFromDaemon;	// IMP=0x0060000000014c6c
- (id)uns_clientAuditToken;	// IMP=0x0060000000014b9c
- (id)uns_clientBundleProxy;	// IMP=0x0060000000014afe
@end
