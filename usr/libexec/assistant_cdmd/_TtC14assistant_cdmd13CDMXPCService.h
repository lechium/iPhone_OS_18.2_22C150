//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14assistant_cdmd13CDMXPCService : NSObject
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *sandboxExtension;	// 16 = 0x10
    MISSING_TYPE *transaction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000006c5b
- (void)dealloc;	// IMP=0x0010000000006c3e
- (void)waitForDataDispatcherCompletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006b5c
- (void)processRequestWithServiceGraphCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006921
- (void)areAssetsAvailableWithLocale:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000664d
- (void)processCDMNluRequestWithCdmNluRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006563
- (void)warmupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000632f
- (void)setupWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006187
- (id)sandboxToken;	// IMP=0x0010000000005a39
- (void)wake;	// IMP=0x001000000000593b
- (id)initWithClientToUse:(id)arg1;	// IMP=0x0010000000005757
- (id)init;	// IMP=0x00100000000056ce

@end
