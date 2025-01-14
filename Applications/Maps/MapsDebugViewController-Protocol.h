//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol MapsDebugViewController, MapsDebugViewControllerDelegate, MapsDebugViewControllerNavigationDelegate;

@protocol MapsDebugViewController <NSObject>
+ (NSString *)navigationDestinationTitle;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(nonatomic) __weak id <MapsDebugViewControllerNavigationDelegate> navigationDelegate;
@property(nonatomic) __weak id <MapsDebugViewControllerDelegate> delegate;
- (void)willNavigateToSubsequentController:(UIViewController<MapsDebugViewController> *)arg1;
- (void)segueToViewController:(UIViewController<MapsDebugViewController> *)arg1;
@end

