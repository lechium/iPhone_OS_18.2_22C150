//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject;

@interface GKLeaderboardSetListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x00400000001044c1
+ (id)entityName;	// IMP=0x00100000001044b4
- (_Bool)isValid;	// IMP=0x00200000001045d1
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001044d2

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
