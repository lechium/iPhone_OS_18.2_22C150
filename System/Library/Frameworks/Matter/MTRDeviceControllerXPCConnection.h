//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTRDeviceControllerXPCProxyHandle, NSMutableDictionary, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface MTRDeviceControllerXPCConnection : NSObject
{
    NSXPCInterface *_remoteDeviceServerProtocol;	// 8 = 0x8
    NSXPCInterface *_remoteDeviceClientProtocol;	// 16 = 0x10
    CDUnknownBlockType _connectBlock;	// 24 = 0x18
    MTRDeviceControllerXPCProxyHandle *_proxyHandle;	// 32 = 0x20
    MTRDeviceControllerXPCProxyHandle *_proxyRetainerForReports;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSMutableDictionary *_reportRegistry;	// 56 = 0x38
}

+ (id)connectionWithWorkQueue:(id)arg1 connectBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000004e80a9
- (void).cxx_destruct;	// IMP=0x00000000004e93c4
@property(readonly, nonatomic) NSMutableDictionary *reportRegistry; // @synthesize reportRegistry=_reportRegistry;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MTRDeviceControllerXPCProxyHandle *proxyRetainerForReports; // @synthesize proxyRetainerForReports=_proxyRetainerForReports;
@property(nonatomic) __weak MTRDeviceControllerXPCProxyHandle *proxyHandle; // @synthesize proxyHandle=_proxyHandle;
@property(readonly, nonatomic) CDUnknownBlockType connectBlock; // @synthesize connectBlock=_connectBlock;
@property(readonly, nonatomic) NSXPCInterface *remoteDeviceClientProtocol; // @synthesize remoteDeviceClientProtocol=_remoteDeviceClientProtocol;
@property(readonly, nonatomic) NSXPCInterface *remoteDeviceServerProtocol; // @synthesize remoteDeviceServerProtocol=_remoteDeviceServerProtocol;
- (void)callSubscriptionEstablishedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e9335
- (void)handleReportWithController:(id)arg1 nodeId:(unsigned long long)arg2 values:(id)arg3 error:(id)arg4;	// IMP=0x00000000004e9014
- (void)deregisterReportHandlersWithController:(id)arg1 nodeID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e8a06
- (void)registerReportHandlerWithController:(id)arg1 nodeID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e872d
- (void)getProxyHandleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e8136
- (id)initWithWorkQueue:(id)arg1 connectBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004e7f63

@end

