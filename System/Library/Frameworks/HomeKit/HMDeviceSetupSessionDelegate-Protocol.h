//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMDeviceSetupSession, NSData, NSError;

@protocol HMDeviceSetupSessionDelegate <NSObject>
- (void)setupSession:(HMDeviceSetupSession *)arg1 didReceiveExchangeData:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)setupSession:(HMDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;

@optional
- (void)setupSessionDidOpen:(HMDeviceSetupSession *)arg1;
@end

