//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFColor-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SFLatLng;

@protocol SFWeatherColor <SFColor>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) double cloudCoverHighAltPct;
@property(nonatomic) double cloudCoverMidAltPct;
@property(nonatomic) double cloudCoverLowAltPct;
@property(nonatomic) double cloudCover;
@property(copy, nonatomic) NSDate *date;
@property(retain, nonatomic) SFLatLng *location;
@property(copy, nonatomic) NSString *condition;
@end
