//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSOrderedSet, NSString;

@interface GKTurnBasedSessionCacheObject
{
}

+ (id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2;	// IMP=0x0040000000113aa8
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0010000000113a9b
+ (id)uniqueAttributeName;	// IMP=0x0010000000113a8e
+ (id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x001000000011399a
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0010000000111aef
+ (id)entityName;	// IMP=0x0010000000111ae2
- (id)internalRepresentation;	// IMP=0x0020000000114068
- (id)participantAtIndex:(long long)arg1;	// IMP=0x0010000000113e3d
- (void)expire;	// IMP=0x0010000000113dcc
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001128f2
- (id)participantWithPlayerID:(id)arg1;	// IMP=0x00100000001125f5
- (void)saveGameData:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000112266
- (void)expireGameData;	// IMP=0x001000000011208f
- (void)deleteGameData;	// IMP=0x0010000000111e18
- (id)gameData;	// IMP=0x0010000000111bf3
- (void)prepareForDeletion;	// IMP=0x0010000000111bb5
- (_Bool)isActive;	// IMP=0x0010000000111b1b

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) int currentParticipant; // @dynamic currentParticipant;
@property(retain, nonatomic) NSString *currentPlayerID; // @dynamic currentPlayerID;
@property(retain, nonatomic) NSDate *dataExpirationDate; // @dynamic dataExpirationDate;
@property(retain, nonatomic) NSDate *deletionDate; // @dynamic deletionDate;
@property(retain, nonatomic) NSOrderedSet *exchanges; // @dynamic exchanges;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @dynamic lastTurnPlayerID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSString *matchDataVersion; // @dynamic matchDataVersion;
@property(nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int minPlayers; // @dynamic minPlayers;
@property(retain, nonatomic) NSOrderedSet *participants; // @dynamic participants;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *sessionID; // @dynamic sessionID;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) int turnNumber; // @dynamic turnNumber;
@property(retain, nonatomic) NSString *unusedID; // @dynamic unusedID;

@end

