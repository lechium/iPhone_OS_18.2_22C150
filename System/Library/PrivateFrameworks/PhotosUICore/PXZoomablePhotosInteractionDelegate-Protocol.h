//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetReference, PXZoomablePhotosInteraction;

@protocol PXZoomablePhotosInteractionDelegate <NSObject>
- (PXAssetReference *)zoomablePhotosInteraction:(PXZoomablePhotosInteraction *)arg1 assetReferenceAtLocation:(struct CGPoint)arg2;
- (void)zoomablePhotosInteractionWillBegin:(PXZoomablePhotosInteraction *)arg1;
- (_Bool)zoomablePhotosInteractionShouldBegin:(PXZoomablePhotosInteraction *)arg1;
@end

