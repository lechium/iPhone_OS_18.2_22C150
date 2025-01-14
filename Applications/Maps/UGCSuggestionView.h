//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUCompositionalStackLayout, MUSizeLayout, TwoLinesContentView, UGCRatingCategoryLikeDislikeView, UGCSuggestionViewModel, UIImageView, UILabel;
@protocol UGCSuggestionViewDelegate;

@interface UGCSuggestionView : UIView
{
    TwoLinesContentView *_twoLinesContentView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    MUSizeLayout *_imageSizeLayout;	// 40 = 0x28
    unsigned long long _imageFetchCount;	// 48 = 0x30
    UGCRatingCategoryLikeDislikeView *_likeDislikeView;	// 56 = 0x38
    MUCompositionalStackLayout *_compositionalStackLayout;	// 64 = 0x40
    UGCSuggestionViewModel *_viewModel;	// 72 = 0x48
    id <UGCSuggestionViewDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000091a94a
@property(retain, nonatomic) id <UGCSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UGCSuggestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)likeDislikeViewDidSelectDislike:(id)arg1;	// IMP=0x001000000091a8c8
- (void)likeDislikeViewDidSelectLike:(id)arg1;	// IMP=0x001000000091a87c
- (void)_suggestionTapped;	// IMP=0x001000000091a830
- (void)_updateFromViewModel;	// IMP=0x001000000091a4ed
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000091a3ba
- (id)_contentLayoutGroup;	// IMP=0x001000000091a193
- (void)_updateConstraints;	// IMP=0x001000000091a13f
- (void)_setupConstraints;	// IMP=0x0010000000919fce
- (void)_setupSubviews;	// IMP=0x0010000000919d0f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000919c16

@end

