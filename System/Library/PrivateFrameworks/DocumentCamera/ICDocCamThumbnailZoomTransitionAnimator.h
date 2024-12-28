//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    UIImage *_thumbnailImage;	// 16 = 0x10
    NSIndexPath *_indexPath;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000aa342
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (_Bool)_shouldCrossFadeNavigationBar;	// IMP=0x00000000000aa2c3
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000a8769
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000a8757
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a8685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
