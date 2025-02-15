//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MockAKSRefKey : PBCodable
{
    NSData *_key;	// 8 = 0x8
    NSData *_optionalParams;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000074e7d
@property(retain, nonatomic) NSData *optionalParams; // @synthesize optionalParams=_optionalParams;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000074dd0
- (unsigned long long)hash;	// IMP=0x0000000000074d83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000074ccb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074c2d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000074bca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000074b6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000074a03
- (id)dictionaryRepresentation;	// IMP=0x0000000000074980
- (id)description;	// IMP=0x00000000000748d1
@property(readonly, nonatomic) _Bool hasOptionalParams;
@property(readonly, nonatomic) _Bool hasKey;

@end

