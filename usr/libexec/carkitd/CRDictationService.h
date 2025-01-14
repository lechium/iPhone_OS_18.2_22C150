//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, CARDictationResult, NSError, NSString, NSTimer;

@interface CRDictationService : NSObject
{
    AFDictationConnection *_dictationConnection;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    CARDictationResult *_result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSTimer *_processingTimer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x002000000000b7d9
- (void).cxx_destruct;	// IMP=0x002000000000cd5c
@property(retain, nonatomic) NSTimer *processingTimer; // @synthesize processingTimer=_processingTimer;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CARDictationResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x001000000000cc04
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x001000000000cb45
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x001000000000caca
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x001000000000c7f7
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x001000000000c76b
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x001000000000c6f0
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;	// IMP=0x001000000000c694
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;	// IMP=0x001000000000c619
- (void)_failWithError:(id)arg1;	// IMP=0x001000000000c5e6
- (void)_finishIfPossible;	// IMP=0x001000000000c4ec
- (void)_processingTimeLimitReached;	// IMP=0x001000000000c43d
- (void)reset;	// IMP=0x001000000000c370
- (void)_transitionToState:(long long)arg1;	// IMP=0x001000000000c096
- (void)_fireHandler:(CDUnknownBlockType)arg1 withState:(long long)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x001000000000be2a
- (void)beginRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bc24
- (void)cancelRecording;	// IMP=0x001000000000bb38
- (void)stopRecording;	// IMP=0x001000000000baae
@property(readonly, nonatomic) _Bool dictationAvailable;
@property(readonly, nonatomic) _Bool dictationEnabledInKeyboardSettings;
@property(readonly, nonatomic) _Bool dictationEnabled;
- (id)init;	// IMP=0x001000000000b82e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

