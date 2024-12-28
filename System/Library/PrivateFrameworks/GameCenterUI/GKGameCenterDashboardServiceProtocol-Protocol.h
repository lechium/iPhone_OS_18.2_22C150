//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol GKGameCenterDashboardServiceProtocol <GKExtensionProtocol>

@optional
- (void)hostDidParseDashboardImageNames:(NSDictionary *)arg1 leaderboardSetNames:(NSDictionary *)arg2 leaderboardNames:(NSDictionary *)arg3;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForChallenge:(_Bool)arg1;
- (void)hostDidChangeLeaderboardPlayerScope:(NSNumber *)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(NSNumber *)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(NSString *)arg1;
- (void)hostDidChangeViewState:(NSNumber *)arg1;
@end
