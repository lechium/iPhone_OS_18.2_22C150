//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol RoutePlanningOverviewRouteCreationCellDelegate;

@interface RoutePlanningRouteCreationOutlineSection
{
    id <RoutePlanningOverviewRouteCreationCellDelegate> _routeCreationDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007bcf11
@property(nonatomic) __weak id <RoutePlanningOverviewRouteCreationCellDelegate> routeCreationDelegate; // @synthesize routeCreationDelegate=_routeCreationDelegate;
- (void)_configureCell:(id)arg1;	// IMP=0x00100000007bce7b
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00100000007bce22
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00100000007bce17
- (long long)numberOfSections;	// IMP=0x00100000007bce0c
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x00100000007bcd0b
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00100000007bcc83

@end
