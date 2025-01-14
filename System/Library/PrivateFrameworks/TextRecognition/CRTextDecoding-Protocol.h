//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRNeuralRecognizerConfiguration, NSObject;
@protocol CRTextDecodingLanguageRecognitionSession, CRTextRecognizerModel, CRTextRecognizerModelOutput;

@protocol CRTextDecoding <NSObject>
- (_Bool)shouldDecodeWithLM;
- (_Bool)decodeOutput:(NSObject<CRTextRecognizerModelOutput> *)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(CRNeuralRecognizerConfiguration *)arg1 model:(NSObject<CRTextRecognizerModel> *)arg2 error:(id *)arg3;

@optional
- (void)releaseUnusedResources;
- (void)computeLanguageRecognitionForSession:(NSObject<CRTextDecodingLanguageRecognitionSession> *)arg1 output:(NSObject<CRTextRecognizerModelOutput> *)arg2 imageSize:(struct CGSize)arg3;
- (NSObject<CRTextDecodingLanguageRecognitionSession> *)newLanguageRecognizerSession;
@end

