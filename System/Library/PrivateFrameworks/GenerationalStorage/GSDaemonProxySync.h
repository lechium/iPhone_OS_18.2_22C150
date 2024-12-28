//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSError, NSObject;
@protocol GSProtocol;

__attribute__((visibility("hidden")))
@interface GSDaemonProxySync : NSProxy
{
    NSObject<GSProtocol> *_target;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    id _result;	// 24 = 0x18
}

+ (id)proxy;	// IMP=0x0010000000003154
- (void).cxx_destruct;	// IMP=0x000000000000343e
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (struct __CFError *)copyCFError;	// IMP=0x00000000000033d9
- (void)handleObjResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000003378
- (void)handleBoolResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000003309
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000032de
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000003291
- (void)finalize;	// IMP=0x0000000000003262
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0000000000002f8a

@end
