//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface BENetworkingProcess : NSObject
{
    MISSING_TYPE *inner;	// 167936 = 0x29000
}

+ (void)networkProcessWithInterruptionHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000014cd0
+ (void)networkProcessWithBundleID:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000015300
- (void).cxx_destruct;	// IMP=0x0000000000014f90
- (id)init;	// IMP=0x0000000000014f40
- (id)makeLibXPCConnectionError:(id *)arg1;	// IMP=0x0000000000014e70
- (void)invalidate;	// IMP=0x0000000000014e20
- (id)grantCapability:(id)arg1 error:(id *)arg2 invalidationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a010
- (id)grantCapability:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019f20

@end
