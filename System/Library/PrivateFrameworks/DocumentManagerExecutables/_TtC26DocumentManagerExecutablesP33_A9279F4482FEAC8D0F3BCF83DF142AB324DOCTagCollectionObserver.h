//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject
{
    MISSING_TYPE *gatheringKeyPath;	// 8 = 0x8
    MISSING_TYPE *serialQueue;	// 24 = 0x18
    MISSING_TYPE *group;	// 32 = 0x20
    MISSING_TYPE *spotlightQueryTimeout;	// 0 = 0x0
    MISSING_TYPE *collection;	// 0 = 0x0
    MISSING_TYPE *finishedGathering;	// 0 = 0x0
    MISSING_TYPE *collectionObservationContext;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007a910
- (id)init;	// IMP=0x000000000007a8a0
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a5c0
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x000000000007a570
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;	// IMP=0x000000000007a4a0
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000007a450
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;	// IMP=0x000000000007a400
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000007b620
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007a2c0

@end
