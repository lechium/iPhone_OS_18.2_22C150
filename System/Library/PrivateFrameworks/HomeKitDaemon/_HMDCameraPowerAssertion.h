//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

__attribute__((visibility("hidden")))
@interface _HMDCameraPowerAssertion : HMFObject
{
    HMDCameraPowerAssertionHandler *_assertionHandler;	// 8 = 0x8
    HMDCameraSessionID *_remoteRequestHandlerSessionID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000acaa7c
@property(readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID; // @synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID;
@property(readonly, nonatomic) __weak HMDCameraPowerAssertionHandler *assertionHandler; // @synthesize assertionHandler=_assertionHandler;
- (void)dealloc;	// IMP=0x0000000000aca9be
- (id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2;	// IMP=0x0000000000aca923

@end
