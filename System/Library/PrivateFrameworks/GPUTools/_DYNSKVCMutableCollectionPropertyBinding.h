//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _DYNSKVCMutableCollectionPropertyBinding : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_underlyingIvarName;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSString *underlyingIvarName; // @synthesize underlyingIvarName=_underlyingIvarName;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)underlyingIvarValueForObject:(id)arg1;	// IMP=0x000000000001f165
- (void)dealloc;	// IMP=0x000000000001f11b
- (id)initWithKey:(id)arg1 underlyingIvarName:(id)arg2;	// IMP=0x000000000001f0a1

@end
