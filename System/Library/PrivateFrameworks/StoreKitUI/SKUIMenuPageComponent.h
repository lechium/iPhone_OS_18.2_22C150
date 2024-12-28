//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSArray, NSMutableArray, NSString, SKUISegmentedControlViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageComponent : SKUIPageComponent
{
    NSMutableArray *_childrenComponents;	// 8 = 0x8
    long long _defaultSelectedIndex;	// 16 = 0x10
    long long _menuStyle;	// 24 = 0x18
    NSString *_menuTitle;	// 32 = 0x20
    float _menuTitleFontSize;	// 40 = 0x28
    long long _menuTitleFontWeight;	// 48 = 0x30
    NSMutableArray *_sortURLStrings;	// 56 = 0x38
    NSString *_titleForMoreItem;	// 64 = 0x40
    NSMutableArray *_titles;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003731d8
@property(readonly, nonatomic) NSString *titleForMoreItem; // @synthesize titleForMoreItem=_titleForMoreItem;
@property(readonly, nonatomic) long long menuTitleFontWeight; // @synthesize menuTitleFontWeight=_menuTitleFontWeight;
@property(readonly, nonatomic) float menuTitleFontSize; // @synthesize menuTitleFontSize=_menuTitleFontSize;
@property(readonly, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(readonly, nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(readonly, nonatomic) long long defaultSelectedIndex; // @synthesize defaultSelectedIndex=_defaultSelectedIndex;
- (id)_componentWithContext:(id)arg1;	// IMP=0x000000000037309a
- (void)_setChildComponents:(id)arg1 forIndex:(long long)arg2;	// IMP=0x0000000000373074
- (long long)componentType;	// IMP=0x0000000000373069
- (id)titleForIndex:(long long)arg1;	// IMP=0x000000000037304c
- (id)sortURLForIndex:(long long)arg1;	// IMP=0x0000000000372fe3
@property(readonly, nonatomic) long long numberOfItems;
- (id)childComponentsForIndex:(long long)arg1;	// IMP=0x0000000000372f69
@property(readonly, nonatomic) NSArray *allTitles;
- (id)initWithViewElement:(id)arg1;	// IMP=0x0000000000372e37
- (id)initWithRoomSortData:(id)arg1;	// IMP=0x00000000003729af
- (id)initWithCustomPageContext:(id)arg1;	// IMP=0x00000000003720fb

// Remaining properties
@property(readonly, nonatomic) SKUISegmentedControlViewElement *viewElement; // @dynamic viewElement;

@end
