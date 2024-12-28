//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLCommandBufferDescriptor, NSMutableDictionary;
@protocol MTLCommandQueue, MTLDeviceSPI, MTLSharedEvent, OS_dispatch_group, OS_dispatch_queue;

@interface GTResourceDownloader : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    NSMutableDictionary *_pipelineCache;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _framebufferPipelineMutex;	// 40 = 0x28
    unsigned long long _downloadValue;	// 104 = 0x68
    id <MTLSharedEvent> _downloadEvent;	// 112 = 0x70
    id <MTLCommandQueue> _downloadQueue;	// 120 = 0x78
    MTLCommandBufferDescriptor *_commandBufferDescriptor;	// 128 = 0x80
    unsigned long long _maxGPUMemory;	// 136 = 0x88
    _Atomic unsigned long long _usedGPUMemory;	// 144 = 0x90
    unsigned long long _alignment;	// 152 = 0x98
    struct apr_pool_t *_pool;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000b39f1
- (void)_downloadRequest:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x00000000000b396c
- (void)_downloadRequestNew:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x00000000000b37b0
- (void)_downloadRequestOld:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x00000000000b364a
- (void)downloadRequest:(struct apr_array_header_t *)arg1 atPoint:(id)arg2;	// IMP=0x00000000000b3635
- (void)downloadRequest:(struct apr_array_header_t *)arg1;	// IMP=0x00000000000b3579
- (id)commanndBufferDescriptor;	// IMP=0x00000000000b3568
- (id)downloadQueue;	// IMP=0x00000000000b355a
- (id)getFramebufferPipeline:(unsigned long long)arg1;	// IMP=0x00000000000b3339
- (id)getGPUIndirectCommandBuffer:(unsigned long long)arg1 context:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000b3321
- (id)getGPUBuffer:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00000000000b3281
- (id)getGPUIndirectCommandBuffer:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000b31dc
- (id)getGPUBuffer:(unsigned long long)arg1;	// IMP=0x00000000000b317b
- (void)fillGPUBuffer:(id)arg1 size:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00000000000b2f5e
- (void)dealloc;	// IMP=0x00000000000b2f18
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000000b2d72

@end
