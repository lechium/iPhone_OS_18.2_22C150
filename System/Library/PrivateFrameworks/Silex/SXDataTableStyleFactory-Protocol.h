//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXDataTableCellStyle, SXDataTableColumnStyle, SXDataTableRowStyle, SXDataTableStyle;

@protocol SXDataTableStyleFactory <NSObject>
- (SXDataTableCellStyle *)cellStyleForIndexPath:(CDStruct_4bcfbbae)arg1;
- (SXDataTableColumnStyle *)columnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)rowStyleForRowIndex:(unsigned long long)arg1;
- (SXDataTableCellStyle *)headerCellStyleForIndexPath:(CDStruct_4bcfbbae)arg1;
- (SXDataTableColumnStyle *)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (SXDataTableStyle *)dataTableStyle;
@end

