//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPinchGestureRecognizer.h"

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
{
    UIScrollView *_scrollView;	// 8 = 0x8
    SEL _scrollViewAction;	// 16 = 0x10
    unsigned int _hasParentScrollView:1;	// 24 = 0x18
    _Bool _nestedHysteresisEnabled;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000019d7e50
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000019d7e26
- (void)_transformChangedWithEvent:(id)arg1;	// IMP=0x00000000019d7d7e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000019d7c90
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000019d7b64
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000019d7aa1
- (void)setDelegate:(id)arg1;	// IMP=0x00000000019d78c2
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000019d785f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
