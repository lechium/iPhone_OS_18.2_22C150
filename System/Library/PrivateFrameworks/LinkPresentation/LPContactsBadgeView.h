//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, LPContactsBadgeStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPContactsBadgeView
{
    LPContactsBadgeStyle *_style;	// 8 = 0x8
    UIView *_avatarView;	// 16 = 0x10
    UIImageView *_highlightIndicatorView;	// 24 = 0x18
    UIView *_highlightShadowView;	// 32 = 0x20
    CAShapeLayer *_maskLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000fc801
- (void)dealloc;	// IMP=0x00000000000fc7d2
- (struct CGRect)layoutExclusionRect;	// IMP=0x00000000000fc6ab
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000fc499
- (void)layoutComponentView;	// IMP=0x00000000000fbeae
- (id)initWithHost:(id)arg1 contacts:(id)arg2 highlighted:(_Bool)arg3 style:(id)arg4;	// IMP=0x00000000000fb856
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000fb848

@end

