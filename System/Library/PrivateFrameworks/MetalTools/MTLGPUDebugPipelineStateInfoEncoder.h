//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLArgumentEncoder;

__attribute__((visibility("hidden")))
@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject
{
    id <MTLArgumentEncoder> _argumentEncoder;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0000000000086fc4
@property(readonly, nonatomic) unsigned long long encodedLength;
- (void)setComputePipelineState:(id)arg1;	// IMP=0x0000000000086dc9
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000086b6f
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000086b0d
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000000865aa

@end
