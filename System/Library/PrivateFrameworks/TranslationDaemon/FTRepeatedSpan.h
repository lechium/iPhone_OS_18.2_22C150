//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRepeatedSpan : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RepeatedSpan *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ed00d
- (id)flatbuffData;	// IMP=0x00000000000ece7c
- (Offset_ff130143)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000eca6a
- (void)span_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec8b9
- (unsigned long long)span_count;	// IMP=0x00000000000ec81d
- (id)span_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ec723
@property(readonly, nonatomic) NSArray *span;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ec5fa
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedSpan *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ec44f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedSpan *)arg2;	// IMP=0x00000000000ec43a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ec420
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ec409

@end
