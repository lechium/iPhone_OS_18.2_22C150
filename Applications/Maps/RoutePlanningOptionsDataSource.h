//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CyclePreferences, DrivePreferences, GEORouteDisplayHints, NSNumber, NSTimer, TransitPreferences, TransitPreferencesViewControllerDataSource, VGVehicle, VGVirtualGarage, WalkPreferences;
@protocol NSObject, RoutePlanningDataCoordination;

@interface RoutePlanningOptionsDataSource
{
    id <RoutePlanningDataCoordination> _dataCoordinator;	// 8 = 0x8
    id <NSObject> _countryObserver;	// 16 = 0x10
    NSTimer *_automaticSaveTimer;	// 24 = 0x18
    GEORouteDisplayHints *_displayHints;	// 32 = 0x20
    id _originalPreferences;	// 40 = 0x28
    id _originalSelectedVehicle;	// 48 = 0x30
    id _originalUsesPreferredNetworksForRouting;	// 56 = 0x38
    _Bool _hasUnsavedChanges;	// 64 = 0x40
    _Bool _automaticallySaveChanges;	// 65 = 0x41
    int _analyticsTarget;	// 68 = 0x44
    long long _transportType;	// 72 = 0x48
    CDUnknownBlockType _analyticsTargetProvider;	// 80 = 0x50
    DrivePreferences *_drivePreferences;	// 88 = 0x58
    WalkPreferences *_walkPreferences;	// 96 = 0x60
    TransitPreferencesViewControllerDataSource *_transitDataSource;	// 104 = 0x68
    CyclePreferences *_cyclePreferences;	// 112 = 0x70
    VGVirtualGarage *_virtualGarage;	// 120 = 0x78
    VGVehicle *_selectedVehicle;	// 128 = 0x80
    NSNumber *_usesPreferredNetworksForRouting;	// 136 = 0x88
}

+ (_Bool)_isGarage:(id)arg1 significantlyDifferentFromGarage:(id)arg2;	// IMP=0x0040000000892bfc
+ (void)registerCellsInCollectionView:(id)arg1;	// IMP=0x001000000088e58f
- (void).cxx_destruct;	// IMP=0x0020000000893083
@property(retain, nonatomic) NSNumber *usesPreferredNetworksForRouting; // @synthesize usesPreferredNetworksForRouting=_usesPreferredNetworksForRouting;
@property(retain, nonatomic) VGVehicle *selectedVehicle; // @synthesize selectedVehicle=_selectedVehicle;
@property(readonly, nonatomic) VGVirtualGarage *virtualGarage; // @synthesize virtualGarage=_virtualGarage;
@property(retain, nonatomic) CyclePreferences *cyclePreferences; // @synthesize cyclePreferences=_cyclePreferences;
@property(retain, nonatomic) TransitPreferencesViewControllerDataSource *transitDataSource; // @synthesize transitDataSource=_transitDataSource;
@property(retain, nonatomic) WalkPreferences *walkPreferences; // @synthesize walkPreferences=_walkPreferences;
@property(retain, nonatomic) DrivePreferences *drivePreferences; // @synthesize drivePreferences=_drivePreferences;
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(copy, nonatomic) CDUnknownBlockType analyticsTargetProvider; // @synthesize analyticsTargetProvider=_analyticsTargetProvider;
@property(nonatomic) _Bool automaticallySaveChanges; // @synthesize automaticallySaveChanges=_automaticallySaveChanges;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool hasUnsavedChanges; // @synthesize hasUnsavedChanges=_hasUnsavedChanges;
- (void)offlineMapsStateChanged;	// IMP=0x0010000000892f84
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x0010000000892f79
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000892ebc
- (void)_updateAnalyticsTarget;	// IMP=0x0010000000892e27
- (void)_updateCoordinatorWithPreferences;	// IMP=0x001000000089276f
- (void)_updateFromCoordinator;	// IMP=0x001000000089269a
- (void)_prepareForCycling;	// IMP=0x0010000000891d0d
- (void)_prepareForTransit;	// IMP=0x001000000089148b
- (void)_prepareForWalk;	// IMP=0x001000000089084f
- (void)_prepareForDrive;	// IMP=0x001000000088ff1b
- (void)prepareContent;	// IMP=0x001000000088fe3c
- (void)_updateVirtualGarage:(id)arg1;	// IMP=0x001000000088fc6e
@property(readonly, nonatomic) TransitPreferences *transitPreferences;
- (void)commitPreferences;	// IMP=0x001000000088f617
- (void)_commitUsesPreferredNetworksForRouting;	// IMP=0x001000000088f195
- (void)_commitSelectedVehicle;	// IMP=0x001000000088ef28
- (void)_configureForCurrentState;	// IMP=0x001000000088ead1
- (void)configureWithTransportType:(long long)arg1 displayHints:(id)arg2 virtualGarage:(id)arg3;	// IMP=0x001000000088e5fd
- (void)_autosaveIfNeeded;	// IMP=0x001000000088e503
- (void)_performAutomaticSave:(id)arg1;	// IMP=0x001000000088e289
- (void)_scheduleAutomaticSave;	// IMP=0x001000000088e148
- (void)_updateHasUnsavedChanges;	// IMP=0x001000000088deca
- (_Bool)_hasUnsavedChanges;	// IMP=0x001000000088dcc1
- (void)dealloc;	// IMP=0x001000000088dc39
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateVirtualGarage:(id)arg2;	// IMP=0x0010000000893c4e
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateCyclePreferences:(id)arg2;	// IMP=0x0010000000893bd5
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTiming:(id)arg2;	// IMP=0x0010000000893bc3
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTransitPreferences:(id)arg2;	// IMP=0x0010000000893b19
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateWalkPreferences:(id)arg2;	// IMP=0x0010000000893aa0
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateDrivePreferences:(id)arg2;	// IMP=0x0010000000893a27
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTransportType:(long long)arg2;	// IMP=0x0010000000893a21
- (long long)observedRoutePlanningData;	// IMP=0x0010000000893a16
- (void)setDataCoordinator:(id)arg1;	// IMP=0x001000000089398f
- (id)dataCoordinator;	// IMP=0x001000000089397a

@end
