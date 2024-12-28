//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSCustomTextRendering, _NSCustomTextRenderingDisplayLink, _NSTextAnimation, _NSTextAnimator;

@protocol _UICustomTextRenderController
@property(retain, nonatomic, setter=_setCustomRenderDisplayLink:) id <_NSCustomTextRenderingDisplayLink> _customRenderDisplayLink;
@property(readonly, nonatomic) struct CGRect _customRenderBounds;
@property(nonatomic) _Bool allowsTextAnimations;
@property(retain, nonatomic) id <NSCustomTextRendering> customRenderController;
- (id <_NSTextAnimator>)_animatorForTextAnimation:(id <_NSTextAnimation>)arg1 notify:(void (^)(id <_NSTextAnimator>))arg2;
- (id <_NSTextAnimator>)_animatorForTextAnimation:(id <_NSTextAnimation>)arg1;
@end
