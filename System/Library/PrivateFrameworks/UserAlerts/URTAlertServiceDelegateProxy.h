//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, URTAlertService;

__attribute__((visibility("hidden")))
@interface URTAlertServiceDelegateProxy : NSObject
{
    URTAlertService *_service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002be6
@property(readonly, nonatomic) __weak URTAlertService *service; // @synthesize service=_service;
- (oneway void)dismissAlert:(id)arg1;	// IMP=0x0000000000002b3a
- (oneway void)presentAlert:(id)arg1 preferringPresentationStyle:(id)arg2;	// IMP=0x0000000000002a6f
- (id)initWithService:(id)arg1;	// IMP=0x0000000000002a0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
