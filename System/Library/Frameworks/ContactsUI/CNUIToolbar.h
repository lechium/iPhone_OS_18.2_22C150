//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CNUIToolbar : UIView
{
    _Bool _isAnimating;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSArray *_buttons;	// 24 = 0x18
    UIView *_border;	// 32 = 0x20
    UIVisualEffectView *_visualEffectView;	// 40 = 0x28
}

+ (double)defaultToolBarHeight;	// IMP=0x006000000013acb4
- (void).cxx_destruct;	// IMP=0x000000000013ac48
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIView *border; // @synthesize border=_border;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)buttonPressed:(id)arg1;	// IMP=0x000000000013aad3
- (void)setEnabled:(_Bool)arg1 forItem:(id)arg2;	// IMP=0x000000000013a9c1
- (_Bool)isEnabledForItem:(id)arg1;	// IMP=0x000000000013a8e3
- (void)layoutSubviews;	// IMP=0x000000000013a750
- (double)borderWidth;	// IMP=0x000000000013a6aa
- (void)setupView;	// IMP=0x000000000013a355
- (void)setupBorder;	// IMP=0x000000000013a258
- (id)buttonForItem:(id)arg1;	// IMP=0x000000000013a0fa
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000139fd0

@end
