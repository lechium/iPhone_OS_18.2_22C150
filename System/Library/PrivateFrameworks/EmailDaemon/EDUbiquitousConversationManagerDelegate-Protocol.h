//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol EDUbiquitousConversationManagerDelegate <NSObject>
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(NSArray *)arg1;
- (void)pruneConversationTables:(double)arg1;
- (void)remoteMessageIDsAdded:(NSArray *)arg1 forConversationID:(long long)arg2;
- (NSArray *)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
- (long long)conversationIDForMessageIDs:(NSArray *)arg1;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(NSString *)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
- (NSDictionary *)syncedConversationIDsBySyncKey;
@end

