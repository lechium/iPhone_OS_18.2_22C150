//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SUUISlideshowAnimator : NSObject
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013561c
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000001355fb
- (void)animateTransition:(id)arg1;	// IMP=0x00000000001350f3
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000001350e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

