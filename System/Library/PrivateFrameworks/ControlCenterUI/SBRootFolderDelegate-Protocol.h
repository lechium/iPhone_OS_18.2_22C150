//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class NSArray, SBFolder, SBHIconGridSizeClassSet, SBIcon, SBIconListGridCellInfo, SBIconListModel, SBRootFolder;

@protocol SBRootFolderDelegate <NSObject>
- (_Bool)rootFolder:(SBRootFolder *)arg1 canBounceIcon:(SBIcon *)arg2;

@optional
- (SBHIconGridSizeClassSet *)allowedGridSizeClassesForTodayListForRootFolder:(SBRootFolder *)arg1;
- (SBHIconGridSizeClassSet *)allowedGridSizeClassesForDockForRootFolder:(SBRootFolder *)arg1;
- (unsigned long long)columnCountForTodayListForRootFolder:(SBRootFolder *)arg1;
- (unsigned long long)maxIconCountForDockForRootFolder:(SBRootFolder *)arg1;
- (void)rootFolder:(SBRootFolder *)arg1 wantsToDoPageHidingEducationWithCompletion:(void (^)(_Bool))arg2;
- (SBIcon *)rootFolder:(SBRootFolder *)arg1 shouldBounceIcon:(SBIcon *)arg2 afterInsertingIcons:(NSArray *)arg3 forIconList:(SBIconListModel *)arg4 inFolder:(SBFolder *)arg5;
- (_Bool)rootFolder:(SBRootFolder *)arg1 isGridLayoutValid:(SBIconListGridCellInfo *)arg2 forIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (_Bool)rootFolder:(SBRootFolder *)arg1 canAddIcon:(SBIcon *)arg2 toIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
@end

