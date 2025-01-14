//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, _WKWebAuthenticationPanel;

@protocol _WKWebAuthenticationPanelDelegate <NSObject>

@optional
- (void)panel:(_WKWebAuthenticationPanel *)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(void (^)(long long))arg2;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 requestLAContextForUserVerificationWithCompletionHandler:(void (^)(LAContext *))arg2;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 selectAssertionResponse:(NSArray *)arg2 source:(long long)arg3 completionHandler:(void (^)(_WKWebAuthenticationAssertionResponse *))arg4;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 updateWebAuthenticationPanel:(long long)arg2;
@end

