//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit10ResizeView : UIView
{
    MISSING_TYPE *canvas;	// 8 = 0x8
    MISSING_TYPE *resizeHandles;	// 16 = 0x10
    MISSING_TYPE *controlHandles;	// 24 = 0x18
    MISSING_TYPE *currentActiveHandle;	// 32 = 0x20
    MISSING_TYPE *borderView;	// 40 = 0x28
    MISSING_TYPE *resizeOriginalCoordinateSpace;	// 48 = 0x30
    MISSING_TYPE *resizeOriginalCoordinateSpaceScaled;	// 96 = 0x60
    MISSING_TYPE *originalControlPointLocation;	// 144 = 0x90
    MISSING_TYPE *dragGestureRecognizer;	// 160 = 0xa0
    MISSING_TYPE *rotationGestureRecognizer;	// 168 = 0xa8
    MISSING_TYPE *transientResizeTransform;	// 176 = 0xb0
    MISSING_TYPE *isResizing;	// 225 = 0xe1
    MISSING_TYPE *dragConstainedAxis;	// 226 = 0xe2
    MISSING_TYPE *nudgeDelta;	// 232 = 0xe8
    MISSING_TYPE *nudgeTimer;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000029d5a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000029d540
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000029d4c0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000029d460
- (void)rotateFromResizeHandle:(id)arg1;	// IMP=0x000000000029ce10
- (void)rotate:(id)arg1;	// IMP=0x000000000029cdc0
- (void)dragMoved:(id)arg1;	// IMP=0x000000000029c9c0
- (void)resizeHandleMoved:(id)arg1;	// IMP=0x000000000029c040
- (void)controlHandleMoved:(id)arg1;	// IMP=0x000000000029bfc0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000029bf40
- (void)layoutSubviews;	// IMP=0x000000000029be50
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029bac0

@end

