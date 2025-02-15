//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerVolumeAnimator : NSObject
{
    _Bool _animatingTowardsZero;	// 8 = 0x8
    _Bool _animatingAwayFromZero;	// 9 = 0x9
    AVPlayerController *_playerController;	// 16 = 0x10
    double _volumeToRestore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000052e7b
@property(nonatomic, getter=isAnimatingAwayFromZero) _Bool animatingAwayFromZero; // @synthesize animatingAwayFromZero=_animatingAwayFromZero;
@property(nonatomic, getter=isAnimatingTowardsZero) _Bool animatingTowardsZero; // @synthesize animatingTowardsZero=_animatingTowardsZero;
@property(nonatomic) double volumeToRestore; // @synthesize volumeToRestore=_volumeToRestore;
@property(readonly, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void)restoreVolumeIfNeeded;	// IMP=0x0000000000052d88
- (void)setProgressAwayFromZero:(double)arg1;	// IMP=0x0000000000052bb9
- (void)setProgressTowardsZero:(double)arg1;	// IMP=0x0000000000052a40
- (_Bool)canAnimateVolumeAwayFromZero;	// IMP=0x0000000000052931
- (_Bool)canAnimateVolumeTowardsZero;	// IMP=0x0000000000052822
- (_Bool)currentRouteHasVolumeControl;	// IMP=0x00000000000527d7
- (id)initWithPlayerController:(id)arg1;	// IMP=0x000000000005276c

@end

