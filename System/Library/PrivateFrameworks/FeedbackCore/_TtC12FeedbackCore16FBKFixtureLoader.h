//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12FeedbackCore16FBKFixtureLoader : NSObject
{
    MISSING_TYPE *bundle;	// 8 = 0x8
    MISSING_TYPE *testFixtureDir;	// 16 = 0x10
    MISSING_TYPE *Log;	// 32 = 0x20
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000f2220
- (id)init;	// IMP=0x00000000000f21c0
- (void)deleteAtURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f0ed0
- (void)deleteResourceAtURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0dd0
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f0cb0
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f0b80
- (void)jsonForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0a80
- (void)dataForURL:(id)arg1 successWithResponse:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0120
- (void)dataForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0020
- (void)jsonForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000efe70
- (void)dataForURLRequest:(id)arg1 successWithResponse:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000efc30
- (void)dataForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x00000000000efac0
- (void)didLogInWithLoginUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000efa10
- (void)didLogOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef9a0
- (id)initForBundle:(id)arg1;	// IMP=0x00000000000ef940

@end

