//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class SBIconListView, SBIconView;

@protocol SBIconListLayoutObserver <NSObject>

@optional
- (void)iconListViewDidChangeListLayoutProvider:(SBIconListView *)arg1;
- (void)iconListViewDidChangeNumberOfPlaceholdersOrLayoutHiddenIcons:(SBIconListView *)arg1;
- (void)iconListViewDidChangeBoundsSize:(SBIconListView *)arg1;
- (void)iconListView:(SBIconListView *)arg1 didRemoveIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 didAddIconView:(SBIconView *)arg2;
@end

