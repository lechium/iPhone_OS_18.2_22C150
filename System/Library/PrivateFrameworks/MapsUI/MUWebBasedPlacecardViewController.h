//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MUWebContentTraits, MUWebPlacecardBridge, NSLayoutConstraint, NSURL, WKWebView;
@protocol MUWebPlacecardBridgeDelegate;

__attribute__((visibility("hidden")))
@interface MUWebBasedPlacecardViewController : UIViewController
{
    MUWebPlacecardBridge *_bridge;	// 8 = 0x8
    double _defaultHeight;	// 16 = 0x10
    MUWebContentTraits *_webContentTraits;	// 24 = 0x18
    NSLayoutConstraint *_heightConstraint;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    id <MUWebPlacecardBridgeDelegate> _webBridgeDelegate;	// 48 = 0x30
    WKWebView *_webView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000cd958
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <MUWebPlacecardBridgeDelegate> webBridgeDelegate; // @synthesize webBridgeDelegate=_webBridgeDelegate;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)callMethod:(id)arg1 arguments:(id)arg2;	// IMP=0x00000000000cd8ec
- (void)viewDidLoad;	// IMP=0x00000000000cd3c2
- (id)initWithURL:(id)arg1 traits:(id)arg2;	// IMP=0x00000000000cd2ae

@end

