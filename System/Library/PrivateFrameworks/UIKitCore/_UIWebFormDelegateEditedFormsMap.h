//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject
{
    NSMutableDictionary *_map;	// 8 = 0x8
    NSMutableArray *_lifetimeHelper;	// 16 = 0x10
}

- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000b5a8f0
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000b5a89f
- (void)removeAllObjects;	// IMP=0x0000000000b5a864
- (id)allValues;	// IMP=0x0000000000b5a84e
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000b5a81c
- (id)_keyForWebFrame:(id)arg1;	// IMP=0x0000000000b5a7f7
- (void)dealloc;	// IMP=0x0000000000b5a7ad
- (id)init;	// IMP=0x0000000000b5a725

@end
