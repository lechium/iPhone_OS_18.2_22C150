//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class BookmarksBarView, BookmarksNavigationController;
@protocol TabGroupProvider;

@protocol BookmarksBarViewDelegate <NSObject>
@property(nonatomic, getter=isPrivateBrowsingEnabled) _Bool privateBrowsingEnabled;

@optional
@property(readonly, nonatomic) id <TabGroupProvider> tabGroupProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TabGroupProvider>",?,R,N

- (void)bookmarksBarView:(BookmarksBarView *)arg1 bookmarksNavigationControllerViewDidDisappear:(BookmarksNavigationController *)arg2;
- (void)bookmarksBarView:(BookmarksBarView *)arg1 bookmarksNavigationControllerViewDidAppear:(BookmarksNavigationController *)arg2;
@end

