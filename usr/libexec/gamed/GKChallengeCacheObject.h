//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSOrderedSet, NSSet, NSString;

@interface GKChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x0020000000118bfc
+ (id)fetchSortDescriptors;	// IMP=0x0010000000117be5
+ (id)challengeWithServerRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x0010000000117843
+ (id)challengesWithChallengeIDs:(id)arg1 context:(id)arg2;	// IMP=0x0010000000117625
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0010000000117618
+ (id)uniqueAttributeName;	// IMP=0x001000000011760b
- (void)invalidate;	// IMP=0x0020000000118dc5
- (_Bool)hasDetails;	// IMP=0x0010000000118c09
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000001184a7
- (id)orderedSetOfCompatibleBundleIDs;	// IMP=0x00100000001180ec
- (id)internalRepresentation;	// IMP=0x0010000000117c86
- (Class)classForInternalRepresentation;	// IMP=0x0010000000117c7e

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @dynamic compatibleBundleIDs;
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *detailsExpirationDate; // @dynamic detailsExpirationDate;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(retain, nonatomic) NSString *issuingPlayerID; // @dynamic issuingPlayerID;
@property(retain, nonatomic) NSSet *listEntries; // @dynamic listEntries;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *receivingPlayerID; // @dynamic receivingPlayerID;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end

