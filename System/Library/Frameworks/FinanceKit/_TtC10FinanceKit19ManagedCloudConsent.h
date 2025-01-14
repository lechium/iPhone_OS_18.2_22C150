//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _TtC10FinanceKit19ManagedCloudConsent : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000242580

// Remaining properties
@property(nonatomic, copy) NSDate *authorizedAt; // @dynamic authorizedAt;
@property(nonatomic, copy) NSDate *authorizedUntil; // @dynamic authorizedUntil;
@property(nonatomic, copy) NSDate *backgroundRefreshLastConfirmedAt; // @dynamic backgroundRefreshLastConfirmedAt;
@property(nonatomic) short ckSchemaVersion; // @dynamic ckSchemaVersion;
@property(nonatomic, copy) NSString *consentID; // @dynamic consentID;
@property(nonatomic) short consentStatusValue; // @dynamic consentStatusValue;
@property(nonatomic, copy) NSString *consentToken; // @dynamic consentToken;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, copy) NSString *institutionID; // @dynamic institutionID;
@property(nonatomic, retain) NSNumber *refreshSequenceNumber; // @dynamic refreshSequenceNumber;

@end

