//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, RouteStepItem, RouteStepListDataSource;

@protocol RouteStepListDataSourceDelegate <NSObject>
- (Class)cellClassForItemType:(unsigned long long)arg1;
- (void)reloadStepIndices:(NSIndexSet *)arg1 forDataSource:(RouteStepListDataSource *)arg2;
- (void)reloadUIForDataSource:(RouteStepListDataSource *)arg1;
- (void)reloadDataSource:(RouteStepListDataSource *)arg1;

@optional
- (void)customizeItem:(RouteStepItem *)arg1 forDataSource:(RouteStepListDataSource *)arg2;
@end

