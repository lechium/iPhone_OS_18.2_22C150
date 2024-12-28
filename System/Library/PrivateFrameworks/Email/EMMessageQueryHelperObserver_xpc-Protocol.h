//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class EMMessage, EMMessageObjectID, NSArray;

@protocol EMMessageQueryHelperObserver_xpc <NSObject>
- (void)queryHelperNeedsRestart;
- (void)queryHelperDidFinishRemoteSearch;
- (void)queryHelperDidDeleteMessages:(NSArray *)arg1;
- (void)queryHelperDidUpdateMessages:(NSArray *)arg1 forKeyPaths:(NSArray *)arg2;
- (void)queryHelperObjectIDDidChangeForMessage:(EMMessage *)arg1 oldObjectID:(EMMessageObjectID *)arg2 oldConversationID:(long long)arg3;
- (void)queryHelperConversationNotificationLevelDidChangeForConversation:(long long)arg1 conversationID:(long long)arg2;
- (void)queryHelperBusinessIDDidChangeForMessages:(NSArray *)arg1 fromBusinessID:(long long)arg2;
- (void)queryHelperConversationIDDidChangeForMessages:(NSArray *)arg1 fromConversationID:(long long)arg2;
- (void)queryHelperMessageFlagsDidChangeForMessages:(NSArray *)arg1;
- (void)queryHelperDidAddMessages:(NSArray *)arg1;
- (void)queryHelperDidFindAllMessages;
- (void)queryHelperDidFindMessages:(NSArray *)arg1;
@end
