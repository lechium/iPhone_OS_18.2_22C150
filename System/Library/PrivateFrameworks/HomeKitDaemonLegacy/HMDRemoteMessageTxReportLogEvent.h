//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent
{
    int _transportType;	// 8 = 0x8
    double _latency;	// 16 = 0x10
}

+ (id)txReportForTransport:(int)arg1 latency:(double)arg2;	// IMP=0x00600000000c25ff
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (id)initWithTransport:(int)arg1 latency:(double)arg2;	// IMP=0x00000000000c2585

@end

