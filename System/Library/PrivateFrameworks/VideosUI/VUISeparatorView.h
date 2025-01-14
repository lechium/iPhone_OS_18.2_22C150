//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface VUISeparatorView
{
    UIColor *_color;	// 8 = 0x8
    UIColor *_darkColor;	// 16 = 0x10
    double _lineHeight;	// 24 = 0x18
    UIView *_line;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b6290
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)_updateLineColor;	// IMP=0x00000000001b61a9
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001b6112
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001b60f0
- (id)lineColor;	// IMP=0x00000000001b6007
- (void)initializeVUISeparatorView;	// IMP=0x00000000001b5f33
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b5da2

@end

