//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIHomeKitClient, NSOperationQueue, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface HMIFeedbackSession : HMFObject
{
    HMIHomeKitClient *_homeKitClient;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSString *_feedbackServiceHost;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000055073
- (void).cxx_destruct;	// IMP=0x0000000000055132
@property(readonly) NSString *feedbackServiceHost; // @synthesize feedbackServiceHost=_feedbackServiceHost;
@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) HMIHomeKitClient *homeKitClient; // @synthesize homeKitClient=_homeKitClient;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054914
- (id)init;	// IMP=0x0000000000054737

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
