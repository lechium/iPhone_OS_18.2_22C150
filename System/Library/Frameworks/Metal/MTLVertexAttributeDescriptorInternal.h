//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLVertexAttributeDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor
{
    unsigned long long _vertexFormat;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned long long _bufferIndex;	// 24 = 0x18
}

- (void)setOffset:(unsigned long long)arg1;	// IMP=0x0000000000176012
- (unsigned long long)offset;	// IMP=0x0000000000176001
- (void)setBufferIndex:(unsigned long long)arg1;	// IMP=0x0000000000175fb7
- (unsigned long long)bufferIndex;	// IMP=0x0000000000175fa6
- (void)setFormat:(unsigned long long)arg1;	// IMP=0x0000000000175f95
- (unsigned long long)format;	// IMP=0x0000000000175f84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000175f13

@end
