//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSError, NSString, WCMessageRequest, WCMessageResponse, WCSessionState;

@protocol WCXPCManagerSharedProtocol <NSObject>
- (void)handleUserInfoResultWithPairingID:(NSString *)arg1;
- (void)handleIncomingUserInfoWithPairingID:(NSString *)arg1;
- (void)handleFileResultWithPairingID:(NSString *)arg1;
- (void)handleIncomingFileWithPairingID:(NSString *)arg1;
- (void)handleApplicationContextWithPairingID:(NSString *)arg1;
- (void)handleSentMessageWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)handleResponse:(WCMessageResponse *)arg1;
- (void)handleRequest:(WCMessageRequest *)arg1;
- (void)handleMessageSendingAllowed;
- (void)handleSessionStateChanged:(WCSessionState *)arg1;
- (void)handleActiveDeviceSwitchStarted;
@end

