//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSArray, SUUIItemViewElement, SUUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SUUIMenuViewElement : SUUIViewElement
{
    BOOL _enabled;	// 8 = 0x8
    SUUILabelViewElement *_menuLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000288bd9
@property(readonly, nonatomic) SUUILabelViewElement *menuLabel; // @synthesize menuLabel=_menuLabel;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000288a2f
- (_Bool)isEnabled;	// IMP=0x00000000002889eb
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000288970
@property(readonly, nonatomic) SUUIItemViewElement *titleItem;
@property(readonly, nonatomic) long long selectedItemIndex;
@property(readonly, nonatomic) NSArray *menuItemTitles;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x0000000000288554
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000288483

@end
