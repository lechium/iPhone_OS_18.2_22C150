//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f3912
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000f37e4
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000f3700
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000f3620
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000f353f
- (void)sendLinkContactsEvents;	// IMP=0x00000000000f3458
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000f3374
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000f3290
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000f31ac
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000f30c8
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000f2fe7
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000f2f06
- (void)sendAddedGroupEvents;	// IMP=0x00000000000f2e22
- (void)sendDeletedContactEvents;	// IMP=0x00000000000f2d41
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000f2c5e
- (void)sendAddedContactEvents;	// IMP=0x00000000000f2b7a
- (id)run:(id *)arg1;	// IMP=0x00000000000f2a92
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000f29bc

@end
