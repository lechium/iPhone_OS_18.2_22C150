//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLResourceSPI-Protocol.h>
#import <MetalTools/MTLTexture-Protocol.h>

@protocol MTLTexture;

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long colorSpaceConversionMatrix;
@property(readonly, nonatomic) unsigned long long compressionFootprint;
@property(readonly) _Bool isDrawable;
@property(readonly) unsigned long long numFaces;
@property(readonly) unsigned int swizzleKey;
@property(readonly) long long compressionFeedback;
@property(readonly) _Bool isCompressed;
@property(readonly) unsigned long long rotation;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface;

@optional
@property(readonly) unsigned long long sparseSurfaceDefaultValue;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

@property(readonly, nonatomic) unsigned long long gpuAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly) unsigned long long uniqueIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5 resourceIndex:(unsigned long long)arg6;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 resourceIndex:(unsigned long long)arg5;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (_Bool)canGenerateMipmapLevels;
- (id <MTLTexture>)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
@end
