//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSData, NSString, NSURL;

@protocol WCXPCPrivateManagerDaemonProtocol <NSObject>
- (void)reconnect;
- (void)fakeIncomingPayloadOnSubService:(NSString *)arg1 ofType:(NSString *)arg2 clientData:(NSData *)arg3 resource:(NSURL *)arg4 resourceSandboxToken:(NSData *)arg5 completionHandler:(void (^)(NSError *))arg6;
@end

