//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/NSObject-Protocol.h>

@protocol MTLTextureLayout <NSObject>
@property(readonly) CDStruct_492b6082 watermark;
@property(readonly) CDStruct_14f26992 copyGranularity;
@property(readonly) unsigned long long alignment;
@property(readonly) unsigned long long size;
- (void)finalizeTextureMemory:(void *)arg1;
- (void)copyFromTextureMemory:(const void *)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(CDStruct_4c83c94d)arg4 toLinearBytes:(void *)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;
- (void)copyFromLinearBytes:(const void *)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void *)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(CDStruct_4c83c94d)arg8;

@optional
- (void)initializeTextureMemory:(void *)arg1;
@end

