//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeedbackSubmissionPostActionStorage;

@interface FeedbackSubmissionPostActionManager : NSObject
{
    FeedbackSubmissionPostActionStorage *_submissionStorage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000af0544
- (void)performActionWithFeedbackResponse:(id)arg1 feedbackRequest:(id)arg2;	// IMP=0x0010000000af034e
- (_Bool)saveFeedbackObject:(id)arg1 forSubmissionIdentifier:(id)arg2;	// IMP=0x0010000000af01be
- (id)init;	// IMP=0x0010000000af0168

@end

