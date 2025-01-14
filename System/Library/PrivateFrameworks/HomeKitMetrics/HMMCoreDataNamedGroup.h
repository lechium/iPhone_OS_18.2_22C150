//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;
@protocol HMMGroupSpecifier;

__attribute__((visibility("hidden")))
@interface HMMCoreDataNamedGroup : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x008000000001dbd5
@property(readonly, nonatomic) id <HMMGroupSpecifier> groupSpecifier;

// Remaining properties
@property(retain, nonatomic) NSSet *counters; // @dynamic counters;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *valueStatistics; // @dynamic valueStatistics;

@end

