//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristic, MISSING_TYPE;

@interface _TtC13HomeKitDaemon32HMDWidgetMonitoredCharacteristic : NSObject
{
    MISSING_TYPE *characteristic;	// 8 = 0x8
    MISSING_TYPE *reachabilityMonitored;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fb9b0
- (id)init;	// IMP=0x00000000000fb950
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb870
@property(nonatomic, readonly) long long hash;
- (id)initWithCharacteristic:(id)arg1 reachabilityMonitored:(_Bool)arg2;	// IMP=0x00000000000fb6d0
@property(nonatomic, readonly) _Bool reachabilityMonitored; // @synthesize reachabilityMonitored;
@property(nonatomic, readonly) HMDCharacteristic *characteristic; // @synthesize characteristic;

@end
