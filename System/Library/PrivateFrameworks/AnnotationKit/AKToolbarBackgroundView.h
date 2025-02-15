//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffectView;

@interface AKToolbarBackgroundView : UIView
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    _Bool _translucent;	// 16 = 0x10
    UIView *_separatorLine;	// 24 = 0x18
    UIColor *_separatorColor;	// 32 = 0x20
    long long _blurStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000102b33
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
- (void)_hostSeparatorInView:(id)arg1;	// IMP=0x0000000000102865
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;	// IMP=0x0000000000102851
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000010283d
- (void)updateSeparatorVisibility;	// IMP=0x0000000000102474
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000102433
- (void)setOpaque:(_Bool)arg1;	// IMP=0x00000000001023f2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001021a4

@end

