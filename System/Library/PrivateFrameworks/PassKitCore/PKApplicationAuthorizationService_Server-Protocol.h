//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplicationAuthorizationHandleRequest, PKRemoteAlertPresentationTarget;

@protocol PKApplicationAuthorizationService_Server
- (oneway void)detachWithReply:(void (^)(void))arg1;
- (oneway void)displayForRequest:(PKApplicationAuthorizationHandleRequest *)arg1 target:(PKRemoteAlertPresentationTarget *)arg2 withReply:(void (^)(void))arg3;
@end
