//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIViewElementText;

__attribute__((visibility("hidden")))
@interface SUUIItemViewElement : SUUIViewElement
{
    SUUIViewElementText *_itemText;	// 8 = 0x8
    _Bool _selected;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022eb35
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) SUUIViewElementText *itemText; // @synthesize itemText=_itemText;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000022ea4b
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000022e7b5

@end

