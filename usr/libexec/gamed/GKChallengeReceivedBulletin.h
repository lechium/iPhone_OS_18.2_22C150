//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeReceivedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000018ade3
- (void)handleDeclineAction;	// IMP=0x004000000018c006
- (void)handleAction:(id)arg1;	// IMP=0x001000000018be5e
- (unsigned long long)launchEventType;	// IMP=0x001000000018be56
- (void)assembleBulletin;	// IMP=0x001000000018b9dd
- (void)notifyClient:(id)arg1;	// IMP=0x001000000018b917
- (id)init;	// IMP=0x001000000018adb4

@end

