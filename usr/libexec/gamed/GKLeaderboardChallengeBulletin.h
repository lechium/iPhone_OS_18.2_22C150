//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLeaderboardChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000203a4c
+ (_Bool)shouldProcessNotification;	// IMP=0x0010000000203413
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000203130
- (id)initWithCoder:(id)arg1;	// IMP=0x0040000000205bd7
- (id)init;	// IMP=0x0010000000205b7b
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000205b0a
- (void)handleAction:(id)arg1;	// IMP=0x0010000000203361

@end
