//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDSharingProximityStatusResult : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _dismissType;	// 16 = 0x10
    int _rssi;	// 20 = 0x14
    NSString *_sessionUUID;	// 24 = 0x18
    int _smoothedRSSI;	// 32 = 0x20
    unsigned int _visibleMs;	// 36 = 0x24
    struct {
        unsigned int timestamp:1;
        unsigned int dismissType:1;
        unsigned int rssi:1;
        unsigned int smoothedRSSI:1;
        unsigned int visibleMs:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000010b37a
@property(nonatomic) unsigned int visibleMs; // @synthesize visibleMs=_visibleMs;
@property(nonatomic) unsigned int dismissType; // @synthesize dismissType=_dismissType;
@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000010b22a
- (unsigned long long)hash;	// IMP=0x001000000010b15f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010b00a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010af01
- (void)copyTo:(id)arg1;	// IMP=0x001000000010ae27
- (void)writeTo:(id)arg1;	// IMP=0x001000000010ad38
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000010a902
- (id)dictionaryRepresentation;	// IMP=0x001000000010a6e1
- (id)description;	// IMP=0x001000000010a632
@property(nonatomic) _Bool hasVisibleMs;
@property(nonatomic) _Bool hasDismissType;
- (void);	// IMP=0x001000000010a5b9
@property(nonatomic) _Bool hasSmoothedRSSI;
@property(nonatomic) _Bool hasRssi;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end

