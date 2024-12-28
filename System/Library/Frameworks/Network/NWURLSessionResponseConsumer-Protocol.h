//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Network/NSObject-Protocol.h>

@class NSObject, NSURLResponse, NWURLError, NWURLSessionResponseConsumerResumeInfo, NWURLSessionTask;
@protocol OS_dispatch_data;

@protocol NWURLSessionResponseConsumer <NSObject>
@property(readonly) long long countOfBytesReceived;
@property(readonly) NSURLResponse *response;
- (NWURLSessionResponseConsumerResumeInfo *)createResumeInfo;
- (void)task:(NWURLSessionTask *)arg1 deliverData:(NSObject<OS_dispatch_data> *)arg2 complete:(_Bool)arg3 error:(NWURLError *)arg4 completionHandler:(void (^)(NWURLError *))arg5;
- (void)task:(NWURLSessionTask *)arg1 deliverResponse:(NSURLResponse *)arg2 completionHandler:(void (^)(long long, NWURLError *))arg3;
@end
