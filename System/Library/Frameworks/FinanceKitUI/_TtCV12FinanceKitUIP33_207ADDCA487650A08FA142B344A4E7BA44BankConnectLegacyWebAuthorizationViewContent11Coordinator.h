//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, WKNavigationAction, WKWebView;

@interface _TtCV12FinanceKitUIP33_207ADDCA487650A08FA142B344A4E7BA44BankConnectLegacyWebAuthorizationViewContent11Coordinator : NSObject
{
    MISSING_TYPE *parent;	// 8 = 0x8
    MISSING_TYPE *initialNavigation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001443e0
- (id)init;	// IMP=0x0000000000144380
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;	// IMP=0x0000000000144090
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000143db0
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000143d80
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000143c50

@end

