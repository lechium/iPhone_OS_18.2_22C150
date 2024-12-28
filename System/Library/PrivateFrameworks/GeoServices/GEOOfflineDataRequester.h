//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEODataURLSession, GEODataURLSessionTask, GEOOfflineDataRequest, NSString;
@protocol GEOOfflineDataRequesterDelegate, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOOfflineDataRequester : NSObject
{
    GEOOfflineDataRequest *_request;	// 8 = 0x8
    GEOApplicationAuditToken *_auditToken;	// 16 = 0x10
    unsigned long long _requestOptions;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSString *_logPrefix;	// 40 = 0x28
    id <GEOOfflineDataRequesterDelegate> _delegate;	// 48 = 0x30
    GEODataURLSession *_dataSession;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    GEODataURLSessionTask *_task;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001bad09
@property(nonatomic) __weak id <GEOOfflineDataRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GEOOfflineDataRequest *request; // @synthesize request=_request;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x00000000001ba6ea
- (void)cancel;	// IMP=0x00000000001ba685
- (void)start;	// IMP=0x00000000001ba45f
- (id)initWithRequest:(id)arg1 requestOptions:(unsigned long long)arg2 auditToken:(id)arg3 log:(id)arg4 logPrefix:(id)arg5;	// IMP=0x00000000001ba304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
