//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NotificationService
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x004000000016a735
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x001000000016a712
+ (id)_predicateForNoRegistrationURL;	// IMP=0x001000000016a6f2
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x001000000016a69f
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x001000000016a64c
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x001000000016a5db
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x001000000016a5b8
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x001000000016a3c5
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x0010000000169d39
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x0010000000169cad
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x0010000000169c99
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x0010000000169a91
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x0010000000169928
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x001000000016989c
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00100000001697cb
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000016979c
+ (id)databaseTable;	// IMP=0x001000000016978f
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x004000000016a219
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x001000000016a151
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x001000000016a0c1
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x001000000016a0a8
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x001000000016a08f
- (void)updateWithPushToken:(id)arg1;	// IMP=0x001000000016a076
- (id)notificationService;	// IMP=0x0010000000169f41
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0010000000169607

@end

