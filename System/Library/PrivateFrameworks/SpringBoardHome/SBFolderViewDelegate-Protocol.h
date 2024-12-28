//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>
#import <SpringBoardHome/SBFolderViewDragDelegate-Protocol.h>

@class NSString, SBFolderView, SBIconListView, UIColor, UIPinchGestureRecognizer, UITextField;
@protocol SBFolderViewDragDelegate;

@protocol SBFolderViewDelegate <SBFolderViewDragDelegate, NSObject>
- (void)folderView:(SBFolderView *)arg1 didRemoveIconListView:(SBIconListView *)arg2;
- (void)folderView:(SBFolderView *)arg1 didAddIconListView:(SBIconListView *)arg2;
- (void)folderViewDidChangeOrientation:(SBFolderView *)arg1;
- (void)folderViewShouldEndEditing:(SBFolderView *)arg1;
- (void)folderViewShouldBeginEditing:(SBFolderView *)arg1;
- (void)folderViewShouldClose:(SBFolderView *)arg1 withPinchGesture:(UIPinchGestureRecognizer *)arg2;
- (void)folderView:(SBFolderView *)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidEndScrolling:(SBFolderView *)arg1;
- (void)folderViewDidScroll:(SBFolderView *)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(SBFolderView *)arg1;
- (void)folderViewWillBeginScrolling:(SBFolderView *)arg1;
- (void)folderView:(SBFolderView *)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(SBFolderView *)arg1 currentPageIndexWillChange:(long long)arg2;
- (_Bool)folderView:(SBFolderView *)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (NSString *)iconLocationForFolderView:(SBFolderView *)arg1;
- (Class)iconListViewClassForFolderView:(SBFolderView *)arg1;

@optional
- (id <SBFolderViewDragDelegate>)draggingDelegateForFolderView:(SBFolderView *)arg1;
- (void)folderView:(SBFolderView *)arg1 didEndEditingTitle:(UITextField *)arg2;
- (void)folderView:(SBFolderView *)arg1 didBeginEditingTitle:(UITextField *)arg2;
- (UIColor *)folderView:(SBFolderView *)arg1 accessibilityTintColorForRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(SBFolderView *)arg1;
- (double)minimumHomeScreenScaleForFolderView:(SBFolderView *)arg1;
@end
