//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMPreviewView;

@protocol CAMViewfinderTransitionable
@property(readonly, nonatomic) long long desiredAspectRatio;
@property(readonly, nonatomic) CAMPreviewView *previewView;
- (void)prepareForResumingUsingCrossfade;
- (void)removeInflightBlurAnimations;
@end

