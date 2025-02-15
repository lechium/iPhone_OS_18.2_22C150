//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController
{
    _Bool _startImmediately;	// 8 = 0x8
    _Bool _isFinishing;	// 9 = 0x9
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    double _recordingDuration;	// 24 = 0x18
    WFAudioRecorder *_audioRecorder;	// 32 = 0x20
    UIButton *_inputButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002963c
@property(nonatomic) _Bool isFinishing; // @synthesize isFinishing=_isFinishing;
@property(nonatomic) __weak UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) WFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) _Bool startImmediately; // @synthesize startImmediately=_startImmediately;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;	// IMP=0x00000000000294bc
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;	// IMP=0x00000000000293d8
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000293d0
- (void)inputButtonTapped;	// IMP=0x0000000000028fa1
- (void)finishRecording;	// IMP=0x0000000000028f64
- (void)startRecording;	// IMP=0x0000000000028e7d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000028e28
- (void)handleTap;	// IMP=0x0000000000028d87
- (void)viewDidLoad;	// IMP=0x0000000000028a2d
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;	// IMP=0x000000000002896e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

