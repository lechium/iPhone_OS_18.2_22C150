//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit29RecentsCollectionViewCollator : NSObject
{
    MISSING_TYPE *updateQueue;	// 8 = 0x8
    MISSING_TYPE *recentsController;	// 16 = 0x10
    MISSING_TYPE *conversationManager;	// 56 = 0x38
    MISSING_TYPE *dataSource;	// 64 = 0x40
    MISSING_TYPE *linkController;	// 72 = 0x48
    MISSING_TYPE *messageInboxController;	// 80 = 0x50
    MISSING_TYPE *_hasFinishedFirstLoad;	// 0 = 0x0
    MISSING_TYPE *recentCallsDidChangeObserver;	// 0 = 0x0
    MISSING_TYPE *model;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_upcomingSectionItemLimit;	// 0 = 0x0
    MISSING_TYPE *messageInboxSubscription;	// 0 = 0x0
    MISSING_TYPE *videoMessageLoadSubscription;	// 0 = 0x0
    MISSING_TYPE *featureFlags;	// 0 = 0x0
    MISSING_TYPE *wantsSynchronousLoad;	// 0 = 0x0
    MISSING_TYPE *isDataLoading;	// 0 = 0x0
    MISSING_TYPE *pendingDataLoading;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000003ad965
- (id)init;	// IMP=0x00000000003b0207
- (void)dealloc;	// IMP=0x00000000003ad948
- (void)conversationManager:(id)arg1 linkChangedForConversation:(id)arg2;	// IMP=0x00000000003b24d8
- (void)conversationManager:(id)arg1 didChangeActivatedLinks:(id)arg2;	// IMP=0x00000000003b23c0
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00000000003b2323
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00000000003b2221
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x00000000003b21a2

@end
