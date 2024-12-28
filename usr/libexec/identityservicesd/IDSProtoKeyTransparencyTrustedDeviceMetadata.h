//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface IDSProtoKeyTransparencyTrustedDeviceMetadata : PBCodable
{
    double _timestamp;	// 8 = 0x8
    unsigned int _status;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000e355a
- (unsigned long long)hash;	// IMP=0x00100000000e343b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e3382
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e3301
- (void)copyTo:(id)arg1;	// IMP=0x00100000000e32a3
- (void)writeTo:(id)arg1;	// IMP=0x00100000000e322e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000e3221
- (id)dictionaryRepresentation;	// IMP=0x00100000000e2f19
- (id)description;	// IMP=0x00100000000e2e6a
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasStatus;

@end
