//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable
{
    unsigned long long _detectionTimeMs;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _appLinkPreferredOpenStrategy;	// 24 = 0x18
    int _barcodeDataType;	// 28 = 0x1c
    int _barcodeSourceType;	// 32 = 0x20
    int _barcodeURLType;	// 36 = 0x24
    int _clientType;	// 40 = 0x28
    int _invalidBarcodeDataType;	// 44 = 0x2c
    struct {
        unsigned int detectionTimeMs:1;
        unsigned int timestamp:1;
        unsigned int appLinkPreferredOpenStrategy:1;
        unsigned int barcodeDataType:1;
        unsigned int barcodeSourceType:1;
        unsigned int barcodeURLType:1;
        unsigned int clientType:1;
        unsigned int invalidBarcodeDataType:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) unsigned long long detectionTimeMs; // @synthesize detectionTimeMs=_detectionTimeMs;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000005623
- (unsigned long long)hash;	// IMP=0x000000000000552b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005391
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000527b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000005188
- (void)writeTo:(id)arg1;	// IMP=0x0000000000005055
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000005048
- (id)dictionaryRepresentation;	// IMP=0x00000000000046fe
- (id)description;	// IMP=0x000000000000464f
- (int)StringAsBarcodeSourceType:(id)arg1;	// IMP=0x00000000000045e4
- (id)barcodeSourceTypeAsString:(int)arg1;	// IMP=0x000000000000458e
@property(nonatomic) _Bool hasBarcodeSourceType;
@property(nonatomic) int barcodeSourceType; // @synthesize barcodeSourceType=_barcodeSourceType;
- (int)StringAsAppLinkPreferredOpenStrategy:(id)arg1;	// IMP=0x00000000000044bc
- (id)appLinkPreferredOpenStrategyAsString:(int)arg1;	// IMP=0x0000000000004467
@property(nonatomic) _Bool hasAppLinkPreferredOpenStrategy;
@property(nonatomic) int appLinkPreferredOpenStrategy; // @synthesize appLinkPreferredOpenStrategy=_appLinkPreferredOpenStrategy;
- (int)StringAsBarcodeURLType:(id)arg1;	// IMP=0x0000000000004366
- (id)barcodeURLTypeAsString:(int)arg1;	// IMP=0x000000000000431d
@property(nonatomic) _Bool hasBarcodeURLType;
@property(nonatomic) int barcodeURLType; // @synthesize barcodeURLType=_barcodeURLType;
- (int)StringAsInvalidBarcodeDataType:(id)arg1;	// IMP=0x000000000000413d
- (id)invalidBarcodeDataTypeAsString:(int)arg1;	// IMP=0x00000000000040f4
@property(nonatomic) _Bool hasInvalidBarcodeDataType;
@property(nonatomic) int invalidBarcodeDataType; // @synthesize invalidBarcodeDataType=_invalidBarcodeDataType;
@property(nonatomic) _Bool hasDetectionTimeMs;
- (int)StringAsBarcodeDataType:(id)arg1;	// IMP=0x0000000000003e87
- (id)barcodeDataTypeAsString:(int)arg1;	// IMP=0x0000000000003e3e
@property(nonatomic) _Bool hasBarcodeDataType;
@property(nonatomic) int barcodeDataType; // @synthesize barcodeDataType=_barcodeDataType;
- (int)StringAsClientType:(id)arg1;	// IMP=0x0000000000003d3d
- (id)clientTypeAsString:(int)arg1;	// IMP=0x0000000000003cf4
@property(nonatomic) _Bool hasClientType;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) _Bool hasTimestamp;

@end
