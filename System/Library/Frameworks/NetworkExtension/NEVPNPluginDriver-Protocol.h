//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEPluginDriver-Protocol.h>

@class NSDictionary;

@protocol NEVPNPluginDriver <NEPluginDriver>
- (void)setAppUUIDMap:(NSDictionary *)arg1;
- (void)attachIPCWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)connectWithParameters:(NSDictionary *)arg1;
@end

