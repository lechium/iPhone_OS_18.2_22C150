//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface SDAutoUnlockRelockRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003b143
- (unsigned long long)hash;	// IMP=0x001000000003b119
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003b087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003b025
- (void)copyTo:(id)arg1;	// IMP=0x001000000003b001
- (void)writeTo:(id)arg1;	// IMP=0x001000000003afd6
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003afc9
- (id)dictionaryRepresentation;	// IMP=0x001000000003ad7b
- (id)description;	// IMP=0x001000000003accc
@property(nonatomic) _Bool hasVersion;

@end
