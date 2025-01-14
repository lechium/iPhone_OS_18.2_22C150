//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSObject, NSString, PLRoundProgressView, PUAssetSharedViewModel, PUAssetViewModel, PUBrowsingViewModel, PXOperationStatus, UIButton, UILabel;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PUProgressIndicatorTileViewController : PUTileViewController
{
    _Bool __needsUpdateProgressViewStyle;	// 8 = 0x8
    _Bool __needsUpdateStatus;	// 9 = 0x9
    _Bool __needsUpdateSizeClass;	// 10 = 0xa
    _Bool __needsUpdateStatusViews;	// 11 = 0xb
    _Bool __isProgressViewVisible;	// 12 = 0xc
    _Bool __didStartProgressLogging;	// 13 = 0xd
    _Bool _isProgressViewAnimatingOut;	// 14 = 0xe
    PUAssetSharedViewModel *_assetSharedViewModel;	// 16 = 0x10
    CDUnknownBlockType _errorPresenter;	// 24 = 0x18
    PUAssetViewModel *_assetViewModel;	// 32 = 0x20
    PUBrowsingViewModel *_browsingViewModel;	// 40 = 0x28
    long long __progressViewStyle;	// 48 = 0x30
    PXOperationStatus *__status;	// 56 = 0x38
    long long __sizeClass;	// 64 = 0x40
    PLRoundProgressView *__progressView;	// 72 = 0x48
    UIButton *__errorButton;	// 80 = 0x50
    UILabel *__debugProgressLabel;	// 88 = 0x58
}

+ (id)_loadErrorIconForSizeClass:(long long)arg1;	// IMP=0x001000000053946f
+ (struct UIEdgeInsets)progressIndicatorIconInsetsForSizeClass:(long long)arg1;	// IMP=0x00100000005393e3
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x00100000005393ab
+ (struct CGSize)progressIndicatorIconSizeForSizeClass:(long long)arg1;	// IMP=0x0010000000539351
- (void).cxx_destruct;	// IMP=0x00000000005391b3
@property(nonatomic) _Bool isProgressViewAnimatingOut; // @synthesize isProgressViewAnimatingOut=_isProgressViewAnimatingOut;
@property(nonatomic, getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:) _Bool _didStartProgressLogging; // @synthesize _didStartProgressLogging=__didStartProgressLogging;
@property(retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // @synthesize _debugProgressLabel=__debugProgressLabel;
@property(retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // @synthesize _errorButton=__errorButton;
@property(nonatomic, setter=_setProgressViewVisible:) _Bool _isProgressViewVisible; // @synthesize _isProgressViewVisible=__isProgressViewVisible;
@property(retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // @synthesize _progressView=__progressView;
@property(nonatomic, setter=_setSizeClass:) long long _sizeClass; // @synthesize _sizeClass=__sizeClass;
@property(copy, nonatomic, setter=_setStatus:) PXOperationStatus *_status; // @synthesize _status=__status;
@property(nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle; // @synthesize _progressViewStyle=__progressViewStyle;
@property(nonatomic, setter=_setNeedsUpdateStatusViews:) _Bool _needsUpdateStatusViews; // @synthesize _needsUpdateStatusViews=__needsUpdateStatusViews;
@property(nonatomic, setter=_setNeedsUpdateSizeClass:) _Bool _needsUpdateSizeClass; // @synthesize _needsUpdateSizeClass=__needsUpdateSizeClass;
@property(nonatomic, setter=_setNeedsUpdateStatus:) _Bool _needsUpdateStatus; // @synthesize _needsUpdateStatus=__needsUpdateStatus;
@property(nonatomic, setter=_setNeedsUpdateProgressViewStyle:) _Bool _needsUpdateProgressViewStyle; // @synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(copy, nonatomic) CDUnknownBlockType errorPresenter; // @synthesize errorPresenter=_errorPresenter;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
@property(readonly, nonatomic) NSObject<OS_os_log> *_progressLog;
- (void)_handleBrowsingViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000538f72
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000538ded
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000538da3
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000538cb6
- (void)_updateSubviewOrdering;	// IMP=0x0000000000538c10
- (void)viewTraitCollectionDidChange:(id)arg1;	// IMP=0x0000000000538be2
- (void)_updateStatusViewsIfNeeded;	// IMP=0x0000000000538055
- (void)_invalidateStatusViews;	// IMP=0x0000000000538022
- (void)_updateSizeClassIfNeeded;	// IMP=0x0000000000537f3d
- (void)_invalidateSizeClass;	// IMP=0x0000000000537f0a
- (void)_updateStatusIfNeeded;	// IMP=0x0000000000537e60
- (void)_invalidateStatus;	// IMP=0x0000000000537e2d
- (void)_updateProgressViewStyleIfNeeded;	// IMP=0x0000000000537d6f
- (void)_invalidateProgressViewStyle;	// IMP=0x0000000000537d3c
- (void)_setNeedsUpdate;	// IMP=0x0000000000537d36
- (_Bool)_needsUpdate;	// IMP=0x0000000000537cd5
- (void)_updateIfNeeded;	// IMP=0x0000000000537be5
- (void)postReloadNotification;	// IMP=0x0000000000537b50
- (void)_handleErrorButtonTap:(id)arg1;	// IMP=0x0000000000537a20
- (void)_setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000537756
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x0000000000537488
- (void)becomeReusable;	// IMP=0x0000000000537256
- (void)viewDidLoad;	// IMP=0x00000000005371f3
- (id)loadView;	// IMP=0x00000000005371bb
- (id)view;	// IMP=0x000000000053717d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

