//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMatcherRequest;
@protocol SHMatcher, SHMatcherDelegate;

@interface SHAppIntentMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    id <SHMatcher> _childMatcher;	// 16 = 0x10
    id <SHMatcher> _matcher;	// 24 = 0x18
    SHMatcherRequest *_matcherRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001203f
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(readonly, nonatomic) id <SHMatcher> matcher; // @synthesize matcher=_matcher;
@property(retain, nonatomic) id <SHMatcher> childMatcher; // @synthesize childMatcher=_childMatcher;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0010000000011f6d
- (void)_stop;	// IMP=0x0010000000011ebe
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x0010000000011d51
- (void)stopRecognition;	// IMP=0x0010000000011ce3
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0010000000011c31
- (id)initWithRunnerMatcher:(id)arg1;	// IMP=0x0010000000011bc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

