//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface _EARSyncResultStreamHelper : NSObject
{
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSArray *_results;	// 24 = 0x18
    NSMutableArray *_taggedResults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f2d7e
@property(readonly, nonatomic) NSMutableArray *taggedResults; // @synthesize taggedResults=_taggedResults;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)addPartialFinalTag:(basic_string_76cbfbed)arg1 result:(id)arg2;	// IMP=0x00000000000f239f
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x00000000000f228b
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x00000000000f2250
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x00000000000f2185
- (void)waitForCompletion;	// IMP=0x00000000000f2170
- (id)init;	// IMP=0x00000000000f215c
- (id)initWithTagResults:(_Bool)arg1;	// IMP=0x00000000000f20c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
