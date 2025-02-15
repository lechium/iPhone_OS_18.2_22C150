//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedScoreSummary, NSDate, NSString;

@interface ManagedArchivedSession : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000612a90

// Remaining properties
@property(nonatomic) int activityType; // @dynamic activityType;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) double percentageCompleted; // @dynamic percentageCompleted;
@property(nonatomic, copy) NSString *queueIdentifier; // @dynamic queueIdentifier;
@property(nonatomic, retain) ManagedScoreSummary *scoreSummary; // @dynamic scoreSummary;
@property(nonatomic, copy) NSString *sessionIdentifier; // @dynamic sessionIdentifier;
@property(nonatomic, copy) NSDate *startDate; // @dynamic startDate;
@property(nonatomic, copy) NSString *watchConnectionState; // @dynamic watchConnectionState;
@property(nonatomic, copy) NSString *workoutIdentifier; // @dynamic workoutIdentifier;

@end

