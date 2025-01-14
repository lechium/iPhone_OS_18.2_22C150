//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BarcodeSupportUI/NSObject-Protocol.h>

@class BCSActionCoordinator, UIView, UIViewController;
@protocol BCSAction;

@protocol BCSActionCoordinatorDelegate <NSObject>
- (void)actionCoordinator:(BCSActionCoordinator *)arg1 didFinishPerformingAction:(id <BCSAction>)arg2;
- (UIView *)actionCoordinatorViewForContextMenu:(BCSActionCoordinator *)arg1;
- (UIViewController *)actionCoordinatorPresentingViewController:(BCSActionCoordinator *)arg1;
- (void)actionCoordinator:(BCSActionCoordinator *)arg1 willDismissViewController:(UIViewController *)arg2;
@end

