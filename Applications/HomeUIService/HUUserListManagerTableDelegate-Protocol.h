//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class HMOutgoingHomeInvitation, HMUser, NSArray, NSError;

@protocol HUUserListManagerTableDelegate <NSObject>
- (void)managerDidSendInvitations:(NSArray *)arg1;
- (void)managerDidDismissWithError:(NSError *)arg1;

@optional
- (void)managerDidUpdateUserList;
- (void)managerDidCancelInvite:(HMOutgoingHomeInvitation *)arg1 error:(NSError *)arg2;
- (void)managerDidRemoveUser:(HMUser *)arg1 error:(NSError *)arg2;
@end

