//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, VKCamera, VKCameraController;
@protocol MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    struct _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKCameraController *_obj;
        struct _retain_objc_arc _retain;
        struct _release_objc_arc _release;
    } _cameraController;	// 8 = 0x8
    shared_ptr_e963992e _taskContext;	// 32 = 0x20
    _retain_ptr_a171892e _vkCamera;	// 48 = 0x30
    shared_ptr_46708168 _camera;	// 72 = 0x48
    int _mapType;	// 88 = 0x58
    id <MDRenderTarget> _displayTarget;	// 96 = 0x60
    struct RunLoopController *_runLoopController;	// 104 = 0x68
    struct VKEdgeInsets _edgeInsets;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000a105a0
- (void).cxx_destruct;	// IMP=0x0000000000a10500
@property(readonly, nonatomic) shared_ptr_46708168 camera; // @synthesize camera=_camera;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void)didReceiveMemoryWarning:(_Bool)arg1;	// IMP=0x0000000000a10490
- (void)renderSceneWithEngine:(void *)arg1 completion:(function_2e574590)arg2;	// IMP=0x0000000000a10310
- (void)cancelLoad;	// IMP=0x0000000000a102e0
- (void)loadScene;	// IMP=0x0000000000a102b0
@property(readonly, nonatomic) VKCamera *vkCamera;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;	// IMP=0x0000000000a10150
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;	// IMP=0x0000000000a10090
- (void)cancelTileRequests;	// IMP=0x0000000000a10080
- (void)clearScene;	// IMP=0x0000000000a10070
- (void)didLayout;	// IMP=0x0000000000a10060
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000a10040
@property(readonly, nonatomic) shared_ptr_e963992e taskContext;
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x0000000000a0fd50

@end
