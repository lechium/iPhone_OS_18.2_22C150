//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedIdentifierList, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPIdentifierListSectionProxy : NSObject
{
    NSString *_sectionIdentifier;	// 8 = 0x8
    MPSectionedIdentifierList *_sectionedIdentifierList;	// 16 = 0x10
    NSMutableArray *_mutableItemIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026e17b
@property(retain, nonatomic) NSMutableArray *mutableItemIdentifiers; // @synthesize mutableItemIdentifiers=_mutableItemIdentifiers;
@property(readonly, nonatomic) __weak MPSectionedIdentifierList *sectionedIdentifierList; // @synthesize sectionedIdentifierList=_sectionedIdentifierList;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void)applyChanges:(id)arg1 itemLookupBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000026dcad
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (void)updateItems:(id)arg1;	// IMP=0x000000000026db52
- (void)updateSection;	// IMP=0x000000000026da8c
- (void)removeItems:(id)arg1;	// IMP=0x000000000026d93a
- (void)moveItemToTail:(id)arg1;	// IMP=0x000000000026d826
- (void)moveItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x000000000026d5e2
- (void)moveItemToHead:(id)arg1;	// IMP=0x000000000026d4cc
- (void)insertItemsAtTail:(id)arg1;	// IMP=0x000000000026d37a
- (void)insertItems:(id)arg1 afterItem:(id)arg2;	// IMP=0x000000000026d123
- (void)insertItemsAtHead:(id)arg1;	// IMP=0x000000000026cf94
- (id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3;	// IMP=0x000000000026cd96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

