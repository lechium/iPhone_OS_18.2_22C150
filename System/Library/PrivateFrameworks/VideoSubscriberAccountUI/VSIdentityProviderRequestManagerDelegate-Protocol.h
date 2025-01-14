//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSAccount, VSApplicationController, VSFailable, VSIdentityProvider, VSIdentityProviderAlert, VSIdentityProviderRequest, VSIdentityProviderRequestManager, VSViewModel;

@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didUpdateLogoViewModel:(VSViewModel *)arg2;
- (_Bool)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 requestsAlert:(VSIdentityProviderAlert *)arg2;
- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
@end

