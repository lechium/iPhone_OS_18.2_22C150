//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class HMMCoreDataNamedGroup, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMMCoreDataGroupCounter : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x008000000001db75

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) HMMCoreDataNamedGroup *group; // @dynamic group;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long value; // @dynamic value;

@end
