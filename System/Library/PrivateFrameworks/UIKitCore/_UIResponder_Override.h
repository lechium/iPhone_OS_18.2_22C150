//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override : NSObject
{
    UIResponder *_owner;	// 8 = 0x8
    UIResponder *_target;	// 16 = 0x10
    long long _types;	// 24 = 0x18
}

+ (id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3;	// IMP=0x006000000136fc92
- (void).cxx_destruct;	// IMP=0x00000000013700e7
@property(readonly, nonatomic) long long types; // @synthesize types=_types;
@property(readonly, nonatomic) __weak UIResponder *target; // @synthesize target=_target;
@property(readonly, nonatomic) __weak UIResponder *owner; // @synthesize owner=_owner;
- (id)description;	// IMP=0x000000000136fece
- (void)dealloc;	// IMP=0x000000000136fe29

@end
