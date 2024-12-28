//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBTLE;

__attribute__((visibility("hidden")))
@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject
{
    HAPAccessoryServerBTLE *_accessoryServer;	// 8 = 0x8
    double _lastSeen;	// 16 = 0x10
}

+ (id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1;	// IMP=0x00600000000943a2
- (void).cxx_destruct;	// IMP=0x000000000009438f
@property(nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(readonly, nonatomic) HAPAccessoryServerBTLE *accessoryServer; // @synthesize accessoryServer=_accessoryServer;

@end
