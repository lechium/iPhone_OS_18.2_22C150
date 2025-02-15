//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHDrawing, CHSynthesisResult, NSDictionary, NSIndexSet, NSString;

@protocol CHSynthesizingText <NSObject>
- (NSIndexSet *)supportedCharacterIndexesForString:(NSString *)arg1 options:(NSDictionary *)arg2;
- (CHSynthesisResult *)replaceDrawing:(CHDrawing *)arg1 originalTranscription:(NSString *)arg2 replacementTranscription:(NSString *)arg3 options:(NSDictionary *)arg4 shouldCancel:(_Bool (^)(void))arg5 error:(id *)arg6;
- (CHSynthesisResult *)refineDrawing:(CHDrawing *)arg1 transcription:(NSString *)arg2 options:(NSDictionary *)arg3 shouldCancel:(_Bool (^)(void))arg4 error:(id *)arg5;
- (CHSynthesisResult *)synthesizeDrawingForString:(NSString *)arg1 options:(NSDictionary *)arg2 shouldCancel:(_Bool (^)(void))arg3 error:(id *)arg4;
@end

