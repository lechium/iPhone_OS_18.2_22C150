//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor
{
    struct MTLComputePassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)computePassDescriptor;	// IMP=0x00600000000d6604
@property(nonatomic) _Bool allowCommandEncoderCoalescing;
- (void)setDispatchType:(unsigned long long)arg1;	// IMP=0x00000000000d6980
- (unsigned long long)dispatchType;	// IMP=0x00000000000d696f
- (id)sampleBufferAttachments;	// IMP=0x00000000000d695d
- (const struct MTLComputePassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000d694d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d688f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d6766
- (unsigned long long)hash;	// IMP=0x00000000000d66c2
- (void)dealloc;	// IMP=0x00000000000d667f
- (id)init;	// IMP=0x00000000000d661e

@end
