//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSPurchaseSIWA;
@protocol PaymentSheetDelegate;

@protocol SKDialogProtocol <NSObject>
- (void)handlePurchase:(AMSPurchaseSIWA *)arg1 paymentSheetDelegate:(id <PaymentSheetDelegate>)arg2 resultHandler:(void (^)(AMSPurchaseSIWAResult *, NSError *))arg3;
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 resultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 resultHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;

@optional
- (void)handleEngagementRequest:(AMSEngagementRequest *)arg1 resultHandler:(void (^)(AMSEngagementResult *, NSError *))arg2;
@end
