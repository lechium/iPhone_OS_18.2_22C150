//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class APPBColor;

@interface APPBShadowStyle : PBCodable
{
    CDStruct_95bda58d _offsets;	// 8 = 0x8
    APPBColor *_color;	// 32 = 0x20
    float _opacity;	// 40 = 0x28
    float _radius;	// 44 = 0x2c
    struct {
        unsigned int opacity:1;
        unsigned int radius:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000051da8
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) APPBColor *color; // @synthesize color=_color;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000051c61
- (unsigned long long)hash;	// IMP=0x0010000000051a44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000051941
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005186c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000051767
- (void)writeTo:(id)arg1;	// IMP=0x00100000000516a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000051698
- (id)dictionaryRepresentation;	// IMP=0x001000000005113c
- (id)description;	// IMP=0x001000000005108d
- (void)setOffsets:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000051076
- (int)offsetAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000050fa6
- (void)addOffset:(int)arg1;	// IMP=0x0010000000050f93
- (void)clearOffsets;	// IMP=0x0010000000050f82
@property(readonly, nonatomic) int *offsets;
@property(readonly, nonatomic) unsigned long long offsetsCount;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) _Bool hasOpacity;
@property(readonly, nonatomic) _Bool hasColor;
- (void)dealloc;	// IMP=0x0010000000050e78

@end
