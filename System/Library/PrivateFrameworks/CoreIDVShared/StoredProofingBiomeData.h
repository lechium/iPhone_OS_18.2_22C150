//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface StoredProofingBiomeData : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000001f9150

// Remaining properties
@property(nonatomic, copy) NSString *credentialIdentifier; // @dynamic credentialIdentifier;
@property(nonatomic) _Bool isDonated; // @dynamic isDonated;
@property(nonatomic, copy) NSDate *optInDate; // @dynamic optInDate;
@property(nonatomic) _Bool optInStatus; // @dynamic optInStatus;
@property(nonatomic, copy) NSString *proofingDecision; // @dynamic proofingDecision;
@property(nonatomic, copy) NSString *proofingSessionID; // @dynamic proofingSessionID;

@end
