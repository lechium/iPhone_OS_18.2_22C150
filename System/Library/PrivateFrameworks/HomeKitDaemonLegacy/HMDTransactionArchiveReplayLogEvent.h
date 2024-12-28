//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDTransactionArchiveReplayLogEvent : HMMLogEvent
{
    long long _numUncommittedRecords;	// 8 = 0x8
    long long _numUncommittedAndPushedRecords;	// 16 = 0x10
}

@property(readonly) long long numUncommittedAndPushedRecords; // @synthesize numUncommittedAndPushedRecords=_numUncommittedAndPushedRecords;
@property(readonly) long long numUncommittedRecords; // @synthesize numUncommittedRecords=_numUncommittedRecords;
- (id)initWithNumUncommittedRecords:(long long)arg1 numUncommittedAndPushedRecords:(long long)arg2;	// IMP=0x00000000009eb4a5

@end
