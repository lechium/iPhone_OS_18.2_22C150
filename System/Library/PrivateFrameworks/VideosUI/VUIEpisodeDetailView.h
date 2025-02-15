//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSString, UIFont, VUIFocusableTextView, VUILabel, VUILibraryEpisodeFrameView, VUIMediaItem, VUIMediaTagsView;
@protocol VUIEpisodeDetailViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailView : UIScrollView
{
    id <VUIEpisodeDetailViewDelegate> _episodeViewDelegate;	// 8 = 0x8
    VUILibraryEpisodeFrameView *_imageFrameView;	// 16 = 0x10
    VUILabel *_episodeTitleLabel;	// 24 = 0x18
    VUILabel *_seasonNumberLabel;	// 32 = 0x20
    VUILabel *_episodeNumberLabel;	// 40 = 0x28
    VUILabel *_releaseDateLabel;	// 48 = 0x30
    VUILabel *_dotSeparatorLabel;	// 56 = 0x38
    VUIFocusableTextView *_contentDescriptionView;	// 64 = 0x40
    UIFont *_contentDescriptionFont;	// 72 = 0x48
    VUIMediaItem *_mediaItem;	// 80 = 0x50
    VUIMediaTagsView *_mediaBadgeTagsView;	// 88 = 0x58
}

+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(struct CGSize)arg3;	// IMP=0x001000000027f9f7
+ (struct CGSize)_episodeFrameImageSizeForDetailView:(id)arg1 withViewSize:(struct CGSize)arg2;	// IMP=0x001000000027f996
- (void).cxx_destruct;	// IMP=0x0000000000282153
@property(retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView; // @synthesize mediaBadgeTagsView=_mediaBadgeTagsView;
@property(retain, nonatomic) VUIMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) UIFont *contentDescriptionFont; // @synthesize contentDescriptionFont=_contentDescriptionFont;
@property(retain, nonatomic) VUIFocusableTextView *contentDescriptionView; // @synthesize contentDescriptionView=_contentDescriptionView;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property(retain, nonatomic) VUILabel *episodeNumberLabel; // @synthesize episodeNumberLabel=_episodeNumberLabel;
@property(retain, nonatomic) VUILabel *seasonNumberLabel; // @synthesize seasonNumberLabel=_seasonNumberLabel;
@property(retain, nonatomic) VUILabel *episodeTitleLabel; // @synthesize episodeTitleLabel=_episodeTitleLabel;
@property(retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // @synthesize imageFrameView=_imageFrameView;
@property(nonatomic) __weak id <VUIEpisodeDetailViewDelegate> episodeViewDelegate; // @synthesize episodeViewDelegate=_episodeViewDelegate;
- (double)_seasonMargin;	// IMP=0x0000000000281fcd
- (void)_configureViewElementsForAX;	// IMP=0x0000000000281f44
- (void)didTapButtonForEpisodeFrameView:(id)arg1;	// IMP=0x0000000000281f10
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x0000000000281e8d
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;	// IMP=0x0000000000281dc9
- (void)_configureDotSeparator;	// IMP=0x0000000000281c7b
- (void)updateProgress;	// IMP=0x0000000000281c0b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002818f0
- (void)layoutSubviews;	// IMP=0x0000000000280ab2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002804ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

