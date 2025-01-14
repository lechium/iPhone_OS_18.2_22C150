//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRoute, MISSING_TYPE, NSArray;
@protocol RouteOverviewCellDelegate, RoutePlanningDataCoordination;

@interface RoutePlanningRouteOverviewOutlineSection
{
    unsigned long long _suppressReloads;	// 16 = 0x10
    double _cachedRowHeight;	// 24 = 0x18
    double _lastCachedWidthForRowHeight;	// 32 = 0x20
    _Bool _currentRoute;	// 40 = 0x28
    _Bool _expanded;	// 41 = 0x29
    _Bool _allowPersistentHighlight;	// 42 = 0x2a
    _Bool _showDetailButton;	// 43 = 0x2b
    _Bool _firstRoute;	// 44 = 0x2c
    _Bool _lastRoute;	// 45 = 0x2d
    _Bool _hasSelectedStep;	// 46 = 0x2e
    GEOComposedRoute *_route;	// 48 = 0x30
    double _longestRouteLength;	// 56 = 0x38
    NSArray *_automaticSharingContacts;	// 64 = 0x40
    id <RouteOverviewCellDelegate> _routeCellDelegate;	// 72 = 0x48
    id <RoutePlanningDataCoordination> _dataCoordinator;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000007bdcaa
@property(nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(nonatomic) __weak id <RouteOverviewCellDelegate> routeCellDelegate; // @synthesize routeCellDelegate=_routeCellDelegate;
@property(retain, nonatomic) NSArray *automaticSharingContacts; // @synthesize automaticSharingContacts=_automaticSharingContacts;
@property(nonatomic) _Bool hasSelectedStep; // @synthesize hasSelectedStep=_hasSelectedStep;
@property(nonatomic, getter=isLastRoute) _Bool lastRoute; // @synthesize lastRoute=_lastRoute;
@property(nonatomic, getter=isFirstRoute) _Bool firstRoute; // @synthesize firstRoute=_firstRoute;
@property(nonatomic, getter=showsDetailButton) _Bool showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(nonatomic, getter=allowsPersistentHighlight) _Bool allowPersistentHighlight; // @synthesize allowPersistentHighlight=_allowPersistentHighlight;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isCurrentRoute) _Bool currentRoute; // @synthesize currentRoute=_currentRoute;
@property(readonly, nonatomic) double longestRouteLength; // @synthesize longestRouteLength=_longestRouteLength;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)_existingCell;	// IMP=0x00100000007bdaba
- (void)_configureCell:(id)arg1;	// IMP=0x00100000007bd86d
- (void)reloadExistingCell;	// IMP=0x00100000007bd813
- (_Bool)selectionFollowsFocusForItemAtIndexPath:(id)arg1;	// IMP=0x00100000007bd678
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00100000007bd5de
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00100000007bd5a8
- (MISSING_TYPE *)numberOfSections;	// IMP=0x00100000007bd59d
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007bd52b
- (void)_resetCachedRowHeight;	// IMP=0x00100000007bd411
- (_Bool)wantsDefaultPaddingAboveSection;	// IMP=0x00100000007bd3ff
- (double)estimatedItemHeight;	// IMP=0x00100000007bd242
- (void)performWhileSuppressingCellReloads:(CDUnknownBlockType)arg1;	// IMP=0x00100000007bd219
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x00100000007bcff5
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00100000007bcf22

@end

