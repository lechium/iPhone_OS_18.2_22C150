//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface _TtC10FinanceKit22ManagedOrderReturnInfo : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000002869b0

// Remaining properties
@property(nonatomic, retain) NSNumber *primitiveDisplayCountdown; // @dynamic primitiveDisplayCountdown;
@property(nonatomic, copy) NSDate *returnDeadline; // @dynamic returnDeadline;
@property(nonatomic, copy) NSURL *returnManagementURL; // @dynamic returnManagementURL;
@property(nonatomic, copy) NSString *returnPolicyDescription; // @dynamic returnPolicyDescription;
@property(nonatomic, copy) NSURL *returnPolicyURL; // @dynamic returnPolicyURL;

@end
