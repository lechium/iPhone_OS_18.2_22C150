//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBFlight;

@protocol _SFPBApiResults <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *flights;
@property(nonatomic) int resultType;
@property(nonatomic) int status;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlight *)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (void)addFlights:(_SFPBFlight *)arg1;
- (void)clearFlights;
@end
