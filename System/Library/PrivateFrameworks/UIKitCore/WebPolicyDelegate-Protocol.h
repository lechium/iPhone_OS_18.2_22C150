//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURLRequest, WebFrame, WebView;
@protocol WebPolicyDecisionListener;

@protocol WebPolicyDelegate <NSObject>

@optional
- (void)webView:(WebView *)arg1 unableToImplementPolicyWithError:(NSError *)arg2 frame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 decidePolicyForMIMEType:(NSString *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNewWindowAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 newFrameName:(NSString *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNavigationAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
@end

