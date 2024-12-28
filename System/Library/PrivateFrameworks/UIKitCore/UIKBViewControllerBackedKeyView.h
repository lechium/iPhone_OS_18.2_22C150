//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIKBScreenTraits, UIViewController;

__attribute__((visibility("hidden")))
@interface UIKBViewControllerBackedKeyView : UIKBKeyView
{
    UIViewController *_childViewController;	// 160 = 0xa0
    _Bool _hasAncestorViewController;	// 168 = 0xa8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x00600000003e6de3
- (void).cxx_destruct;	// IMP=0x00000000003e7490
- (id)contentViewController;	// IMP=0x00000000003e7488
- (void)layoutSubviews;	// IMP=0x00000000003e7447
- (void)displayLayer:(id)arg1;	// IMP=0x00000000003e7435
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000003e73f4
- (void)addChildViewControllerIfNeeded;	// IMP=0x00000000003e6f9a
- (void)setDrawFrame:(struct CGRect)arg1;	// IMP=0x00000000003e6f48
- (void)dealloc;	// IMP=0x00000000003e6e91
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x00000000003e6deb

// Remaining properties
@property(retain, nonatomic) UIKBScreenTraits *screenTraits;

@end
