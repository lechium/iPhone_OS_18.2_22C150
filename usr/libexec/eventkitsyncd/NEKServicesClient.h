//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKSSLogger, NEKEnvironment, NSString, NSXPCConnection;

@interface NEKServicesClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    EKSSLogger *_logger;	// 16 = 0x10
    NEKEnvironment *_environment;	// 24 = 0x18
}

+ (id)log;	// IMP=0x002000000002c28d
- (void).cxx_destruct;	// IMP=0x002000000002c8d9
@property(retain, nonatomic) NEKEnvironment *environment; // @synthesize environment=_environment;
- (id)_syncReport;	// IMP=0x001000000002c7ac
- (void)dumpDiagnosticsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c41e
- (id)initWithConnection:(id)arg1 andEnvironment:(id)arg2;	// IMP=0x001000000002c2e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
