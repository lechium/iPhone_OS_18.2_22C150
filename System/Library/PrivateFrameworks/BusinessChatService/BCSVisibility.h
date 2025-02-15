//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSVisibility : PBCodable
{
    double _ratio;	// 8 = 0x8
    NSString *_country;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    struct {
        unsigned int ratio:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006efd1
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006eeee
- (unsigned long long)hash;	// IMP=0x000000000006ed9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ecb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ebf0
- (void)copyTo:(id)arg1;	// IMP=0x000000000006eb69
- (void)writeTo:(id)arg1;	// IMP=0x000000000006eae4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006ead7
- (id)dictionaryRepresentation;	// IMP=0x000000000006e820
- (id)description;	// IMP=0x000000000006e771
@property(nonatomic) _Bool hasRatio;
@property(readonly, nonatomic) _Bool hasCountry;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

