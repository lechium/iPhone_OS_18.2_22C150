//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ButtonsContainerViewController, LocalSearchViewController, NSString, SettingsTipView, UIButton, UILabel, UIStackView, VKVenueFeatureMarker, VenueFloorViewController, _MapsUserTrackingButton;

@interface IOSFloatingControlsViewController
{
    _Bool _nonFloorPickerControlsVisible;	// 168 = 0xa8
    UIStackView *_controlsStackView;	// 176 = 0xb0
    ButtonsContainerViewController *_buttonsContainerViewController;	// 184 = 0xb8
    _MapsUserTrackingButton *_userLocationButton;	// 192 = 0xc0
    UIButton *_settingsButton;	// 200 = 0xc8
    UIButton *_mode2DButton;	// 208 = 0xd0
    UIButton *_mode3DButton;	// 216 = 0xd8
    UIButton *;	// 224 = 0xe0
    VenueFloorViewController *_venueFloorViewController;	// 232 = 0xe8
    LocalSearchViewController *_localSearchViewController;	// 240 = 0xf0
    double _yawPriorToHeadingTracking;	// 248 = 0xf8
    SettingsTipView *_settingsTipView;	// 256 = 0x100
    UILabel *_sizeDebugLabel;	// 264 = 0x108
    UIButton *_ssaoButton;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000006b191e
@property(retain, nonatomic) UIButton *ssaoButton; // @synthesize ssaoButton=_ssaoButton;
@property(retain, nonatomic) UILabel *sizeDebugLabel; // @synthesize sizeDebugLabel=_sizeDebugLabel;
@property(retain, nonatomic) SettingsTipView *settingsTipView; // @synthesize settingsTipView=_settingsTipView;
@property(nonatomic) double yawPriorToHeadingTracking; // @synthesize yawPriorToHeadingTracking=_yawPriorToHeadingTracking;
@property(retain, nonatomic) LocalSearchViewController *localSearchViewController; // @synthesize localSearchViewController=_localSearchViewController;
@property(retain, nonatomic) VenueFloorViewController *venueFloorViewController; // @synthesize venueFloorViewController=_venueFloorViewController;
@property(retain, nonatomic) UIButton *ttrButton; // @synthesize ttrButton=_ttrButton;
@property(retain, nonatomic) UIButton *mode3DButton; // @synthesize mode3DButton=_mode3DButton;
@property(retain, nonatomic) UIButton *mode2DButton; // @synthesize mode2DButton=_mode2DButton;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) _MapsUserTrackingButton *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property(retain, nonatomic) ButtonsContainerViewController *buttonsContainerViewController; // @synthesize buttonsContainerViewController=_buttonsContainerViewController;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(nonatomic) _Bool nonFloorPickerControlsVisible; // @synthesize nonFloorPickerControlsVisible=_nonFloorPickerControlsVisible;
- (void)_configureButton:(id)arg1 withImage:(id)arg2 pointSize:(double)arg3 weight:(long long)arg4;	// IMP=0x00100000006b16eb
- (void)_configureButton:(id)arg1 withSymbolImageName:(id)arg2 pointSize:(double)arg3 weight:(long long)arg4;	// IMP=0x00100000006b165a
- (void)toggleSSAO;	// IMP=0x00100000006b162c
- (void)createRadar;	// IMP=0x00100000006b1435
- (void)settingsTipViewDidTapClose:(id)arg1;	// IMP=0x00100000006b04e2
- (void)settingsTipViewDidTapTip:(id)arg1;	// IMP=0x00100000006b0496
- (void)_unloadSettingsTipView;	// IMP=0x00100000006b0454
- (void)_loadSettingsTipView;	// IMP=0x00100000006b010c
- (void)setSettingsTipState:(long long)arg1;	// IMP=0x00100000006aff52
- (void)_showLocationServicesAlertIfNeeded;	// IMP=0x00100000006afbe2
- (void)_presentSettings;	// IMP=0x00100000006afb0f
- (void)_updateMapModeButtonAppearance;	// IMP=0x00100000006afa5a
- (void)_setMapModeButtonAXIdentifier;	// IMP=0x00100000006af9dd
- (double)_mapModeButtonPointSizeForCurrentMapType;	// IMP=0x00100000006af94d
- (id)_mapModeAXIdentifierForCurrentMapType;	// IMP=0x00100000006af839
- (id)_mapModeButtonImageNameForCurrentMapType;	// IMP=0x00100000006af725
- (void)_refreshUserLocationButton;	// IMP=0x00100000006af415
- (id)_localSearchViewConstraints;	// IMP=0x00100000006aee5c
- (id)localSearchViewControllerIfLoaded;	// IMP=0x00100000006aedd3
- (void)localSearchViewShouldBeVisibleDidChange:(id)arg1;	// IMP=0x00100000006aebd8
- (void)viewControllerDidSelectBrowseVenue:(id)arg1;	// IMP=0x00100000006aeb61
- (void)localSearchViewControllerDidSelectRefreshSearchHere:(id)arg1;	// IMP=0x00100000006aeacc
@property(readonly, nonatomic) VKVenueFeatureMarker *venueWithFocus;
- (void)setSearchSession:(id)arg1;	// IMP=0x00100000006ae9cb
- (void)setRefreshViewEnable:(_Bool)arg1;	// IMP=0x00100000006ae981
- (_Bool)lacksSearchResultsInVenue:(id)arg1 forFloorOrdinal:(short)arg2;	// IMP=0x00100000006ae884
- (id)venueFloorViewControllerConstraintsForViewWhenOpen:(id)arg1;	// IMP=0x00100000006ae4f4
- (void)venueFloorViewControllerDidClose:(id)arg1;	// IMP=0x00100000006ae45b
- (void)venueFloorViewControllerDidOpen:(id)arg1;	// IMP=0x00100000006ae3c2
- (void)venueFloorViewControllerDidFinishShowing:(id)arg1;	// IMP=0x00100000006ae329
- (void)venueFloorViewControllerDidStartShowing:(id)arg1;	// IMP=0x00100000006ae25a
- (void)venueFloorViewControllerDidFinishHiding:(id)arg1;	// IMP=0x00100000006ae119
- (void)venueFloorViewControllerDidStartHiding:(id)arg1;	// IMP=0x00100000006adfd3
- (void)venueFloorViewControllerDidChangeConstraints:(id)arg1;	// IMP=0x00100000006adf18
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;	// IMP=0x00100000006adf06
- (void)updateNonFloorPickerControlsVisibleForFloorPickerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006ade7d
- (void)updateNonFloorPickerControlsVisibleAnimated:(_Bool)arg1;	// IMP=0x00100000006addd2
- (void)setNonFloorPickerControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006adc12
- (void)setupVenueFloorViewController;	// IMP=0x00100000006ad80d
- (void)didChangeFocusedVenue:(id)arg1;	// IMP=0x00100000006ad774
- (id)venueFloorViewControllerIfLoaded;	// IMP=0x00100000006ad75f
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;	// IMP=0x00100000006ad631
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;	// IMP=0x00100000006ad5b5
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000006ad511
- (id)buttonsContainerViewControllerIfLoaded;	// IMP=0x00100000006ad1a0
- (id)controlsStackViewIfLoaded;	// IMP=0x00100000006ace05
- (void)updateTheme;	// IMP=0x00100000006acca3
- (void)setMargin:(double)arg1;	// IMP=0x00100000006acc2f
- (void)setBlurGroupName:(id)arg1;	// IMP=0x00100000006acaf0
- (struct CGRect)floatingButtonsFrame;	// IMP=0x00100000006aca4d
- (id)floatingButtonLeadingGuide;	// IMP=0x00100000006ac9fd
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000006ac9f5
- (void)refreshControls;	// IMP=0x00100000006ac9e3
- (void)hideControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006ac2b1
- (void)showControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006ab837
- (_Bool)shouldShow:(long long)arg1 withControlOptions:(long long)arg2;	// IMP=0x00100000006ab7dc
- (void)viewDidLayoutSubviews;	// IMP=0x00100000006ab6f2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000006ab65d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000006ab4f2
- (void)viewDidLoad;	// IMP=0x00100000006ab303

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

