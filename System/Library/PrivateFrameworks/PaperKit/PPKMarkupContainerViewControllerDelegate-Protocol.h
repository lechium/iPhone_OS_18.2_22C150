//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, PPKMarkupContainerViewController;

@protocol PPKMarkupContainerViewControllerDelegate

@optional
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 contentFrameDidChange:(struct CGRect)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 openFormFilling:(_Bool)arg2;
- (_Bool)shouldAllowEditingContents:(PPKMarkupContainerViewController *)arg1;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 thumbnailViewDidCollapse:(_Bool)arg2;
- (void)markupContainerViewControllerAvailableAnalysisResultTypesDidChange:(PPKMarkupContainerViewController *)arg1;
- (void)markupContainerViewControllerActiveAnalysisInteractionTypesDidChange:(PPKMarkupContainerViewController *)arg1;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 wantsToEnterFullscreen:(_Bool)arg2;
- (_Bool)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 shouldOpenLink:(NSURL *)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 didDismissViewControllerWithAnimation:(_Bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 willPresentViewControllerWithAnimation:(_Bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 updateChromeWithAnimation:(_Bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 detectedFormInContent:(_Bool)arg2 withAutofill:(_Bool)arg3;
- (void)markupContainerViewControllerDidChangeContent:(PPKMarkupContainerViewController *)arg1 enablingMarkup:(_Bool)arg2;
@end

