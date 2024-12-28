//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRequest (GKGameStatService)
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c0257
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c013f
- (void)updatePlayersForLeaderboard:(id)arg1 service:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bfcf0
- (id)scoreForServerRepresentation:(id)arg1 leaderboard:(id)arg2;	// IMP=0x00100000000bfa47
- (id)leaderboardForServerRepresentations:(id)arg1;	// IMP=0x00100000000bf710
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000000bf5f7
- (id)bagKey;	// IMP=0x00100000000bf4de
- (id)serverPlayerScope;	// IMP=0x00100000000bf4b3
- (id)serverTimeScope;	// IMP=0x00100000000bf47c
@end
