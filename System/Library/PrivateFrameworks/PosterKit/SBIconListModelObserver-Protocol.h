//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class SBIcon, SBIconListModel;

@protocol SBIconListModelObserver <NSObject>

@optional
- (void)iconListDirectlyContainsNonDefaultSizeClassIconDidChange:(SBIconListModel *)arg1;
- (void)iconListGridSizeDidChange:(SBIconListModel *)arg1;
- (void)iconList:(SBIconListModel *)arg1 didInvalidateLayoutWithGridCellInfoOptions:(unsigned long long)arg2;
- (void)iconListIconStateDidDirty:(SBIconListModel *)arg1;
- (void)iconListHiddenDidChange:(SBIconListModel *)arg1;
- (void)iconListHiddenWillChange:(SBIconListModel *)arg1;
- (void)iconList:(SBIconListModel *)arg1 didChangeGridSizeClassOfIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didMoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)iconList:(SBIconListModel *)arg1 didAddIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 willRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 willAddIcon:(SBIcon *)arg2;
@end

