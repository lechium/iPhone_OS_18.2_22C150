//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealAnimationController : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    UIViewPropertyAnimator *_ascentDescentAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003beec1
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator; // @synthesize ascentDescentAnimator=_ascentDescentAnimator;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000003be8f4
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000003be8a4
- (id)initWithDirection:(_Bool)arg1;	// IMP=0x00000000003be764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
