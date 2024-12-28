//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoTime : PBCodable
{
    long long _epoch;	// 8 = 0x8
    long long _value;	// 16 = 0x10
    unsigned int _flags;	// 24 = 0x18
    int _timescale;	// 28 = 0x1c
}

+ (id)timeWithCMTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x001000000006f2c6
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) int timescale; // @synthesize timescale=_timescale;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017da48
- (unsigned long long)hash;	// IMP=0x000000000017d9fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017d952
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017d8d6
- (void)copyTo:(id)arg1;	// IMP=0x000000000017d898
- (void)writeTo:(id)arg1;	// IMP=0x000000000017d809
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017d7fc
- (id)dictionaryRepresentation;	// IMP=0x000000000017d363
- (id)description;	// IMP=0x000000000017d2b4
- (CDStruct_1b6d18a9)timeValue;	// IMP=0x000000000006f331

@end
