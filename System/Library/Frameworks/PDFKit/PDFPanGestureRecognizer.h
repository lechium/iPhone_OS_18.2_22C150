//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PDFPanGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _didForcePress;	// 8 = 0x8
    _Bool _touchesDidHavePressure;	// 9 = 0x9
    struct CGPoint _locationOfFirstTouch;	// 16 = 0x10
}

@property(nonatomic) _Bool touchesDidHavePressure; // @synthesize touchesDidHavePressure=_touchesDidHavePressure;
@property(nonatomic) _Bool didForcePress; // @synthesize didForcePress=_didForcePress;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;	// IMP=0x0000000000094b70
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000949bf
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000946d9
- (void)reset;	// IMP=0x000000000009468b

@end

