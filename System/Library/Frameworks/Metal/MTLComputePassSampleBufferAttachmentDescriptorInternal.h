//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor
{
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000d6366
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d62ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d62a1
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x00000000000d628f
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000d627d
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x00000000000d626b
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000d6259
- (id)sampleBuffer;	// IMP=0x00000000000d6248
- (void)setSampleBuffer:(id)arg1;	// IMP=0x00000000000d620a
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000d61fa
- (void)dealloc;	// IMP=0x00000000000d61b8
- (id)init;	// IMP=0x00000000000d6178

@end

