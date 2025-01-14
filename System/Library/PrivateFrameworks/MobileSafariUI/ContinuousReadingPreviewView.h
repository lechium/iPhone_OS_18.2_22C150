//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ContinuousReadingBannerView, ContinuousReadingItem, SFBannerTheme, UIImage, UIImageView, UILabel, WKWebView;

__attribute__((visibility("hidden")))
@interface ContinuousReadingPreviewView : UIView
{
    SFBannerTheme *_bannerTheme;	// 8 = 0x8
    UIView *_headerHairline;	// 16 = 0x10
    UIImageView *_snapshotView;	// 24 = 0x18
    _Bool _prefetchingDisabled;	// 32 = 0x20
    _Bool _previewingNextDocument;	// 33 = 0x21
    ContinuousReadingItem *_continuousReadingItem;	// 40 = 0x28
    WKWebView *_contentView;	// 48 = 0x30
    ContinuousReadingBannerView *_bannerView;	// 56 = 0x38
    UIImage *_documentSnapshot;	// 64 = 0x40
    UIView *_headerView;	// 72 = 0x48
    UIView *_contentBackgroundView;	// 80 = 0x50
    UILabel *_headerLabel;	// 88 = 0x58
    struct CGSize _contentViewSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000227fe5
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property(retain, nonatomic) UIImage *documentSnapshot; // @synthesize documentSnapshot=_documentSnapshot;
@property(readonly, nonatomic, getter=isPreviewingNextDocument) _Bool previewingNextDocument; // @synthesize previewingNextDocument=_previewingNextDocument;
@property(nonatomic, getter=isPrefetchingDisabled) _Bool prefetchingDisabled; // @synthesize prefetchingDisabled=_prefetchingDisabled;
@property(retain, nonatomic) ContinuousReadingBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) WKWebView *contentView; // @synthesize contentView=_contentView;
@property(readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // @synthesize continuousReadingItem=_continuousReadingItem;
- (void)_layOutContentView;	// IMP=0x0000000000227c9b
- (void)_layOutHeader;	// IMP=0x0000000000227a89
- (void)layoutSubviews;	// IMP=0x00000000002279ac
- (void)setBannerTheme:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000227725
- (void)replaceContentViewWithItsSnapshot;	// IMP=0x000000000022762e
@property(readonly, nonatomic) _Bool canShowContentView;
@property(readonly, nonatomic) double rubberBandingHeight;
@property(readonly, nonatomic) double headerHeight;
- (id)initWithContinuousReadingItem:(id)arg1 previewingNextDocument:(_Bool)arg2;	// IMP=0x0000000000226b3d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000226b2f

@end

