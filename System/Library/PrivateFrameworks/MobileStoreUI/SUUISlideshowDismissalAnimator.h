//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SUUISlideshowDismissalAnimator : NSObject
{
    UIImageView *_imageView;	// 8 = 0x8
    struct CGRect _imageRect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000135b7b
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x0000000000135b2c
- (void)animateTransition:(id)arg1;	// IMP=0x000000000013563a
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000013562c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

