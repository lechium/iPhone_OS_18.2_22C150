//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSObject-Protocol.h>

@class MISSING_TYPE;

@interface HMDDiscoveryController : NSObject <NSObject>
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *discoveryNeedsAssertion;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *isDiscoveryAsserted;	// 0 = 0x0
    MISSING_TYPE *rpInfraWifiDiscoveryClient;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *sfDiscoveryClient;	// 0 = 0x0
    MISSING_TYPE *rapportDiscoveryClientFactory;	// 17385888 = 0x10949a0
    MISSING_TYPE *sharingDiscoveryClientFactory;	// 40220 = 0x9d1c
    MISSING_TYPE *visibleSFDevices;	// 17368078 = 0x109040e
    MISSING_TYPE *assertions;	// 17385888 = 0x10949a0
}

- (void).cxx_destruct;	// IMP=0x00000000000d2980
- (id)init;	// IMP=0x00000000000d2920
- (id)obtainSFVisibleDevicesProto;	// IMP=0x00000000000d0cf0
- (id)obtainNetworkVisibleDevicesProto;	// IMP=0x00000000000d0a70
- (void)start;	// IMP=0x00000000000d0490
- (id)initWithDiscoveryNeedsAssertion:(_Bool)arg1;	// IMP=0x00000000000cfb20

@end

