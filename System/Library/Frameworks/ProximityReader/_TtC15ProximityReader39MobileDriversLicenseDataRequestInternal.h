//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC15ProximityReader39MobileDriversLicenseDataRequestInternal : NSObject
{
    MISSING_TYPE *retainedElements;	// 8 = 0x8
    MISSING_TYPE *nonRetainedElements;	// 16 = 0x10
    MISSING_TYPE *useSystemTrustedIssuerCertificates;	// 24 = 0x18
    MISSING_TYPE *additionalTrustedIssuerCertificates;	// 32 = 0x20
    MISSING_TYPE *documentType;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *hostPreferredLocaleIdentifier;	// 0 = 0x0
    MISSING_TYPE *sessionIdentifier;	// 882448 = 0xd7710
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000cea70
- (void).cxx_destruct;	// IMP=0x00000000000cf830
- (id)init;	// IMP=0x00000000000cf6a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cf600
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cf480
@property(nonatomic, readonly) NSString *description;

@end
