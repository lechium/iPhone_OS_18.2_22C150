//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSBehavior, CSCoverSheetViewController, FBSDisplayLayout;

@protocol CSCoverSheetViewControllerObserver <NSObject>

@optional
- (void)coverSheetViewControllerDidDismissSearch:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidPresentSearch:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidSettleOnPage:(CSCoverSheetViewController *)arg1 mainPage:(_Bool)arg2;
- (void)coverSheetViewControllerDidObscureWallpaper:(CSCoverSheetViewController *)arg1 obscured:(_Bool)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didUpdateVisibleNotificationCount:(unsigned long long)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didUpdateLayout:(FBSDisplayLayout *)arg2;
- (void)coverSheetViewControllerDidUpdateAudioCategoriesDisablingVolumeHUD:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerActivityItemsMayHaveChanged:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidAddNewSceneHostEnvironment:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerWillPresentPosterSwitcher:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidPresentModalView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didChangeActiveBehavior:(CSBehavior *)arg2;
@end

