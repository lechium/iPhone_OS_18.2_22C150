//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class PHVideoScrubberView, UIScrollView;

@protocol PHVideoScrubberViewInteractionDelegate <NSObject>

@optional
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 didEndDeceleratingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 willBeginDeceleratingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 didEndDraggingInScrollView:(UIScrollView *)arg2;
- (void)videoScrubberView:(PHVideoScrubberView *)arg1 willBeginDraggingInScrollView:(UIScrollView *)arg2;
- (void)didEndTouchingVideoScrubberView:(PHVideoScrubberView *)arg1;
- (void)didBeginTouchingVideoScrubberView:(PHVideoScrubberView *)arg1;
@end
