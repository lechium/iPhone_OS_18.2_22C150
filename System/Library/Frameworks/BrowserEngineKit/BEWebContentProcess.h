//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface BEWebContentProcess : NSObject
{
    MISSING_TYPE *inner;	// 167936 = 0x29000
}

+ (void)webContentProcessWithInterruptionHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000013a80
+ (void)webContentProcessWithBundleID:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000013f70
- (void).cxx_destruct;	// IMP=0x0000000000013cf0
- (id)init;	// IMP=0x0000000000013ca0
- (id)createVisibilityPropagationInteraction;	// IMP=0x0000000000013c40
- (id)makeLibXPCConnectionError:(id *)arg1;	// IMP=0x0000000000013c20
- (void)invalidate;	// IMP=0x0000000000013bd0
- (id)grantCapability:(id)arg1 error:(id *)arg2 invalidationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019e20
- (id)grantCapability:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019df0

@end
