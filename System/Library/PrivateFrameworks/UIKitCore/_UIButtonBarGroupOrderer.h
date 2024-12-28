//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol _UIButtonBarGroupOrderOwner;

__attribute__((visibility("hidden")))
@interface _UIButtonBarGroupOrderer : NSObject
{
    NSMutableOrderedSet *_includedItems;	// 8 = 0x8
    NSMutableSet *_excludedItems;	// 16 = 0x10
    NSArray *_orderedGroups;	// 24 = 0x18
    NSString *_customizationIdentifier;	// 32 = 0x20
    id <_UIButtonBarGroupOrderOwner> _owner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001a69d41
- (void)_orderGroups;	// IMP=0x0000000001a698fa
- (_Bool)_hasCustomization;	// IMP=0x0000000001a698b8
- (id)_initWithCustomizationIdentifier:(id)arg1 data:(id)arg2;	// IMP=0x0000000001a68b3d

@end
