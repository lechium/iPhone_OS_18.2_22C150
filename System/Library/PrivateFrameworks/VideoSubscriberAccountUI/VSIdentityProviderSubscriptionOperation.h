//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue, VSDeveloperSettingsFetchOperation, VSIdentityProvider, VSSubscriptionRegistrationCenter;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;	// 8 = 0x8
    NSArray *_subscriptionsToAdd;	// 16 = 0x10
    NSArray *_subscriptionsToRemoveByBundleID;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    VSSubscriptionRegistrationCenter *_registrationCenter;	// 40 = 0x28
    VSDeveloperSettingsFetchOperation *_developerSettingsFetchOperation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000075c7
@property(retain, nonatomic) VSDeveloperSettingsFetchOperation *developerSettingsFetchOperation; // @synthesize developerSettingsFetchOperation=_developerSettingsFetchOperation;
@property(retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // @synthesize registrationCenter=_registrationCenter;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID; // @synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID;
@property(copy, nonatomic) NSArray *subscriptionsToAdd; // @synthesize subscriptionsToAdd=_subscriptionsToAdd;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void)cancel;	// IMP=0x0000000000007485
- (void)_registerSubscriptions:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;	// IMP=0x0000000000006ff1
- (void)_removeSubscriptionsForBundleIdentifiers:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;	// IMP=0x000000000000672c
- (id)_authorizedBundleIdsFromAppDescriptions:(id)arg1;	// IMP=0x000000000000658b
- (void)executionDidBegin;	// IMP=0x0000000000005942
- (id)initWithRegistrationCenter:(id)arg1 andDeveloperSettingsFetchOperation:(id)arg2;	// IMP=0x00000000000058a7
- (id)init;	// IMP=0x00000000000057be

@end

