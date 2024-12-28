//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDSharingProximityiOSSetupResult : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _durationMs;	// 16 = 0x10
    int _errorCode;	// 20 = 0x14
    unsigned int _incorrectPINCount;	// 24 = 0x18
    NSString *_sessionUUID;	// 32 = 0x20
    int _smoothedRSSI;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int durationMs:1;
        unsigned int errorCode:1;
        unsigned int incorrectPINCount:1;
        unsigned int smoothedRSSI:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0020000000101de2
@property(nonatomic) unsigned int incorrectPINCount; // @synthesize incorrectPINCount=_incorrectPINCount;
@property(nonatomic) unsigned int durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000101c92
- (unsigned long long)hash;	// IMP=0x0010000000101bc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000101a72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000101969
- (void)copyTo:(id)arg1;	// IMP=0x001000000010188f
- (void)writeTo:(id)arg1;	// IMP=0x00100000001017a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000010136a
- (id)dictionaryRepresentation;	// IMP=0x0010000000101149
- (id)description;	// IMP=0x001000000010109a
@property(nonatomic) _Bool hasIncorrectPINCount;
@property(nonatomic) _Bool hasDurationMs;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasSmoothedRSSI;
- (void);	// IMP=0x0010000000100f8b
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end
