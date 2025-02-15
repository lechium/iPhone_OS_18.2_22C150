//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SUUIClientContext, SUUICountdownComponent, SUUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SUUICountdownViewController : UIViewController
{
    SUUIResourceLoader *_artworkLoader;	// 8 = 0x8
    SUUICountdownComponent *_countdownComponent;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f3072
@property(readonly, nonatomic) SUUICountdownComponent *countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) SUUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000f2fc2
- (void)loadView;	// IMP=0x00000000000f2f2a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000f2ec0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f2d1b
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;	// IMP=0x00000000000f2c75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

