//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData;

@interface NBPBRestoreResponse : PBCodable
{
    NSData *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000004278
@property(retain, nonatomic) NSData *error; // @synthesize error=_error;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000422f
- (unsigned long long)hash;	// IMP=0x0010000000004212
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004182
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000410a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000040e0
- (MISSING_TYPE *)writeTo: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000040bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000040af
- (id)dictionaryRepresentation;	// IMP=0x0010000000003f0a
- (id)description;	// IMP=0x0010000000003e5b
@property(readonly, nonatomic) _Bool hasError;

@end
