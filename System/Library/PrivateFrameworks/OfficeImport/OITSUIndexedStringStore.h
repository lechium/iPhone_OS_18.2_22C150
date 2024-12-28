//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUIndexedStringStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_indexByString;	// 16 = 0x10
    NSMutableArray *_stringByIndex;	// 24 = 0x18
}

- (unsigned long long)count;	// IMP=0x0000000000246b35
- (id)stringForIndex:(unsigned long long)arg1;	// IMP=0x00000000002469e0
- (unsigned long long)indexForString:(id)arg1;	// IMP=0x00000000002467b1
- (void)dealloc;	// IMP=0x0000000000246760
- (id)init;	// IMP=0x00000000002466f2

@end
