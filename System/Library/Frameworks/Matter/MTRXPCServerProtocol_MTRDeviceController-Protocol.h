//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/NSObject-Protocol.h>

@class NSNumber, NSUUID;

@protocol MTRXPCServerProtocol_MTRDeviceController <NSObject>

@optional
- (oneway void)deviceController:(NSUUID *)arg1 unregisterNodeID:(NSNumber *)arg2;
- (oneway void)deviceController:(NSUUID *)arg1 registerNodeID:(NSNumber *)arg2;
- (oneway void)deviceController:(NSUUID *)arg1 controllerNodeIDWithReply:(void (^)(NSNumber *))arg2;
- (oneway void)deviceController:(NSUUID *)arg1 getUniqueIdentifierWithReply:(void (^)(NSUUID *))arg2;
- (oneway void)deviceController:(NSUUID *)arg1 getIsRunningWithReply:(void (^)(_Bool))arg2;
@end

