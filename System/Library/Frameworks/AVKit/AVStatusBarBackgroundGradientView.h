//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientView : UIView
{
    AVStatusBarBackgroundGradientViewSubview *_gradientView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00600000000692f5
- (void).cxx_destruct;	// IMP=0x00000000000692e2
@property(retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView; // @synthesize gradientView=_gradientView;
- (void)layoutSubviews;	// IMP=0x0000000000069218
- (void)setAlpha:(double)arg1;	// IMP=0x000000000006904f
- (double)alpha;	// IMP=0x0000000000068fff

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end
