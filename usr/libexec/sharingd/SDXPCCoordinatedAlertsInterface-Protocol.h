//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFCoordinatedAlertRequest;

@protocol SDXPCCoordinatedAlertsInterface
- (void)coordinatedAlertsRequestCancel;
- (void)coordinatedAlertsRequestFinish;
- (void)coordinatedAlertsRequestStart:(SFCoordinatedAlertRequest *)arg1 completion:(void (^)(NSError *, _Bool, NSDictionary *))arg2;
@end
