//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APXPCConnection, NSString, Protocol;

@interface PCSupportReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000162b2c
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)finishedWithRequests;	// IMP=0x0010000000162afd
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x0010000000162a42
- (id)requiredEntitlements;	// IMP=0x0010000000162a22
- (void)connectionInvalidated;	// IMP=0x00100000001629a1
- (void)connectionInterrupted;	// IMP=0x0010000000162920
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)invokeTestingRigHandlerForMessage:(id)arg1 payload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000162865
- (void)fetchConfigurationForClass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001627d7
- (void)fetchGenderAndAgeGroupData:(CDUnknownBlockType)arg1;	// IMP=0x001000000016279d
- (void)policiesToEnforce:(CDUnknownBlockType)arg1;	// IMP=0x0010000000162739
- (void)policiesForContainerType:(id)arg1 adType:(id)arg2 adFormatType:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001626be
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;	// IMP=0x001000000016244e
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000001623e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

