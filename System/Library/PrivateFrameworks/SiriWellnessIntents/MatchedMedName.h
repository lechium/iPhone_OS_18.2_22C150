//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSNumber, NSString, NSUUID;

@interface MatchedMedName : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000002350
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002a70
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x00000000000027d0

// Remaining properties
@property(nonatomic, copy) NSString *completionStatus; // @dynamic completionStatus;
@property(nonatomic, retain) NSNumber *dosage; // @dynamic dosage;
@property(nonatomic, copy) NSString *dosageUnit; // @dynamic dosageUnit;
@property(nonatomic, retain) NSNumber *isScheduled; // @dynamic isScheduled;
@property(nonatomic, copy) NSString *loggedTime; // @dynamic loggedTime;
@property(nonatomic, copy) NSString *medicationID; // @dynamic medicationID;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSUUID *persistedUUID; // @dynamic persistedUUID;
@property(nonatomic, copy) NSString *schedule; // @dynamic schedule;
@property(nonatomic, copy) NSString *scheduleID; // @dynamic scheduleID;
@property(nonatomic, retain) NSNumber *strength; // @dynamic strength;
@property(nonatomic, copy) NSString *strengthUnit; // @dynamic strengthUnit;

@end

