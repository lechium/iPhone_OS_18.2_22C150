//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UICollectionLayoutItemSolver;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionEstimatedSolutionBookmark : NSObject
{
    _UICollectionLayoutItemSolver *_solution;	// 8 = 0x8
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;	// 16 = 0x10
    struct _NSRange _itemRange;	// 24 = 0x18
    struct CGRect _solutionFrame;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005bcac0
- (id)description;	// IMP=0x00000000005bc9f2

@end
