//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VGVehicle;

@interface RoutePlanningVehicleCheckmarkRow
{
    VGVehicle *_vehicle;	// 8 = 0x8
}

+ (void)registerCellsInCollectionView:(id)arg1;	// IMP=0x00400000007c32e9
+ (id)reuseIdentifier;	// IMP=0x00100000007c2fa1
- (void).cxx_destruct;	// IMP=0x00200000007c337e
- (void)configureCollectionViewCell:(id)arg1;	// IMP=0x00100000007c336c
- (void)configureCell:(id)arg1;	// IMP=0x00100000007c32d7
- (id)cellForTableView:(id)arg1;	// IMP=0x00100000007c3206
- (void)_configureCell:(id)arg1;	// IMP=0x00100000007c2fab
- (id)value;	// IMP=0x00100000007c2f8c
- (id)initWithVehicle:(id)arg1;	// IMP=0x00100000007c2f1e

@end
