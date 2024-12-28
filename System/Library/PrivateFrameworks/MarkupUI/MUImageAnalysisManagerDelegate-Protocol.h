//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/NSObject-Protocol.h>

@class NSDictionary, UIImage, UIView, UIViewController, VKCImageAnalysisInteraction;

@protocol MUImageAnalysisManagerDelegate <NSObject>
@property(readonly, nonatomic) UIImage *imageForAnalysis;
@property(readonly, nonatomic) UIView *imageAnalysisView;

@optional
@property(readonly, nonatomic) NSDictionary *clientPreviewOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N

- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(_Bool)arg1;
@end
