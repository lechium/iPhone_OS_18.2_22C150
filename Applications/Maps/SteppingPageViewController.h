//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, UICollectionView, UILabel, UIPageControl, UITapGestureRecognizer, UIView;
@protocol SteppingPageViewControllerDelegate, SteppingSignGenerator;

@interface SteppingPageViewController : UIViewController
{
    UIPageControl *_pageControl;	// 8 = 0x8
    UILabel *_pageMarkerLabel;	// 16 = 0x10
    NSLayoutConstraint *_collectionViewHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_auxViewHeightConstraint;	// 32 = 0x20
    NSLayoutConstraint *_pageControlHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_topAuxViewToPageControlBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_topAuxViewToPageMarkerBaselineConstraint;	// 56 = 0x38
    NSMutableDictionary *_auxViewHeightCache;	// 64 = 0x40
    UIView *_fromAuxView;	// 72 = 0x48
    UIView *_toAuxView;	// 80 = 0x50
    UIView *_resizeSnapshot;	// 88 = 0x58
    NSTimer *_scrollTimer;	// 96 = 0x60
    long long _rightBuffer;	// 104 = 0x68
    long long _leftBuffer;	// 112 = 0x70
    long long _startSign;	// 120 = 0x78
    long long _currentSign;	// 128 = 0x80
    unsigned long long _lastUserGesture;	// 136 = 0x88
    double _widthAsOfLastSignRefresh;	// 144 = 0x90
    _Bool _pageIndicatorHidden;	// 152 = 0x98
    id <SteppingSignGenerator> _signGenerator;	// 160 = 0xa0
    id <SteppingPageViewControllerDelegate> _delegate;	// 168 = 0xa8
    UICollectionView *_collectionView;	// 176 = 0xb0
    UIView *_auxViewContainer;	// 184 = 0xb8
    NSLayoutConstraint *_signHeightConstraint;	// 192 = 0xc0
    UITapGestureRecognizer *_singleTapGestureRecognizer;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00200000003c9beb
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(nonatomic, getter=isPageIndicatorHidden) _Bool pageIndicatorHidden; // @synthesize pageIndicatorHidden=_pageIndicatorHidden;
@property(retain, nonatomic) NSLayoutConstraint *signHeightConstraint; // @synthesize signHeightConstraint=_signHeightConstraint;
@property(retain, nonatomic) UIView *auxViewContainer; // @synthesize auxViewContainer=_auxViewContainer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SteppingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <SteppingSignGenerator> signGenerator; // @synthesize signGenerator=_signGenerator;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000003c9aab
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;	// IMP=0x00100000003c9a1d
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x00100000003c99a6
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x00100000003c98f6
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x00100000003c985a
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000003c9816
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000003c9783
- (void)_getCurrentSignIndexesAdjustedForRTL:(_Bool)arg1 from:(long long *)arg2 to:(long long *)arg3 closest:(long long *)arg4 progressBetweenSigns:(double *)arg5;	// IMP=0x00100000003c9539
- (long long)_adjustedSignIndex:(long long)arg1 adjustForRTL:(_Bool)arg2;	// IMP=0x00100000003c94c5
- (double)_collectionViewContentOffsetIndex;	// IMP=0x00100000003c9354
- (double)_calculatedAuxViewHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x00100000003c92ef
- (void)_updateAuxViewsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x00100000003c90a9
- (void)_initAuxView:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00100000003c8f79
- (double)_signToPageControlBottomMarginAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x00100000003c8eb5
- (double)_calculatedSignToPageControlBaselineHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x00100000003c8cad
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000003c8c52
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000003c8be1
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00100000003c8bb5
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00100000003c8b78
- (void)_forcedScrollDidEnd;	// IMP=0x00100000003c8b1e
- (void)_updateCurrentPageAndNotifyDelegate;	// IMP=0x00100000003c8a26
- (void)reloadWithSignGenerator:(id)arg1;	// IMP=0x00100000003c89df
@property long long signIndex;
- (void)setSignIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000003c87a7
- (id)auxViewIfVisibleAtIndex:(long long)arg1;	// IMP=0x00100000003c8676
- (id)signCellIfVisibleAtIndex:(long long)arg1;	// IMP=0x00100000003c85ed
- (long long)numberOfSigns;	// IMP=0x00100000003c85b3
- (double)_heightForAuxViewAtIndex:(long long)arg1;	// IMP=0x00100000003c83b5
- (double)heightForSignAtIndex:(long long)arg1;	// IMP=0x00100000003c82f5
- (void)_sizeClassDidChange;	// IMP=0x00100000003c82bd
- (void)_animateSizeClassChange;	// IMP=0x00100000003c814a
- (void)sizeClassWillChangeWithTransitionCoordinator:(id)arg1;	// IMP=0x00100000003c7fd8
- (long long)resetCurrentSignAnimated:(_Bool)arg1;	// IMP=0x00100000003c7f7e
- (void)setPageIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000003c7e80
- (void)refreshSigns;	// IMP=0x00100000003c7c98
- (void)refreshCurrentSign;	// IMP=0x00100000003c7bee
- (void)_updateSignHeightConstraintsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x00100000003c7a9b
- (void)_updateSignHeightAnimated:(_Bool)arg1;	// IMP=0x00100000003c778c
- (void)_updateSignHeight;	// IMP=0x00100000003c7778
- (void)_localeDidChange;	// IMP=0x00100000003c7766
- (void)_contentSizeDidChange;	// IMP=0x00100000003c7754
- (void)_handleTap:(id)arg1;	// IMP=0x00100000003c7566
- (_Bool)_isPointNearRightEdge:(struct CGPoint)arg1;	// IMP=0x00100000003c7478
- (_Bool)_isPointNearLeftEdge:(struct CGPoint)arg1;	// IMP=0x00100000003c73fc
- (_Bool)_isRTL;	// IMP=0x00100000003c73ac
- (void)viewDidLayoutSubviews;	// IMP=0x00100000003c726f
- (void)dealloc;	// IMP=0x00100000003c71fa
- (void)_setupConstraints;	// IMP=0x00100000003c678c
- (void)_initPageMarkerLabel;	// IMP=0x00100000003c6699
- (void)_initPageControl;	// IMP=0x00100000003c656c
- (void)_setupViews;	// IMP=0x00100000003c60ae
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003c6032
- (void)viewDidLoad;	// IMP=0x00100000003c5f2b
- (id)initWithSignGenerator:(id)arg1;	// IMP=0x00100000003c5e9f
- (void)_updatePageIndicatorVisibility;	// IMP=0x00100000003c5d6e
- (void)_updatePageMarkerText;	// IMP=0x00100000003c5bbd
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000003c5bb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

