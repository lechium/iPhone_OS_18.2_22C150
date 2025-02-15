//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSXPCConnection, StreamingUnzipState;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_transaction, StreamingUnzipDelegateProtocol;

__attribute__((visibility("hidden")))
@interface StreamingUnzipper : NSObject
{
    _Bool _hasConnection;	// 8 = 0x8
    struct {
        unsigned int val[8];
    } _auditToken;	// 12 = 0xc
    long long _sandboxToken;	// 48 = 0x30
    void *_decompressionOutputBuffer;	// 56 = 0x38
    StreamingUnzipState *_currentState;	// 64 = 0x40
    NSObject<OS_os_transaction> *_sessionTransaction;	// 72 = 0x48
    int _activeDelegateMethods;	// 80 = 0x50
    double _lastExtractionProgressSent;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_asyncWorkTrackingGroup;	// 96 = 0x60
    NSError *_asyncError;	// 104 = 0x68
    struct os_unfair_lock_s _asyncErrorLock;	// 112 = 0x70
    NSXPCConnection *_xpcConnection;	// 120 = 0x78
    id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *inProcessDelegateQueue;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000016020
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue; // @synthesize inProcessDelegateQueue;
@property(nonatomic) __weak id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate; // @synthesize inProcessExtractorDelegate;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getPidForTestingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015f7f
- (void)terminateStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015deb
- (void)finishStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000153a6
- (void)suspendStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015143
- (void)supplyBytes:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014ebd
- (void)dealloc;	// IMP=0x0000000000014dbe
- (void)streamingFileWriter:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x0000000000014cb5
- (void)setActiveDelegateMethods:(int)arg1;	// IMP=0x0000000000014c1d
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014587
- (id)initForClient:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000014440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

