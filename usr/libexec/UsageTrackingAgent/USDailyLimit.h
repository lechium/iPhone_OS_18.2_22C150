//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class USRegisteredBudget;

@interface USDailyLimit : NSManagedObject
{
}

- (_Bool)validateBudget:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0020000000026237

// Remaining properties
@property(retain, nonatomic) USRegisteredBudget *budget; // @dynamic budget;
@property(nonatomic) double timeLimit; // @dynamic timeLimit;
@property(nonatomic) long long weekday; // @dynamic weekday;

@end

