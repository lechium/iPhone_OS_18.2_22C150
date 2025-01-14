//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PDAuxiliaryRegistrationRequirementReference : NSObject
{
    unsigned long long _role;	// 8 = 0x8
    unsigned long long _signatureType;	// 16 = 0x10
    unsigned long long _decryptionType;	// 24 = 0x18
}

- (_Bool)isReferencing:(id)arg1;	// IMP=0x0020000000262675
- (id)_initWithRole:(unsigned long long)arg1;	// IMP=0x0010000000262638
- (id)initWithDecryptionType:(unsigned long long)arg1;	// IMP=0x001000000026260d
- (id)initWithSignatureType:(unsigned long long)arg1;	// IMP=0x00100000002625e2
- (id)init;	// IMP=0x00100000002625d4

@end

