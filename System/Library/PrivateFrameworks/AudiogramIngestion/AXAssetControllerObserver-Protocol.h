//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudiogramIngestion/NSObject-Protocol.h>

@class AXAsset, AXAssetController, AXAssetPolicy, NSArray, NSError;

@protocol AXAssetControllerObserver <NSObject>

@optional
- (void)assetController:(AXAssetController *)arg1 didUpdateCatalogForPolicy:(AXAssetPolicy *)arg2 wasSuccessful:(_Bool)arg3 error:(NSError *)arg4;
- (void)assetController:(AXAssetController *)arg1 willUpdateCatalogForPolicy:(AXAssetPolicy *)arg2;
- (void)assetController:(AXAssetController *)arg1 didFinishPurgingAssets:(NSArray *)arg2 wasSuccessful:(_Bool)arg3 error:(NSError *)arg4;
- (void)assetController:(AXAssetController *)arg1 didFinishDownloadingAsset:(AXAsset *)arg2 wasSuccessful:(_Bool)arg3 error:(NSError *)arg4 hasRemainingDownloads:(_Bool)arg5;
- (void)assetController:(AXAssetController *)arg1 asset:(AXAsset *)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(AXAssetController *)arg1 didFinishRefreshingAssets:(NSArray *)arg2 wasSuccessful:(_Bool)arg3 error:(NSError *)arg4;
@end

