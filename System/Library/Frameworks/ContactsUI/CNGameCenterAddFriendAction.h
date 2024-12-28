//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@protocol CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNGameCenterAddFriendAction : CNContactAction
{
    id <CNSchedulerProvider> _schedulerProvider;	// 8 = 0x8
}

+ (id)os_log;	// IMP=0x00600000000e755d
- (void).cxx_destruct;	// IMP=0x00000000000e60b0
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (CDUnknownBlockType)addFriendsMenuProvider;	// IMP=0x00000000000e601c
- (id)actionTitleForContact:(id)arg1;	// IMP=0x00000000000e5eeb
- (id)contactPerHandleForContact:(id)arg1;	// IMP=0x00000000000e5e03
- (void)createInviteFriendViewControllerForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e5cee
- (void)addContactToFriendSuggestionsDenylistWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e5be5
- (void)sendInvitationViaPushToContactAssociationID:(id)arg1 withProxy:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e5b09
- (void)fetchContactAssociationIDWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e59c8
- (void)supportsFriendingViaPushWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e5870
- (void)inviteViaMessages:(id)arg1;	// IMP=0x00000000000e57b0
- (void)addContactAsFriend:(id)arg1;	// IMP=0x00000000000e562d
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000e55e1
- (id)title;	// IMP=0x00000000000e5585
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000e54d8

@end
