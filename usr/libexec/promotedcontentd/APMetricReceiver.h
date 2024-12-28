//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APXPCConnection, NSString, Protocol;

@interface APMetricReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f844e
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)connectionInterrupted;	// IMP=0x00100000000f8362
- (void)connectionInvalidated;	// IMP=0x00100000000f8291
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x00100000000f81f3
@property(readonly) id exportedObject;
@property(readonly) Protocol *exportedInterface;
- (void)terminateConnection;	// IMP=0x00100000000f814c
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000f7aa7
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000f7a3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
