//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEORPProblemOptInResponse : PBCodable
{
    int _statusCode;	// 8 = 0x8
    CDStruct_ade9d5f7 _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000f6b89d
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f6be0c
- (unsigned long long)hash;	// IMP=0x0000000000f6bdc5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f6bd0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f6bca8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f6bc53
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f6bc28
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f6ba3b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f6b897
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f6b885
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f6b623
- (id)jsonRepresentation;	// IMP=0x0000000000f6b614
- (id)dictionaryRepresentation;	// IMP=0x0000000000f6b48b
- (id)description;	// IMP=0x0000000000f6b3dc
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x0000000000f6b280
- (id)statusCodeAsString:(int)arg1;	// IMP=0x0000000000f6b1a5
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;

@end
