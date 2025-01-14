//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSUndoManager, WKDownload, _SFDownload, _SFWebView;

@protocol _SFWebViewDelegate <NSObject>

@optional
- (void)sfWebViewDidDismissFindOnPage:(_SFWebView *)arg1;
- (_Bool)sfWebViewCanFindNextOrPrevious:(_SFWebView *)arg1;
- (_Bool)sfWebViewShouldFillStringForFind:(_SFWebView *)arg1;
- (NSUndoManager *)overrideUndoManagerForSFWebView:(_SFWebView *)arg1;
- (_Bool)sfWebViewCanPromptForAccountSecurityRecommendation;
- (_SFDownload *)sfWebView:(_SFWebView *)arg1 didStartDownload:(WKDownload *)arg2;
- (void)sfWebViewDidEndFormControlInteraction:(_SFWebView *)arg1;
- (void)sfWebViewDidStartFormControlInteraction:(_SFWebView *)arg1;
- (void)sfWebViewDidBecomeFirstResponder:(_SFWebView *)arg1;
- (void)sfWebViewDidChangeSafeAreaInsets:(_SFWebView *)arg1;
@end

