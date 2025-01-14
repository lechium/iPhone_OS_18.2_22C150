//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DASimulatedDeviceClient : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    NSString *_deviceBonjourServiceType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000241e2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *deviceBonjourServiceType; // @synthesize deviceBonjourServiceType=_deviceBonjourServiceType;
- (void)_invalidated;	// IMP=0x000000000002413f
- (void)invalidate;	// IMP=0x0000000000024073
- (void)activate;	// IMP=0x0000000000023fc8
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000023f79
- (id)description;	// IMP=0x0000000000023f62
- (id)init;	// IMP=0x0000000000023f01

@end

