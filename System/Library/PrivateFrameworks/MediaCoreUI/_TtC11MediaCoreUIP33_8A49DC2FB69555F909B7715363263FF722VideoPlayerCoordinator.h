//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11MediaCoreUIP33_8A49DC2FB69555F909B7715363263FF722VideoPlayerCoordinator : NSObject
{
    MISSING_TYPE *videoSource;	// 8 = 0x8
    MISSING_TYPE *deviceMetrics;	// 16 = 0x10
    MISSING_TYPE *playerStyle;	// 89 = 0x59
    MISSING_TYPE *selectedContent;	// 96 = 0x60
    MISSING_TYPE *updateContentSelection;	// 112 = 0x70
    MISSING_TYPE *aspectRatioObserver;	// 128 = 0x80
    MISSING_TYPE *playerSizeObserver;	// 136 = 0x88
    MISSING_TYPE *orientationChangeObserver;	// 144 = 0x90
    MISSING_TYPE *tapGestureRecognizer;	// 152 = 0x98
    MISSING_TYPE *pinchGestureRecognizer;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000001db7f0
- (id)init;	// IMP=0x00000000001db790
- (void)videoOutput:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x00000000001db730
- (void)videoOutput:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x00000000001db710
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x00000000001db6a0
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x00000000001de780
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001db620
- (void)didPinch:(id)arg1;	// IMP=0x00000000001db440
- (void)didTap;	// IMP=0x00000000001db2b0

@end

