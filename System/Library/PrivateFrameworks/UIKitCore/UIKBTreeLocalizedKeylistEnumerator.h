//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator
{
    NSDictionary *_keyplaneCache;	// 8 = 0x8
    NSEnumerator *_nameEnum;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e5eae1
- (id)nextObject;	// IMP=0x0000000000e5e968
- (id)initWithKeyplaneCache:(id)arg1;	// IMP=0x0000000000e5e8b2

@end
