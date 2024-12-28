//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUAssetReference, PUAssetViewModel, UIView, UIViewController;
@protocol PUAccessoryContentViewController, PUAccessoryTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryTileViewController : PUTileViewController
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    _Bool _isUpdateScheduled;	// 10 = 0xa
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToWillHideToolbarWhenShowingAccessoryView;
        _Bool respondsToWillHideNavigationBarWhenShowingAccessoryView;
        _Bool respondsToShouldUseSquareImageWhenShowingAccessoryView;
    } _delegateFlags;	// 11 = 0xb
    struct {
        _Bool contentViewController;
        _Bool loadedContentViewController;
        _Bool contentViewMetrics;
        _Bool contentBounds;
        _Bool masterContentOffset;
    } _needsUpdateFlags;	// 15 = 0xf
    _Bool __wasActiveOnLastMasterContentOffsetChange;	// 20 = 0x14
    id <PUAccessoryTileViewControllerDelegate> _delegate;	// 24 = 0x18
    PUAssetViewModel *_assetViewModel;	// 32 = 0x20
    PUAssetReference *_assetReference;	// 40 = 0x28
    UIViewController<PUAccessoryContentViewController> *__contentViewController;	// 48 = 0x30
    UIViewController<PUAccessoryContentViewController> *__loadedContentViewController;	// 56 = 0x38
    UIView *__contentView;	// 64 = 0x40
    long long __contentInsetsChangeReason;	// 72 = 0x48
    double __minimumVisibleHeight;	// 80 = 0x50
    double __editorHeightDelta;	// 88 = 0x58
    struct CGRect __contentBounds;	// 96 = 0x60
    struct CGRect __untransformedMasterContentFrame;	// 128 = 0x80
    struct UIEdgeInsets __contentInsets;	// 160 = 0xa0
    struct CGRect __keyboardFrame;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000191b33
@property(nonatomic, setter=_setEditorHeightDelta:) double _editorHeightDelta; // @synthesize _editorHeightDelta=__editorHeightDelta;
@property(nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) _Bool _wasActiveOnLastMasterContentOffsetChange; // @synthesize _wasActiveOnLastMasterContentOffsetChange=__wasActiveOnLastMasterContentOffsetChange;
@property(nonatomic, setter=_setMinimumVisibleHeight:) double _minimumVisibleHeight; // @synthesize _minimumVisibleHeight=__minimumVisibleHeight;
@property(nonatomic, setter=_setContentInsetsChangeReason:) long long _contentInsetsChangeReason; // @synthesize _contentInsetsChangeReason=__contentInsetsChangeReason;
@property(nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame; // @synthesize _keyboardFrame=__keyboardFrame;
@property(nonatomic, setter=_setContentInsets:) struct UIEdgeInsets _contentInsets; // @synthesize _contentInsets=__contentInsets;
@property(nonatomic, setter=_setUntransformedMasterContentFrame:) struct CGRect _untransformedMasterContentFrame; // @synthesize _untransformedMasterContentFrame=__untransformedMasterContentFrame;
@property(nonatomic, setter=_setContentBounds:) struct CGRect _contentBounds; // @synthesize _contentBounds=__contentBounds;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController; // @synthesize _loadedContentViewController=__loadedContentViewController;
@property(retain, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController; // @synthesize _contentViewController=__contentViewController;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(nonatomic) __weak id <PUAccessoryTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x00000000001918fa
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000000191803
- (void)accessoryContentViewController:(id)arg1 editorHeightDidChange:(double)arg2;	// IMP=0x00000000001917b2
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1;	// IMP=0x0000000000191766
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1;	// IMP=0x00000000001915ff
- (_Bool)_isPhoneAndLandscape;	// IMP=0x00000000001914e7
- (void)_updateMasterContentOffsetIfNeeded;	// IMP=0x00000000001912b7
- (void)_invalidateMasterContentOffset;	// IMP=0x0000000000191299
- (void)_updateContentBoundsIfNeeded;	// IMP=0x0000000000191114
- (void)_invalidateContentBounds;	// IMP=0x00000000001910f6
- (void)_updateContentViewMetricsIfNeeded;	// IMP=0x00000000001907cf
- (void)_invalidateContentViewMetrics;	// IMP=0x00000000001907b1
- (void)_updateLoadedContentViewControllerIfNeeded;	// IMP=0x000000000019066e
- (void)_invalidateLoadedContentViewController;	// IMP=0x0000000000190650
- (void)_updateContentViewControllerIfNeeded;	// IMP=0x0000000000190593
- (void)_invalidateContentViewController;	// IMP=0x0000000000190576
- (void)_updateIfNeeded;	// IMP=0x00000000001904e3
- (void)_handleScheduledUpdate;	// IMP=0x00000000001904c4
- (void)_setNeedsUpdate;	// IMP=0x0000000000190419
- (_Bool)_needsUpdate;	// IMP=0x00000000001903e7
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000190388
- (_Bool)isLocationFromProviderInContentArea:(id)arg1;	// IMP=0x000000000018fa2e
- (void)didChangeActive;	// IMP=0x000000000018f9ed
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x000000000018f7ce
- (void)becomeReusable;	// IMP=0x000000000018f75c
- (void)viewDidLoad;	// IMP=0x000000000018f71b
- (void)dealloc;	// IMP=0x000000000018f6a6
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000018f654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
