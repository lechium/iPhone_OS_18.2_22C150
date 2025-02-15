//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAudioTimeObserverImpl : NSObject
{
    shared_ptr_a9ec9eae _deviceTimeClient;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000002c036
- (void).cxx_destruct;	// IMP=0x000000000002c028
- (shared_ptr_a9ec9eae)deviceTimeClient;	// IMP=0x000000000002c006
- (_Bool)isLatencyDynamic;	// IMP=0x000000000002bff8
- (struct AVAudioTimeInterval)currentLatency;	// IMP=0x000000000002bfdc
- (struct AudioPresentationTimeStamp)currentPresentationTime;	// IMP=0x000000000002bfc0
- (struct AudioTimeStamp)currentTime;	// IMP=0x000000000002bfa4
- (id)initWithDeviceTimeClient:(shared_ptr_a9ec9eae)arg1;	// IMP=0x000000000002bf52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

