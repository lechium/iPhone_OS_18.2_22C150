//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXAssetLoader/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol AXAssetsServiceInterface <NSObject>
- (void)runFirstUnlockTasks;
- (void)runFirstBootTasks:(_Bool)arg1;
- (void)invokeSimpleTaskById:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (void)updateAssetForAssetType:(NSString *)arg1;
- (void)refreshAssetCatalogForAssetType:(NSString *)arg1 withOverrideTimeout:(NSNumber *)arg2 forceCatalogRefresh:(_Bool)arg3;
@end

