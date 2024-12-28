//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSDelegatePurchaseRequest, CPSAuthenticationRequest;

@protocol CPSAuthenticationServiceDaemonInterface <NSObject>
- (void)performAMSDelegatePurchaseWithRequest:(AMSDelegatePurchaseRequest *)arg1 isSandboxPurchase:(_Bool)arg2 completionHandler:(void (^)(AMSDelegatePurchaseResult *, NSError *))arg3;
- (void)fetchDaemonStatusWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)startAuthenticationSessionWithRequest:(CPSAuthenticationRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
