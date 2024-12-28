//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSTimer, UIView;

__attribute__((visibility("hidden")))
@interface AVScrollingObserver : NSObject
{
    UIView *_view;	// 8 = 0x8
    NSHashTable *_observedScrollViews;	// 16 = 0x10
    NSHashTable *_delegates;	// 24 = 0x18
    NSTimer *_scrollingDidEndTimer;	// 32 = 0x20
    _Bool _scrolling;	// 40 = 0x28
    _Bool _scrollingQuickly;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000000c63d7
@property(nonatomic, getter=isScrollingQuickly) _Bool scrollingQuickly; // @synthesize scrollingQuickly=_scrollingQuickly;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
- (void)_updateScrollingStatus;	// IMP=0x00000000000c60fe
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00000000000c5f6d
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000c5e8b
- (void)addDelegate:(id)arg1;	// IMP=0x00000000000c5da9
- (void)update;	// IMP=0x00000000000c5ab0
- (void)dealloc;	// IMP=0x00000000000c593b
- (id)initWithView:(id)arg1;	// IMP=0x00000000000c5876

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
