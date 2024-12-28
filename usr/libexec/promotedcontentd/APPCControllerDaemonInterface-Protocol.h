//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APClientInfo, APContext, NSArray, NSDictionary, NSUUID;

@protocol APPCControllerDaemonInterface
- (void)sendAndRankContent:(NSArray *)arg1 forContext:(APContext *)arg2 placement:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)preWarm:(NSDictionary *)arg1;
- (void)proxyURLWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)finishedWithRequestsForRequester:(NSUUID *)arg1;
- (void)requestPromotedContentOfTypes:(NSArray *)arg1 forRequester:(NSUUID *)arg2 forContext:(APContext *)arg3 withClientInfo:(APClientInfo *)arg4 deliverEntireBatch:(_Bool)arg5 completionHandler:(void (^)(void))arg6;
@end
