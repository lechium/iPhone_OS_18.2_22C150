//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

__attribute__((visibility("hidden")))
@interface SUUICardViewElement : SUUIViewElement
{
    BOOL _enabled;	// 8 = 0x8
}

- (_Bool)isEnabled;	// IMP=0x000000000003a3a0
- (long long)pageComponentType;	// IMP=0x000000000003a395
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a276
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000003a1eb
@property(readonly, nonatomic, getter=isAdCard) _Bool adCard;
@property(readonly, nonatomic) long long cardType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000039f97

@end
