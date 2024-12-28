//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSSet, UITab, _UITabModel;

__attribute__((visibility("hidden")))
@interface _UIFloatingTabBarParser : NSObject
{
    _Bool _supportsGroupClusters;	// 8 = 0x8
    NSArray *_fixedItems;	// 16 = 0x10
    NSArray *_pinnedItems;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    NSSet *_itemIdentifiers;	// 40 = 0x28
    NSOrderedSet *_currentFavoriteOrder;	// 48 = 0x30
    NSOrderedSet *_sourceTabIdentifiers;	// 56 = 0x38
    _UITabModel *_tabModel;	// 64 = 0x40
    NSOrderedSet *_overrideFavoriteOrder;	// 72 = 0x48
    UITab *_placeholderTab;	// 80 = 0x50
    NSSet *_ignoredFavoriteOrderItems;	// 88 = 0x58
    NSMutableArray *_fixedTabs;	// 96 = 0x60
    NSMutableArray *_sourceTabs;	// 104 = 0x68
    NSMutableArray *_pinnedTabs;	// 112 = 0x70
    NSOrderedSet *_favoriteOrder;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000018f2ceb
@property(readonly, nonatomic) NSOrderedSet *favoriteOrder; // @synthesize favoriteOrder=_favoriteOrder;
@property(readonly, nonatomic) NSMutableArray *pinnedTabs; // @synthesize pinnedTabs=_pinnedTabs;
@property(readonly, nonatomic) NSMutableArray *sourceTabs; // @synthesize sourceTabs=_sourceTabs;
@property(readonly, nonatomic) NSMutableArray *fixedTabs; // @synthesize fixedTabs=_fixedTabs;
- (_Bool)_canDisplayTabInBar:(id)arg1;	// IMP=0x00000000018f2c5c
- (id)_listItemsFromFavoriteOrder;	// IMP=0x00000000018f298e
- (id)_listItemsFromOverrideFavoriteOrder;	// IMP=0x00000000018f25ae
- (id)_listItemsForTabs:(id)arg1 customizableOnly:(_Bool)arg2;	// IMP=0x00000000018f2086
- (void)_insertIdentifiersFromItems:(id)arg1 intoSet:(id)arg2;	// IMP=0x00000000018f1cc4
- (void)_parseTabs:(id)arg1 fixedTabs:(id)arg2 sourceTabs:(id)arg3 pinnedTabs:(id)arg4 sourceIdentifiers:(id)arg5;	// IMP=0x00000000018f19bc

@end
