//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GCDTimer, NSString, UILabel, UILayoutGuide, UIView, VoiceVolumeControlView;
@protocol NavVoiceVolumeControlContaineeViewControllerDelegate;

@interface NavVoiceVolumeViewController
{
    ContainerHeaderView *_trayHeader;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    VoiceVolumeControlView *_controlView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILayoutGuide *_labelGrowLayoutGuide;	// 40 = 0x28
    GCDTimer *_dismissTimer;	// 48 = 0x30
    id _geoConfigListener;	// 56 = 0x38
    id <NavVoiceVolumeControlContaineeViewControllerDelegate> _voiceVolumeControlDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000d9334c
@property(readonly, nonatomic) __weak id <NavVoiceVolumeControlContaineeViewControllerDelegate> voiceVolumeControlDelegate; // @synthesize voiceVolumeControlDelegate=_voiceVolumeControlDelegate;
- (id)_effectiveTraitCollection;	// IMP=0x0010000000d932b1
- (id)_maximumContentSizeCategory;	// IMP=0x0010000000d9329d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d931b9
- (void)_updateFonts;	// IMP=0x0010000000d9313c
- (void)headerViewTapped:(id)arg1;	// IMP=0x0010000000d930a9
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x0010000000d9305d
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000d92f62
- (id)contentView;	// IMP=0x0010000000d92f4d
- (id)headerView;	// IMP=0x0010000000d92f38
- (void)dismissAfterDelay;	// IMP=0x0010000000d92d7d
- (long long)currentSelectionForAudioControlView:(id)arg1;	// IMP=0x0010000000d92d66
- (void)audioControlView:(id)arg1 didSelectAudioType:(long long)arg2;	// IMP=0x0010000000d92c65
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000d92bee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000d92b7f
- (void)viewDidLoad;	// IMP=0x0010000000d91a3a
- (void)dealloc;	// IMP=0x0010000000d919e3
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000d916e7
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000d916df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

