//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13CoreIDVShared29IdentityProofingConfiguration : NSObject
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *country;	// 24 = 0x18
    MISSING_TYPE *targetDevice;	// 40 = 0x28
    MISSING_TYPE *actionStatus;	// 56 = 0x38
    MISSING_TYPE *credentialIdentifier;	// 72 = 0x48
    MISSING_TYPE *productIdentifier;	// 88 = 0x58
    MISSING_TYPE *axSettings;	// 104 = 0x68
    MISSING_TYPE *accountKeyIdentifier;	// 112 = 0x70
    MISSING_TYPE *extendedReviewURLString;	// 128 = 0x80
    MISSING_TYPE *learnMoreURLString;	// 144 = 0x90
    MISSING_TYPE *supplementalProvisioningData;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007eb60
- (void).cxx_destruct;	// IMP=0x000000000007f550
- (id)init;	// IMP=0x000000000007f510
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f4a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f3e0
@property(nonatomic, readonly) NSString *description;

@end

