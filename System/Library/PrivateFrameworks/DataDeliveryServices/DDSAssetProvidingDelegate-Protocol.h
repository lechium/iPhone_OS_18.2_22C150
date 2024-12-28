//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssertion, DDSAsset, NSError, NSSet, NSString;

@protocol DDSAssetProvidingDelegate <NSObject>
- (void)didCompleteDownloadForAssertions:(NSSet *)arg1 error:(NSError *)arg2;
- (void)didCompleteDownloadForAssertion:(DDSAssertion *)arg1 error:(NSError *)arg2;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(DDSAsset *)arg2;
- (void)didUpdateCatalogWithAssetType:(NSString *)arg1 error:(NSError *)arg2;
- (void)didBeginUpdateCatalog;
@end
