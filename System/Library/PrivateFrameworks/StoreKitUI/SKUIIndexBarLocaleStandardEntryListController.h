//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElementStyle, NSSet, SKUIIndexBarEntryListViewElement;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarLocaleStandardEntryListController
{
    SKUIIndexBarEntryListViewElement *_entryListViewElement;	// 8 = 0x8
    NSSet *_requiredVisibilitySet;	// 16 = 0x10
    IKViewElementStyle *_style;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a7c79
- (void)reloadViewElementData;	// IMP=0x00000000002a7bd2
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;	// IMP=0x00000000002a7a56
- (id)entryDescriptorAtIndex:(long long)arg1;	// IMP=0x00000000002a788c
- (long long)numberOfEntryDescriptors;	// IMP=0x00000000002a7817
- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;	// IMP=0x00000000002a7394

@end
