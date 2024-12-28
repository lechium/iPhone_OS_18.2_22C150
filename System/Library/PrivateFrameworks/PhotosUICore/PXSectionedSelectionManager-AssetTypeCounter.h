//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXSectionedSelectionManager.h"

@class PXAssetSelectionTypeCounter;

@interface PXSectionedSelectionManager (AssetTypeCounter)
@property(readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
- (struct PXSimpleIndexPath)_moveSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;	// IMP=0x0030000000f3073a
- (struct PXSimpleIndexPath)_selectInitialItemForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f306ac
- (struct PXSimpleIndexPath)_selectInitialSectionForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f3061e
- (struct PXSimpleIndexPath)_initialItemIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x0030000000f30554
- (struct PXSimpleIndexPath)_initialSectionIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x0030000000f3048a
- (struct PXSimpleIndexPath)_moveItemSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f303b7
- (struct PXSimpleIndexPath)_moveSectionSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f302e4
- (struct PXSimpleIndexPath)moveSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f3023a
- (struct PXSimpleIndexPath)extendSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3;	// IMP=0x0030000000f3017c
- (struct PXSimpleIndexPath)extendSelectionToItemIndexPath:(struct PXSimpleIndexPath)arg1 withDelegate:(id)arg2;	// IMP=0x0030000000f30086
- (struct PXSimpleIndexPath)_extendSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 withDelegate:(id)arg4;	// IMP=0x0030000000f2fcc0
- (struct PXSimpleIndexPath)startingIndexPathForMoveInDirection:(unsigned long long)arg1;	// IMP=0x0030000000f2fb06
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1;	// IMP=0x00300000013934af
@end
