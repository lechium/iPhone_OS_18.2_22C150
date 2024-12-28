//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessage, ADAudioSessionCoordinationMessageBeginAudioSessionRequest, ADAudioSessionCoordinationMessageBeginAudioSessionResponse, ADAudioSessionCoordinationMessageEndAudioSessionRequest, ADAudioSessionCoordinationMessageEndAudioSessionResponse, ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest, ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse, NSString;

@interface _ADAudioSessionCoordinationMessageMutation : NSObject
{
    ADAudioSessionCoordinationMessage *_base;	// 8 = 0x8
    unsigned long long _hostTime;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ADAudioSessionCoordinationMessageBeginAudioSessionRequest *_payloadBeginAudioSessionRequest;	// 32 = 0x20
    ADAudioSessionCoordinationMessageBeginAudioSessionResponse *_payloadBeginAudioSessionResponse;	// 40 = 0x28
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest *_payloadKeepAudioSessionAliveRequest;	// 48 = 0x30
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse *_payloadKeepAudioSessionAliveResponse;	// 56 = 0x38
    ADAudioSessionCoordinationMessageEndAudioSessionRequest *_payloadEndAudioSessionRequest;	// 64 = 0x40
    ADAudioSessionCoordinationMessageEndAudioSessionResponse *_payloadEndAudioSessionResponse;	// 72 = 0x48
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasHostTime:1;
        unsigned int hasType:1;
        unsigned int hasPayloadBeginAudioSessionRequest:1;
        unsigned int hasPayloadBeginAudioSessionResponse:1;
        unsigned int hasPayloadKeepAudioSessionAliveRequest:1;
        unsigned int hasPayloadKeepAudioSessionAliveResponse:1;
        unsigned int hasPayloadEndAudioSessionRequest:1;
        unsigned int hasPayloadEndAudioSessionResponse:1;
    } _mutationFlags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000036d966
- (void)setPayloadEndAudioSessionResponse:(id)arg1;	// IMP=0x001000000036d944
- (id)getPayloadEndAudioSessionResponse;	// IMP=0x001000000036d90c
- (void)setPayloadEndAudioSessionRequest:(id)arg1;	// IMP=0x001000000036d8ec
- (id)getPayloadEndAudioSessionRequest;	// IMP=0x001000000036d8b4
- (void)setPayloadKeepAudioSessionAliveResponse:(id)arg1;	// IMP=0x001000000036d894
- (id)getPayloadKeepAudioSessionAliveResponse;	// IMP=0x001000000036d85c
- (void)setPayloadKeepAudioSessionAliveRequest:(id)arg1;	// IMP=0x001000000036d83c
- (id)getPayloadKeepAudioSessionAliveRequest;	// IMP=0x001000000036d804
- (void)setPayloadBeginAudioSessionResponse:(id)arg1;	// IMP=0x001000000036d7e4
- (id)getPayloadBeginAudioSessionResponse;	// IMP=0x001000000036d7ac
- (void)setPayloadBeginAudioSessionRequest:(id)arg1;	// IMP=0x001000000036d78c
- (id)getPayloadBeginAudioSessionRequest;	// IMP=0x001000000036d754
- (void)setType:(long long)arg1;	// IMP=0x001000000036d746
- (long long)getType;	// IMP=0x001000000036d724
- (void)setHostTime:(unsigned long long)arg1;	// IMP=0x001000000036d716
- (unsigned long long)getHostTime;	// IMP=0x001000000036d6f4
- (_Bool)isDirty;	// IMP=0x001000000036d6e9
- (id)initWithBase:(id)arg1;	// IMP=0x001000000036d67e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
