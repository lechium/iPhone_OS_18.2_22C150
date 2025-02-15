//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _FEFocusEnvironment, _FEFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _FEFocusEnvironmentContainerTuple : NSObject
{
    _Bool _isScrollableContainer;	// 8 = 0x8
    id <_FEFocusEnvironment> _owningEnvironment;	// 16 = 0x10
    id <_FEFocusItemContainer> _itemContainer;	// 24 = 0x18
}

+ (id)tupleWithRequiredContainerFromEnvironment:(id)arg1;	// IMP=0x006000000000f160
+ (id)tupleWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x006000000000f0f2
- (void).cxx_destruct;	// IMP=0x000000000000f6c5
@property(readonly, nonatomic) _Bool isScrollableContainer; // @synthesize isScrollableContainer=_isScrollableContainer;
@property(readonly, nonatomic) id <_FEFocusItemContainer> itemContainer; // @synthesize itemContainer=_itemContainer;
@property(readonly, nonatomic) id <_FEFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
- (id)description;	// IMP=0x000000000000f62b
- (unsigned long long)hash;	// IMP=0x000000000000f59f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f537
- (_Bool)isEqualToEnvironmentContainerTuple:(id)arg1;	// IMP=0x000000000000f1dd
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x000000000000eebe

@end

