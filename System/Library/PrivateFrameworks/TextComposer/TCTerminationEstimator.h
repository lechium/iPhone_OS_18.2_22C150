//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol OS_os_transaction;

@interface TCTerminationEstimator : NSObject
{
    NSString *_language;	// 8 = 0x8
    struct CoreLanguageModelWithState *_coreLM;	// 16 = 0x10
    NSObject<OS_os_transaction> *_coreLMTransaction;	// 24 = 0x18
    NSMutableDictionary *_cachedTerminationEstimateDictionary;	// 32 = 0x20
    NSMutableArray *_cachedSentenceArray;	// 40 = 0x28
    NSTimer *_idleTimer;	// 48 = 0x30
    double _coreLMLastTime;	// 56 = 0x38
    unsigned long long _coreLMCount;	// 64 = 0x40
    float _threshold;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000067b6c
- (_Bool)analyzeSentenceAsPotentiallyTerminated:(id)arg1;	// IMP=0x0000000000067b48
- (float)terminationEstimateForSentence:(id)arg1;	// IMP=0x00000000000679a8
- (float)computedTerminationEstimateForSentence:(id)arg1;	// IMP=0x000000000006792e
- (void)resetIdleTimer;	// IMP=0x00000000000678b5
- (void)idleTimerFired:(id)arg1;	// IMP=0x000000000006786a
- (void)resetModel;	// IMP=0x00000000000677e1
- (void)loadModel;	// IMP=0x0000000000067624
- (void)dealloc;	// IMP=0x00000000000675e5
- (id)initWithLanguage:(id)arg1;	// IMP=0x0000000000067506

@end

