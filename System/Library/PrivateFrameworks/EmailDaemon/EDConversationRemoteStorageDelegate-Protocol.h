//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSDictionary;
@protocol EDConversationRemoteStorage;

@protocol EDConversationRemoteStorageDelegate <NSObject>
- (void)conversationRemoteStorage:(id <EDConversationRemoteStorage>)arg1 didChangeEntries:(NSDictionary *)arg2 reason:(long long)arg3;

@optional
- (void)conversationRemoteStorageDidResetData:(id <EDConversationRemoteStorage>)arg1;
- (void)conversationRemoteStorageWillResetData:(id <EDConversationRemoteStorage>)arg1;
- (void)conversationRemoteStorageDidInitialize:(id <EDConversationRemoteStorage>)arg1;
@end

