//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface ManagedUpNextQueueItem : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000629670

// Remaining properties
@property(nonatomic, copy) NSDate *dateAdded; // @dynamic dateAdded;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) long long healthKitActivityType; // @dynamic healthKitActivityType;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic) long long index; // @dynamic index;
@property(nonatomic, copy) NSString *mediaType; // @dynamic mediaType;

@end
