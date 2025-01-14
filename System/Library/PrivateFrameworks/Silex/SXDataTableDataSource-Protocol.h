//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXDataTableBorder, SXDataTableBorderSides, UIColor;

@protocol SXDataTableDataSource <NSObject>
- (SXDataTableBorder *)columnDividerAtIndex:(unsigned long long)arg1;
- (SXDataTableBorder *)rowDividerAtIndex:(unsigned long long)arg1;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (CDStruct_d2b197d1)paddingForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (SXDataTableBorderSides *)cellBorderForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (double)heightForCellndexPath:(CDStruct_4bcfbbae)arg1 forWidth:(double)arg2;
- (double)minimumWidthForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (double)heightForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (double)widthForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (UIColor *)backgroundColorForCellAtIndexPath:(CDStruct_4bcfbbae)arg1;
- (UIColor *)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (UIColor *)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (SXDataTableBorderSides *)tableBorder;
- (unsigned long long)dataOrientation;
@end

