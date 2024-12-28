//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSArray, SBIcon, SBIconListGridCellInfo, SBIconListModel;

@protocol SBIconListModelDelegate <NSObject>

@optional
- (SBIcon *)iconListModel:(SBIconListModel *)arg1 shouldBounceIcon:(SBIcon *)arg2 afterInsertingIcons:(NSArray *)arg3;
- (_Bool)iconListModel:(SBIconListModel *)arg1 isGridLayoutValid:(SBIconListGridCellInfo *)arg2;
- (_Bool)iconListModel:(SBIconListModel *)arg1 isAllowedToContainIcon:(SBIcon *)arg2;
@end
