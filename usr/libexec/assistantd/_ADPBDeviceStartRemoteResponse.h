//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface _ADPBDeviceStartRemoteResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    struct {
        unsigned int success:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000100297
- (unsigned long long)hash;	// IMP=0x001000000010026c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001001ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000100166
- (void)copyTo:(id)arg1;	// IMP=0x0010000000100140
- (void)writeTo:(id)arg1;	// IMP=0x0000000000100114
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000fff5c
- (id)dictionaryRepresentation;	// IMP=0x00100000000ffec1
- (id)description;	// IMP=0x00100000000ffe12
@property(nonatomic) _Bool hasSuccess;

@end
