//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface _TtC10FinanceKit17ManagedLabRequest : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000037afd0

// Remaining properties
@property(nonatomic) short failedAttemptCount; // @dynamic failedAttemptCount;
@property(nonatomic, copy) NSDate *lastFailureDate; // @dynamic lastFailureDate;
@property(nonatomic, copy) NSDate *lastSuccessDate; // @dynamic lastSuccessDate;

@end
