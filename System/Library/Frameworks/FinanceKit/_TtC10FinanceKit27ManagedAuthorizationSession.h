//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, _TtC10FinanceKit12StringParams, _TtC10FinanceKit18ManagedInstitution;

@interface _TtC10FinanceKit27ManagedAuthorizationSession : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000002f1d90

// Remaining properties
@property(nonatomic) short authorizationTypeValue; // @dynamic authorizationTypeValue;
@property(nonatomic, copy) NSString *codeVerifier; // @dynamic codeVerifier;
@property(nonatomic, copy) NSString *consentAuthorizationURI; // @dynamic consentAuthorizationURI;
@property(nonatomic, copy) NSString *consentId; // @dynamic consentId;
@property(nonatomic, copy) NSString *consentToken; // @dynamic consentToken;
@property(nonatomic, retain) _TtC10FinanceKit12StringParams *extensionPayload; // @dynamic extensionPayload;
@property(nonatomic, copy) NSString *fpanId; // @dynamic fpanId;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, retain) _TtC10FinanceKit18ManagedInstitution *institutionObject; // @dynamic institutionObject;
@property(nonatomic, copy) NSUUID *previousConsentUUID; // @dynamic previousConsentUUID;

@end

