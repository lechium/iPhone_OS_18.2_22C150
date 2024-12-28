//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDate, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureFrequency : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _displayDepartureFrequency;	// 16 = 0x10
    unsigned int _earliestDepartureTime;	// 20 = 0x14
    unsigned int _latestDepartureTime;	// 24 = 0x18
    unsigned int _maxDepartureFrequency;	// 28 = 0x1c
    unsigned int _minDepartureFrequency;	// 32 = 0x20
    _Bool _isEstimated;	// 36 = 0x24
    struct {
        unsigned int has_displayDepartureFrequency:1;
        unsigned int has_earliestDepartureTime:1;
        unsigned int has_latestDepartureTime:1;
        unsigned int has_maxDepartureFrequency:1;
        unsigned int has_minDepartureFrequency:1;
        unsigned int has_isEstimated:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000be7bf4
- (void).cxx_destruct;	// IMP=0x0000000000be85e5
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000be859f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000be84ac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be825b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be8152
- (void)copyTo:(id)arg1;	// IMP=0x0000000000be8074
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be7f65
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be7f58
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000be764f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000be763d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000be72ec
- (id)jsonRepresentation;	// IMP=0x0000000000be71dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000be6e11
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasDisplayDepartureFrequency;
@property(nonatomic) unsigned int displayDepartureFrequency;
@property(nonatomic) _Bool hasIsEstimated;
@property(nonatomic) _Bool isEstimated;
@property(nonatomic) _Bool hasLatestDepartureTime;
@property(nonatomic) unsigned int latestDepartureTime;
@property(nonatomic) _Bool hasEarliestDepartureTime;
@property(nonatomic) unsigned int earliestDepartureTime;
@property(nonatomic) _Bool hasMaxDepartureFrequency;
@property(nonatomic) unsigned int maxDepartureFrequency;
@property(nonatomic) _Bool hasMinDepartureFrequency;
@property(nonatomic) unsigned int minDepartureFrequency;
@property(readonly, nonatomic) double frequencyForSorting;
- (_Bool)isValidAtDate:(id)arg1;	// IMP=0x00000000011bc5fe
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) _Bool isEstimate;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
