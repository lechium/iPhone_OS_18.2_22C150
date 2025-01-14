//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPSoundClassifier300 : NSObject
{
    NSMutableArray *_results;	// 8 = 0x8
    CDStruct_1b6d18a9 _trackStart;	// 16 = 0x10
    NSString *_resultsKey;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000255e09
- (id)results;	// IMP=0x0000000000255d99
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x0000000000255d91
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x000000000025593f
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 classification:(id)arg3;	// IMP=0x000000000025563d
- (id)initWithTrackStart:(CDStruct_1b6d18a9)arg1 resultsKey:(id)arg2;	// IMP=0x0000000000255542

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

