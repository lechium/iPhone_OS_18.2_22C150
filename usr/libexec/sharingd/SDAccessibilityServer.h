//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SDAccessibilityServer
{
}

- (void)requestLabelForActivityWithSlotID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000017cbe
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0010000000017cb8
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000017cb2
- (id)remoteObjectInterface;	// IMP=0x0010000000017c92
- (id)exportedInterface;	// IMP=0x0010000000017c72
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000017b01
- (id)machServiceName;	// IMP=0x0010000000017aed
- (void)invalidate;	// IMP=0x0010000000017abe
- (void)activate;	// IMP=0x0010000000017a8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

