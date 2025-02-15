//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, ErrorModeView, GEOMapServiceTraits, GEOPublisher, LoadingModeView, MKMapItemIdentifier, NSLayoutConstraint, NSString, PublisherAPIController, PublisherHeaderView, PublisherViewDataSource, UICollectionView, UICollectionViewFlowLayout, UIScrollView;
@protocol PublisherAnalytics;

@interface PublisherViewController
{
    MKMapItemIdentifier *_publisherId;	// 8 = 0x8
    GEOMapServiceTraits *_traits;	// 16 = 0x10
    unsigned long long _numberOfCollections;	// 24 = 0x18
    double _actualCardHeight;	// 32 = 0x20
    PublisherHeaderView *_publisherHeaderView;	// 40 = 0x28
    ContainerHeaderView *_defaultHeaderView;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
    UICollectionViewFlowLayout *_flowLayout;	// 64 = 0x40
    NSLayoutConstraint *_headerHeightConstraint;	// 72 = 0x48
    LoadingModeView *_loadingView;	// 80 = 0x50
    ErrorModeView *_errorView;	// 88 = 0x58
    PublisherAPIController *_apiController;	// 96 = 0x60
    PublisherViewDataSource *_dataSource;	// 104 = 0x68
    id <PublisherAnalytics> _analyticsManager;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000e1cae4
@property(retain, nonatomic) id <PublisherAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) PublisherViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PublisherAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ContainerHeaderView *defaultHeaderView; // @synthesize defaultHeaderView=_defaultHeaderView;
@property(retain, nonatomic) PublisherHeaderView *publisherHeaderView; // @synthesize publisherHeaderView=_publisherHeaderView;
@property(nonatomic) double actualCardHeight; // @synthesize actualCardHeight=_actualCardHeight;
@property(nonatomic) unsigned long long numberOfCollections; // @synthesize numberOfCollections=_numberOfCollections;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) MKMapItemIdentifier *publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)didSelectAppItem;	// IMP=0x0010000000e1c6f3
- (void)didSelectWebsiteItem;	// IMP=0x0010000000e1c635
- (void)didSelectShareFromView:(id)arg1;	// IMP=0x0010000000e1c581
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x0010000000e1c56f
- (void)didSelectAllGuidesMenuItem;	// IMP=0x0010000000e1c51c
- (void)didTapClose:(id)arg1;	// IMP=0x0010000000e1c50a
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x0010000000e1c504
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x0010000000e1c499
- (void)resetCollectionViewLayout;	// IMP=0x0010000000e1c387
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000e1c0d4
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000e1c04a
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000e1c044
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000e1c03e
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000e1c038
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000e1bef4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000e1bcf8
- (void)removeCollectionView;	// IMP=0x0010000000e1bc5c
- (void)removeErrorView;	// IMP=0x0010000000e1bbcf
- (void)addErrorView;	// IMP=0x0010000000e1b66a
- (void)removeLoadingView;	// IMP=0x0010000000e1b5dd
- (void)addLoadingView;	// IMP=0x0010000000e1b35c
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x0010000000e1b020
- (void)removeDefaultHeaderView;	// IMP=0x0010000000e1ac69
- (void)activateDefaultHeaderConstraints;	// IMP=0x0010000000e1a8e0
- (void)addDefaultHeaderView;	// IMP=0x0010000000e1a708
- (void)activateConstraints;	// IMP=0x0010000000e19fff
- (void)addCollectionView;	// IMP=0x0010000000e197df
- (void)addPublisherHeaderView;	// IMP=0x0010000000e194b0
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000e1926c
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000e191af
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000e19159
@property(readonly, nonatomic) GEOPublisher *publisher;
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000e18f8f
- (void)willDismissByGesture;	// IMP=0x0010000000e18f25
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000e18ebb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000e18e40
- (void)viewDidLoad;	// IMP=0x0010000000e18c22
- (id)initWithPublisherId:(id)arg1 numberOfCollections:(unsigned long long)arg2 withTraits:(id)arg3;	// IMP=0x0010000000e18aa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

