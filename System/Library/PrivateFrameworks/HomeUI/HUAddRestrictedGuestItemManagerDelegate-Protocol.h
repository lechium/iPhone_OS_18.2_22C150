//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFItemManagerDelegate-Protocol.h>

@class HUAddRestrictedGuestItemManager, NSArray, NSError;

@protocol HUAddRestrictedGuestItemManagerDelegate <HFItemManagerDelegate>
- (void)restrictedGuestItemManager:(HUAddRestrictedGuestItemManager *)arg1 didFailToSendInvitations:(NSError *)arg2;
- (void)restrictedGuestItemManager:(HUAddRestrictedGuestItemManager *)arg1 didSendInvitations:(NSArray *)arg2;
@end

