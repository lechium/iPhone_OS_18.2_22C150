//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/NSObject-Protocol.h>

@protocol SignpostSupportTimeInterval <NSObject>
- (double)durationMs;
- (double)endMs;
- (double)startMs;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)endNanoseconds;
- (unsigned long long)startNanoseconds;
- (float)durationSeconds;
- (double)endSeconds;
- (double)startSeconds;
- (double)timebaseRatio;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
@end
