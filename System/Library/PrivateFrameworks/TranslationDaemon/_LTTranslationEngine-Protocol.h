//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationDaemon/NSObject-Protocol.h>

@class NSArray, NSData, NSString, _LTLanguageDetectionResult, _LTLocalePair, _LTTranslationContext;
@protocol _LTSpeechTranslationDelegate;

@protocol _LTTranslationEngine <NSObject>
- (void)speak:(NSString *)arg1 withContext:(_LTTranslationContext *)arg2 completion:(void (^)(_LTAudioData *, NSError *))arg3;
- (void)cancelSpeechTranslation:(_Bool)arg1;
- (void)endAudio;
- (void)endpoint;
- (void)addSpeechAudioData:(NSData *)arg1;
- (void)startSpeechTranslationWithContext:(_LTTranslationContext *)arg1 delegate:(id <_LTSpeechTranslationDelegate>)arg2;
- (void)translate:(NSArray *)arg1 withContext:(_LTTranslationContext *)arg2 paragraphResult:(void (^)(NSString *, _LTTranslationResult *, NSError *))arg3 completion:(void (^)(NSError *))arg4;
- (void)translateSentence:(NSString *)arg1 withContext:(_LTTranslationContext *)arg2 completion:(void (^)(_LTTranslationResult *, NSError *))arg3;
- (void)preheatAsynchronously:(_Bool)arg1 withContext:(_LTTranslationContext *)arg2;
- (_Bool)translatesPair:(_LTLocalePair *)arg1;

@optional
- (void)startTextToSpeechTranslationWithContext:(_LTTranslationContext *)arg1 text:(NSString *)arg2 delegate:(id <_LTSpeechTranslationDelegate>)arg3;
- (void)setLanguagesRecognized:(_LTLanguageDetectionResult *)arg1 context:(_LTTranslationContext *)arg2;
@end

