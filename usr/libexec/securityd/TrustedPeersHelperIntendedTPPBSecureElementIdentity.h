//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TPPBSecureElementIdentity;

@interface TrustedPeersHelperIntendedTPPBSecureElementIdentity : NSObject
{
    TPPBSecureElementIdentity *_secureElementIdentity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002288bb
+ (id)intendedEmptyIdentity;	// IMP=0x0010000000228890
- (void).cxx_destruct;	// IMP=0x0020000000228880
@property(retain) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002287ed
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000022875c
- (id)description;	// IMP=0x00100000002286f0
- (id)initWithSecureElementIdentity:(id)arg1;	// IMP=0x0010000000228685

@end
