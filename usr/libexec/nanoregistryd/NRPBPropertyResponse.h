//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NRPBPropertyResponse : PBCodable
{
    NSMutableArray *_properties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013b49
- (unsigned long long)hash;	// IMP=0x0010000000013afc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000013a6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000138ce
- (void)writeTo:(id)arg1;	// IMP=0x0010000000013798
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001378b
- (id)dictionaryRepresentation;	// IMP=0x00100000000133b8
- (id)description;	// IMP=0x0010000000013309

@end
