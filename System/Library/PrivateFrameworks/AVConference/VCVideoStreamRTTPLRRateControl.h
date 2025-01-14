//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRTTPLRRateControl : NSObject
{
    double _rampUpFrozenDuration;	// 8 = 0x8
    unsigned short _currentTierIndex;	// 16 = 0x10
    double _packetLossRate;	// 24 = 0x18
    double _roundTripTime;	// 32 = 0x20
    double _rampUpFrozenTime;	// 40 = 0x28
    double _rampDownPacketLossRate;	// 48 = 0x30
    double _rampDownRoundTripTime;	// 56 = 0x38
    double _rampUpPacketLossRate;	// 64 = 0x40
    int _state;	// 72 = 0x48
    double _rateControlTime;	// 80 = 0x50
    unsigned int _targetBitrate;	// 88 = 0x58
    unsigned short _minTierIndex;	// 92 = 0x5c
    unsigned short _maxTierIndex;	// 94 = 0x5e
    double _rateControlInterval;	// 96 = 0x60
}

@property(nonatomic) double rateControlInterval; // @synthesize rateControlInterval=_rateControlInterval;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (_Bool)shouldRampUp;	// IMP=0x0000000000111b7a
- (_Bool)shouldRampDown;	// IMP=0x0000000000111b59
- (unsigned short)rampDownTier;	// IMP=0x0000000000111b40
- (unsigned short)rampUpTier;	// IMP=0x0000000000111b27
- (void)stateEnter;	// IMP=0x0000000000111b11
- (void)stateExit;	// IMP=0x0000000000111b0b
- (void)stateChange:(int)arg1;	// IMP=0x00000000001119bb
- (id)className;	// IMP=0x00000000001119a9
@property(readonly, nonatomic) double nowrdAcc;
@property(readonly, nonatomic) double nowrdShort;
@property(readonly, nonatomic) double nowrd;
@property(readonly, nonatomic) double owrd;
- (void)printRateControlFullInfoWithLogDump:(void *)arg1 time:(double)arg2 videoStall:(_Bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;	// IMP=0x00000000001118f7
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;	// IMP=0x00000000001118f1
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;	// IMP=0x00000000001117cc
@property(readonly, copy) NSString *description;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;	// IMP=0x000000000011175a
- (id)init;	// IMP=0x0000000000111649

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

