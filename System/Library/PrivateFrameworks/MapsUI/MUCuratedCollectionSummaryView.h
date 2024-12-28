//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UILayoutGuide;
@protocol MUCuratedCollectionSummary;

__attribute__((visibility("hidden")))
@interface MUCuratedCollectionSummaryView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_descriptionLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILayoutGuide *_layoutGuide;	// 32 = 0x20
    id <MUCuratedCollectionSummary> _viewModel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000170e3a
@property(retain, nonatomic) id <MUCuratedCollectionSummary> viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateImageViewForInterfaceStyle;	// IMP=0x0000000000170d91
- (id)publisherString;	// IMP=0x00000000001708b2
- (void)_contentSizeDidChange;	// IMP=0x00000000001707e0
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;	// IMP=0x000000000017070e
- (void)_updateAppearance;	// IMP=0x00000000001705f9
- (void)_setupConstraints;	// IMP=0x000000000016fc1e
- (void)_setupSubviews;	// IMP=0x000000000016f893
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016f7a2

@end
