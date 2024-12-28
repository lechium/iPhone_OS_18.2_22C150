//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject
{
    _Bool _reported;	// 8 = 0x8
    int _state;	// 12 = 0xc
    RPDevice *_device;	// 16 = 0x10
    RPLegacyDeviceDiscovery *_discovery;	// 24 = 0x18
    RPLegacySession *_session;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005baa2
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) RPLegacySession *session; // @synthesize session=_session;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(retain, nonatomic) RPLegacyDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) RPDevice *device; // @synthesize device=_device;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000005b8e4
- (void)pairVerify;	// IMP=0x000000000005b649
- (void)invalidate;	// IMP=0x000000000005b5ff

@end
