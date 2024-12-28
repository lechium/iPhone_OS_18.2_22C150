//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMAStickerTarget-Protocol.h"

@class IMAAppPresenter, NSString, UIViewController;

@protocol IMAAppPresenterDelegate <IMAStickerTarget>
@property(readonly, nonatomic) UIViewController *dockPresentationViewController;

@optional
@property(readonly, nonatomic) struct CGSize expandedAppViewControllerSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

@property(readonly, nonatomic) _Bool expandedAppShouldDismissOnDragSuccess;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)appPresenterCardDidDismiss:(IMAAppPresenter *)arg1;
- (void)appPresenterDidDismissFullscreenModal:(IMAAppPresenter *)arg1;
- (void)dismissExpandedAppViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentExpandedAppViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1 type:(NSString *)arg2;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1;
@end
