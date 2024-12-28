//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/ECLocalActionReplayerDelegate-Protocol.h>

@class NSData, NSDictionary, NSError, NSIndexSet, NSString, NSURL;

@protocol ECIMAPLocalActionReplayerDelegate <ECLocalActionReplayerDelegate>
- (_Bool)errorIsIMAPError:(NSError *)arg1;
- (NSData *)messageDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;
- (_Bool)checkUIDValidity:(unsigned int)arg1 mailboxURL:(NSURL *)arg2;
- (NSDictionary *)flagsForIMAPUIDs:(NSIndexSet *)arg1 mailboxURL:(NSURL *)arg2;
- (NSString *)imapMailboxNameForMailboxURL:(NSURL *)arg1;
@end
