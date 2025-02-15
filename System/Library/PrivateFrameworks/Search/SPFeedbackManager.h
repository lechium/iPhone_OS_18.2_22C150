//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, PARSession;
@protocol OS_dispatch_queue;

@interface SPFeedbackManager : NSObject
{
    _Bool _clientRankAndBlend;	// 8 = 0x8
    NSString *_clientBundleID;	// 16 = 0x10
    _Bool _needsToDisplayFirstTimeView;	// 24 = 0x18
    _Bool _isParsecEnabled;	// 25 = 0x19
    PARSession *_parsecFeedbackListener;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_feedbackQueue;	// 40 = 0x28
    NSUserDefaults *_defaultsCenter;	// 48 = 0x30
}

+ (void)bumpPriorityOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019b6c
+ (void)flushFeedbackWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019916
+ (id)sharedManager;	// IMP=0x00100000000196ed
- (void).cxx_destruct;	// IMP=0x000000000001ad46
@property _Bool isParsecEnabled; // @synthesize isParsecEnabled=_isParsecEnabled;
@property _Bool needsToDisplayFirstTimeView; // @synthesize needsToDisplayFirstTimeView=_needsToDisplayFirstTimeView;
@property(retain, nonatomic) NSUserDefaults *defaultsCenter; // @synthesize defaultsCenter=_defaultsCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue; // @synthesize feedbackQueue=_feedbackQueue;
@property(retain, nonatomic) PARSession *parsecFeedbackListener; // @synthesize parsecFeedbackListener=_parsecFeedbackListener;
- (void)updateParsecEnabled;	// IMP=0x000000000001ab5c
- (void)updateNeedsToDisplayFirstTimeView;	// IMP=0x000000000001aa3a
- (_Bool)isParsecFeedbackEnabled;	// IMP=0x000000000001aa01
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001a8f6
- (void)didPerformCommand:(id)arg1;	// IMP=0x000000000001a8df
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;	// IMP=0x000000000001a8c5
- (void)didReportUserResponseFeedback:(id)arg1;	// IMP=0x000000000001a8ae
- (void)cardViewDidAppear:(id)arg1;	// IMP=0x000000000001a897
- (void)didGradeResultRelevancy:(id)arg1;	// IMP=0x000000000001a880
- (void)sectionHeaderDidBecomeVisible:(id)arg1;	// IMP=0x000000000001a869
- (void)didEngageSection:(id)arg1;	// IMP=0x000000000001a852
- (void)didClearInput:(id)arg1;	// IMP=0x000000000001a83b
- (void)didAppendLateSections:(id)arg1;	// IMP=0x000000000001a824
- (void)didReceiveResultsAfterTimeout:(id)arg1;	// IMP=0x000000000001a80d
- (void)suggestionsDidBecomeVisible:(id)arg1;	// IMP=0x000000000001a7f6
- (void)resultsDidBecomeVisible:(id)arg1;	// IMP=0x000000000001a7df
- (void)sendCustomFeedback:(id)arg1;	// IMP=0x000000000001a7c8
- (void)didErrorOccur:(id)arg1;	// IMP=0x000000000001a7b1
- (void)didEngageCardSection:(id)arg1;	// IMP=0x000000000001a79a
- (void)didEngageSuggestion:(id)arg1;	// IMP=0x000000000001a783
- (void)didEngageResult:(id)arg1;	// IMP=0x000000000001a76c
- (void)didRankSections:(id)arg1;	// IMP=0x000000000001a755
- (void)didEndSearch:(id)arg1;	// IMP=0x000000000001a73e
- (void)didStartSearch:(id)arg1;	// IMP=0x000000000001a727
- (void)cardViewDidDisappear:(id)arg1;	// IMP=0x000000000001a710
- (void)searchViewDidDisappear:(id)arg1;	// IMP=0x000000000001a6f9
- (void)searchViewDidAppear:(id)arg1;	// IMP=0x000000000001a6e2
- (void)_sendFeedback:(id)arg1 type:(long long)arg2;	// IMP=0x000000000001a67e
- (void)_sendFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;	// IMP=0x0000000000019c2d
- (id)init;	// IMP=0x0000000000019742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

