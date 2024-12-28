//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRAVOutputDevice, MRDIDSServiceConnection, MRDIDSTransportConnection, MRDeviceInfo, NSError, NSString;

@interface MRDIDSTransport : MRExternalDeviceTransport
{
    _Bool _shouldUseSystemAuthenticationPrompt;	// 16 = 0x10
    MRDeviceInfo *_deviceInfo;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_sessionUID;	// 40 = 0x28
    MRAVOutputDevice *_outputDevice;	// 48 = 0x30
    MRDIDSTransportConnection *_transport;	// 56 = 0x38
    MRDIDSServiceConnection *_idsConnection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000836ee
@property(retain, nonatomic) MRDIDSServiceConnection *idsConnection; // @synthesize idsConnection=_idsConnection;
- (void);	// IMP=0x00100000000836b5
@property(retain, nonatomic) MRDIDSTransportConnection *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
- (id)deviceInfo;	// IMP=0x0010000000083671
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x0010000000083661
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x0010000000083651
- (id)_generateSessionUID;	// IMP=0x00100000000835ac
- (void)_synchronized_setSessionUID:(id)arg1;	// IMP=0x001000000008331b
- (_Bool)supportsIdleDisconnection;	// IMP=0x0010000000083298
- (void)resetWithError:(id)arg1;	// IMP=0x0010000000083215
- (id)_createConnectionWithUserInfo:(id)arg1;	// IMP=0x0010000000082dd3
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x00100000000829dc
- (id)error;	// IMP=0x0010000000082992
- (id)uid;	// IMP=0x0010000000082942
- (long long)port;	// IMP=0x001000000008293a
- (id)hostname;	// IMP=0x0010000000082932
- (id)name;	// IMP=0x00100000000828e2
- (id)debugDescription;	// IMP=0x0010000000082799
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x0010000000082542

@end
