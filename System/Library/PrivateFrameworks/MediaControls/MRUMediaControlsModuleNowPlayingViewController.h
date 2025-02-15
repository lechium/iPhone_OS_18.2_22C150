//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MRUArtworkView, MRUHapticViewController, MRUMediaControlsModuleNowPlayingView, MRUMediaSuggestionsViewController, MRUNowPlayingController, MRUVisualStylingProvider, MRUVolumeController, MRUVolumeGroupCoordinator, MRUWaveformController, MRUWaveformViewController, NSString;
@protocol BSInvalidatable, MRUMediaControlsModuleNowPlayingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRUMediaControlsModuleNowPlayingViewController : UIViewController
{
    _Bool _preview;	// 8 = 0x8
    _Bool _resizing;	// 9 = 0x9
    _Bool _onScreen;	// 10 = 0xa
    MRUNowPlayingController *_controller;	// 16 = 0x10
    MRUVolumeController *_volumeController;	// 24 = 0x18
    MRUVolumeGroupCoordinator *_volumeGroupCoordinator;	// 32 = 0x20
    id <MRUMediaControlsModuleNowPlayingViewControllerDelegate> _delegate;	// 40 = 0x28
    MRUVisualStylingProvider *_stylingProvider;	// 48 = 0x30
    long long _layout;	// 56 = 0x38
    MRUMediaSuggestionsViewController *_suggestionsViewController;	// 64 = 0x40
    MRUWaveformViewController *_waveformViewController;	// 72 = 0x48
    MRUWaveformController *_waveformController;	// 80 = 0x50
    MRUHapticViewController *_hapticViewController;	// 88 = 0x58
    id <BSInvalidatable> _hardwareVolumeControlAssertion;	// 96 = 0x60
    unsigned long long _stateHandle;	// 104 = 0x68
    struct UIEdgeInsets _contentEdgeInsets;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000025250
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) id <BSInvalidatable> hardwareVolumeControlAssertion; // @synthesize hardwareVolumeControlAssertion=_hardwareVolumeControlAssertion;
@property(retain, nonatomic) MRUHapticViewController *hapticViewController; // @synthesize hapticViewController=_hapticViewController;
@property(retain, nonatomic) MRUWaveformController *waveformController; // @synthesize waveformController=_waveformController;
@property(retain, nonatomic) MRUWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(retain, nonatomic) MRUMediaSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic) _Bool resizing; // @synthesize resizing=_resizing;
@property(nonatomic) _Bool preview; // @synthesize preview=_preview;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic) __weak id <MRUMediaControlsModuleNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRUVolumeGroupCoordinator *volumeGroupCoordinator; // @synthesize volumeGroupCoordinator=_volumeGroupCoordinator;
@property(retain, nonatomic) MRUVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) MRUNowPlayingController *controller; // @synthesize controller=_controller;
- (id)_stateDumpObject;	// IMP=0x0000000000024f18
- (void)launchNowPlayingApp;	// IMP=0x0000000000024e34
- (void)toggleRoutePicker;	// IMP=0x0000000000024cf5
- (void)updateSuggestions;	// IMP=0x00000000000248ce
- (void)updateVisibility;	// IMP=0x00000000000246f6
- (void)updateWaveformVisibility;	// IMP=0x0000000000024513
- (void)updateLayout;	// IMP=0x0000000000024425
- (void)updateRoutingButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000024009
- (void)updateRoutingButton;	// IMP=0x0000000000023ff5
- (void)updateVolumeControls;	// IMP=0x0000000000023c89
- (void)updateQuickControl;	// IMP=0x0000000000023b89
- (void)updateTransportControls;	// IMP=0x0000000000023a7e
- (void)updateTimeControls;	// IMP=0x00000000000239bf
- (_Bool)showRouteLabel;	// IMP=0x00000000000238fc
- (void)updateNowPlayingInfo;	// IMP=0x0000000000023704
- (void)updateRoute;	// IMP=0x00000000000234c4
- (void)updateArtwork;	// IMP=0x0000000000023405
- (_Bool)shouldRefreshUI;	// IMP=0x00000000000233e0
- (void)createSuggestionsViewController;	// IMP=0x0000000000023233
- (void)createHapticViewController;	// IMP=0x0000000000023133
- (void)createWaveformViewController;	// IMP=0x0000000000022ffc
- (void)handleHapticEnabledStatusChangedNotification:(id)arg1;	// IMP=0x0000000000022fea
- (void)registerHapticObserver;	// IMP=0x0000000000022f83
- (void)callMonitorDidUpdateOnCall:(id)arg1 isOnCall:(_Bool)arg2;	// IMP=0x0000000000022f71
- (void)volumeControlsView:(id)arg1 volumeCapabiltiesDidChange:(unsigned int)arg2;	// IMP=0x0000000000022f5f
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;	// IMP=0x0000000000022f4d
- (void)transportControlsView:(id)arg1 didSelectRoutingButton:(id)arg2;	// IMP=0x0000000000022f3b
- (void)transportControlsView:(id)arg1 didSelectTVRemoteButton:(id)arg2;	// IMP=0x0000000000022e55
- (void)mediaSuggestionsViewController:(id)arg1 didSelectSuggestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022d57
- (void)nowPlayingController:(id)arg1 didChangeQuickControlItem:(id)arg2;	// IMP=0x0000000000022d45
- (void)nowPlayingController:(id)arg1 mediaSuggestionsController:(id)arg2 didChangeMediaSuggestions:(id)arg3;	// IMP=0x0000000000022d33
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTransportControls:(id)arg3;	// IMP=0x0000000000022d21
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTimeControls:(id)arg3;	// IMP=0x0000000000022d0f
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;	// IMP=0x0000000000022cfd
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;	// IMP=0x0000000000022ceb
- (void)nowPlayingController:(id)arg1 tvRemoteController:(id)arg2 didChangeShowTVRemote:(_Bool)arg3;	// IMP=0x0000000000022c68
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;	// IMP=0x0000000000022c1b
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeBundleID:(id)arg3;	// IMP=0x0000000000022bed
- (_Bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;	// IMP=0x0000000000022bc8
- (void)didSelectQuickControl:(id)arg1;	// IMP=0x0000000000022b63
- (void)didSelectRouteButton:(id)arg1;	// IMP=0x0000000000022b51
- (void)didSelectLabelView:(id)arg1;	// IMP=0x0000000000022b3f
- (void)didSelectArtworkView:(id)arg1;	// IMP=0x0000000000022b2d
- (_Bool)shouldExpandModuleOnTouch:(id)arg1;	// IMP=0x0000000000022896
- (void)updateEverything;	// IMP=0x00000000000221bc
@property(readonly, nonatomic) MRUArtworkView *artworkView;
@property(readonly, copy) NSString *description;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000002206f
- (void)dealloc;	// IMP=0x0000000000022016
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000021fd3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000021f8d
- (void)viewDidLoad;	// IMP=0x0000000000021aee
- (void)loadView;	// IMP=0x0000000000021ab5
- (id)init;	// IMP=0x00000000000218d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MRUMediaControlsModuleNowPlayingView *view; // @dynamic view;
@property(retain, nonatomic) MRUMediaControlsModuleNowPlayingView *viewIfLoaded; // @dynamic viewIfLoaded;

@end

