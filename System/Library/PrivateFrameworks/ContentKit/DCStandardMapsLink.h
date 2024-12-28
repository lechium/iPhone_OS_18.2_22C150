//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DCMapsLink.h"

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface DCStandardMapsLink : DCMapsLink
{
    NSURL *_URL;	// 8 = 0x8
    NSDictionary *_queryDictionary;	// 16 = 0x10
}

+ (id)mapsLinkWithURL:(id)arg1;	// IMP=0x00600000000c92a0
+ (_Bool)isMapsURL:(id)arg1;	// IMP=0x00600000000c9240
+ (_Bool)isStandardGoogleMapsURL:(id)arg1;	// IMP=0x00600000000c9044
+ (_Bool)isStandardAppleMapsURL:(id)arg1;	// IMP=0x00600000000c8f5b
- (void).cxx_destruct;	// IMP=0x00000000000c9b16
@property(copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)streetViewLocation;	// IMP=0x00000000000c9a0e
- (_Bool)showsBicycling;	// IMP=0x00000000000c9a06
- (_Bool)showsStreetView;	// IMP=0x00000000000c999c
- (_Bool)showsTransit;	// IMP=0x00000000000c98f4
- (_Bool)showsTraffic;	// IMP=0x00000000000c984c
- (unsigned long long)mapType;	// IMP=0x00000000000c975b
- (long long)zoomLevel;	// IMP=0x00000000000c96e6
- (id)centerLocation;	// IMP=0x00000000000c968f
- (unsigned long long)directionsMode;	// IMP=0x00000000000c9598
- (id)destinationAddress;	// IMP=0x00000000000c9541
- (id)startAddress;	// IMP=0x00000000000c94ea
- (id)searchLocation;	// IMP=0x00000000000c9493
- (id)searchNearQuery;	// IMP=0x00000000000c943c
- (id)searchQuery;	// IMP=0x00000000000c9375
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000c9305

@end
