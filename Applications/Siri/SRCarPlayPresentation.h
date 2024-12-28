//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCarPlayPresentation : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 16 = 0x10
    MISSING_TYPE *carPlayViewController;	// 24 = 0x18
    MISSING_TYPE *shouldResumeMediaOnIdle;	// 40 = 0x28
    MISSING_TYPE *siriIsIdleAndQuiet;	// 41 = 0x29
    MISSING_TYPE *delayDismissalTimeInSec;	// 48 = 0x30
    MISSING_TYPE *shouldClearFullscreenSnippet;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000094300
- (id)init;	// IMP=0x0010000000094450
- (void)autodismiss;	// IMP=0x0010000000094420
- (void)dealloc;	// IMP=0x0010000000094290
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0010000000094180
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000094140
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate;
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x00100000000977a0
- (void)handleRequestToCeaseAttending;	// IMP=0x0010000000097560
- (id)viewController;	// IMP=0x00100000000971c0
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x00100000000971b0
- (void)siriDidOpenURL:(id)arg1 bundleId:(id)arg2 inPlace:(_Bool)arg3;	// IMP=0x00100000000970e0
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x0010000000097050
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x0010000000096f20
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0010000000096d00
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0010000000096ce0
- (void)siriWillBePresented:(long long)arg1;	// IMP=0x0010000000096be0
- (void)siriDidDeactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096a60
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x00100000000969a0
- (_Bool)shouldResumeInterruptedAudioPlaybackForAttendingState:(_Bool)arg1;	// IMP=0x0010000000096980
- (void)handleRequestEndBehavior:(id)arg1 isAttending:(_Bool)arg2;	// IMP=0x0010000000096920
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1 isAttending:(_Bool)arg2;	// IMP=0x0010000000096630
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x0010000000096270
- (_Bool)shouldAllowTouchPassThrough;	// IMP=0x0010000000096260
- (_Bool)shouldProceedToNextCommandAtSpeechSynthesisEnd;	// IMP=0x0010000000096230
- (long long)options;	// IMP=0x0010000000096180
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000096170
- (_Bool)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x0010000000096110
- (void)conversation:(id)arg1 didChangeWithTransaction:(id)arg2;	// IMP=0x0010000000095f90

@end
