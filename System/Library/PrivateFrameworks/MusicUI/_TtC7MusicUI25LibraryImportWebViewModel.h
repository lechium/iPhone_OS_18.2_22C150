//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, WKNavigationAction, WKWebView;

__attribute__((visibility("hidden")))
@interface _TtC7MusicUI25LibraryImportWebViewModel : NSObject
{
    MISSING_TYPE *_canGoBack;	// 0 = 0x0
    MISSING_TYPE *_canGoForward;	// 0 = 0x0
    MISSING_TYPE *_isSecure;	// 0 = 0x0
    MISSING_TYPE *_hostName;	// 0 = 0x0
    MISSING_TYPE *_isLoading;	// 0 = 0x0
    MISSING_TYPE *_isPresentingError;	// 0 = 0x0
    MISSING_TYPE *_isShowingAlert;	// 0 = 0x0
    MISSING_TYPE *_isPresentingAuthForm;	// 0 = 0x0
    MISSING_TYPE *webView;	// 0 = 0x0
    MISSING_TYPE *alertModel;	// 11776668 = 0xb3b29c
    MISSING_TYPE *dismiss;	// 86972 = 0x153bc
    MISSING_TYPE *callbackForActionType;	// 11776668 = 0xb3b29c
    MISSING_TYPE *authChallengeCompletion;	// 0 = 0x0
    MISSING_TYPE *authChallengeCredential;	// 0 = 0x0
    MISSING_TYPE *protectionSpaceHost;	// 0 = 0x0
    MISSING_TYPE *params;	// 0 = 0x0
    MISSING_TYPE *objectGraph;	// 0 = 0x0
    MISSING_TYPE *activeAuthSession;	// 0 = 0x0
    MISSING_TYPE *lastNavigation;	// 0 = 0x0
    MISSING_TYPE *lastVisitedBaseURLString;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000006154ff
- (id)init;	// IMP=0x00000000006154ca
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000619e2e
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006194e4
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;	// IMP=0x000000000061803e
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000617894
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000000617656
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000006174a3
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000616fad
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000616f92
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0000000000616e47
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;	// IMP=0x00000000006165f7

@end
