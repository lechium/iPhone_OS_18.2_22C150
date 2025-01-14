//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol CSDConversationLinkManagerDelegate;

@interface CSDConversationLinkManager : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *serverBag;	// 16 = 0x10
    MISSING_TYPE *renewPseudonymTask;	// 24 = 0x18
    MISSING_TYPE *dataSource;	// 32 = 0x20
    MISSING_TYPE *linkSyncManager;	// 40 = 0x28
    MISSING_TYPE *lmiRecoveryManager;	// 48 = 0x30
    MISSING_TYPE *generateKeyAgreement;	// 56 = 0x38
    MISSING_TYPE *delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002f68c5
- (void)renewPseudonymIfNeeded:(NSString *)arg1 completionHandler:(void (^)(NSDate *, NSError *))arg2;	// IMP=0x00100000002f23f6
- (void)linkSyncStateWithIncludeLinks:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ee59d
- (void)recoverLinksForPseudonyms:(id)arg1;	// IMP=0x00100000002ee4f6
- (void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;	// IMP=0x00100000002ee4b0
- (void)addInvitedHandles:(id)arg1 pseudonym:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ee3ae
- (id)decryptLetMeInResponse:(id)arg1 pseudonym:(id)arg2 requestorKeyAgreement:(id)arg3;	// IMP=0x00100000002edd6d
- (void)decryptLetMeInRequest:(id)arg1 pseudonym:(id)arg2 fromHandle:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002ed923
- (id)encryptLetMeInResponse:(id)arg1 pseudonym:(id)arg2 responseKeyData:(id)arg3;	// IMP=0x00100000002ecac8
- (void)encryptLetMeInRequest:(id)arg1 link:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ebf4c
- (void)setLinkName:(id)arg1 forLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002eb584
- (void)checkLinkValidityWithPseudonym:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ea989
- (void)renewLinkWithPseudonym:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e959a
- (void)removeLink:(id)arg1 deleteReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e91e5
- (void)invalidateLinkWithPseudonym:(id)arg1 deleteReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e8e98
- (void)validateAllLinks;	// IMP=0x00100000002e8452
- (id)conversationLinkDescriptorsWithGroupUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002e6a16
- (void)getLinkDescriptorWithPseudonym:(id)arg1 includeInactive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e66ee
- (id)getInactiveLinkForHandle:(id)arg1;	// IMP=0x00100000002e64b9
- (void)getInactiveLinkForHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e60c7
- (void)generateInactiveLinkFor:(id)arg1 afterActivation:(_Bool)arg2;	// IMP=0x00100000002e5c81
- (void)generateAllInactiveLinksFor:(id)arg1;	// IMP=0x00100000002e5309
- (id)activateLinkForPseudonym:(id)arg1 updateGroupUUID:(id)arg2 updateInvitedHandles:(id)arg3;	// IMP=0x00100000002e4c6b
- (void)activateLinkForPseudonym:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e3f7e
- (void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e3899
- (void)storeReceivedLink:(id)arg1 fromHandle:(id)arg2 isUpdate:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002e3445
- (void)generateLinkWithInvitedHandles:(id)arg1 originatorHandle:(id)arg2 linkLifetimeScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002e1e38
- (void)generateLinkWithGroupUUID:(id)arg1 invitedHandles:(id)arg2 originatorHandle:(id)arg3 linkLifetimeScope:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000002e1993
- (void)activatedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e1080
- (id)fetchDeletedLinksWithError:(id *)arg1;	// IMP=0x00100000002e0724
- (id)fetchActivatedLinksWithError:(id *)arg1;	// IMP=0x00100000002e0529
@property(nonatomic, retain) id <CSDConversationLinkManagerDelegate> delegate; // @synthesize delegate;
- (id)init;	// IMP=0x00100000002e0215
- (void)activeAccountsChangedForService:(id)arg1;	// IMP=0x00100000002f8252
- (void)service:(id)arg1 pseudonymUpdated:(id)arg2;	// IMP=0x00100000002f81e1
- (void)service:(id)arg1 pseudonymRemoved:(id)arg2;	// IMP=0x00100000002f76f0

@end

