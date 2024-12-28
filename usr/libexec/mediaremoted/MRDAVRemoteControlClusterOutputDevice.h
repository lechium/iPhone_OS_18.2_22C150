//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVDistantOutputDevice.h>

@class NSArray;

@interface MRDAVRemoteControlClusterOutputDevice : MRAVDistantOutputDevice
{
    NSArray *_allClusterMembers;	// 8 = 0x8
    NSArray *_memberOutputDevices;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000092059
@property(readonly, nonatomic) NSArray *memberOutputDevices; // @synthesize memberOutputDevices=_memberOutputDevices;
- (id)_createStereoPairRepresentationFrom:(id)arg1;	// IMP=0x0010000000091d19
- (id)_calculateHierarchy:(id)arg1;	// IMP=0x0010000000091981
- (id)descriptor;	// IMP=0x001000000009196f
- (_Bool)isLocalDevice;	// IMP=0x0010000000091936
- (id)allClusterMembers;	// IMP=0x001000000009188b
- (id)clusterComposition;	// IMP=0x00100000000917e0
- (unsigned int)deviceSubtype;	// IMP=0x00100000000917d5
- (unsigned int)deviceType;	// IMP=0x00100000000917ca
- (id)uid;	// IMP=0x00100000000917b8
- (id)initWithPrimaryOutputDevice:(id)arg1 members:(id)arg2;	// IMP=0x00100000000916ae
- (id)initWithDevices:(id)arg1;	// IMP=0x0010000000090eaf

@end
