//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI21BarCompressionManager : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *isEnabled;	// 24 = 0x18
    MISSING_TYPE *shouldExpandAtBottom;	// 25 = 0x19
    MISSING_TYPE *$__lazy_storage_$_state;	// 26 = 0x1a
    MISSING_TYPE *scrollView;	// 32 = 0x20
    MISSING_TYPE *proxyMultiDelegate;	// 40 = 0x28
    MISSING_TYPE *barAnimator;	// 72 = 0x48
    MISSING_TYPE *navigationBarAnimation;	// 80 = 0x50
    MISSING_TYPE *tabBarAnimation;	// 88 = 0x58
    MISSING_TYPE *toolbarAnimation;	// 96 = 0x60
    MISSING_TYPE *barState;	// 104 = 0x68
    MISSING_TYPE *sceneStateManager;	// 112 = 0x70
    MISSING_TYPE *observingToken;	// 152 = 0x98
    MISSING_TYPE *lastContentOffset;	// 160 = 0xa0
    MISSING_TYPE *initialContentOffset;	// 176 = 0xb0
    MISSING_TYPE *scrollDebounce;	// 192 = 0xc0
    MISSING_TYPE *_lastBarCompressEvent;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000f2581
- (id)init;	// IMP=0x00000000000f254b
- (void)voiceOverStatusDidChange;	// IMP=0x00000000000f1de0
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x00000000000f308a
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x00000000000f2f90
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000000f2efc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000f2e6a
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000f26e7
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;	// IMP=0x00000000000f39c8
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;	// IMP=0x00000000000f373b
- (_Bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;	// IMP=0x00000000000f3416
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;	// IMP=0x00000000000f32d6

@end

