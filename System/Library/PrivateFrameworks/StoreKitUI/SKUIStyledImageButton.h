//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStyledImageButton : UIControl
{
    _Bool _didInitialHighlightForTouch;	// 8 = 0x8
    SKUIImageView *_imageView;	// 16 = 0x10
    SKUIImageView *_additionalImageView;	// 24 = 0x18
    struct UIEdgeInsets _bigHitInsets;	// 32 = 0x20
    _Bool _useBigHitTarget;	// 64 = 0x40
    struct UIEdgeInsets _hitRectInsets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002a9877
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(readonly, nonatomic) SKUIImageView *additionalImageView; // @synthesize additionalImageView=_additionalImageView;
@property(nonatomic) _Bool useBigHitTarget; // @synthesize useBigHitTarget=_useBigHitTarget;
@property(readonly, nonatomic) SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a979c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002a9687
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002a95cd
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a957e
- (void)layoutSubviews;	// IMP=0x00000000002a944f
- (struct CGRect)hitRect;	// IMP=0x00000000002a9378
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002a933e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a9186

@end
