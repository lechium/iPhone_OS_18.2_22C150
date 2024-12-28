//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString, RWIRelay, _RWIApplicationInfo, _RWIRelayConnectionToApplication;
@protocol OS_xpc_object;

@protocol RWIRelayDelegate <NSObject>
- (void)relay:(RWIRelay *)arg1 remoteInspectionEnablementDidChange:(_Bool)arg2;
- (void)relay:(RWIRelay *)arg1 activateApplicationWithBundleIdentifier:(NSString *)arg2;
- (NSDictionary *)relaySetupResponseForClientConnection:(RWIRelay *)arg1;
- (void)relay:(RWIRelay *)arg1 unhandledApplicationXPCMessage:(NSObject<OS_xpc_object> *)arg2;
- (void)relayClientConnectionDidChange:(RWIRelay *)arg1;
- (void)relay:(RWIRelay *)arg1 applicationUpdated:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 applicationDisconnected:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 applicationConnected:(_RWIApplicationInfo *)arg2;
- (_RWIApplicationInfo *)relay:(RWIRelay *)arg1 applicationInfoForIncomingConnection:(_RWIRelayConnectionToApplication *)arg2 bundleIdentifier:(NSString *)arg3;
- (void)relayInitialize:(RWIRelay *)arg1;
@end
