//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKBannerHandleRequest, PKBannerHandleState;

@protocol PKBannerService_Server
- (void)detachWithReply:(void (^)(NSError *))arg1;
- (void)displayWithReply:(void (^)(NSError *))arg1;
- (oneway void)updateState:(PKBannerHandleState *)arg1 withReply:(void (^)(NSError *))arg2;
- (oneway void)configureForRequest:(PKBannerHandleRequest *)arg1 withState:(PKBannerHandleState *)arg2 didStartReply:(void (^)(NSError *))arg3;
@end

