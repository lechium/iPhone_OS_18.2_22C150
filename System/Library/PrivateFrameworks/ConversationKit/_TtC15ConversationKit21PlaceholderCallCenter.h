//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit21PlaceholderCallCenter : NSObject
{
    MISSING_TYPE *activeCalls;	// 8 = 0x8
    MISSING_TYPE *expectedAVLessConversationUUIDs;	// 16 = 0x10
    MISSING_TYPE *conversationManager;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003c573d
- (id)init;	// IMP=0x00000000003c570a
- (void)conversationManager:(id)arg1 avModeChangedForConversation:(id)arg2;	// IMP=0x00000000003c6aef
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00000000003c65e7
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00000000003c6363

@end
