//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIButtonViewElement, SUUIViewElementText;

__attribute__((visibility("hidden")))
@interface SUUIDividerViewElement : SUUIViewElement
{
    SUUIButtonViewElement *_button;	// 8 = 0x8
    long long _dividerType;	// 16 = 0x10
    _Bool _dividerTypeWasInitialized;	// 24 = 0x18
    SUUIViewElementText *_text;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000037685e
@property(readonly, nonatomic) SUUIViewElementText *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long dividerType;
@property(readonly, nonatomic) SUUIButtonViewElement *button;
- (long long)pageComponentType;	// IMP=0x000000000037673b
- (_Bool)isEnabled;	// IMP=0x0000000000376726
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000037663d

@end

