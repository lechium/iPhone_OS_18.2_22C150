//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSelectionController : NSObject
{
    NSMutableSet *_selectedIndexPaths;	// 8 = 0x8
    NSMutableSet *_highlightedIndexPaths;	// 16 = 0x10
    NSMutableSet *_deselectionTransitionIndexPaths;	// 24 = 0x18
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;	// 32 = 0x20
    _Bool _allowsMultipleSelection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000151c327
- (id)init;	// IMP=0x000000000151b133

@end
