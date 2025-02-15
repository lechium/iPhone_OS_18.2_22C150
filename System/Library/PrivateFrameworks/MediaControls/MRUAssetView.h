//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MRUAsset, MRUCAPackageView, MRUVisualStylingProvider, NSString, UIImageSymbolConfiguration, UIImageView;

__attribute__((visibility("hidden")))
@interface MRUAssetView : UIView
{
    MRUAsset *_asset;	// 8 = 0x8
    NSString *_glyphState;	// 16 = 0x10
    MRUVisualStylingProvider *_stylingProvider;	// 24 = 0x18
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 32 = 0x20
    double _packageScale;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    MRUCAPackageView *_packageView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c249f
@property(retain, nonatomic) MRUCAPackageView *packageView; // @synthesize packageView=_packageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double packageScale; // @synthesize packageScale=_packageScale;
@property(retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) MRUAsset *asset; // @synthesize asset=_asset;
- (void)updateVisualStyling;	// IMP=0x00000000000c23a4
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000c2392
- (void)setTintColor:(id)arg1;	// IMP=0x00000000000c2308
- (void)layoutSubviews;	// IMP=0x00000000000c1fd7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c1ee8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

