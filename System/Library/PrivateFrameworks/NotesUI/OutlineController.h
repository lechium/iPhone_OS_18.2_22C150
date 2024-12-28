//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICTTTextStorage, MISSING_TYPE, NSArray, NSAttributedString, NSSet, NSString;

@interface OutlineController : NSObject
{
    MISSING_TYPE *textStorage;	// 8 = 0x8
    MISSING_TYPE *_collapsedUUIDs;	// 16 = 0x10
    MISSING_TYPE *_interactedUUIDs;	// 24 = 0x18
    MISSING_TYPE *isAsynchronous;	// 32 = 0x20
    MISSING_TYPE *_index;	// 40 = 0x28
    MISSING_TYPE *isPerformingMerge;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_selectorDelayer;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_updateQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a6260
- (id)init;	// IMP=0x00000000001a6200
- (void)update;	// IMP=0x00000000001a56c0
- (void)mergingDidEndWithNotification:(id)arg1;	// IMP=0x00000000001a1a40
- (void)mergingWillBeginWithNotification:(id)arg1;	// IMP=0x00000000001a1a30
- (void)textStorageDidProcessEndEditingWithNotification:(id)arg1;	// IMP=0x00000000001a17f0
@property(nonatomic, readonly) NSString *debugDescription;
- (id)descendantsForUUID:(id)arg1;	// IMP=0x000000000019fa60
- (id)ancestorsForUUID:(id)arg1;	// IMP=0x000000000019f8e0
- (id)closestVisibleAncestorForUUID:(id)arg1;	// IMP=0x000000000019f6b0
- (struct _NSRange)descendantRangeForUUID:(id)arg1;	// IMP=0x000000000019f240
- (struct _NSRange)rangeForUUID:(id)arg1;	// IMP=0x000000000019eb10
- (_Bool)isUUIDHidden:(id)arg1;	// IMP=0x000000000019e590
- (void)resetCollapsibleSectionAffordanceUsages;	// IMP=0x000000000019e310
- (_Bool)toggleCollapsedAtRange:(struct _NSRange)arg1;	// IMP=0x000000000019e270
@property(nonatomic, readonly) NSAttributedString *visibleAttributedText;
@property(nonatomic, readonly) NSArray *rangesValuesContainingExpandedRanges;
@property(nonatomic, readonly) NSArray *rangesValuesContainingCollapsedRanges;
@property(nonatomic, readonly) NSArray *invisibleRangeValues;
@property(nonatomic, readonly) NSArray *visibleRangeValues;
@property(nonatomic, readonly) struct _NSRange visibleRange;
@property(nonatomic, readonly) long long collapsibleSectionAffordanceUsages;
- (void)collapsibleSectionAffordanceUsedForUUIDs:(id)arg1;	// IMP=0x000000000019c750
- (void)expandAll;	// IMP=0x000000000019c650
- (void)expandAncestorsOfRange:(struct _NSRange)arg1;	// IMP=0x000000000019c470
- (void)expandUUIDs:(id)arg1;	// IMP=0x000000000019be80
- (_Bool)canExpandAnyUUIDs:(id)arg1;	// IMP=0x000000000019bac0
- (void)collapseAll;	// IMP=0x000000000019b9f0
- (void)toggleUUIDCollapsed:(id)arg1;	// IMP=0x000000000019b790
- (void)collapseUUIDs:(id)arg1;	// IMP=0x000000000019b410
- (_Bool)isUUIDCollapsed:(id)arg1;	// IMP=0x000000000019aa90
- (_Bool)isUUIDCollapsible:(id)arg1;	// IMP=0x000000000019a9e0
- (_Bool)canCollapseAnyUUIDs:(id)arg1;	// IMP=0x000000000019a740
- (void)requestUpdate;	// IMP=0x0000000000199b40
- (id)initWithTextStorage:(id)arg1 collapsedUUIDs:(id)arg2 asynchronous:(_Bool)arg3;	// IMP=0x0000000000199a60
@property(nonatomic) _Bool isAsynchronous; // @synthesize isAsynchronous;
@property(nonatomic, copy) NSSet *interactedUUIDs;
@property(nonatomic, copy) NSSet *collapsedUUIDs;
@property(nonatomic, readonly) ICTTTextStorage *textStorage; // @synthesize textStorage;

@end
