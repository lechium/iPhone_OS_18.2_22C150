//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/NSObject-Protocol.h>

@class LNAction, NSString;

@protocol LNConnectionXPCListenerEndpointVendingInterface <NSObject>
- (void)getListenerEndpointForBundleIdentifier:(NSString *)arg1 action:(LNAction *)arg2 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSData *, LNAction *, NSError *))arg3;
- (void)getListenerEndpointWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *, NSData *, NSError *))arg1;
@end
