//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VSJSApp, VSStateMachine;

__attribute__((visibility("hidden")))
@interface VSJSAppScriptEvaluator : NSObject
{
    NSArray *_urls;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    VSJSApp *_app;	// 24 = 0x18
    VSStateMachine *_stateMachine;	// 32 = 0x20
    NSMutableArray *_remainingURLs;	// 40 = 0x28
    NSString *_currentURL;	// 48 = 0x30
    NSMutableArray *_results;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000071ae3
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSMutableArray *remainingURLs; // @synthesize remainingURLs=_remainingURLs;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) VSJSApp *app; // @synthesize app=_app;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void)transitionToDoneState;	// IMP=0x000000000007194d
- (void)transitionToFetchingScriptState;	// IMP=0x00000000000713cf
- (void)transitionToEnqueueingNextUrlState;	// IMP=0x00000000000711ac
- (void)start;	// IMP=0x000000000007101f
- (id)initWithApp:(id)arg1 urls:(id)arg2;	// IMP=0x0000000000070e22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
