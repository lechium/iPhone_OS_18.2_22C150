//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/UISheetPresentationControllerDelegatePrivate-Protocol.h>

@class UIView, _UISheetPresentationController;

@protocol _UISheetPresentationControllerDelegate <UISheetPresentationControllerDelegatePrivate>

@optional
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(_UISheetPresentationController *)arg1;
- (void)_sheetPresentationControllerDidInvalidateDetentValues:(_UISheetPresentationController *)arg1;
- (UIView *)_sheetPresentationControllerViewForTouchContinuation:(_UISheetPresentationController *)arg1;
- (void)_sheetPresentationController:(_UISheetPresentationController *)arg1 didChangeIndexOfCurrentDetent:(long long)arg2;
@end
