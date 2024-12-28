//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamNOWRDLossEventRateControl : NSObject
{
    double _packetLossRate;	// 8 = 0x8
    double _roundTripTime;	// 16 = 0x10
    double _firstReceiveTime;	// 24 = 0x18
    double _shortAverageLag;	// 32 = 0x20
    double _longAverageLag;	// 40 = 0x28
    double _owrd;	// 48 = 0x30
    struct OWRDList OWRDList;	// 56 = 0x38
    double _nowrd;	// 1672 = 0x688
    double _nowrdShort;	// 1680 = 0x690
    double _nowrdAcc;	// 1688 = 0x698
    unsigned int _firstSendTimestamp;	// 1696 = 0x6a0
    unsigned int _previousSendTimestamp;	// 1700 = 0x6a4
    unsigned int _previousTimestampDiff;	// 1704 = 0x6a8
    int _sendTimestampWrappedAround;	// 1708 = 0x6ac
    _Bool _lossEventBuffer[4];	// 1712 = 0x6b0
    int _lossEventBufferIndex;	// 1716 = 0x6b4
    double _lastLossEventTime;	// 1720 = 0x6b8
    double _rampUpFrozenTime;	// 1728 = 0x6c0
    double _rampUpFrozenDuration;	// 1736 = 0x6c8
    double _rampDownLossRateThreshold;	// 1744 = 0x6d0
    double _rampDownLossEventBitrateThreshold;	// 1752 = 0x6d8
    double _rampDownLossEventCountThreshold;	// 1760 = 0x6e0
    double _rampUpNoLossEventDurationRatio;	// 1768 = 0x6e8
    double _rampUpStatusRateLimitedThreshold;	// 1776 = 0x6f0
    double _nowrdRampDownThreshold;	// 1784 = 0x6f8
    double _nowrdRampUpThreshold;	// 1792 = 0x700
    double _nowrdAccRampDownThreshold;	// 1800 = 0x708
    double _nowrdAccRampUpThreshold;	// 1808 = 0x710
    unsigned int _rampUpStatus;	// 1816 = 0x718
    unsigned int _rampDownStatus;	// 1820 = 0x71c
    int _state;	// 1824 = 0x720
    double _rateControlTime;	// 1832 = 0x728
    unsigned int _targetBitrate;	// 1840 = 0x730
    unsigned int _averageReceivedBitrate;	// 1844 = 0x734
    unsigned int _totalActualBitrate;	// 1848 = 0x738
    unsigned int _doRateControlCounter;	// 1852 = 0x73c
    unsigned short _currentTierIndex;	// 1856 = 0x740
    unsigned short _prevOperatingTierIndex;	// 1858 = 0x742
    unsigned short _minTierIndex;	// 1860 = 0x744
    unsigned short _maxTierIndex;	// 1862 = 0x746
    double _rateControlInterval;	// 1864 = 0x748
}

@property(nonatomic) double rateControlInterval; // @synthesize rateControlInterval=_rateControlInterval;
@property(readonly, nonatomic) double nowrdAcc; // @synthesize nowrdAcc=_nowrdAcc;
@property(readonly, nonatomic) double nowrdShort; // @synthesize nowrdShort=_nowrdShort;
@property(readonly, nonatomic) double nowrd; // @synthesize nowrd=_nowrd;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (id)className;	// IMP=0x0000000000061120
- (void)calculateNOWRD:(double)arg1 time:(double)arg2;	// IMP=0x0000000000060d06
- (void)calculateOWRDWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;	// IMP=0x00000000000607fb
- (void)resetLossEventBuffer;	// IMP=0x00000000000607ea
- (int)lossEventCountThresholdForBitrate:(unsigned int)arg1;	// IMP=0x00000000000607c2
- (int)lossEventCount;	// IMP=0x00000000000607a8
- (void)updatePacketLossRate:(double)arg1 time:(double)arg2;	// IMP=0x0000000000060758
- (_Bool)shouldRampUp;	// IMP=0x0000000000060692
- (_Bool)shouldRampDown;	// IMP=0x00000000000605de
- (unsigned short)rampDownTier;	// IMP=0x00000000000605b4
- (unsigned short)rampUpTier;	// IMP=0x0000000000060595
- (void)stateEnter;	// IMP=0x0000000000060576
- (void)stateExit;	// IMP=0x0000000000060570
- (void)stateChange:(int)arg1;	// IMP=0x0000000000060417
- (void)printRateControlFullInfoWithLogDump:(void *)arg1 time:(double)arg2 videoStall:(_Bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;	// IMP=0x00000000000602f2
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;	// IMP=0x00000000000602e0
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;	// IMP=0x00000000000600e3
@property(readonly, copy) NSString *description;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;	// IMP=0x000000000006002d
- (id)init;	// IMP=0x000000000005fe1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
