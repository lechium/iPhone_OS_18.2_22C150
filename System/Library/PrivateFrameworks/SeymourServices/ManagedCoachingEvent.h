//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogWorkoutMetadata, NSString;

@interface ManagedCoachingEvent : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000061bc30

// Remaining properties
@property(nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata; // @dynamic catalogWorkoutMetadata;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSString *intensity; // @dynamic intensity;
@property(nonatomic) double leadDuration; // @dynamic leadDuration;
@property(nonatomic) int rangeLowerBound; // @dynamic rangeLowerBound;
@property(nonatomic) int rangeUpperBound; // @dynamic rangeUpperBound;
@property(nonatomic) _Bool shouldShowPlus; // @dynamic shouldShowPlus;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic, copy) NSString *type; // @dynamic type;

@end
