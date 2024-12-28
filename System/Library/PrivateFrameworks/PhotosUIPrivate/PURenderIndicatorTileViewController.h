//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, NSUndoManager, PLRoundProgressView, PUAssetSharedViewModel, PXOperationStatus, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PURenderIndicatorTileViewController : PUTileViewController
{
    _Bool _needsUpdateStatus;	// 8 = 0x8
    _Bool _needsUpdateSizeClass;	// 9 = 0x9
    _Bool _needsUpdateStatusViews;	// 10 = 0xa
    _Bool _isProgressViewVisible;	// 11 = 0xb
    _Bool _willShowProgressAfterDelay;	// 12 = 0xc
    PUAssetSharedViewModel *_assetSharedViewModel;	// 16 = 0x10
    NSUndoManager *_undoManager;	// 24 = 0x18
    PXOperationStatus *_status;	// 32 = 0x20
    PXOperationStatus *_editActionStatus;	// 40 = 0x28
    long long _sizeClass;	// 48 = 0x30
    UIView *_roundedBackgroundView;	// 56 = 0x38
    UILabel *_renderingLabel;	// 64 = 0x40
    PLRoundProgressView *_progressView;	// 72 = 0x48
    UIButton *_errorButton;	// 80 = 0x50
    double _renderLabelTextWidth;	// 88 = 0x58
    struct CGSize _progressIndicatorSize;	// 96 = 0x60
}

+ (_Bool)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)arg1;	// IMP=0x00100000002d6bd5
+ (id)_loadErrorIconForSizeClass:(long long)arg1;	// IMP=0x00100000002d6ae1
+ (struct CGSize)renderIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x00100000002d6abe
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x00100000002d6aad
- (void).cxx_destruct;	// IMP=0x00000000002d671c
@property(nonatomic) _Bool willShowProgressAfterDelay; // @synthesize willShowProgressAfterDelay=_willShowProgressAfterDelay;
@property(nonatomic) double renderLabelTextWidth; // @synthesize renderLabelTextWidth=_renderLabelTextWidth;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) _Bool isProgressViewVisible; // @synthesize isProgressViewVisible=_isProgressViewVisible;
@property(retain, nonatomic) PLRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *renderingLabel; // @synthesize renderingLabel=_renderingLabel;
@property(retain, nonatomic) UIView *roundedBackgroundView; // @synthesize roundedBackgroundView=_roundedBackgroundView;
@property(nonatomic) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(retain, nonatomic) PXOperationStatus *editActionStatus; // @synthesize editActionStatus=_editActionStatus;
@property(copy, nonatomic) PXOperationStatus *status; // @synthesize status=_status;
@property(nonatomic) _Bool needsUpdateStatusViews; // @synthesize needsUpdateStatusViews=_needsUpdateStatusViews;
@property(nonatomic) _Bool needsUpdateSizeClass; // @synthesize needsUpdateSizeClass=_needsUpdateSizeClass;
@property(nonatomic) _Bool needsUpdateStatus; // @synthesize needsUpdateStatus=_needsUpdateStatus;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItemIdentifier:(id)arg3;	// IMP=0x00000000002d641e
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000002d6375
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000002d62ef
- (void)_updateSubviewOrdering;	// IMP=0x00000000002d6249
- (void)_updateStatusViewsIfNeeded;	// IMP=0x00000000002d56f8
- (void)_invalidateStatusViews;	// IMP=0x00000000002d56c5
- (void)_updateSizeClassIfNeeded;	// IMP=0x00000000002d55be
- (void)_invalidateSizeClass;	// IMP=0x00000000002d558b
- (void)_updateStatusIfNeeded;	// IMP=0x00000000002d54e1
- (void)_invalidateStatus;	// IMP=0x00000000002d545a
- (void)_setNeedsUpdate;	// IMP=0x00000000002d5454
- (_Bool)_needsUpdate;	// IMP=0x00000000002d5407
- (void)_updateIfNeeded;	// IMP=0x00000000002d5324
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d4f77
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002d4f62
- (void)setProgressViewVisible:(_Bool)arg1;	// IMP=0x00000000002d4f4e
- (void)_updateViewFramesForCollapseState:(_Bool)arg1;	// IMP=0x00000000002d4b5a
- (struct CGRect)_expandedBackgroundViewFrame;	// IMP=0x00000000002d4ad1
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000002d4999
- (void)becomeReusable;	// IMP=0x00000000002d47ff
- (void)viewDidLoad;	// IMP=0x00000000002d479c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
