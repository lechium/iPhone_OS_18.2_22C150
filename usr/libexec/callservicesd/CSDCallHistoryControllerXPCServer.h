//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallHistoryController, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallHistoryControllerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDCallHistoryController *_callHistoryController;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002b2c7
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDCallHistoryController *callHistoryController; // @synthesize callHistoryController=_callHistoryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (oneway void)allCallHistoryDeleted;	// IMP=0x001000000002b188
- (oneway void)recentCallsDeleted:(id)arg1;	// IMP=0x001000000002affb
- (void);	// IMP=0x001000000002aef2
- (void)registerClient:(id)arg1;	// IMP=0x001000000002ade9
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x001000000002ad41
- (void)invalidate;	// IMP=0x001000000002ac38
- (void)dealloc;	// IMP=0x001000000002abac
- (id)initWithCallHistoryController:(id)arg1;	// IMP=0x001000000002a652

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
