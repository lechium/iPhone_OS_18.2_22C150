//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/WKNavigationDelegate-Protocol.h>

@class NSArray, NSData, NSError, NSString, NSURL, NSURLAuthenticationChallenge, NSURLRequest, WKBackForwardListItem, WKDownload, WKFrameInfo, WKNavigation, WKNavigationAction, WKWebView, WKWebpagePreferences, _WKContentRuleListAction, _WKPageLoadTiming;
@protocol NSSecureCoding;

@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>

@optional
- (void)_webView:(WKWebView *)arg1 didGeneratePageLoadTiming:(_WKPageLoadTiming *)arg2;
- (void)_webView:(WKWebView *)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(NSString *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 willGoToBackForwardListItem:(WKBackForwardListItem *)arg2 inPageCache:(_Bool)arg3;
- (void)_webViewDidStopRequestingPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(NSData *)arg2;
- (void)_webView:(WKWebView *)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(NSString *)arg2 uti:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didPromptForStorageAccess:(NSString *)arg2 forSubFrameDomain:(NSString *)arg3 forQuirk:(_Bool)arg4;
- (void)_webView:(WKWebView *)arg1 didChangeLookalikeCharactersFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didFailLoadDueToNetworkConnectionIntegrityWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 didFinishLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 didFailLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 didCommitLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 didFailProvisionalLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 didStartProvisionalLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 contentRuleListWithIdentifier:(NSString *)arg2 performedAction:(_WKContentRuleListAction *)arg3 forURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 URL:(NSURL *)arg2 contentRuleListIdentifiers:(NSArray *)arg3 notifications:(NSArray *)arg4;
- (void)_webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 preferences:(WKWebpagePreferences *)arg3 userInfo:(id <NSSecureCoding>)arg4 decisionHandler:(void (^)(long long, WKWebpagePreferences *))arg5;
- (void)_webViewDidRemoveNavigationGestureSnapshot:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 willSnapshotBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewWillEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidBeginNavigationGesture:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 contextMenuDidCreateDownload:(WKDownload *)arg2;
- (void)_webView:(WKWebView *)arg1 didNegotiateModernTLSForURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 authenticationChallenge:(NSURLAuthenticationChallenge *)arg2 shouldAllowLegacyTLS:(void (^)(_Bool))arg3;
- (void)_webCryptoMasterKeyForWebView:(WKWebView *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (NSData *)_webCryptoMasterKeyForWebView:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeUnresponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeResponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidCrash:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(WKWebView *)arg1 navigationDidFinishDocumentLoad:(WKNavigation *)arg2;
- (void)_webViewDidCancelClientRedirect:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didFailProvisionalLoadInSubframe:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
@end

