//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class NSObject;
@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDeviceIdentityCertificateTask : AMSTask
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038105e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)arg1 ttlBagKey:(id)arg2 logInformation:(id)arg3;	// IMP=0x00000000003809c5
- (id)initWithBag:(id)arg1;	// IMP=0x0000000000380586
- (id)performDeviceIdentityRequestForAbsinthe;	// IMP=0x000000000038041b
- (id)performDeviceIdentityRequestForFraudReport;	// IMP=0x0000000000380445

@end

