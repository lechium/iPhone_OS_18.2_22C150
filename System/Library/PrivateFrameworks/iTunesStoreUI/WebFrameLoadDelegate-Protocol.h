//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class JSContext, NSDate, NSError, NSString, NSURL, WebFrame, WebScriptObject, WebView;

@protocol WebFrameLoadDelegate <NSObject>

@optional
- (void)webView:(WebView *)arg1 didCreateJavaScriptContext:(JSContext *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 windowScriptObjectAvailable:(WebScriptObject *)arg2;
- (void)webView:(WebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 willCloseFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didCancelClientRedirectForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3 fireDate:(NSDate *)arg4 forFrame:(WebFrame *)arg5;
- (void)webView:(WebView *)arg1 didChangeLocationWithinPageForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFinishLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didReceiveTitle:(NSString *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailProvisionalLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didStartProvisionalLoadForFrame:(WebFrame *)arg2;
@end
