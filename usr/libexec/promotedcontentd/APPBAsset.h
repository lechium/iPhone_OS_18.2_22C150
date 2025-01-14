//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface APPBAsset : PBCodable
{
    unsigned long long _adamId;	// 8 = 0x8
    NSMutableArray *_assetInfos;	// 16 = 0x10
    int _location;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_treatment;	// 40 = 0x28
    struct {
        unsigned int adamId:1;
        unsigned int location:1;
    } _has;	// 48 = 0x30
}

+ (Class)assetInfoType;	// IMP=0x0020000000067931
- (void).cxx_destruct;	// IMP=0x0020000000068ad2
@property(retain, nonatomic) NSString *treatment; // @synthesize treatment=_treatment;
@property(nonatomic) unsigned long long adamId; // @synthesize adamId=_adamId;
@property(retain, nonatomic) NSMutableArray *assetInfos; // @synthesize assetInfos=_assetInfos;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000068877
- (unsigned long long)hash;	// IMP=0x00100000000687b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000068672
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000068415
- (void)copyTo:(id)arg1;	// IMP=0x00100000000682c9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000068101
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000680f4
- (id)dictionaryRepresentation;	// IMP=0x0010000000067a4c
- (id)description;	// IMP=0x001000000006799d
@property(readonly, nonatomic) _Bool hasTreatment;
@property(nonatomic) _Bool hasAdamId;
- (id)assetInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000067914
- (unsigned long long)assetInfosCount;	// IMP=0x00100000000678f7
- (void)addAssetInfo:(id)arg1;	// IMP=0x001000000006788d
- (void)clearAssetInfos;	// IMP=0x0010000000067870
- (int)StringAsLocation:(id)arg1;	// IMP=0x00100000000677d2
- (id)locationAsString:(int)arg1;	// IMP=0x0010000000067784
@property(nonatomic) _Bool hasLocation;
@property(nonatomic) int location; // @synthesize location=_location;
@property(readonly, nonatomic) _Bool hasName;

@end

