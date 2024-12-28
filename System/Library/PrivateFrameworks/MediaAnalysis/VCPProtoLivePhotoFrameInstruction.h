//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoFrameInstruction : PBCodable
{
    CDStruct_fae3dc92 _homographyParams;	// 8 = 0x8
    long long _epoch;	// 32 = 0x20
    long long _timeValue;	// 40 = 0x28
    int _flags;	// 48 = 0x30
    int _timeScale;	// 52 = 0x34
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000008e932
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) long long timeValue; // @synthesize timeValue=_timeValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013c3eb
- (unsigned long long)hash;	// IMP=0x000000000013c376
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013c2b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013c21b
- (void)copyTo:(id)arg1;	// IMP=0x000000000013c13f
- (void)writeTo:(id)arg1;	// IMP=0x000000000013c081
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013c074
- (id)dictionaryRepresentation;	// IMP=0x000000000013ba99
- (id)description;	// IMP=0x000000000013b9ea
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000013b9d3
- (float)homographyParamAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013b901
- (void)addHomographyParam:(float)arg1;	// IMP=0x000000000013b8f0
- (void)clearHomographyParams;	// IMP=0x000000000013b8df
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)dealloc;	// IMP=0x000000000013b87c
- (id)exportToLegacyDictionary;	// IMP=0x000000000008eb5d

@end
