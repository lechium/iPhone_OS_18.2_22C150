//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, REElement, REElementDataSourceController;

@protocol REElementDataSourceControllerDelegate <NSObject>
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 performBatchUpdates:(void (^)(void))arg2;
- (_Bool)elementDataSourceController:(REElementDataSourceController *)arg1 isElementVisible:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRefreshElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didReloadElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRemoveElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didAddElement:(REElement *)arg2 toSection:(NSString *)arg3;
@end
