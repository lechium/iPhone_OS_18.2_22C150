//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor, UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSeparatorView : UIView
{
    UIVisualEffectView *_separatorVisualEffectView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000012045b0
@property(retain, nonatomic) UIVisualEffectView *separatorVisualEffectView; // @synthesize separatorVisualEffectView=_separatorVisualEffectView;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
@property(retain, nonatomic) UIColor *separatorColor;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)layoutSubviews;	// IMP=0x00000000012043a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012042ad

@end

