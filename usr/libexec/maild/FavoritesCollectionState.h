//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FavoritesCollectionState : NSObject
{
    _Bool _editing;	// 8 = 0x8
    NSArray *_visibleItems;	// 16 = 0x10
    NSArray *_selectedItems;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    NSArray *_expandedItems;	// 40 = 0x28
    NSDictionary *_expandedItemBySyncKey;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
}

+ (id)displayOrder;	// IMP=0x0020000000020121
+ (id)log;	// IMP=0x001000000001f58f
- (void).cxx_destruct;	// IMP=0x0020000000022094
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *expandedItemBySyncKey; // @synthesize expandedItemBySyncKey=_expandedItemBySyncKey;
@property(retain, nonatomic) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (unsigned long long)countOfVisibleItems;	// IMP=0x0010000000021fcb
- (void)invalidateVisibleItems;	// IMP=0x0010000000021d87
@property(readonly, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(readonly, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (id)orderedAccountIds;	// IMP=0x0010000000021817
- (id)dictionaryRepresentations;	// IMP=0x001000000002138a
- (id)removeExpandedItem:(id)arg1;	// IMP=0x00100000000210be
- (id)removeItem:(id)arg1;	// IMP=0x0010000000021009
- (void)_addAccountsCollectionVisibleItemsToArray:(id)arg1;	// IMP=0x0010000000020c29
- (void)_addMailboxCollectionVisibleItemsToArray:(id)arg1;	// IMP=0x0010000000020a34
- (void)_addVisibleItem:(id)arg1 toArray:(id)arg2;	// IMP=0x00100000000208aa
- (void)_addSubitems:(id)arg1 toArray:(id)arg2;	// IMP=0x00100000000206ff
- (id)removeItemWithSyncKey:(id)arg1;	// IMP=0x0010000000020641
- (id)expandedItemWithSyncKey:(id)arg1;	// IMP=0x00100000000205a9
- (id)itemWithSyncKey:(id)arg1;	// IMP=0x0010000000020421
- (long long)_indexForNewItem:(id)arg1;	// IMP=0x00100000000201ff
- (id)addOrUpdateExpandedItem:(id)arg1 didAdd:(out _Bool *)arg2 didReplace:(out _Bool *)arg3;	// IMP=0x001000000001fcf1
- (id)addOrUpdateItem:(id)arg1 didAdd:(out _Bool *)arg2 didReplace:(out _Bool *)arg3;	// IMP=0x001000000001fb15
- (_Bool)addExpandedItem:(id)arg1;	// IMP=0x001000000001f85f
- (_Bool)addItem:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x001000000001f76b
- (_Bool)isAccountsCollection;	// IMP=0x001000000001f75d
- (_Bool)isMailboxesCollection;	// IMP=0x001000000001f74f
- (id)mutableExpandedItemBySyncKey;	// IMP=0x001000000001f741
- (id)mutableExpandedItems;	// IMP=0x001000000001f733
- (id)mutableItems;	// IMP=0x001000000001f725
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x001000000001f66c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

