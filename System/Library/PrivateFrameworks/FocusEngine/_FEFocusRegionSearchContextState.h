//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _FEFocusSystem;
@protocol _FEFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _FEFocusRegionSearchContextState : NSObject
{
    id <_FEFocusRegionContainer> _regionContainer;	// 8 = 0x8
    _FEFocusSystem *_regionContainerFocusSystem;	// 16 = 0x10
    struct CGRect _clippingRect;	// 24 = 0x18
}

+ (id)stateWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;	// IMP=0x006000000001e4ba
- (void).cxx_destruct;	// IMP=0x000000000001e56d
@property(readonly, nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(readonly, nonatomic) _FEFocusSystem *regionContainerFocusSystem; // @synthesize regionContainerFocusSystem=_regionContainerFocusSystem;
@property(readonly, nonatomic) id <_FEFocusRegionContainer> regionContainer; // @synthesize regionContainer=_regionContainer;
- (id)initWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;	// IMP=0x000000000001e40c

@end
