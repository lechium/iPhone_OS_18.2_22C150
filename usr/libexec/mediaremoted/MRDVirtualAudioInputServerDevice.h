//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRVirtualVoiceInputDevice.h>

@class MRDMediaRemoteClient;

@interface MRDVirtualAudioInputServerDevice : MRVirtualVoiceInputDevice
{
    MRDMediaRemoteClient *_owningClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007bc93
@property(readonly, nonatomic) MRDMediaRemoteClient *owningClient; // @synthesize owningClient=_owningClient;
- (id)initWithOwningClient:(id)arg1;	// IMP=0x001000000007bc05

@end

