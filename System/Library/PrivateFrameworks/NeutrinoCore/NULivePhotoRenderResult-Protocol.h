//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderResult-Protocol.h>

@class AVAsset, AVVideoComposition, NUImageGeometry;

@protocol NULivePhotoRenderResult <NURenderResult>
@property(readonly) NUImageGeometry *videoGeometry;
@property(readonly) CDStruct_198678f7 photoTime;
@property(readonly) struct CGImage *photo;
@property(readonly) AVVideoComposition *videoComposition;
@property(readonly) AVAsset *video;
@end
