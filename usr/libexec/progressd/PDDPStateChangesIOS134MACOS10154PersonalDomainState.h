//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPStateChangesIOS134MACOS10154PersonalDomainState : PBCodable
{
    unsigned long long _flags;	// 8 = 0x8
    int _domain;	// 16 = 0x10
    int _state;	// 20 = 0x14
    CDStruct_214543d2 _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a2841
- (unsigned long long)hash;	// IMP=0x00100000001a27dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a270a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a2672
- (void)copyTo:(id)arg1;	// IMP=0x00100000001a25fd
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a256a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a255d
- (id)dictionaryRepresentation;	// IMP=0x00100000001a2111
- (id)description;	// IMP=0x00100000001a2062
@property(nonatomic) _Bool hasFlags;
- (int)StringAsState:(id)arg1;	// IMP=0x00100000001a1f85
- (id)stateAsString:(int)arg1;	// IMP=0x00100000001a1f3c
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsDomain:(id)arg1;	// IMP=0x00100000001a1de0
- (id)domainAsString:(int)arg1;	// IMP=0x00100000001a1d97
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end

