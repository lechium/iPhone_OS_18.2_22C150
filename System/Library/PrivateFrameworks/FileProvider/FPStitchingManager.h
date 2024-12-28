//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FPStitchingManager : NSObject
{
    NSHashTable *_stitchingSessions;	// 8 = 0x8
    NSMapTable *_bouncedItems;	// 16 = 0x10
}

+ (id)parentIdNameKeyForItem:(id)arg1;	// IMP=0x00600000000e56c8
+ (id)sharedInstance;	// IMP=0x00600000000e52fc
- (void).cxx_destruct;	// IMP=0x00000000000e679a
- (id)stitchedItemsForParentID:(id)arg1;	// IMP=0x00000000000e6519
@property(readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
- (_Bool)cleanStitchedForItemID:(id)arg1 ignoreSession:(id)arg2;	// IMP=0x00000000000e5f25
@property(readonly, nonatomic) NSMutableArray *allDeletedIDs;
@property(readonly, nonatomic) NSArray *allPlaceholderReplacementsIDs;
@property(readonly, nonatomic) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
- (void)removeBouncedItemsWithIDs:(id)arg1;	// IMP=0x00000000000e553e
- (void)addBouncedItem:(id)arg1;	// IMP=0x00000000000e549c
- (void)registerStitchingSession:(id)arg1;	// IMP=0x00000000000e53eb
- (id)init;	// IMP=0x00000000000e5351

@end
