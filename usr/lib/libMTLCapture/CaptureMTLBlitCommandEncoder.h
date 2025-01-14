//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLBlitCommandEncoder, MTLBlitCommandEncoderSPI, MTLDevice;

@interface CaptureMTLBlitCommandEncoder : NSObject
{
    id <MTLBlitCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
    NSMutableSet *_retainedObjects;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c6386
- (void)waitForFence:(id)arg1;	// IMP=0x00000000000c6204
- (void)updateFence:(id)arg1;	// IMP=0x00000000000c6082
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x00000000000c5ed2
- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x00000000000c5d0d
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000c5b67
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000000000c59e2
- (void)popDebugGroup;	// IMP=0x00000000000c58f8
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000c5752
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000c55ac
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x00000000000c542a
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000c5284
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x00000000000c5102
- (void)invalidateCompressedTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000c4f5c
- (void)invalidateCompressedTexture:(id)arg1;	// IMP=0x00000000000c4dda
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000000000c4c55
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;	// IMP=0x00000000000c4998
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x00000000000c4816
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x00000000000c45d2
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x00000000000c4411
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x00000000000c4253
- (void)endEncoding;	// IMP=0x00000000000c4169
- (void)dealloc;	// IMP=0x00000000000c4065
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;	// IMP=0x00000000000c3e1d
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x00000000000c3bff
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x00000000000c39b3
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000c36c2
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x00000000000c33ea
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000c3113
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x00000000000c2e50
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x00000000000c2c03
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000c2925
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x00000000000c265c
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000c245c
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000c244b
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000c238a
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000c232a
- (id)originalObject;	// IMP=0x00000000000c231c
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x00000000000c2118
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x00000000000c1f23
- (void)resolveCounters:(id)arg1 inRange:(struct _NSRange)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;	// IMP=0x00000000000c1b17
@property(readonly) id <MTLBlitCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x00000000000c199e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

