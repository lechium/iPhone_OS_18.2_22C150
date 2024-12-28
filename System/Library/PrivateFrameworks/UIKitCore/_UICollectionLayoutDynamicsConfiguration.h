//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutDynamicsConfiguration : NSObject
{
    NSMutableArray *_dirtyItems;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSMutableDictionary *_behaviorDict;	// 24 = 0x18
    struct CGRect _previousVisibleBounds;	// 32 = 0x20
    struct CGRect _currentVisibleBounds;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005a7272
@property(retain, nonatomic) NSMutableDictionary *behaviorDict; // @synthesize behaviorDict=_behaviorDict;
@property(nonatomic) struct CGRect currentVisibleBounds; // @synthesize currentVisibleBounds=_currentVisibleBounds;
@property(nonatomic) struct CGRect previousVisibleBounds; // @synthesize previousVisibleBounds=_previousVisibleBounds;
- (id)_dirtyItems;	// IMP=0x00000000005a71ed
- (void)_reset;	// IMP=0x00000000005a717d
- (void)_setBehaviors:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000005a7075
@property(retain, nonatomic) NSArray *dynamicItems;
- (void)setBehaviors:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000005a6f91
- (id)behaviorsForItem:(id)arg1;	// IMP=0x00000000005a6e73
- (id)init;	// IMP=0x00000000005a6dfe

@end
