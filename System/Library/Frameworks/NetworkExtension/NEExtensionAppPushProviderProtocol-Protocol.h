//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionProviderProtocol-Protocol.h>

@class NSDictionary;

@protocol NEExtensionAppPushProviderProtocol <NEExtensionProviderProtocol>
- (void)sendTimerEvent;
- (void)sendOutgoingCallMessage:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reportPushToTalkMessage:(NSDictionary *)arg1;
- (void)reportIncomingCall:(NSDictionary *)arg1;
- (void)setProviderConfiguration:(NSDictionary *)arg1;
- (void)stopWithReason:(int)arg1 completionHandler:(void (^)(void))arg2;
- (void)startConnectionWithProviderConfig:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

