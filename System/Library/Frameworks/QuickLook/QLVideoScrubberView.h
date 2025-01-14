//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, PHVideoScrubberView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QLVideoScrubberView : UIView
{
    _Bool _userInteractingWithScrubber;	// 8 = 0x8
    _Bool _touchGestureIsActive;	// 9 = 0x9
    PHVideoScrubberView *_photosScrubber;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006b161
@property(nonatomic) _Bool touchGestureIsActive; // @synthesize touchGestureIsActive=_touchGestureIsActive;
@property(getter=isUserInteractingWithScrubber) _Bool userInteractingWithScrubber; // @synthesize userInteractingWithScrubber=_userInteractingWithScrubber;
- (void)_updateUserInteractingWithScrubberIfNeeded;	// IMP=0x000000000006b052
- (void)didBeginTouchingVideoScrubberView:(id)arg1;	// IMP=0x000000000006b035
- (void)didEndTouchingVideoScrubberView:(id)arg1;	// IMP=0x000000000006b018
- (void)videoScrubberView:(id)arg1 didEndDeceleratingInScrollView:(id)arg2;	// IMP=0x000000000006b006
- (void)videoScrubberView:(id)arg1 didEndDraggingInScrollView:(id)arg2;	// IMP=0x000000000006aff4
- (void)videoScrubberView:(id)arg1 willBeginDeceleratingInScrollView:(id)arg2;	// IMP=0x000000000006afe2
- (void)videoScrubberView:(id)arg1 willBeginDraggingInScrollView:(id)arg2;	// IMP=0x000000000006afd0
@property(readonly) UIScrollView *scrollView;
@property(readonly) PHVideoScrubberView *photosScrubber; // @synthesize photosScrubber=_photosScrubber;
- (void)layoutSubviews;	// IMP=0x000000000006ac94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

