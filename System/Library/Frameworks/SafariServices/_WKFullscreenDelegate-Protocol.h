//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class WKWebView;

@protocol _WKFullscreenDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 requestPresentingViewControllerWithCompletionHandler:(void (^)(UIViewController *, NSError *))arg2;
- (void)_webView:(WKWebView *)arg1 didFullscreenImageWithQuickLook:(struct CGSize)arg2;
- (void)_webViewDidExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillEnterElementFullscreen:(WKWebView *)arg1;
@end

