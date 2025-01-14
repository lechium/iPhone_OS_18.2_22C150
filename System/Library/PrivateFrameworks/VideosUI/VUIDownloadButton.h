//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, NSString, UIColor, UIImage, UIImageSymbolConfiguration, UIView, UIViewController, VUICircularProgress, VUIDownloadButtonActionHandler, VUIDownloadButtonViewModel, VUITextLayout;
@protocol VUISeasonDownloadDataSourceProvider;

__attribute__((visibility("hidden")))
@interface VUIDownloadButton
{
    _Bool _showsTextInDownloadedState;	// 8 = 0x8
    _Bool _usesDefaultConfiguration;	// 9 = 0x9
    _Bool _observingDownloadProgress;	// 10 = 0xa
    _Bool _wasDeleted;	// 11 = 0xb
    _Bool _wasCanceled;	// 12 = 0xc
    _Bool _isForLibrary;	// 13 = 0xd
    id <VUISeasonDownloadDataSourceProvider> _seasonDownloadDataSourceProvider;	// 16 = 0x10
    VUIDownloadButtonActionHandler *_actionHandler;	// 24 = 0x18
    NSString *_notDownloadStateText;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
    CDUnknownBlockType _downloadStateChangeHandler;	// 48 = 0x30
    UIImage *_notDownloadedImage;	// 56 = 0x38
    UIImage *_connectingImage;	// 64 = 0x40
    UIImage *_downloadingImage;	// 72 = 0x48
    UIImage *_downloadedImage;	// 80 = 0x50
    UIImage *_expiredDownloadImage;	// 88 = 0x58
    VUIDownloadButtonViewModel *_viewModel;	// 96 = 0x60
    VUICircularProgress *_progressIndicator;	// 104 = 0x68
    VUITextLayout *_textLayout;	// 112 = 0x70
    UIImageSymbolConfiguration *_primarySymbolConfiguration;	// 120 = 0x78
    UIView *_backgroundView;	// 128 = 0x80
    UIColor *_keyBackgroundColor;	// 136 = 0x88
    UIColor *_saturatedTintColor;	// 144 = 0x90
    CAShapeLayer *_backgroundMaskingLayer;	// 152 = 0x98
    CAShapeLayer *_backdropMaskingLayer;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000347be5
@property(retain, nonatomic) CAShapeLayer *backdropMaskingLayer; // @synthesize backdropMaskingLayer=_backdropMaskingLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundMaskingLayer; // @synthesize backgroundMaskingLayer=_backgroundMaskingLayer;
@property(retain, nonatomic) UIColor *saturatedTintColor; // @synthesize saturatedTintColor=_saturatedTintColor;
@property(retain, nonatomic) UIColor *keyBackgroundColor; // @synthesize keyBackgroundColor=_keyBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageSymbolConfiguration *primarySymbolConfiguration; // @synthesize primarySymbolConfiguration=_primarySymbolConfiguration;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool isForLibrary; // @synthesize isForLibrary=_isForLibrary;
@property(nonatomic) _Bool wasCanceled; // @synthesize wasCanceled=_wasCanceled;
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(nonatomic) _Bool observingDownloadProgress; // @synthesize observingDownloadProgress=_observingDownloadProgress;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *expiredDownloadImage; // @synthesize expiredDownloadImage=_expiredDownloadImage;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(retain, nonatomic) UIImage *downloadingImage; // @synthesize downloadingImage=_downloadingImage;
@property(retain, nonatomic) UIImage *connectingImage; // @synthesize connectingImage=_connectingImage;
@property(retain, nonatomic) UIImage *notDownloadedImage; // @synthesize notDownloadedImage=_notDownloadedImage;
@property(copy, nonatomic) CDUnknownBlockType downloadStateChangeHandler; // @synthesize downloadStateChangeHandler=_downloadStateChangeHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSString *notDownloadStateText; // @synthesize notDownloadStateText=_notDownloadStateText;
@property(nonatomic) _Bool usesDefaultConfiguration; // @synthesize usesDefaultConfiguration=_usesDefaultConfiguration;
@property(nonatomic) _Bool showsTextInDownloadedState; // @synthesize showsTextInDownloadedState=_showsTextInDownloadedState;
@property(retain, nonatomic) VUIDownloadButtonActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <VUISeasonDownloadDataSourceProvider> seasonDownloadDataSourceProvider; // @synthesize seasonDownloadDataSourceProvider=_seasonDownloadDataSourceProvider;
- (void)_stopObservingDownloadProgress:(id)arg1;	// IMP=0x000000000034785d
- (void)_startObservingDownloadProgress:(id)arg1;	// IMP=0x00000000003477e0
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000347767
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x00000000003476e2
- (void)_configureProgressIndicatorWithProperties:(id)arg1;	// IMP=0x000000000034744f
- (void)_insertProgressIndicatorWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000347290
- (id)_buttonPropertiesForState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x0000000000346ed5
- (void)_updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000346e4f
- (void)_updateImageViewTintColorWithDownloadState:(unsigned long long)arg1;	// IMP=0x0000000000346ddf
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;	// IMP=0x0000000000346b93
- (void)_updateButtonToEnqueuedWithProperties:(id)arg1;	// IMP=0x0000000000346a13
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;	// IMP=0x0000000000346893
- (void)_updateButtonToConnectingWithProperties:(id)arg1;	// IMP=0x000000000034671f
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;	// IMP=0x000000000034660d
- (void)_updateButtonToState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x0000000000346575
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;	// IMP=0x0000000000346332
- (id)_imageForDownloadState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x00000000003462c1
- (id)_expiredDownloadImage;	// IMP=0x0000000000346161
- (id)_pausedImage;	// IMP=0x0000000000346159
- (id)_downloadedImage;	// IMP=0x0000000000345ff6
- (id)_notDownloadedImage;	// IMP=0x0000000000345e94
- (void)_setImage:(id)arg1;	// IMP=0x0000000000345db4
- (_Bool)_hasTextForNotDownloadState;	// IMP=0x0000000000345ce9
- (void)_setTitleWithProperties:(id)arg1;	// IMP=0x0000000000345ab9
- (void)_layoutProgressIndicator;	// IMP=0x0000000000345a33
- (void)_clearMasks;	// IMP=0x000000000034596c
- (void)_updateMaskForProgressLayer;	// IMP=0x00000000003456aa
- (void)_setupDownloadButton;	// IMP=0x000000000034552c
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003453ac
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000345337
- (void)setScrolledNonUberPercentage:(double)arg1;	// IMP=0x00000000003452ae
- (void)updateWithPlayable:(id)arg1 textLayout:(id)arg2;	// IMP=0x000000000034525b
- (void)updateWithAssetController:(id)arg1;	// IMP=0x00000000003451f2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000344c18
- (void)vui_didMoveToWindow;	// IMP=0x0000000000344b68
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000344514
- (void)revertTintColor;	// IMP=0x0000000000344458
- (void)saturateTintColorAndBackgroundColor;	// IMP=0x00000000003443a0
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000344301
- (void)configureWithLayoutProperties;	// IMP=0x000000000034410e
- (void)configureActionHandler;	// IMP=0x0000000000343f10
- (void)dealloc;	// IMP=0x0000000000343c4f
- (id)initTVShowDownloadButtonWithType:(unsigned long long)arg1;	// IMP=0x0000000000343b47
- (id)initWithMediaEntity:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000343a97
- (id)initWithAssetController:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000343a30
- (id)initWithDownloadButtonViewModel:(id)arg1 isForLibrary:(_Bool)arg2 type:(unsigned long long)arg3 textLayout:(id)arg4;	// IMP=0x000000000034385b
- (id)initWithPlayable:(id)arg1 type:(unsigned long long)arg2 textLayout:(id)arg3;	// IMP=0x0000000000343678

@end

