//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/UICollectionViewDragDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, _UIDragSessionProperties;
@protocol UIDragSession;

@protocol UICollectionViewDragDelegate_Private <UICollectionViewDragDelegate>

@optional
- (_UIDragSessionProperties *)_collectionView:(UICollectionView *)arg1 dragSessionPropertiesForSession:(id <UIDragSession>)arg2;
- (_Bool)_collectionView:(UICollectionView *)arg1 dragSessionSupportsSystemDrag:(id <UIDragSession>)arg2;
- (long long)_collectionView:(UICollectionView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 prefersFullSizePreviewsForDragSession:(id <UIDragSession>)arg2;
@end
