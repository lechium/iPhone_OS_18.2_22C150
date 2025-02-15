//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITab;

__attribute__((visibility("hidden")))
@interface _UIFloatingTabBarListItem : NSObject
{
    _Bool _isPlaceholder;	// 8 = 0x8
    _UIFloatingTabBarListItem *_parent;	// 16 = 0x10
    long long _itemIndex;	// 24 = 0x18
    UITab *_tabForSelection;	// 32 = 0x20
    UITab *_contentTab;	// 40 = 0x28
    NSArray *_children;	// 48 = 0x30
}

+ (id)placeholderItemForTab:(id)arg1;	// IMP=0x00600000015033a2
- (void).cxx_destruct;	// IMP=0x0000000001503a26
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) UITab *contentTab; // @synthesize contentTab=_contentTab;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) UITab *tabForSelection; // @synthesize tabForSelection=_tabForSelection;
@property(readonly, nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(readonly, nonatomic) __weak _UIFloatingTabBarListItem *parent; // @synthesize parent=_parent;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001503968
- (unsigned long long)hash;	// IMP=0x0000000001503922
- (_Bool)containsItem:(id)arg1;	// IMP=0x0000000001503637
- (id)initWithChildren:(id)arg1;	// IMP=0x00000000015033e2
- (id)initWithTab:(id)arg1;	// IMP=0x0000000001503329

@end

