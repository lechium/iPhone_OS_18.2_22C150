//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, WKNavigationAction, WKWebView;

@interface _TtCV12FinanceKitUIP33_A64F0A24CC9AF1F8A1FFE13B9BBB3DBE25BankConnectWebViewContent11Coordinator : NSObject
{
    MISSING_TYPE *parent;	// 0 = 0x0
    MISSING_TYPE *initialNavigation;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000220540
- (id)init;	// IMP=0x00000000002204e0
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;	// IMP=0x00000000002201a0
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000220110
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000220100
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000220090

@end
