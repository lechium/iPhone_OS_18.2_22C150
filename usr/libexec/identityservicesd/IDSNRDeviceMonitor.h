//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRDeviceIdentifier;

@interface IDSNRDeviceMonitor : NSObject
{
    _Bool _isRegistered;	// 8 = 0x8
    _Bool _isEnabled;	// 9 = 0x9
    _Bool _isNearby;	// 10 = 0xa
    _Bool _isConnected;	// 11 = 0xb
    _Bool _isAsleep;	// 12 = 0xc
    _Bool _isClassCConnected;	// 13 = 0xd
    IDSNRDeviceIdentifier *_deviceIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000606e
@property(readonly, nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(readonly, nonatomic) _Bool isAsleep; // @synthesize isAsleep=_isAsleep;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
@property(readonly, nonatomic) IDSNRDeviceIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)init;	// IMP=0x0010000000006020
- (id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000006012

@end

