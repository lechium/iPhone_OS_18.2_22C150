//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedWorkoutPlan, ManagedWorkoutPlanItem, NSString;

@interface ManagedWorkoutPlanItemIndex : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000062a940

// Remaining properties
@property(nonatomic) int index; // @dynamic index;
@property(nonatomic, retain) ManagedWorkoutPlanItem *item; // @dynamic item;
@property(nonatomic, copy) NSString *offset; // @dynamic offset;
@property(nonatomic, retain) ManagedWorkoutPlan *plan; // @dynamic plan;

@end
