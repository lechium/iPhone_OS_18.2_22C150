//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSBundle;
@protocol OS_dispatch_queue;

@interface ADLocalRequestProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
}

+ (id)sharedProvider;	// IMP=0x004000000018544f
- (void).cxx_destruct;	// IMP=0x002000000018522e
- (void)_getLocalRequestWithType:(long long)arg1 bundle:(id)arg2 languageCode:(id)arg3 outputVoiceInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000184e54
- (id)_bundle;	// IMP=0x0010000000184df8
- (MISSING_TYPE *)getLocalRequestWithType:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000184d58
- (id)init;	// IMP=0x0010000000184caf

@end
