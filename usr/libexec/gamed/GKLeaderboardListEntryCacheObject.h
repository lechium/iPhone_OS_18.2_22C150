//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLeaderboardCacheObject, NSString;

@interface GKLeaderboardListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001051d3
- (id)internalRepresentation;	// IMP=0x0020000000105453
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000001051e0

// Remaining properties
@property(retain, nonatomic) NSString *baseLeaderboardID; // @dynamic baseLeaderboardID;
@property(retain, nonatomic) GKLeaderboardCacheObject *leaderboard; // @dynamic leaderboard;

@end

