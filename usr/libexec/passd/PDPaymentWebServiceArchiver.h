//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDPaymentWebServiceArchiver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000039608
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x0010000000039548
- (void)archiveContext:(id)arg1;	// IMP=0x00100000000393c1
- (id)initWithQueue:(id)arg1 webServiceCoordinator:(id)arg2;	// IMP=0x0010000000039328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
