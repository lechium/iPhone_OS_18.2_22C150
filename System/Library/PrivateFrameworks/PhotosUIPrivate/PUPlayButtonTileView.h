//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol PXVideoOverlayButton;

__attribute__((visibility("hidden")))
@interface PUPlayButtonTileView : UIView
{
    UIView<PXVideoOverlayButton> *_button;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002dce79
@property(readonly, nonatomic) UIView<PXVideoOverlayButton> *button; // @synthesize button=_button;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002dcde5
- (id)init;	// IMP=0x00000000002dcd6b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002dccf1
- (void)setTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x00000000002dcc7a
@property(nonatomic) _Bool showAsPause;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002dcb9c
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000002dca0e

@end
