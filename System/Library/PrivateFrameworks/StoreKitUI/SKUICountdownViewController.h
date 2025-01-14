//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SKUIClientContext, SKUICountdownComponent, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUICountdownViewController : UIViewController
{
    SKUIResourceLoader *_artworkLoader;	// 8 = 0x8
    SKUICountdownComponent *_countdownComponent;	// 16 = 0x10
    SKUIClientContext *_clientContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003adbe6
@property(readonly, nonatomic) SKUICountdownComponent *countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000003adb36
- (void)loadView;	// IMP=0x00000000003ada9e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003ada34
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003ad88f
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;	// IMP=0x00000000003ad7a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

