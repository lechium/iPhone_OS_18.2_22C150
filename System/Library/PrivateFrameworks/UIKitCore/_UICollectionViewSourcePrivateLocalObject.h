//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSourcePrivateLocalObject : NSObject
{
    NSIndexPath *_indexPath;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000074a335
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithIndexPath:(id)arg1 collectionView:(id)arg2;	// IMP=0x000000000074a259

@end

