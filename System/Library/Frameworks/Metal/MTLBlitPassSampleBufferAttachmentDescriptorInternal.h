//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLBlitPassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor
{
    struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000016c46f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016c3f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016c3aa
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000016c398
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000016c386
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x000000000016c374
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000016c362
- (id)sampleBuffer;	// IMP=0x000000000016c351
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000016c313
- (const struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000016c303
- (void)dealloc;	// IMP=0x000000000016c2c1
- (id)init;	// IMP=0x000000000016c281

@end
