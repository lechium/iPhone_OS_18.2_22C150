//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15assessmentagent24AEAAssessmentModeService : NSObject
{
    MISSING_TYPE *xpc;	// 8 = 0x8
    MISSING_TYPE *taskSource;	// 16 = 0x10
    MISSING_TYPE *taskQueue;	// 104 = 0x68
    MISSING_TYPE *XPCListener;	// 112 = 0x70
    MISSING_TYPE *clientConnection;	// 120 = 0x78
    MISSING_TYPE *activityStatusDidChangeSubject;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x001000000004fd30
- (id)init;	// IMP=0x001000000004fda0
- (void)dealloc;	// IMP=0x001000000004fcd0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000004feb0
- (void)registerPublisherWithLifetimeEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050520

@end

