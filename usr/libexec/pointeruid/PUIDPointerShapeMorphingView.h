//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PUIDPointerSettings, PUIDShapeView, UIBezierPath, UIViewFloatAnimatableProperty;

@interface PUIDPointerShapeMorphingView : UIView
{
    UIViewFloatAnimatableProperty *_animatableProperty;	// 8 = 0x8
    UIView *_animationCircleView;	// 16 = 0x10
    UIView *_animationContainerView;	// 24 = 0x18
    unsigned long long _animationGenerationID;	// 32 = 0x20
    PUIDShapeView *_animationShapeView;	// 40 = 0x28
    UIView *_animationSnapshotView;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    UIView *_filteredView;	// 64 = 0x40
    struct os_unfair_lock_s _lock;	// 72 = 0x48
    PUIDPointerSettings *_settings;	// 80 = 0x50
    PUIDShapeView *_shapeView;	// 88 = 0x58
    UIBezierPath *_path;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000249cc
@property(readonly, copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void)_resetToStableStateWithPath:(id)arg1;	// IMP=0x0010000000024637
- (void)setPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fca6
- (void)dealloc;	// IMP=0x001000000001fc5d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001f62f

@end

