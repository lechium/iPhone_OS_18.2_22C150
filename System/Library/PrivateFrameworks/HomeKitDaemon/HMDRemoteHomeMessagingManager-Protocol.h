//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFMessage;
@protocol HMDRemoteHomeMessageHandling;

@protocol HMDRemoteHomeMessagingManager <NSObject>
- (_Bool)sendMessage:(HMFMessage *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerHandler:(id <HMDRemoteHomeMessageHandling>)arg1;
@end

