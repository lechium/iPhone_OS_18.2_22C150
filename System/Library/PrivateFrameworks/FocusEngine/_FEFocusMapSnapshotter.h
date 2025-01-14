//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _FEFocusMovementInfo, _FEFocusRegion, _FEFocusSearchInfo, _FEFocusSystem;
@protocol _FECoordinateSpace, _FEFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _FEFocusMapSnapshotter : NSObject
{
    _Bool _snapshotFrameIsEmpty;	// 8 = 0x8
    _Bool _ignoresRootContainerClippingRect;	// 9 = 0x9
    _Bool _clipToSnapshotRect;	// 10 = 0xa
    _FEFocusSystem *_focusSystem;	// 16 = 0x10
    id <_FEFocusRegionContainer> _rootContainer;	// 24 = 0x18
    id <_FECoordinateSpace> _coordinateSpace;	// 32 = 0x20
    _FEFocusRegion *_focusedRegion;	// 40 = 0x28
    id <_FEFocusRegionContainer> _regionsContainer;	// 48 = 0x30
    _FEFocusSearchInfo *_searchInfo;	// 56 = 0x38
    _FEFocusMovementInfo *_movementInfo;	// 64 = 0x40
    struct CGRect _snapshotFrame;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000015e90
@property(nonatomic) _Bool ignoresRootContainerClippingRect; // @synthesize ignoresRootContainerClippingRect=_ignoresRootContainerClippingRect;
@property(nonatomic) _Bool clipToSnapshotRect; // @synthesize clipToSnapshotRect=_clipToSnapshotRect;
@property(nonatomic) struct CGRect snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;
@property(retain, nonatomic) _FEFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _FEFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <_FEFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property(retain, nonatomic) _FEFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, nonatomic) __weak id <_FECoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_FEFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak _FEFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (id)captureSnapshot;	// IMP=0x0000000000015c88
- (id)_searchAreaForContainerSearchRect:(struct CGRect)arg1;	// IMP=0x0000000000015397
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(_Bool)arg5;	// IMP=0x00000000000150bf
- (id)init;	// IMP=0x0000000000015038

@end

