//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntelligencePlatform/NSCopying-Protocol.h>
#import <IntelligencePlatform/NSSecureCoding-Protocol.h>

@class NSArray;

@protocol GDKTSContextRepresentationProtocol <NSSecureCoding, NSCopying>
@property(readonly, nonatomic) NSArray *destinationActivities;
@property(readonly, nonatomic) NSArray *destinationPlaces;
@property(readonly, nonatomic) NSArray *destinationPeople;
@property(readonly, nonatomic) NSArray *activities;
@property(readonly, nonatomic) NSArray *places;
@property(readonly, nonatomic) NSArray *people;
@property(readonly, nonatomic) NSArray *originActivities;
@property(readonly, nonatomic) NSArray *originPlaces;
@property(readonly, nonatomic) NSArray *originPeople;
@end

