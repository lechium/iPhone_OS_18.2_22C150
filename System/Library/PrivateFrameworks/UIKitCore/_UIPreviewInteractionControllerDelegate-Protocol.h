//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, UIViewController, _UIPreviewInteractionController;
@protocol UICoordinateSpace;

@protocol _UIPreviewInteractionControllerDelegate <NSObject>
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewInteractionController:(_UIPreviewInteractionController *)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3 presentingViewController:(id *)arg4;

@optional
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 didDismissViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(UIView *)arg4;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(_UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
@end

