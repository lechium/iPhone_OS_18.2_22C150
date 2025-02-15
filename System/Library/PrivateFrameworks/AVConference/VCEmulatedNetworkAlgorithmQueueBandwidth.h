//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject
{
    NSDictionary *_policies;	// 8 = 0x8
    double _expectedProcessEndTime;	// 16 = 0x10
    unsigned int _packetCountInNetworkQueue;	// 24 = 0x18
    int _packetCountBytesInNetworkQueue;	// 28 = 0x1c
    unsigned int _networkQueueServiceRate;	// 32 = 0x20
    unsigned int _networkQueueServiceRateMean;	// 36 = 0x24
    unsigned int _networkQueueServiceRateStdDev;	// 40 = 0x28
    unsigned int _networkQueueAQMRate;	// 44 = 0x2c
    int _currentIndexForServiceRate;	// 48 = 0x30
    int _currentIndexForServiceRateDistribution;	// 52 = 0x34
    int _currentIndexForAQMRate;	// 56 = 0x38
    double _lastNetworkQueueServiceRateLoadTime;	// 64 = 0x40
    double _lastNetworkQueueServiceRateDistributionLoadTime;	// 72 = 0x48
    double _lastNetworkQueueAQMRateLoadTime;	// 80 = 0x50
    double _budgetBufferPktTime[4096];	// 88 = 0x58
    double _budgetBufferPktSize[4096];	// 32856 = 0x8058
    int _budgentBufferIndex;	// 65624 = 0x10058
    int _budgetBufferSize;	// 65628 = 0x1005c
}

@property int packetCountBytesInNetworkQueue; // @synthesize packetCountBytesInNetworkQueue=_packetCountBytesInNetworkQueue;
@property unsigned int packetCountInNetworkQueue; // @synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime; // @synthesize expectedProcessEndTime=_expectedProcessEndTime;
- (int)getRemainingAQMBudgetWithPacket:(id)arg1;	// IMP=0x0000000000072d80
- (void)addPacketToBudgetBuffer:(id)arg1;	// IMP=0x0000000000072cde
- (_Bool)shouldDropPacketWithCurrentAQMBudget:(id)arg1;	// IMP=0x0000000000072c6b
- (void)process:(id)arg1;	// IMP=0x000000000007288b
- (double)computeNetworkServiceRate;	// IMP=0x00000000000727ba
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;	// IMP=0x000000000007249f
- (id)init;	// IMP=0x0000000000072441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

