//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface _TtC21ProximityReaderDaemon18ManagedTransaction : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000005150

// Remaining properties
@property(nonatomic, copy) NSData *paymentCardDataHash; // @dynamic paymentCardDataHash;
@property(nonatomic, copy) NSString *safSessionHash; // @dynamic safSessionHash;
@property(nonatomic, copy) NSString *transactionId; // @dynamic transactionId;
@property(nonatomic, copy) NSDate *transactionTimestamp; // @dynamic transactionTimestamp;

@end
