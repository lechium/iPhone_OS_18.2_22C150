//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface CLStreamedLocationInternal : PBCodable
{
    double _rawCoordinateLatitude;	// 8 = 0x8
    double _rawCoordinateLongitude;	// 16 = 0x10
    MISSING_TYPE *_has;	// 24 = 0x18
}

@property(nonatomic) double rawCoordinateLongitude; // @synthesize rawCoordinateLongitude=_rawCoordinateLongitude;
@property(nonatomic) double rawCoordinateLatitude; // @synthesize rawCoordinateLatitude=_rawCoordinateLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000d0736e
- (unsigned long long)hash;	// IMP=0x0010000000d07172
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000d070e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000d07060
- (void)copyTo:(id)arg1;	// IMP=0x0010000000d07019
- (void)writeTo:(id)arg1;	// IMP=0x0010000000d06fa9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000d06f9c
- (id)dictionaryRepresentation;	// IMP=0x0010000000d06cfe
- (id)description;	// IMP=0x0010000000d06c87
@property(nonatomic) _Bool hasRawCoordinateLongitude;
@property(nonatomic) _Bool hasRawCoordinateLatitude;
- (void);	// IMP=0x0010000000d06bf5
- (void)mergeIntoDaemonLocation:(struct CLDaemonLocation *)arg1;	// IMP=0x001000000088c4af
- (id)initWithDaemonLocation:(const struct CLDaemonLocation *)arg1;	// IMP=0x001000000088c441

@end

