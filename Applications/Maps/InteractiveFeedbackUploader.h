//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPFeedbackSubmissionTicket, NSString, NSURLSession;
@protocol FeedbackUploaderStepObserver;

@interface InteractiveFeedbackUploader : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    MSPFeedbackSubmissionTicket *_correctionsTicket;	// 16 = 0x10
    id <FeedbackUploaderStepObserver> _uploadStepObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000c46ce1
@property(nonatomic) __weak id <FeedbackUploaderStepObserver> uploadStepObserver; // @synthesize uploadStepObserver=_uploadStepObserver;
- (void)_submitCorrectionsRequest:(id)arg1 traits:(id)arg2 parentProgress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000c467e3
- (void)submitPhotosWithMetadata:(id)arg1 withImageUploadResult:(id)arg2 withCorrectionsRequest:(id)arg3 traits:(id)arg4 parentProgress:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000c45732
- (void)submitCorrectionsRequest:(id)arg1 traits:(id)arg2 parentProgress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000c45720
- (id)initWithUploadStepObserver:(id)arg1;	// IMP=0x0010000000c45656

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

