//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PHAsset, PHAssetCollection;

@protocol PXNavigableAssetContainerViewController <NSObject>
- (void)navigateToBottomAnimated:(_Bool)arg1;
- (void)navigateToRevealPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(_Bool)arg3;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 refetchIfNeeded:(_Bool)arg3 animated:(_Bool)arg4;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(_Bool)arg3;
@end

