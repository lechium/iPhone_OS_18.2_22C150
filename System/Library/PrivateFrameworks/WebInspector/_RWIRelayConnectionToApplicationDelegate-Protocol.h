//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString, _RWIRelayConnectionToApplication;
@protocol OS_xpc_object;

@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>
- (void)xpcConnectionFailed:(_RWIRelayConnectionToApplication *)arg1;
- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 receivedMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@optional
- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 unhandledMessage:(NSObject<OS_xpc_object> *)arg2;
@end

