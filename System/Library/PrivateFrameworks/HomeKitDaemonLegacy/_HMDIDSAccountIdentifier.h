//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDIDSAccountIdentifier
{
    NSString *_identifierString;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000024a248
+ (id)namespace;	// IMP=0x006000000024a218
- (void).cxx_destruct;	// IMP=0x000000000024a205
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024a154
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024a0b9
- (id)senderCorrelationIdentifier;	// IMP=0x000000000024a0a4
- (_Bool)isAuthenticated;	// IMP=0x000000000024a09c
- (id)kind;	// IMP=0x000000000024a08f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000249fb4
- (id)initWithIdentifierString:(id)arg1;	// IMP=0x0000000000249e81
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000249dcd

@end

