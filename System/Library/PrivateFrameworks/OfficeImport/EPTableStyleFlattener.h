//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDTable;

__attribute__((visibility("hidden")))
@interface EPTableStyleFlattener
{
    EDTable *mTable;	// 128 = 0x80
    unsigned long long mHeaderRowCount;	// 136 = 0x88
    unsigned long long mTotalsRowCount;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000003ad841
- (void)clearCache;	// IMP=0x000000000022efe2
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;	// IMP=0x000000000022c98c
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;	// IMP=0x000000000022d132
- (id)keysInTheOrderTheyShouldBeApplied;	// IMP=0x00000000001c1635
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;	// IMP=0x00000000003ad346
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;	// IMP=0x00000000003ad11f
- (id)newExtractedGlobalStyleElements:(id)arg1;	// IMP=0x00000000003ad007
- (id)styleFromObject:(id)arg1;	// IMP=0x000000000022c583
- (id)collectionFromWorksheet:(id)arg1;	// IMP=0x00000000001c1a8a
- (_Bool)isObjectSupported:(id)arg1;	// IMP=0x00000000001bd754
- (int)stripeOffset:(int)arg1 row:(_Bool)arg2;	// IMP=0x000000000022ef64

@end
