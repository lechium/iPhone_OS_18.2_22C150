//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolveParameters : NSObject
{
    NSMutableIndexSet *_invalidatedIndexes;	// 8 = 0x8
    NSMutableDictionary *_invalidatedAuxillaryDict;	// 16 = 0x10
    _Bool _isFullResolve;	// 24 = 0x18
    struct CGPoint _scrollOffset;	// 32 = 0x20
    struct CGRect _visibleBounds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005a8b30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a8a7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a8906
- (id)init;	// IMP=0x00000000005a8322

@end
