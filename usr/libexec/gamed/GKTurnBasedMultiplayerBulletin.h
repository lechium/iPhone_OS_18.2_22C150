//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

@interface GKTurnBasedMultiplayerBulletin
{
    _Bool _userTapped;	// 16 = 0x10
    NSString *_matchID;	// 24 = 0x18
    NSNumber *_turnCount;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_exchangeID;	// 48 = 0x30
    NSString *_guestID;	// 56 = 0x38
    NSString *_aggregateDictionaryKey;	// 64 = 0x40
}

+ (_Bool)displayNotification;	// IMP=0x0040000000175df5
+ (_Bool)shouldExpirePlayerList;	// IMP=0x0010000000175ded
+ (_Bool)shouldLoadCacheDetails;	// IMP=0x0010000000175de5
+ (_Bool)shouldLoadCacheList;	// IMP=0x0010000000175ddd
+ (_Bool)shouldLoadCacheData;	// IMP=0x0010000000175dd5
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000175340
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000175338
- (void).cxx_destruct;	// IMP=0x002000000017909c
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
@property(retain) NSString *guestID; // @synthesize guestID=_guestID;
@property(retain) NSString *exchangeID; // @synthesize exchangeID=_exchangeID;
@property(retain) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property _Bool userTapped; // @synthesize userTapped=_userTapped;
@property(retain) NSNumber *turnCount; // @synthesize turnCount=_turnCount;
@property(retain) NSString *matchID; // @synthesize matchID=_matchID;
- (id)description;	// IMP=0x0010000000178efc
- (void)handleAction:(id)arg1;	// IMP=0x0010000000178d63
- (void)handleAcceptAction;	// IMP=0x0010000000178cf6
- (void)expireAndLoadCaches;	// IMP=0x001000000017858c
- (void)assembleBulletin;	// IMP=0x0010000000177f02
- (id)bulletinMessage;	// IMP=0x0010000000177dc7
- (void)removePreviousTurnBulletins;	// IMP=0x0010000000177b09
- (void)declineTurnBasedInviteWithReason:(int)arg1;	// IMP=0x0010000000177711
- (void)acceptTurnBasedTurn;	// IMP=0x001000000017753e
- (void)invalidateTurnCache;	// IMP=0x0010000000177127
- (void)saveTurnBasedEvent;	// IMP=0x0010000000177049
- (void)updateBadgeCount;	// IMP=0x0010000000176f0a
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000017651d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001762fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001760b2
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000175e95
- (void)update;	// IMP=0x0010000000175dfd

@end
