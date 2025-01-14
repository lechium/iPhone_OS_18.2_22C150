//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLCountersTraceBlitCommandEncoder
{
}

- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x00000000000521e7
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000052041
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000051fa8
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x0000000000051f2b
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000051e92
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x0000000000051e15
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000051d98
- (void)updateFence:(id)arg1;	// IMP=0x0000000000051d1b
- (void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000051c82
- (void)synchronizeResource:(id)arg1;	// IMP=0x0000000000051c05
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x0000000000051b88
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x0000000000051afa
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x0000000000051977
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x00000000000517c3
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x000000000005157e
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x00000000000513df
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x00000000000512df
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x00000000000511de
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x0000000000050fbe
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x0000000000050cfb
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000509db
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x00000000000507a6
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x0000000000050491
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x0000000000050286
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x00000000000501cb
- (id)init:(struct BinaryBuffer *)arg1;	// IMP=0x0000000000050197

@end

