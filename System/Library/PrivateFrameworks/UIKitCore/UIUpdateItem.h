//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject
{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;	// 8 = 0x8
    struct {
        unsigned int isSectionOperation:1;
        unsigned int headerFooterOnly:1;
    } _updateItemFlags;	// 16 = 0x10
    int _action;	// 20 = 0x14
    NSIndexPath *_indexPath;	// 24 = 0x18
    long long _animation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000166df75
@property(readonly, nonatomic) _Bool isDecomposedFromReload;
- (long long)compareIndexPathsForMoves:(id)arg1;	// IMP=0x000000000166dd66
- (long long)inverseCompareIndexPaths:(id)arg1;	// IMP=0x000000000166dd40
- (long long)compareIndexPaths:(id)arg1;	// IMP=0x000000000166dd1d
- (id)description;	// IMP=0x000000000166d9fd
- (id)_moveDestinationDescription;	// IMP=0x000000000166d9f0
@property(readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;

@end
