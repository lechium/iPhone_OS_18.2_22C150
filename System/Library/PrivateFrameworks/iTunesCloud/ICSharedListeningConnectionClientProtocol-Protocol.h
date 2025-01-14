//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class NSData, NSError, NSString;

@protocol ICSharedListeningConnectionClientProtocol <NSObject>
- (void)receiveStartWithSessionIdentifier:(NSString *)arg1 sessionToken:(NSString *)arg2 inviteURLString:(NSString *)arg3;
- (void)receiveFatalError:(NSError *)arg1;
- (void)receiveConnectionError:(NSError *)arg1;
- (void)receiveMessageData:(NSData *)arg1;
@end

