//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PUProtoPasscodePolicy : PBCodable
{
    unsigned int _minimumLength;	// 8 = 0x8
    _Bool _modificationAllowed;	// 12 = 0xc
    struct {
        unsigned int minimumLength:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int minimumLength; // @synthesize minimumLength=_minimumLength;
@property(nonatomic) _Bool modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000b9c1
- (unsigned long long)hash;	// IMP=0x001000000000b985
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000b8d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000b869
- (void)copyTo:(id)arg1;	// IMP=0x001000000000b838
- (void)writeTo:(id)arg1;	// IMP=0x001000000000b7d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000b7c9
- (id)dictionaryRepresentation;	// IMP=0x001000000000b4af
- (id)description;	// IMP=0x001000000000b400
@property(nonatomic) _Bool hasMinimumLength;

@end
