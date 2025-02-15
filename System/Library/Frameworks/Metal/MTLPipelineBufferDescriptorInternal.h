//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLPipelineBufferDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor
{
    struct MTLPipelineBufferDescriptorPrivate _private;	// 8 = 0x8
}

- (const struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000c479e
- (void)setMutability:(unsigned long long)arg1;	// IMP=0x00000000000c4750
- (unsigned long long)mutability;	// IMP=0x00000000000c473c
- (id)description;	// IMP=0x00000000000c4728
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000c46b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c465b
- (unsigned long long)hash;	// IMP=0x00000000000c4642
- (_Bool)isDefault;	// IMP=0x00000000000c462d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c45df
- (void)dealloc;	// IMP=0x00000000000c45b0
- (id)init;	// IMP=0x00000000000c456d

@end

