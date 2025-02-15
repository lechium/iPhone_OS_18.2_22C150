//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVPictureInPictureCALayerHostView;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView
{
    _Bool _needsGeometryUpdate;	// 8 = 0x8
    _Bool _deferringGeometryUpdates;	// 9 = 0x9
    AVPictureInPictureCALayerHostView *_hostView;	// 16 = 0x10
    struct CGSize _imageQueueSize;	// 24 = 0x18
    struct CGSize _contentDimensions;	// 40 = 0x28
    struct CGRect _lastKnownFrame;	// 56 = 0x38
    struct CGRect _lastKnownBounds;	// 88 = 0x58
}

+ (Class)layerClass;	// IMP=0x0060000000050507
- (void).cxx_destruct;	// IMP=0x00000000000504de
@property(nonatomic, getter=isDeferringGeometryUpdates) _Bool deferringGeometryUpdates; // @synthesize deferringGeometryUpdates=_deferringGeometryUpdates;
@property(nonatomic) _Bool needsGeometryUpdate; // @synthesize needsGeometryUpdate=_needsGeometryUpdate;
@property(nonatomic) struct CGRect lastKnownBounds; // @synthesize lastKnownBounds=_lastKnownBounds;
@property(nonatomic) struct CGRect lastKnownFrame; // @synthesize lastKnownFrame=_lastKnownFrame;
@property(nonatomic) struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property(nonatomic) struct CGSize imageQueueSize; // @synthesize imageQueueSize=_imageQueueSize;
@property(readonly, nonatomic) AVPictureInPictureCALayerHostView *hostView; // @synthesize hostView=_hostView;
- (void)_updateGeometryIfNeeded;	// IMP=0x000000000004fd4d
- (void)layoutSubviews;	// IMP=0x000000000004fba5
- (void)setFrame:(struct CGRect)arg1 contentDimensions:(struct CGSize)arg2 imageQueueSize:(struct CGSize)arg3;	// IMP=0x000000000004fa13
@property(nonatomic) double beginTime;
@property(nonatomic) unsigned int contextId;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004f760

@end

