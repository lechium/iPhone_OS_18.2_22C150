//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MRUCrossfadeImageView, MRUVisualStylingProvider, UIImage;

__attribute__((visibility("hidden")))
@interface MRUMediaControlsModuleBackgroundView : UIView
{
    _Bool _showMaterialOnly;	// 8 = 0x8
    MRUVisualStylingProvider *_stylingProvider;	// 16 = 0x10
    long long _layout;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    double _contentScale;	// 40 = 0x28
    UIView *_materialView;	// 48 = 0x30
    UIView *_clippingView;	// 56 = 0x38
    MRUCrossfadeImageView *_gradientView;	// 64 = 0x40
    struct UIEdgeInsets _contentEdgeInsets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000676f0
@property(retain, nonatomic) MRUCrossfadeImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) UIView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showMaterialOnly; // @synthesize showMaterialOnly=_showMaterialOnly;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
- (void)updateVisibilty;	// IMP=0x00000000000671cb
- (void)prepareForReuse;	// IMP=0x00000000000671b7
@property(readonly, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) UIImage *backdropImage;
- (void)layoutSubviews;	// IMP=0x00000000000664ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000066338

@end

