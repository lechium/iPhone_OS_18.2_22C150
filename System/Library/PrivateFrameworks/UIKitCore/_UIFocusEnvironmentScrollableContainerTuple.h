//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject
{
    id <UIFocusEnvironment> _owningEnvironment;	// 8 = 0x8
    id <UIFocusItemScrollableContainer> _scrollableContainer;	// 16 = 0x10
}

+ (id)tupleWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;	// IMP=0x0060000000ac3775
- (void).cxx_destruct;	// IMP=0x0000000000ac3d99
@property(readonly, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
- (id)description;	// IMP=0x0000000000ac3d08
- (unsigned long long)hash;	// IMP=0x0000000000ac3c7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac37e3
- (id)initWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;	// IMP=0x0000000000ac354d

@end
