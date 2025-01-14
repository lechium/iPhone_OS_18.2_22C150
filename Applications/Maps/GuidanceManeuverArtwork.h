//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKJunction;
@protocol GEOTransitArtworkDataSource;

@interface GuidanceManeuverArtwork : NSObject
{
    int _maneuver;	// 8 = 0x8
    int _drivingSide;	// 12 = 0xc
    id <GEOTransitArtworkDataSource> _artworkDataSource;	// 16 = 0x10
    MKJunction *_junction;	// 24 = 0x18
}

+ (id)artworkWithManeuver:(int)arg1;	// IMP=0x00400000008b611c
- (void).cxx_destruct;	// IMP=0x00200000008b6464
@property(readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) MKJunction *junction; // @synthesize junction=_junction;
@property(readonly, nonatomic) int maneuver; // @synthesize maneuver=_maneuver;
@property(retain, nonatomic) id <GEOTransitArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000008b62f1
- (unsigned long long)hash;	// IMP=0x00100000008b6289
@property(readonly, nonatomic) _Bool isRoundaboutManeuver;
@property(readonly, nonatomic) _Bool isArriveManeuver;
@property(readonly, nonatomic) _Bool isStartRouteManeuver;
- (id)initWithManeuver:(int)arg1 junction:(id)arg2 drivingSide:(int)arg3 artworkDataSource:(id)arg4;	// IMP=0x00100000008b6151
- (_Bool)isValue:(id)arg1 equalTo:(id)arg2;	// IMP=0x00100000008b6082

@end

