//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEventMetricValue : PBCodable
{
    unsigned long long _dateValue;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000674e
@property(nonatomic) unsigned long long dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006681
- (unsigned long long)hash;	// IMP=0x0000000000006535
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006453
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006399
- (void)copyTo:(id)arg1;	// IMP=0x0000000000006314
- (void)writeTo:(id)arg1;	// IMP=0x0000000000006282
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006275
- (id)dictionaryRepresentation;	// IMP=0x0000000000005f0d
- (id)description;	// IMP=0x0000000000005e5e
@property(nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end
