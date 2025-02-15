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

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000003cf230
+ (id)namespace;	// IMP=0x00600000003cf200
- (void).cxx_destruct;	// IMP=0x00000000003cf1ed
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003cf13c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cf0a1
- (id)senderCorrelationIdentifier;	// IMP=0x00000000003cf08c
- (_Bool)isAuthenticated;	// IMP=0x00000000003cf084
- (id)kind;	// IMP=0x00000000003cf077
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003cef9c
- (id)initWithIdentifierString:(id)arg1;	// IMP=0x00000000003cee69
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000003cedb5

@end

