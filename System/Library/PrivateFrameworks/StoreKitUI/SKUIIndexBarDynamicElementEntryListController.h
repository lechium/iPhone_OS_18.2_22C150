//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryListViewElement, SKUIIndexBarEntryViewElement, SKUIViewElement;
@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarDynamicElementEntryListController
{
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;	// 8 = 0x8
    id <SKUIEntityProviding> _entityProvider;	// 16 = 0x10
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;	// 24 = 0x18
    SKUIViewElement *_templateElement;	// 32 = 0x20
    SKUIIndexBarEntryListViewElement *_entryListViewElement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a7aa9
@property(readonly, nonatomic) SKUIIndexBarEntryListViewElement *entryListViewElement; // @synthesize entryListViewElement=_entryListViewElement;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;	// IMP=0x00000000000a7985
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;	// IMP=0x00000000000a790f
- (void)setRootTargetViewElement:(id)arg1;	// IMP=0x00000000000a774b
- (id)rootTargetIndexBarEntryID;	// IMP=0x00000000000a772e
- (void)reloadViewElementData;	// IMP=0x00000000000a75f8
- (long long)numberOfEntryDescriptors;	// IMP=0x00000000000a7562
- (_Bool)needsRootTargetViewElement;	// IMP=0x00000000000a755a
- (_Bool)hidesIndexBar;	// IMP=0x00000000000a74f0
- (id)entryDescriptorAtIndex:(long long)arg1;	// IMP=0x00000000000a744e
- (void)dealloc;	// IMP=0x00000000000a73c4
- (id)initWithEntryListViewElement:(id)arg1;	// IMP=0x00000000000a7313

@end
