//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView
{
    MISSING_TYPE *scrollView;	// 8 = 0x8
    MISSING_TYPE *_focusableBounds;	// 16 = 0x10
    MISSING_TYPE *_focusableFillerBounds;	// 24 = 0x18
    MISSING_TYPE *_focusableBorder;	// 32 = 0x20
    MISSING_TYPE *_pixelLength;	// 40 = 0x28
    MISSING_TYPE *fillerItems;	// 48 = 0x30
    MISSING_TYPE *requestedFocusItem;	// 56 = 0x38
}

+ (_Bool)_supportsInvalidatingFocusCache;	// IMP=0x00100000005b4af0
- (void).cxx_destruct;	// IMP=0x0000000000d07a60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d07a00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d07910
- (_Bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d076e0
@property(nonatomic, readonly) NSArray *_childGestureRecognizerContainers;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000005b4a50
- (_Bool)_swiftuiReturnsSubviewsInFocusItemsInRect;	// IMP=0x00000000005b4020
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000005b3e40

@end
