//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class LSAppLink, NSError, NSNumber, NSString, NSURL, SFBrowserRemoteViewController;

@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 setSwipeGestureEnabled:(_Bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 executeCustomActivityProxyID:(NSNumber *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 fetchActivityViewControllerInfoForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)remoteViewControllerDidLoadWebView:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didFinishInitialLoad:(_Bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerWillDismiss:(SFBrowserRemoteViewController *)arg1;

@optional
- (void)remoteViewControllerWillOpenCurrentPageInBrowser:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideShouldShowLinkPreviews:(_Bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didResolveRedirectionWithURL:(NSURL *)arg2 appLink:(LSAppLink *)arg3;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(_Bool)arg3 withError:(NSError *)arg4;
@end
