//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MRUHapticView, MRUNowPlayingController, NSString;

__attribute__((visibility("hidden")))
@interface MRUHapticViewController : UIViewController
{
    _Bool _onScreen;	// 8 = 0x8
    _Bool _dimmed;	// 9 = 0x9
    _Bool _hasAppeared;	// 10 = 0xa
    _Bool _delayArtworkChange;	// 11 = 0xb
    unsigned long long _context;	// 16 = 0x10
    MRUNowPlayingController *_nowPlayingController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e39b1
@property(nonatomic) _Bool delayArtworkChange; // @synthesize delayArtworkChange=_delayArtworkChange;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) MRUNowPlayingController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
- (void)updateVisibility;	// IMP=0x00000000000e3918
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;	// IMP=0x00000000000e38af
- (void)updateArtworkImageWithMediaCode:(id)arg1 treatCodesAsAdamIDs:(_Bool)arg2;	// IMP=0x00000000000e38a9
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;	// IMP=0x00000000000e3724
- (_Bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;	// IMP=0x00000000000e3712
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000e353d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e34f1
- (void)viewDidLoad;	// IMP=0x00000000000e32ef
- (void)loadView;	// IMP=0x00000000000e3277
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000e326f
- (id)initWithContext:(unsigned long long)arg1 nowPlayingController:(id)arg2;	// IMP=0x00000000000e31f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MRUHapticView *view; // @dynamic view;

@end

