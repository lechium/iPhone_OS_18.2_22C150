//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest;

@protocol _TtP27AppleMediaServicesUIDynamic24ClientConnectionProtocol_
- (void)handleWithEngagementRequest:(AMSEngagementRequest *)arg1 completion:(void (^)(AMSEngagementResult *, NSError *))arg2;
- (void)handleWithDialogRequest:(AMSDialogRequest *)arg1 completion:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleWithAuthenticateRequest:(AMSAuthenticateRequest *)arg1 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

