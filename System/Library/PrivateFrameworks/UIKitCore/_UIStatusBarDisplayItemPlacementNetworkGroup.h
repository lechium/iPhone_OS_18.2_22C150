//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementNetworkGroup
{
    _UIStatusBarDisplayItemPlacementCellularGroup *_cellularGroup;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacementWifiGroup *_wifiGroup;	// 16 = 0x10
}

+ (id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4;	// IMP=0x0060000001476747
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(_Bool)arg6 allowDualNetwork:(_Bool)arg7;	// IMP=0x0060000001476478
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(_Bool)arg5;	// IMP=0x0060000001476454
+ (id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(_Bool)arg3;	// IMP=0x0060000001475bae
- (void).cxx_destruct;	// IMP=0x0000000001476b96
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacementWifiGroup *wifiGroup; // @synthesize wifiGroup=_wifiGroup;
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacementCellularGroup *cellularGroup; // @synthesize cellularGroup=_cellularGroup;

@end
