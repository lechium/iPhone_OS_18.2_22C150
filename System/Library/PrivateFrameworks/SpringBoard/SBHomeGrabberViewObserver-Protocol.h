//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHomeGrabberView;

@protocol SBHomeGrabberViewObserver <NSObject>

@optional
- (void)homeGrabberViewDidFailToRecognizeDoubleTap:(SBHomeGrabberView *)arg1;
- (void)homeGrabberViewDidRecognizeDoubleTap:(SBHomeGrabberView *)arg1;
- (void)homeGrabberViewDidRecognizeSingleTap:(SBHomeGrabberView *)arg1;
- (void)homeGrabberViewDidUpdateGrabberHitTestRect:(SBHomeGrabberView *)arg1;
- (void)homeGrabberViewDidUpdateHidden:(SBHomeGrabberView *)arg1;
@end

