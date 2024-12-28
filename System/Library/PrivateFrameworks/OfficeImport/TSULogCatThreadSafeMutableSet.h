//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSULogCatThreadSafeMutableSet : NSObject
{
    NSMutableSet *_objects;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_logCatQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a0a1d
- (id)description;	// IMP=0x00000000002a0922
- (void)removeObject:(id)arg1;	// IMP=0x00000000002a0877
- (void)addObject:(id)arg1;	// IMP=0x00000000002a07cc
- (id)immutableSet;	// IMP=0x00000000002a06ca
- (id)allObjects;	// IMP=0x00000000002a05aa
- (unsigned long long)count;	// IMP=0x00000000002a0496
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000002a038c
- (id)init;	// IMP=0x00000000002a0332
- (id)initWithArray:(id)arg1;	// IMP=0x00000000002a028f

@end
