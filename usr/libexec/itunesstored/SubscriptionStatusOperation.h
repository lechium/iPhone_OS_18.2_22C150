//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSAuthenticationContext;

@interface SubscriptionStatusOperation : ISOperation
{
    _Bool _allowsBypassOfPrivacyAcknowledgement;	// 91 = 0x5b
    _Bool _authenticatesIfNecessary;	// 92 = 0x5c
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    long long _carrierBundleProvisioningStyle;	// 104 = 0x68
    NSString *_localizedAuthenticationReason;	// 112 = 0x70
    NSString *_reason;	// 120 = 0x78
    CDUnknownBlockType _statusBlock;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000000c1b6
- (id)_loadStatusOnce:(id *)arg1;	// IMP=0x001000000000bdfb
- (id)_getInitialStatus:(id *)arg1;	// IMP=0x001000000000bacc
- (_Bool)_carrierBundleStatusIsValidForCachedStatus:(id)arg1;	// IMP=0x001000000000b934
- (void)_cacheAccountEligibilityWithStatus:(id)arg1;	// IMP=0x001000000000b641
- (void)run;	// IMP=0x001000000000aae5
@property(copy) CDUnknownBlockType statusBlock;
@property(copy) NSString *reason;
@property(copy) NSString *localizedAuthenticationReason;
@property long long carrierBundleProvisioningStyle;
@property(copy) SSAuthenticationContext *authenticationContext;
@property _Bool authenticatesIfNecessary;
@property _Bool allowsBypassOfPrivacyAcknowledgement;

@end

