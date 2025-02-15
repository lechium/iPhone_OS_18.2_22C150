//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PRProximitySingleThresholdDevice : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSString *_model;	// 16 = 0x10
    struct deque<BtProxData, std::allocator<BtProxData>> _samples;	// 24 = 0x18
    long long _proximity;	// 72 = 0x48
    struct unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> _estimator;	// 80 = 0x50
    long long _sampleCount;	// 88 = 0x58
    double _mostRecentSampleTime;	// 96 = 0x60
    NSUUID *_peer;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x00000000000255a9
- (void).cxx_destruct;	// IMP=0x0000000000025553
@property(readonly) NSUUID *peer; // @synthesize peer=_peer;
- (long long)deviceProximity;	// IMP=0x0000000000025535
- (_Bool)proxReady;	// IMP=0x00000000000254c2
- (void)addSample:(struct BtProxData)arg1;	// IMP=0x000000000002543d
- (id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000250aa
- (id)init;	// IMP=0x000000000002506c

@end

