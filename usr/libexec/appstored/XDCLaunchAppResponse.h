//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface XDCLaunchAppResponse : PBCodable
{
    int _status;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x002000000023d662
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000023d605
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000023d5b3
- (void)writeTo:(id)arg1;	// IMP=0x001000000023d597
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000023d400
- (id)dictionaryRepresentation;	// IMP=0x001000000023d378
- (id)description;	// IMP=0x001000000023d2c9

@end

