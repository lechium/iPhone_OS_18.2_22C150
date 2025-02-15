//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INSearchForPhotosIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *memoryName;
@property(readonly, nonatomic) long long geographicalFeaturesOperator;
@property(copy, nonatomic) NSArray *geographicalFeatures;
@property(readonly, nonatomic) long long activitiesOperator;
@property(copy, nonatomic) NSArray *activities;
@property(readonly, nonatomic) long long placesOperator;
@property(copy, nonatomic) NSArray *places;
@property(readonly, nonatomic) long long eventsOperator;
@property(copy, nonatomic) NSArray *events;
@property(copy, nonatomic) NSArray *peopleInPhoto;
@property(nonatomic) unsigned long long excludedAttributes;
@property(nonatomic) unsigned long long includedAttributes;
@property(copy, nonatomic) NSArray *searchTerms;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) CLPlacemark *locationCreated;
@property(copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)init;
@end

