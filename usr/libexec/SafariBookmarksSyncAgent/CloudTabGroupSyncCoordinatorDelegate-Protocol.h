//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKRecordID, CloudTabGroupSyncCoordinator, NSDate, NSSet, NSString;

@protocol CloudTabGroupSyncCoordinatorDelegate <NSObject>

@optional
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didFetchRecentlyAcceptedSharedTabGroupWithUUID:(NSString *)arg2 acceptedShareDate:(NSDate *)arg3;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didChangeBackgroundImageInTabGroupWithUUID:(NSString *)arg2 byParticipantWithRecordID:(CKRecordID *)arg3;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didChangeScopedFavoritesInSharedTabGroupWithUUID:(NSString *)arg2 byParticipantWithRecordID:(CKRecordID *)arg3;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didRemoveTabWithUUID:(NSString *)arg2 title:(NSString *)arg3 inSharedTabGroupWithUUID:(NSString *)arg4 byParticipantWithRecordID:(CKRecordID *)arg5;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didNavigateInTabWithUUID:(NSString *)arg2 title:(NSString *)arg3 inSharedTabGroupWithUUID:(NSString *)arg4 byParticipantWithRecordID:(CKRecordID *)arg5;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didAddTabWithUUID:(NSString *)arg2 title:(NSString *)arg3 inSharedTabGroupWithUUID:(NSString *)arg4 byParticipantWithRecordID:(CKRecordID *)arg5;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 activeParticipantsDidUpdateInTabWithUUID:(NSString *)arg2;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 activeParticipantsDidUpdateInTabGroupWithUUID:(NSString *)arg2;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 participants:(NSSet *)arg2 didLeaveSharedTabGroupWithUUID:(NSString *)arg3;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 participants:(NSSet *)arg2 didJoinSharedTabGroupWithUUID:(NSString *)arg3;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didUpdateShareForTabGroupWithUUID:(NSString *)arg2;
- (void)cloudTabGroupSyncCoordinator:(CloudTabGroupSyncCoordinator *)arg1 didReceiveChangesForUnhandledRecordZoneIDs:(NSSet *)arg2;
@end
