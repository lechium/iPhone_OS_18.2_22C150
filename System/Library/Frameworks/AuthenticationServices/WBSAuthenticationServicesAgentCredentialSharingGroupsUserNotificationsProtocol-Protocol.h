//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/KCSharingGroupNotificationProtocol-Protocol.h>

@class NSArray, NSString;

@protocol WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol <KCSharingGroupNotificationProtocol>
- (void)fetchNumberOfPasswordAndPasskeySavedAccountsWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)fetchSharingGroupsThatIncludeFamilyMembers:(void (^)(NSArray *, NSError *))arg1;
- (void)groupsUpdatedWithInfos:(NSArray *)arg1 shouldForceShowingNotifications:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)deleteGroupWithID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)leaveGroupWithID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(_Bool)arg1;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(void (^)(_Bool))arg1;
@end
