//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UIAssistantBarSeparatorView : UIView
{
    UIView *_innerSeparatorView;	// 8 = 0x8
}

+ (double)preferredWidth;	// IMP=0x0060000000b98606
- (void).cxx_destruct;	// IMP=0x0000000000b98a6f
@property(retain, nonatomic) UIView *innerSeparatorView; // @synthesize innerSeparatorView=_innerSeparatorView;
- (void)layoutSubviews;	// IMP=0x0000000000b98894
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b98865
- (void)didMoveToWindow;	// IMP=0x0000000000b98824
- (void)_updateVisualStyle;	// IMP=0x0000000000b98739
- (_Bool)_usesLightStyle;	// IMP=0x0000000000b986f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b98614

@end

