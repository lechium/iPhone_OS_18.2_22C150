//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactlessReaderUI/NSObject-Protocol.h>

@class AVSpeechSynthesisMarker, AVSpeechSynthesizer, AVSpeechUtterance;

@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakMarker:(AVSpeechSynthesisMarker *)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didCancelSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didContinueSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didPauseSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didFinishSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didStartSpeechUtterance:(AVSpeechUtterance *)arg2;
@end

