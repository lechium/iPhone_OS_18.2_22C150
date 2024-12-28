//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NSData, NSDictionary, NSObject, NSString, NSURL;
@protocol NNMKSyncServiceTransportDelegate, OS_dispatch_queue;

@protocol NNMKSyncServiceTransport <NSObject>
@property(readonly, nonatomic) unsigned long long connectivityState;
- (NSString *)sendResourceAtURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)initWithServiceName:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 delegate:(id <NNMKSyncServiceTransportDelegate>)arg3;

@optional
@property(nonatomic) _Bool simulateCloudConnectedOnly;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool forceFailureForAllRequests;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)forceFailureForNextRequest;
@end
