//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLCommandBuffer, MTLTexture;

@protocol CIImageProcessorOutput
@property(readonly, nonatomic) unsigned long long digest;
@property(readonly, nonatomic) id <MTLCommandBuffer> metalCommandBuffer;
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct __IOSurface *surface;
@property(readonly, nonatomic) void *baseAddress;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct CGRect region;
@end

