//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CALayer, NSString, NUMediaView, PXUISubjectTrackingView;
@protocol PUVideoEditOverlayViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoEditOverlayViewController : UIViewController
{
    _Bool _disabledForCinematographyScriptLoad;	// 8 = 0x8
    id <PUVideoEditOverlayViewControllerDelegate> _overlayControllerDelegate;	// 16 = 0x10
    PXUISubjectTrackingView *_trackingView;	// 24 = 0x18
    NUMediaView *_mediaView;	// 32 = 0x20
    CALayer *_safeAreaMask;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022eb15
@property(nonatomic) _Bool disabledForCinematographyScriptLoad; // @synthesize disabledForCinematographyScriptLoad=_disabledForCinematographyScriptLoad;
@property(retain, nonatomic) CALayer *safeAreaMask; // @synthesize safeAreaMask=_safeAreaMask;
@property(retain, nonatomic) NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) PXUISubjectTrackingView *trackingView; // @synthesize trackingView=_trackingView;
@property(nonatomic) __weak id <PUVideoEditOverlayViewControllerDelegate> overlayControllerDelegate; // @synthesize overlayControllerDelegate=_overlayControllerDelegate;
- (void)showTrackingInformationalString:(id)arg1;	// IMP=0x000000000022ea4d
- (id)localizedStringForCinematicTrackingBadgeMessage:(long long)arg1;	// IMP=0x000000000022ea24
- (void)interactionBegan;	// IMP=0x000000000022e9e7
- (void)objectTrackingFinishedWithSuccess:(_Bool)arg1;	// IMP=0x000000000022e97d
- (void)trackedObjectWasUpdatedAtTime:(CDStruct_1b6d18a9)arg1 shouldStop:(_Bool *)arg2;	// IMP=0x000000000022e91d
- (void)objectTrackingStartedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022e8aa
- (void)subjectFocusStateDidChange:(long long)arg1 forBadge:(id)arg2 focusedDisparity:(double)arg3;	// IMP=0x000000000022e79c
- (void)_setState:(long long)arg1 forView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000022e6e2
- (void)subjectTrackingStateDidChange:(long long)arg1 forView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000022e6d0
- (void)setMessage:(id)arg1 forFocusStateBadge:(id)arg2;	// IMP=0x000000000022e6bb
- (void)setTrackingInProgressTextForFocusStateBadge:(id)arg1;	// IMP=0x000000000022e5d5
- (struct CGRect)rectForFocusStateBadge:(id)arg1;	// IMP=0x000000000022e3b8
- (id)newFocusStatusBadge;	// IMP=0x000000000022e2a1
- (id)newTrackingViewWithFrame:(struct CGRect)arg1 initialState:(long long)arg2;	// IMP=0x000000000022e232
- (id)composition;	// IMP=0x000000000022e1b8
- (id)compositionController;	// IMP=0x000000000022e168
- (void)trackingWasEditedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022e112
- (void)trackingWasEdited;	// IMP=0x000000000022e0a6
- (CDStruct_1b6d18a9)unadjustedTimeForPlayerTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022df8c
- (void)setNeedsUpdateTrackingFrame;	// IMP=0x000000000022df6f
- (void)enableUIForCinematographyScriptLoad:(_Bool)arg1;	// IMP=0x000000000022df16
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000022dcfa
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)scriptDidUpdate;	// IMP=0x000000000022dc85
- (void)frameTimeDidChange;	// IMP=0x000000000022dc42
- (void)renderDidChange:(_Bool)arg1;	// IMP=0x000000000022dc25
- (void)viewDidLayoutSubviews;	// IMP=0x000000000022cf01
- (void)loadView;	// IMP=0x000000000022cee4
- (id)initWithMediaView:(id)arg1 cineController:(id)arg2;	// IMP=0x000000000022cd18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

