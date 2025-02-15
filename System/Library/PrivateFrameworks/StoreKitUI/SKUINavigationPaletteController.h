//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteController
{
    SKUINavigationBarContext *_navigationBarContext;	// 8 = 0x8
    SKUINavigationPaletteView *_paletteView;	// 16 = 0x10
    SKUIPaletteViewElement *_viewElement;	// 24 = 0x18
    SKUIViewElementLayoutContext *_viewLayoutContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001fca70
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000001fc9da
- (void)willAppearInNavigationBar;	// IMP=0x00000000001fc8f8
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001fc8db
- (id)view;	// IMP=0x00000000001fc64c
- (void)reloadSectionViews;	// IMP=0x00000000001fc578
- (id)initWithPaletteViewElement:(id)arg1;	// IMP=0x00000000001fc4c7

@end

