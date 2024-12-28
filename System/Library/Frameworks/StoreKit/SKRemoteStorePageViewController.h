//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, SKStorePageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController
{
    SKStorePageViewController *_storePageViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x001000000003c49b
+ (id)exportedInterface;	// IMP=0x001000000003c47b
- (void).cxx_destruct;	// IMP=0x000000000003c4e8
@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;
- (void)showProductPageWithItemIdentifier:(id)arg1;	// IMP=0x000000000003c412
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000003c387

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
