//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPStorageExpiration : PBCodable
{
    unsigned long long _duration;	// 8 = 0x8
    double _expirationTime;	// 16 = 0x10
    int _operationType;	// 24 = 0x18
    struct {
        unsigned int duration:1;
        unsigned int expirationTime:1;
        unsigned int operationType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003ae22b
- (unsigned long long)hash;	// IMP=0x00000000003ae0e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ae010
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003adf74
- (void)copyTo:(id)arg1;	// IMP=0x00000000003adefb
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ade66
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ade59
- (id)dictionaryRepresentation;	// IMP=0x00000000003ada49
- (id)description;	// IMP=0x00000000003ad99a
@property(nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsOperationType:(id)arg1;	// IMP=0x00000000003ad86b
- (id)operationTypeAsString:(int)arg1;	// IMP=0x00000000003ad820
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;

@end

