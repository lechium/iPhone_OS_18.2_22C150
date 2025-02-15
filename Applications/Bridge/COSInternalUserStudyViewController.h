//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItem, AVPlayerLayer, AVQueuePlayer, COSInternalUserStudyAssetManager, UIView;

@interface COSInternalUserStudyViewController
{
    _Bool _assetsLoaded;	// 8 = 0x8
    _Bool _isZoomed;	// 9 = 0x9
    _Bool _dismissed;	// 10 = 0xa
    UIView *_movieView;	// 16 = 0x10
    AVQueuePlayer *_player;	// 24 = 0x18
    AVPlayerLayer *_playerLayer;	// 32 = 0x20
    AVPlayerItem *_userCaptureSequence;	// 40 = 0x28
    COSInternalUserStudyAssetManager *_assetManager;	// 48 = 0x30
}

+ (_Bool)hasVideoFile;	// IMP=0x004000000004ae51
+ (_Bool)isDeviceOfParticularInterest:(id)arg1;	// IMP=0x001000000004ac50
+ (_Bool)controllerAllowsPresentingSignInFlow;	// IMP=0x001000000004ac48
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000004a7f5
+ (_Bool)isBeamBridgeReachable;	// IMP=0x001000000004a7aa
- (void).cxx_destruct;	// IMP=0x002000000004dbac
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(retain, nonatomic) COSInternalUserStudyAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(nonatomic) _Bool isZoomed; // @synthesize isZoomed=_isZoomed;
@property(retain, nonatomic) AVPlayerItem *userCaptureSequence; // @synthesize userCaptureSequence=_userCaptureSequence;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *movieView; // @synthesize movieView=_movieView;
@property(nonatomic) _Bool assetsLoaded; // @synthesize assetsLoaded=_assetsLoaded;
- (void)completePane;	// IMP=0x001000000004d5bc
- (id)optinLocalizationBundle;	// IMP=0x001000000004d5a3
- (id)optinLocalizationStringsFile;	// IMP=0x001000000004d596
- (double)noHWDetailOffset;	// IMP=0x001000000004d543
- (double)noHWImageOffset;	// IMP=0x001000000004d4e9
- (id)learnMoreButtonTitle;	// IMP=0x001000000004d47d
- (id)alternateButtonTitle;	// IMP=0x001000000004d411
- (id)suggestedButtonTitle;	// IMP=0x001000000004d37b
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x001000000004d24f
- (void)_uploadAssetAndComplete;	// IMP=0x001000000004c8f2
- (void)learnMoreButtonPressed:(id)arg1;	// IMP=0x001000000004c7d3
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000004c71b
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000004c63e
- (void)confirmDockUpload;	// IMP=0x001000000004c194
- (void)_disableButtons;	// IMP=0x001000000004c10f
- (id)detailString;	// IMP=0x001000000004bf0b
- (id)titleString;	// IMP=0x001000000004be9f
- (void)playerItemDidReachEnd:(id)arg1;	// IMP=0x001000000004be8b
- (void)_playIfLoaded;	// IMP=0x001000000004bdb6
- (void)_teardownPlayback;	// IMP=0x001000000004bca9
- (void)replayMovie:(id)arg1;	// IMP=0x001000000004bc3c
- (void)abortAndRecaptureMovie;	// IMP=0x001000000004bb43
- (void)addItemWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b899
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000004b891
- (void)viewDidLayoutSubviews;	// IMP=0x001000000004b803
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000004b7c2
- (void)viewDidLoad;	// IMP=0x001000000004b0d9
- (id)init;	// IMP=0x001000000004af8a
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000004a7a2

@end

