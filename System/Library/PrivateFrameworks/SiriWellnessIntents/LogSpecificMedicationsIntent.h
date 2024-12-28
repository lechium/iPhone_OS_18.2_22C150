//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface LogSpecificMedicationsIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000000fb090
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000000facb0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000faa60
- (id)init;	// IMP=0x00000000000fa920

// Remaining properties
@property(nonatomic, retain) NSNumber *confirmedAsNeeded; // @dynamic confirmedAsNeeded;
@property(nonatomic, retain) NSNumber *confirmedAsScheduled; // @dynamic confirmedAsScheduled;
@property(nonatomic, retain) NSNumber *dosage; // @dynamic dosage;
@property(nonatomic, copy) NSString *dosageUnit; // @dynamic dosageUnit;
@property(nonatomic, copy) NSDate *endTime; // @dynamic endTime;
@property(nonatomic, retain) NSNumber *hasMeridiem; // @dynamic hasMeridiem;
@property(nonatomic, retain) NSNumber *isAsNeeded; // @dynamic isAsNeeded;
@property(nonatomic, retain) NSNumber *logAsNeeded; // @dynamic logAsNeeded;
@property(nonatomic, retain) NSNumber *medStatus; // @dynamic medStatus;
@property(nonatomic, copy) NSArray *medicationIDs; // @dynamic medicationIDs;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *scheduleID; // @dynamic scheduleID;
@property(nonatomic, copy) NSDate *startTime; // @dynamic startTime;
@property(nonatomic, retain) NSNumber *strength; // @dynamic strength;
@property(nonatomic, copy) NSString *strengthUnit; // @dynamic strengthUnit;

@end
