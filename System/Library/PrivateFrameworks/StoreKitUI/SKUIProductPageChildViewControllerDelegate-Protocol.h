//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIItem;
@protocol SKUIProductPageChildViewController;

@protocol SKUIProductPageChildViewControllerDelegate <NSObject>
- (struct CGPoint)topContentOffset;
- (void)productPageChildViewControllerDidLoad:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidScroll:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildOpenURL:(NSURL *)arg1 viewControllerBlock:(UIViewController * (^)(void))arg2;
- (void)productPageChildOpenItem:(SKUIItem *)arg1;
@end

