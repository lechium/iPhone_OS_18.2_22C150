//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVButton, AVMobileChromelessControlsStyleSheet, AVMobileContentTag, AVMobileContentTagView, CAGradientLayer, NSAttributedString, NSMutableAttributedString, UILabel, UIView;
@protocol AVMobileTitlebarViewDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileTitlebarView
{
    UIView *_contentContainerView;	// 8 = 0x8
    CAGradientLayer *_contentContainerViewMask;	// 16 = 0x10
    AVMobileContentTagView *_contentTagView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    AVButton *_infoAffordance;	// 48 = 0x30
    NSMutableAttributedString *_titleLabelString;	// 56 = 0x38
    NSMutableAttributedString *_subtitleLabelString;	// 64 = 0x40
    _Bool _showsInfoAffordance;	// 72 = 0x48
    _Bool _showsTitle;	// 73 = 0x49
    _Bool _showsSubtitle;	// 74 = 0x4a
    _Bool _showsContentTag;	// 75 = 0x4b
    AVMobileContentTag *_contentTag;	// 80 = 0x50
    AVMobileChromelessControlsStyleSheet *_styleSheet;	// 88 = 0x58
    NSAttributedString *_subtitle;	// 96 = 0x60
    NSAttributedString *_title;	// 104 = 0x68
    id <AVMobileTitlebarViewDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000343ee
@property(nonatomic) _Bool showsContentTag; // @synthesize showsContentTag=_showsContentTag;
@property(nonatomic) _Bool showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle=_showsTitle;
@property(retain, nonatomic) id <AVMobileTitlebarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) _Bool showsInfoAffordance; // @synthesize showsInfoAffordance=_showsInfoAffordance;
@property(retain, nonatomic) AVMobileContentTag *contentTag; // @synthesize contentTag=_contentTag;
- (void)_infoAffordancePressed:(id)arg1;	// IMP=0x00000000000342c9
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;	// IMP=0x00000000000342b7
- (void)layoutSubviews;	// IMP=0x00000000000332a1
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000330ac
- (void)didMoveToWindow;	// IMP=0x0000000000033080
- (double)titleLabelCenterYOffset;	// IMP=0x0000000000032ff8
- (id)initWithStyleSheet:(id)arg1;	// IMP=0x000000000003293d

@end

