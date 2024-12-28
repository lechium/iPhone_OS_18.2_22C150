//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVPMediaItemSkipInfo, VUIButton, VUIImageView, VUIMediaTagsView, VUIMediaTagsViewLayout, VUITextLayout, VUIUpNextButton;
@protocol VUIPromoMetadataViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIPromoMetadataView
{
    _Bool _onlySkipButtonAvailable;	// 8 = 0x8
    id <VUIPromoMetadataViewDelegate> _delegate;	// 16 = 0x10
    TVPMediaItemSkipInfo *_skipInfo;	// 24 = 0x18
    VUIImageView *_titleImageView;	// 32 = 0x20
    VUIButton *_skipButton;	// 40 = 0x28
    VUIUpNextButton *_upNextButton;	// 48 = 0x30
    VUIMediaTagsView *_mediaTagsView;	// 56 = 0x38
    NSString *_addToUpNextSymbolName;	// 64 = 0x40
    NSString *_addedToUpNextSymbolName;	// 72 = 0x48
    VUIMediaTagsViewLayout *_mediaTagsViewLayout;	// 80 = 0x50
    VUITextLayout *_buttonTextLayout;	// 88 = 0x58
    double _imageViewBottomMargin;	// 96 = 0x60
    double _mediaTagsViewBottomMargin;	// 104 = 0x68
    double _upNextButtonRightMargin;	// 112 = 0x70
    double _defaultButtonHeight;	// 120 = 0x78
    double _maxButtonWidth;	// 128 = 0x80
    double _minButtonWidth;	// 136 = 0x88
    VUIButton *_computationOnlyButton;	// 144 = 0x90
    struct CGSize _expectedImageSize;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000001fd2a7
@property(retain, nonatomic) VUIButton *computationOnlyButton; // @synthesize computationOnlyButton=_computationOnlyButton;
@property(nonatomic) double minButtonWidth; // @synthesize minButtonWidth=_minButtonWidth;
@property(nonatomic) double maxButtonWidth; // @synthesize maxButtonWidth=_maxButtonWidth;
@property(nonatomic) double defaultButtonHeight; // @synthesize defaultButtonHeight=_defaultButtonHeight;
@property(nonatomic) double upNextButtonRightMargin; // @synthesize upNextButtonRightMargin=_upNextButtonRightMargin;
@property(nonatomic) double mediaTagsViewBottomMargin; // @synthesize mediaTagsViewBottomMargin=_mediaTagsViewBottomMargin;
@property(nonatomic) double imageViewBottomMargin; // @synthesize imageViewBottomMargin=_imageViewBottomMargin;
@property(nonatomic) struct CGSize expectedImageSize; // @synthesize expectedImageSize=_expectedImageSize;
@property(retain, nonatomic) VUITextLayout *buttonTextLayout; // @synthesize buttonTextLayout=_buttonTextLayout;
@property(retain, nonatomic) VUIMediaTagsViewLayout *mediaTagsViewLayout; // @synthesize mediaTagsViewLayout=_mediaTagsViewLayout;
@property(retain, nonatomic) NSString *addedToUpNextSymbolName; // @synthesize addedToUpNextSymbolName=_addedToUpNextSymbolName;
@property(retain, nonatomic) NSString *addToUpNextSymbolName; // @synthesize addToUpNextSymbolName=_addToUpNextSymbolName;
@property(nonatomic) _Bool onlySkipButtonAvailable; // @synthesize onlySkipButtonAvailable=_onlySkipButtonAvailable;
@property(retain, nonatomic) VUIMediaTagsView *mediaTagsView; // @synthesize mediaTagsView=_mediaTagsView;
@property(retain, nonatomic) VUIUpNextButton *upNextButton; // @synthesize upNextButton=_upNextButton;
@property(retain, nonatomic) VUIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) VUIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) TVPMediaItemSkipInfo *skipInfo; // @synthesize skipInfo=_skipInfo;
@property(nonatomic) __weak id <VUIPromoMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_upNextButtonTapped:(id)arg1;	// IMP=0x00000000001fcf77
- (void)_skipButtonTapped:(id)arg1;	// IMP=0x00000000001fcf0e
- (id)_createComputationOnlyButton;	// IMP=0x00000000001fcd84
- (void)_configureBasicLayoutForButton:(id)arg1;	// IMP=0x00000000001fcc57
- (void)_configureLayout;	// IMP=0x00000000001fcac5
- (id)_createUpNextButtonWithPromoInfo:(id)arg1;	// IMP=0x00000000001fc41c
- (id)_createSkipButtonWithTitle:(id)arg1;	// IMP=0x00000000001fc1de
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001fb90c
- (void)updateWithInfo:(id)arg1;	// IMP=0x00000000001fb11b
- (id)init;	// IMP=0x00000000001fb08d

@end
