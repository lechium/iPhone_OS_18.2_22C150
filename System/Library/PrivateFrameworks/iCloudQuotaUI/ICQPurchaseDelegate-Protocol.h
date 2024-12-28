//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, ICQPurchase;

@protocol ICQPurchaseDelegate <NSObject>
- (_Bool)isLiftUIFlow;
- (void)handleEngagementRequest:(AMSEngagementRequest *)arg1 purchase:(ICQPurchase *)arg2 completion:(void (^)(AMSEngagementResult *, NSError *))arg3;
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 purchase:(ICQPurchase *)arg2 completion:(void (^)(AMSDialogResult *, NSError *))arg3;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 purchase:(ICQPurchase *)arg2 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg3;

@optional
- (void)stopActivityIndicator;
- (void)registerForDarwinNotifications;
- (void)enableCloudPhotoLibraryWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end
