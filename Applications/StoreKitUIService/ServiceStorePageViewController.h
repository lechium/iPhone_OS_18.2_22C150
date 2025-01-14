//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SKUIClientContext, SKUIStorePageViewController, SSURLBag;

@interface ServiceStorePageViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    _Bool _isEntitled;	// 16 = 0x10
    SKUIStorePageViewController *_storePageViewController;	// 24 = 0x18
    SSURLBag *_urlBag;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x002000000002cfa2
+ (id)_exportedInterface;	// IMP=0x001000000002cf82
- (void).cxx_destruct;	// IMP=0x002000000002da97
- (id)_storePageViewController;	// IMP=0x001000000002d9da
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000002d91b
- (id)_clientViewControllerProxy;	// IMP=0x001000000002d909
- (void)storePage:(id)arg1 showStorePageForURL:(id)arg2;	// IMP=0x001000000002d89c
- (void)storePage:(id)arg1 showProductPageForItem:(id)arg2;	// IMP=0x001000000002d7ef
- (void)loadPageWithURL:(id)arg1;	// IMP=0x001000000002d50a
- (void)loadPageWithURLBagKey:(id)arg1;	// IMP=0x001000000002d111
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000002d0bc
- (void)loadView;	// IMP=0x001000000002cfc2
- (void)dealloc;	// IMP=0x001000000002cf37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

