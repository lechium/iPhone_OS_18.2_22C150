//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PUHorizontalCollectionViewLayoutDelegate-Protocol.h>

@class NSIndexPath, PUSelectableAssetCollectionViewLayout, UICollectionView;

@protocol PUSelectableAssetCollectionViewLayoutDelegate <PUHorizontalCollectionViewLayoutDelegate>
- (struct CGRect)layout:(PUSelectableAssetCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(NSIndexPath *)arg4;
@end

