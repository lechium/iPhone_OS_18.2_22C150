//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface ALCMCoarseElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000d1f5e5
- (unsigned long long)hash;	// IMP=0x0010000000d1f5cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000d1f589
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000d1f537
- (void)copyTo:(id)arg1;	// IMP=0x0010000000d1f524
- (void)writeTo:(id)arg1;	// IMP=0x0010000000d1f508
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000d1f4fb
- (id)dictionaryRepresentation;	// IMP=0x0010000000d1f2fc
- (id)description;	// IMP=0x0010000000d1f285

@end

