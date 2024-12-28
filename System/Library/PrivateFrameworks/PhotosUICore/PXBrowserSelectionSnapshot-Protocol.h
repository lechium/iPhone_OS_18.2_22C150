//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray;
@protocol PXDisplayAsset;

@protocol PXBrowserSelectionSnapshot <NSObject>
@property(readonly, nonatomic) NSArray *modelObjects;
@property(readonly, nonatomic) long long estimatedModelObjectsCount;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, nonatomic) long long estimatedAssetCount;
- (long long)indexOfAssetReference:(id)arg1;
- (id)assetReferenceAtIndex:(long long)arg1;
- (id <PXDisplayAsset>)displayAssetAtIndex:(long long)arg1;
@end
