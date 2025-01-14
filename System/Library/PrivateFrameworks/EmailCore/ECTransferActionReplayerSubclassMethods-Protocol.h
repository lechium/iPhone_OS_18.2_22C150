//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/NSObject-Protocol.h>

@class ECTransferMessageActionItem, ECTransferMessageActionResults, NSArray, NSData, NSDictionary, NSError, NSString, NSURL;

@protocol ECTransferActionReplayerSubclassMethods <NSObject>
- (_Bool)deleteSourceMessagesFromTransferItems:(NSArray *)arg1;
- (ECTransferMessageActionResults *)appendItem:(ECTransferMessageActionItem *)arg1 mailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)moveItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)copyItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (_Bool)downloadFailed;
- (_Bool)isRecoverableError:(NSError *)arg1;
- (NSData *)fetchBodyDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;
@end

