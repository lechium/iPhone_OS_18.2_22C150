//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UINavigationBarAppearance, UINavigationItem, UISearchController, _UINavigationBarPalette;
@protocol UIPopoverPresentationControllerSourceItem;

@protocol _UINavigationItemChangeObserver <NSObject>
- (void)navigationItemUpdatedBottomPalette:(UINavigationItem *)arg1 oldPalette:(_UINavigationBarPalette *)arg2;
- (void)navigationItemUpdatedSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (void)navigationItemUpdatedPromptContent:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedCanvasView:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedScrollEdgeProgress:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedBackgroundAppearance:(UINavigationItem *)arg1;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(UINavigationItem *)arg1;
- (void)navigationItem:(UINavigationItem *)arg1 appearance:(UINavigationBarAppearance *)arg2 categoriesChanged:(long long)arg3;
- (void)navigationItemUpdatedLargeTitleContent:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedBackButtonContent:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedContentLayout:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedTitleContent:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (_Bool)navigationItemIsBackItem:(UINavigationItem *)arg1;
- (_Bool)navigationItemIsTopItem:(UINavigationItem *)arg1;

@optional
- (void)navigationItemUpdatedNavigationBarVisibility:(UINavigationItem *)arg1;
- (void)navigationItem:(UINavigationItem *)arg1 updatedPalettePart:(long long)arg2 oldPalette:(_UINavigationBarPalette *)arg3;
- (_Bool)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(UINavigationItem *)arg1;
- (id <UIPopoverPresentationControllerSourceItem>)presentationSourceForContent:(long long)arg1 navigationItem:(UINavigationItem *)arg2;
- (void)navigationItemUpdatedAdditionalOverflowItems:(UINavigationItem *)arg1;
- (void)navigationItemUpdatedCenterBarButtonItems:(UINavigationItem *)arg1 animated:(_Bool)arg2;
@end
