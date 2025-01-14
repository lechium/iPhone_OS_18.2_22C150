//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKPaymentWebServiceConfiguration;

@interface PDNotificationServiceGetSpecificUpdatesTask
{
    NSString *_dpanIdentifier;	// 40 = 0x28
    NSString *_lastUpdatedTag;	// 48 = 0x30
    long long _credentialType;	// 56 = 0x38
    PKPaymentWebServiceConfiguration *_webServiceConfiguration;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000364765
+ (id)getSpecificUpdatesTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 credentialType:(long long)arg3 lastUpdatedTag:(id)arg4 accountIdentifier:(id)arg5 webServiceConfiguration:(id)arg6;	// IMP=0x00100000003645a6
- (void).cxx_destruct;	// IMP=0x0020000000365254
@property(retain, nonatomic) PKPaymentWebServiceConfiguration *webServiceConfiguration; // @synthesize webServiceConfiguration=_webServiceConfiguration;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;	// IMP=0x00100000003650f4
- (_Bool)matchesTask:(id)arg1;	// IMP=0x0010000000364fb7
- (id)description;	// IMP=0x0010000000364e01
- (id)panIdentifierName;	// IMP=0x0010000000364d5d
- (_Bool)networkForcesDPANEndpoint;	// IMP=0x0010000000364c28
- (id)panEndpoint;	// IMP=0x0010000000364bc4
- (id);	// IMP=0x0010000000364a3b
- (id)queryFields;	// IMP=0x0010000000364998
- (long long)taskType;	// IMP=0x001000000036498d
- (_Bool)isValid;	// IMP=0x00100000003648fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000036485c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000036476d
- (id)initWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 credentialType:(long long)arg3 lastUpdatedTag:(id)arg4 accountIdentifier:(id)arg5 webServiceConfiguration:(id)arg6;	// IMP=0x0010000000364677

@end

