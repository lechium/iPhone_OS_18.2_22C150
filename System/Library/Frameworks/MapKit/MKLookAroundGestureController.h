//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKLookAroundView, NSDate, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, VKCompoundAnimation;
@protocol MKLookAroundGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKLookAroundGestureController : NSObject
{
    long long _userInteractionCount;	// 8 = 0x8
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;	// 16 = 0x10
    UIPanGestureRecognizer *_panGestureRecognizer;	// 24 = 0x18
    UIPinchGestureRecognizer *_zoomGestureRecognizer;	// 32 = 0x20
    NSDate *_singleTapTime;	// 40 = 0x28
    VKCompoundAnimation *_panDecelerationAnimationGroup;	// 48 = 0x30
    long long _lastZoomDirection;	// 56 = 0x38
    double _startZoomScale;	// 64 = 0x40
    double _lastZoomScale;	// 72 = 0x48
    _Bool _readyToReplayTap;	// 80 = 0x50
    _Bool _navigatingEnabled;	// 81 = 0x51
    _Bool _panningEnabled;	// 82 = 0x52
    _Bool _zoomingEnabled;	// 83 = 0x53
    id <MKLookAroundGestureControllerDelegate> _delegate;	// 88 = 0x58
    MKLookAroundView *_lookAroundView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001e7e38
@property(nonatomic) __weak MKLookAroundView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
@property(nonatomic) _Bool zoomingEnabled; // @synthesize zoomingEnabled=_zoomingEnabled;
@property(nonatomic) _Bool panningEnabled; // @synthesize panningEnabled=_panningEnabled;
@property(nonatomic) _Bool navigatingEnabled; // @synthesize navigatingEnabled=_navigatingEnabled;
@property(nonatomic) __weak id <MKLookAroundGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001e7d67
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000001e7cf8
- (void)_handleZoom:(id)arg1;	// IMP=0x00000000001e764b
- (void)_handlePan:(id)arg1;	// IMP=0x00000000001e6a45
- (void)_handleSingleNavigate:(id)arg1;	// IMP=0x00000000001e6401
- (void)_moveBackToReplayTap;	// IMP=0x00000000001e5ff2
- (id)initWithLookAroundView:(id)arg1;	// IMP=0x00000000001e5db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

