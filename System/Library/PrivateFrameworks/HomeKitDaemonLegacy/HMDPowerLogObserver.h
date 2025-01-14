//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPowerLogObserverContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDPowerLogObserver : HMFObject
{
    HMDPowerLogObserverContext *_context;	// 8 = 0x8
}

+ (id)supportedEventClasses;	// IMP=0x00100000002fbebf
- (void).cxx_destruct;	// IMP=0x00000000002fbeac
@property(retain, nonatomic) HMDPowerLogObserverContext *context; // @synthesize context=_context;
- (void)stop;	// IMP=0x00000000002fbd4f
- (void)start;	// IMP=0x00000000002fbbea
- (void)_reportCameraSettingsConfiguration:(id)arg1;	// IMP=0x00000000002fb455
- (void)_reportConfiguration:(id)arg1;	// IMP=0x00000000002fafd2
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002faf09
- (id)initWithContext:(id)arg1;	// IMP=0x00000000002fae9b
- (id)initWithLogEventDispatcher:(id)arg1;	// IMP=0x00000000002fadf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

