//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, _TtC10FinanceKit22ManagedOrderWebService;

@interface _TtC10FinanceKit30ManagedOrderWebServiceLogEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000221b50
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0000000000221f30
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0000000000221ca0

// Remaining properties
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic) short levelValue; // @dynamic levelValue;
@property(nonatomic, copy) NSString *message; // @dynamic message;
@property(nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService; // @dynamic orderWebService;

@end
