//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MISSING_TYPE, NSDate, NSNumber, NSString, NSUUID;

@interface _TtC10FinanceKit19ManagedAccountMatch : NSManagedObject
{
    MISSING_TYPE *matchingTypeKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000452b00
- (void).cxx_construct;	// IMP=0x0000000000452ad0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000452a50

// Remaining properties
@property(nonatomic, copy) NSString *accountID; // @dynamic accountID;
@property(nonatomic, copy) NSString *fpanID; // @dynamic fpanID;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, copy) NSString *institutionID; // @dynamic institutionID;
@property(nonatomic) _Bool isMismatched; // @dynamic isMismatched;
@property(nonatomic, copy) NSDate *lastUpdatedAt; // @dynamic lastUpdatedAt;
@property(nonatomic, retain) NSNumber *primitiveMatchingType; // @dynamic primitiveMatchingType;

@end
