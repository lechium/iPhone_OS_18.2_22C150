//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface MUPageResizedArgument : PBCodable
{
    float _pageHeight;	// 8 = 0x8
    struct {
        unsigned int pageHeight:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) float pageHeight; // @synthesize pageHeight=_pageHeight;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000083009
- (unsigned long long)hash;	// IMP=0x0000000000082f15
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082e7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082e18
- (void)copyTo:(id)arg1;	// IMP=0x0000000000082df0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000082dc6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000082db9
- (id)dictionaryRepresentation;	// IMP=0x0000000000082b9c
- (id)description;	// IMP=0x0000000000082aed
@property(nonatomic) _Bool hasPageHeight;

@end
