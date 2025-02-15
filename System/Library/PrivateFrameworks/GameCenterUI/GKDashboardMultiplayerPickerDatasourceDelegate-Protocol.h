//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKDashboardMultiplayerPickerDataSource, NSArray, UICollectionView, UIMenu, _TtC12GameCenterUI22GKSuggestedPlayerGroup;

@protocol GKDashboardMultiplayerPickerDatasourceDelegate
- (void)playerGroupDidExpandInPlace;
- (UICollectionView *)pickerCollectionView;
- (void)highlightAlreadySelectedPlayers:(NSArray *)arg1 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg2;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didDeselectPlayers:(NSArray *)arg2 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg3;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didSelectPlayers:(NSArray *)arg2 inGroup:(_TtC12GameCenterUI22GKSuggestedPlayerGroup *)arg3;
- (UIMenu *)createSortPickerMenu;
- (void)pickerDatasourceDidSelectAddFriend:(GKDashboardMultiplayerPickerDataSource *)arg1;
- (void)pickerDatasource:(GKDashboardMultiplayerPickerDataSource *)arg1 didPickPlayers:(NSArray *)arg2;
@end

