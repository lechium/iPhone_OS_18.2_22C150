//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEORPFeedbackRequest, GEORPFeedbackResponse, NSArray, NSError;

@protocol FeedbackUploaderStepObserver <NSObject>
- (void)finishedCorrectionsUploadWithResponse:(GEORPFeedbackResponse *)arg1 request:(GEORPFeedbackRequest *)arg2 error:(NSError *)arg3;
- (void)finishedUploadingImagesWithImageUpdate:(NSArray *)arg1 correctionsRequest:(GEORPFeedbackRequest *)arg2 completion:(void (^)(GEORPFeedbackRequest *))arg3;
@end

