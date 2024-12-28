//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaServices/MSVAsyncOperation.h>

@class MRAVOutputDevice, MRExternalDeviceTransportConnectionHandle, MRRequestDetails, NSMutableDictionary, NSString;

@interface MRDConnectToRelaySecondaryOperation : MSVAsyncOperation
{
    MRRequestDetails *_details;	// 8 = 0x8
    MRAVOutputDevice *_outputDevice;	// 16 = 0x10
    NSMutableDictionary *_pendingConfigureConnectionReplies;	// 24 = 0x18
    MRExternalDeviceTransportConnectionHandle *_handle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001a5175
@property(retain, nonatomic) MRExternalDeviceTransportConnectionHandle *handle; // @synthesize handle=_handle;
- (void)transport:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00100000001a500a
- (void)finishWithError:(id)arg1;	// IMP=0x00100000001a45db
- (void)execute;	// IMP=0x00100000001a2c77
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00100000001a2b6f

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
