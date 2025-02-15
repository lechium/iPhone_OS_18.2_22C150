//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLPreviewScrollView;

@protocol QLPreviewScrollViewZoomDelegate <NSObject>

@optional
- (_Bool)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(QLPreviewScrollView *)arg1;
- (double)previewScrollView:(QLPreviewScrollView *)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (void)previewScrollViewDidZoom:(QLPreviewScrollView *)arg1;
- (void)previewScrollViewDidScroll:(QLPreviewScrollView *)arg1;
- (void)previewScrollView:(QLPreviewScrollView *)arg1 didEndZoomingAtScale:(double)arg2;
- (void)previewScrollViewWillBeginZooming:(QLPreviewScrollView *)arg1;
@end

