//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol NSFastEnumeration, PXContentSyndicationAssetFetchResultProviderChangeObserver, PXDisplayAssetCollection, PXDisplayAssetFetchResult;

@protocol PXContentSyndicationAssetFetchResultProvider <NSObject>
- (void)invalidateAssetFetchResultsInAssetCollections:(id <NSFastEnumeration>)arg1;
- (void)invalidateAllAssetFetchResults;
- (id <PXDisplayAssetFetchResult>)assetFetchResultForAssetCollection:(id <PXDisplayAssetCollection>)arg1;
- (void)unregisterChangeObserver:(id <PXContentSyndicationAssetFetchResultProviderChangeObserver>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)registerChangeObserver:(id <PXContentSyndicationAssetFetchResultProviderChangeObserver>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
@end
