//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KCSharingGroup, MISSING_TYPE, NSArray, NSString;

@interface _TtC25keychainsharingmessagingd28KCSharingMessagingdXPCServer : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *invitationManagerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000000032c0
- (void)fetchReceivedInvitesWithCompletion:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x0010000000002f30
- (void)fetchReceivedInviteWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002d90
- (void)didDeclineInviteForGroupID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x0010000000002770
- (void)didAcceptInviteForGroupID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x0010000000002440
- (void)cancelPendingInvitesForGroup:(KCSharingGroup *)arg1 participantHandles:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;	// IMP=0x0010000000002170
- (void)sendNewInvitesForGroup:(KCSharingGroup *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x0010000000001e30
@property(nonatomic, readonly) NSString *description;
- (id)init;	// IMP=0x0010000000001cc0

@end

