//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAdopterFeatureSetAdopterFeature : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ba490
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ba3e3
- (unsigned long long)hash;	// IMP=0x00000000001ba396
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ba2de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ba240
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ba1dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ba180
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ba173
- (id)dictionaryRepresentation;	// IMP=0x00000000001b9f86
- (id)description;	// IMP=0x00000000001b9ed7
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

