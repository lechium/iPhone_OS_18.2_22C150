//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFocusRegion.h"

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion : _UIFocusRegion
{
    id _identifier;	// 8 = 0x8
    unsigned long long _fullfillmentCount;	// 16 = 0x10
    CDUnknownBlockType _contentFulfillmentHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ae8ad3
@property(copy, nonatomic) CDUnknownBlockType contentFulfillmentHandler; // @synthesize contentFulfillmentHandler=_contentFulfillmentHandler;
- (id)_descriptionBuilder;	// IMP=0x0000000000ae8a40
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;	// IMP=0x0000000000ae89f4
- (unsigned long long)_focusableBoundaries;	// IMP=0x0000000000ae89ba
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000ae85fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae8520
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000ae8475
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000ae83ec
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000ae83d8

@end
