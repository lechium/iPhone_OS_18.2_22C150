//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;
@protocol GEOTransitDeparture;

__attribute__((visibility("hidden")))
@interface _GEOTransitTripStop : NSObject
{
    NSTimeZone *_timeZone;	// 8 = 0x8
    unsigned long long _stationIdentifier;	// 16 = 0x10
    NSString *_transitName;	// 24 = 0x18
    NSArray *_labelItems;	// 32 = 0x20
    GEOLatLng *_location;	// 40 = 0x28
    GEOStyleAttributes *_styleAttributes;	// 48 = 0x30
    _Bool _isHidden;	// 56 = 0x38
    id <GEOTransitDeparture> _departure;	// 64 = 0x40
}

+ (id)transitTripStopsForPlaceData:(id)arg1;	// IMP=0x00100000011360e6
- (void).cxx_destruct;	// IMP=0x00000000011368cf
@property(readonly, nonatomic) id <GEOTransitDeparture> departure; // @synthesize departure=_departure;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long stationIdentifier;
- (id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2;	// IMP=0x0000000001136585

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

