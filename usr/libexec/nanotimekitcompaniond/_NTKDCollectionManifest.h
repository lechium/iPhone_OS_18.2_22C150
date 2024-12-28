//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _NTKDCollectionManifest : NSObject
{
    NSMutableArray *_orderedUUIDs;	// 8 = 0x8
    NSMutableDictionary *_boxedStylesByUUID;	// 16 = 0x10
}

+ (id)emptyManifest;	// IMP=0x0040000000022902
- (void).cxx_destruct;	// IMP=0x002000000002376c
- (void)_getUUID:(id *)arg1 boxedStyle:(id *)arg2 fromEntry:(id)arg3;	// IMP=0x0010000000023594
- (_Bool)_containsUUID:(id)arg1;	// IMP=0x001000000002355d
- (void)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00100000000232ae
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0010000000022f60
- (void)removeAllUUIDs;	// IMP=0x0010000000022f25
- (_Bool)updateOrderWithUUIDs:(id)arg1;	// IMP=0x0010000000022e4f
- (_Bool)removeUUID:(id)arg1;	// IMP=0x0010000000022dc3
- (_Bool)addUUID:(id)arg1 withFaceStyle:(long long)arg2;	// IMP=0x0010000000022ce0
- (long long)faceStyleForUUID:(id)arg1;	// IMP=0x0010000000022c8b
- (id)orderedUUIDs;	// IMP=0x0010000000022c7d
- (id)description;	// IMP=0x00100000000229b6
- (id)init;	// IMP=0x001000000002291c

@end
