//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AEAConcreteAuditToken
{
    CDStruct_4c969caf _underlyingToken;	// 8 = 0x8
}

+ (id)invalidAuditToken;	// IMP=0x004000000000242f
+ (id)auditTokenWithData:(id)arg1;	// IMP=0x001000000000237f
@property(readonly, nonatomic) CDStruct_4c969caf underlyingToken; // @synthesize underlyingToken=_underlyingToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002550
- (unsigned long long)hash;	// IMP=0x001000000000253b
- (id)dataRepresentation;	// IMP=0x00100000000024b2
- (int)processIdentifier;	// IMP=0x0010000000002477
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000002330

@end
