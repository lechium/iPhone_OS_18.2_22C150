//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface REMCDChangeTrackingState : NSManagedObject
{
}

+ (id)cdEntityName;	// IMP=0x0020000000089832
+ (id)fetchRequest;	// IMP=0x0010000000057d72

// Remaining properties
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(copy, nonatomic) NSString *clientName; // @dynamic clientName;
@property(retain, nonatomic) NSData *lastConsumedChangeTokenData; // @dynamic lastConsumedChangeTokenData;
@property(copy, nonatomic) NSDate *lastConsumedDate; // @dynamic lastConsumedDate;

@end

