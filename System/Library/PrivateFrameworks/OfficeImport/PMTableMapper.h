//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawableStyle, CMTableGridInfo, OADOrientedBounds, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableMapper
{
    OADTable *mTable;	// 40 = 0x28
    CMDrawableStyle *mStyle;	// 48 = 0x30
    CMTableGridInfo *mGrid;	// 56 = 0x38
    OADOrientedBounds *mBounds;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000046bee3
- (unsigned long long)rowCount;	// IMP=0x00000000001f8fcd
- (id)tableBorderStyle;	// IMP=0x00000000001f907e
- (id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2;	// IMP=0x00000000001f96a9
- (id)defaultCellFillWithState:(id)arg1;	// IMP=0x000000000046be08
- (float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2;	// IMP=0x00000000001f7c8a
- (id)grid;	// IMP=0x000000000046bdf3
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001f76a5
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;	// IMP=0x00000000001f7572
- (id)cellStyle;	// IMP=0x000000000046bf36
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001f7ab6
- (void)mapTablePropertiesWithState:(id)arg1;	// IMP=0x00000000001f78ba

@end

