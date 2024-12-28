//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APAttributionAnalytics, APXPCConnection, NSString, Protocol;

@interface APAttributionReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
    APAttributionAnalytics *_analytics;	// 16 = 0x10
    double _responseTime;	// 24 = 0x18
    unsigned long long _serverRetries;	// 32 = 0x20
    unsigned long long _intervalId;	// 40 = 0x28
    unsigned long long _attemptId;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002e3f8
@property(nonatomic) unsigned long long attemptId; // @synthesize attemptId=_attemptId;
@property(nonatomic) unsigned long long intervalId; // @synthesize intervalId=_intervalId;
@property(nonatomic) unsigned long long serverRetries; // @synthesize serverRetries=_serverRetries;
@property double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) APAttributionAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)terminateConnection;	// IMP=0x001000000002e2e3
- (void)connectionInvalidated;	// IMP=0x001000000002e2d1
- (void)connectionInterrupted;	// IMP=0x001000000002e2bf
- (id)remoteObjectInterface;	// IMP=0x001000000002e2ae
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)attributionAnalytics:(unsigned long long)arg1 end:(unsigned long long)arg2 Handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e15a
- (void)_continueAttribution:(id)arg1 token:(id)arg2 cached:(_Bool)arg3 requestTimestamp:(id)arg4 error:(id)arg5 constructionWithCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000002cdcd
- (void)_attributionTokenRequestTimestamp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cc52
- (void)attributionTokenRequestTimestamp:(id)arg1 interval:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c816
- (_Bool)canReturnToken:(id)arg1;	// IMP=0x001000000002c790
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000002c70b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
