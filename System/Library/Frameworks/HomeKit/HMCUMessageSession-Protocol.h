//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMDeviceSetupOperationTransport-Protocol.h>

@class NSDictionary, NSString;

@protocol HMCUMessageSession <HMDeviceSetupOperationTransport>
- (void)sendRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 request:(NSDictionary *)arg3 responseHandler:(void (^)(int, NSDictionary *, NSDictionary *))arg4;
- (void)registerRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *, void (^)(int, NSDictionary *, NSDictionary *)))arg3;
@end

