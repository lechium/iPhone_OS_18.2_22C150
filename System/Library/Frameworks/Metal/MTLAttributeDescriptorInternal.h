//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLAttributeDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor
{
    unsigned long long _vertexFormat;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned long long _bufferIndex;	// 24 = 0x18
}

- (void)setOffset:(unsigned long long)arg1;	// IMP=0x000000000000aaa2
- (unsigned long long)offset;	// IMP=0x000000000000aa91
- (void)setBufferIndex:(unsigned long long)arg1;	// IMP=0x000000000000aa47
- (unsigned long long)bufferIndex;	// IMP=0x000000000000aa36
- (void)setFormat:(unsigned long long)arg1;	// IMP=0x000000000000aa25
- (unsigned long long)format;	// IMP=0x000000000000aa14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a9a3

@end

