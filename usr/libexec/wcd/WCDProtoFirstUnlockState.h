//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoFirstUnlockState : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int firstUnlocked:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool firstUnlocked; // @synthesize firstUnlocked=_firstUnlocked;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002ad96
- (unsigned long long)hash;	// IMP=0x001000000002ad51
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002ac8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002ac0f
- (void)copyTo:(id)arg1;	// IMP=0x001000000002abb3
- (void)writeTo:(id)arg1;	// IMP=0x001000000002ab3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002ab32
- (id)dictionaryRepresentation;	// IMP=0x001000000002a7fb
- (id)description;	// IMP=0x001000000002a74c
@property(nonatomic) _Bool hasFirstUnlocked;
@property(nonatomic) _Bool hasVersion;

@end

