//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, SKUILabelViewElement, SKUIPaletteViewElement, SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement
{
    SKUIPhysicalCirclesTemplateDOMFeature *_scriptInterface;	// 8 = 0x8
}

+ (id)supportedFeatures;	// IMP=0x006000000017359f
- (void).cxx_destruct;	// IMP=0x0000000000173617
@property(readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface; // @synthesize scriptInterface=_scriptInterface;
@property(readonly, nonatomic) SKUILabelViewElement *titleElement;
@property(readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property(readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;	// IMP=0x0000000000172fba
@property(readonly, nonatomic) NSArray *circleItemElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000172dbc

@end
