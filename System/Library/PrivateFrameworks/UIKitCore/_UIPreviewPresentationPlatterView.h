//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationPlatterView : UIView
{
    _Bool _dropShadowEnabled;	// 160 = 0xa0
    UIView *_contentView;	// 168 = 0xa8
    _UIPreviewPresentationEffectView *_contentEffectView;	// 176 = 0xb0
    _UIPreviewPresentationEffectView *_contentClipView;	// 184 = 0xb8
    UIView *_contentTransformView;	// 192 = 0xc0
    UIView *_contentShadowView;	// 200 = 0xc8
    struct CGSize _contentSize;	// 208 = 0xd0
    struct CGSize _contentClippingSize;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000012491f8
@property(retain, nonatomic) UIView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView; // @synthesize contentClipView=_contentClipView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView; // @synthesize contentEffectView=_contentEffectView;
@property(nonatomic, getter=isDropShadowEnabled) _Bool dropShadowEnabled; // @synthesize dropShadowEnabled=_dropShadowEnabled;
@property(nonatomic) struct CGSize contentClippingSize; // @synthesize contentClippingSize=_contentClippingSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;	// IMP=0x00000000012490ed
- (void)layoutSubviews;	// IMP=0x0000000001248a59
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (id)initWithContentView:(id)arg1;	// IMP=0x000000000124844d

@end
