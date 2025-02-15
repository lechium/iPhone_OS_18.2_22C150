//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface MapsUIDiffableDataSourceSectionSnapshotUpdateDifference : NSObject
{
    NSArray *_reloadedItems;	// 8 = 0x8
    NSArray *_insertedItems;	// 16 = 0x10
    MISSING_TYPE *_deletedItems;	// 24 = 0x18
    NSArray *_movedItems;	// 32 = 0x20
    NSArray *_expandedItems;	// 40 = 0x28
    NSArray *_collapsedItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000054e81d
@property(readonly, nonatomic) NSArray *collapsedItems; // @synthesize collapsedItems=_collapsedItems;
@property(readonly, nonatomic) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(readonly, nonatomic) NSArray *movedItems; // @synthesize movedItems=_movedItems;
@property(readonly, nonatomic) NSArray *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(readonly, nonatomic) NSArray *insertedItems; // @synthesize insertedItems=_insertedItems;
@property(readonly, nonatomic) NSArray *reloadedItems; // @synthesize reloadedItems=_reloadedItems;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithReloadedItems:(id)arg1 insertedItems:(id)arg2 deletedItems:(id)arg3 movedItems:(id)arg4 expandedItems:(id)arg5 collapsedItems:(id)arg6;	// IMP=0x001000000054e5fe

@end

