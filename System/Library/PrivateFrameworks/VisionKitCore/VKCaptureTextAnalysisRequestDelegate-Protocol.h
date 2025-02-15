//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSError, VKCImageAnalysis, VKCaptureTextAnalysisRequest, VKCaptureTextDetectionResult;

@protocol VKCaptureTextAnalysisRequestDelegate <NSObject>
- (void)requestDidCancel:(VKCaptureTextAnalysisRequest *)arg1;
- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didRecgonizeTextWithAnalysis:(VKCImageAnalysis *)arg2;
- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didDetectTextWithResult:(VKCaptureTextDetectionResult *)arg2;
- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

