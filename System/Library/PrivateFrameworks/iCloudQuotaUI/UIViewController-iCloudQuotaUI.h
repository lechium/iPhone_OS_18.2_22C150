//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@interface UIViewController (iCloudQuotaUI)
+ (void)setICQUIUpsellPrefferredPresentationSize:(struct CGSize)arg1;	// IMP=0x00300000000d9990
+ (struct CGSize)ICQUIUpsellPrefferredPresentationSize;	// IMP=0x00300000000d98c0
+ (id)makeLiftUIViewControllerForController:(id)arg1 withContent:(id)arg2 account:(id)arg3 presenter:(id)arg4 data:(id)arg5;	// IMP=0x00300000000e4e60
+ (id)makeLiftUIViewControllerForController:(id)arg1 withURL:(id)arg2 account:(id)arg3 presenter:(id)arg4 data:(id)arg5;	// IMP=0x00300000000e4c90
- (void)presentPreferredSizeWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d9770
- (id)topMostViewController;	// IMP=0x00100000000e32f0
- (void)addChildAndPinToEdgesWithChildViewController:(id)arg1;	// IMP=0x00100000000e2e50
@end
