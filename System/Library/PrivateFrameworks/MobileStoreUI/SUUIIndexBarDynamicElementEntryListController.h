//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIDynamicPageSectionIndexMapper, SUUIIndexBarEntryListViewElement, SUUIIndexBarEntryViewElement, SUUIViewElement;
@protocol SUUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SUUIIndexBarDynamicElementEntryListController
{
    SUUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;	// 8 = 0x8
    id <SUUIEntityProviding> _entityProvider;	// 16 = 0x10
    SUUIIndexBarEntryViewElement *_indexBarEntryViewElement;	// 24 = 0x18
    SUUIViewElement *_templateElement;	// 32 = 0x20
    SUUIIndexBarEntryListViewElement *_entryListViewElement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012f0dc
@property(readonly, nonatomic) SUUIIndexBarEntryListViewElement *entryListViewElement; // @synthesize entryListViewElement=_entryListViewElement;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;	// IMP=0x000000000012efb8
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;	// IMP=0x000000000012ef42
- (void)setRootTargetViewElement:(id)arg1;	// IMP=0x000000000012ed7e
- (id)rootTargetIndexBarEntryID;	// IMP=0x000000000012ed61
- (void)reloadViewElementData;	// IMP=0x000000000012ec2b
- (long long)numberOfEntryDescriptors;	// IMP=0x000000000012eb95
- (_Bool)needsRootTargetViewElement;	// IMP=0x000000000012eb8d
- (_Bool)hidesIndexBar;	// IMP=0x000000000012eb23
- (id)entryDescriptorAtIndex:(long long)arg1;	// IMP=0x000000000012ea81
- (void)dealloc;	// IMP=0x000000000012e9f7
- (id)initWithEntryListViewElement:(id)arg1;	// IMP=0x000000000012e989

@end
