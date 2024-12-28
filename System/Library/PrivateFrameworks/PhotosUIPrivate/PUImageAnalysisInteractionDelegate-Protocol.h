//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PUImageAnalysisInteraction, UIView, UIViewController;

@protocol PUImageAnalysisInteractionDelegate
- (void)imageAnalysisInteractionSubjectInteractionInProgressDidChange:(PUImageAnalysisInteraction *)arg1;
- (_Bool)imageAnalysisInteractionShouldHighlightSubjectWhenAccessoryIsVisible:(PUImageAnalysisInteraction *)arg1;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(PUImageAnalysisInteraction *)arg1;
- (NSArray *)textsToHighlightForImageAnalysisInteraction:(PUImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionIsDrivingLivePhotoPlaybackDidChange:(PUImageAnalysisInteraction *)arg1;
- (void)showDetailsViewForImageAnalysisInteraction:(PUImageAnalysisInteraction *)arg1;
- (UIView *)contentViewForImageAnalysisInteraction:(PUImageAnalysisInteraction *)arg1;
- (_Bool)analysisInteractionAllowedForImageAnalysisInteraction:(PUImageAnalysisInteraction *)arg1;
@end
