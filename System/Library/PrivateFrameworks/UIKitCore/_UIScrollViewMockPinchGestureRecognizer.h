//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject
{
    double _scale;	// 8 = 0x8
    double _velocity;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000019d96ff
@property(retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)_activeTouchesForEvent:(id)arg1;	// IMP=0x00000000019d96a8
- (struct CGPoint)anchorPoint;	// IMP=0x00000000019d964a
- (double)velocity;	// IMP=0x00000000019d963f
- (double)scale;	// IMP=0x00000000019d9634
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000019d9543
- (void)simulateScale:(double)arg1 velocity:(double)arg2;	// IMP=0x00000000019d9533

@end
