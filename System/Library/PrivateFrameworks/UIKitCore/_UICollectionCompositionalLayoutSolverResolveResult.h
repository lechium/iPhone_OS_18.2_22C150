//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject
{
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;	// 8 = 0x8
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;	// 16 = 0x10
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;	// 24 = 0x18
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;	// 32 = 0x20
    _Bool _sectionsWereRequeried;	// 40 = 0x28
    struct CGPoint _contentOffsetAdjustment;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005a3145
@property(nonatomic) _Bool sectionsWereRequeried; // @synthesize sectionsWereRequeried=_sectionsWereRequeried;
@property(nonatomic) struct CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
- (id)description;	// IMP=0x00000000005a30a3
- (id)init;	// IMP=0x00000000005a2be4

@end
