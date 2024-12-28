//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface BroadwayCardView : UIView
{
    _Bool _paused;	// 8 = 0x8
    struct CGSize _videoSizePoints;	// 16 = 0x10
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) struct CGSize videoSizePoints; // @synthesize videoSizePoints=_videoSizePoints;
- (void)removeAnimationObserver:(id)arg1;	// IMP=0x00100000000f4ee3
- (void)addAnimationObserver:(id)arg1;	// IMP=0x00100000000f4edd
- (void)setModelContents:(id)arg1;	// IMP=0x00100000000f4ed7
- (void)setVideoURL:(id)arg1 sceneURL:(id)arg2;	// IMP=0x00100000000f4ed1

@end
