//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVOutputDevice.h>

@class MRAVOutputDeviceDescription;

__attribute__((visibility("hidden")))
@interface MRUVirtualHearingAidDevice : MRAVOutputDevice
{
    MRAVOutputDeviceDescription *_deviceDescription;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012192e
@property(readonly, nonatomic) MRAVOutputDeviceDescription *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
- (unsigned int)deviceSubtype;	// IMP=0x0000000000121900
- (unsigned int)deviceType;	// IMP=0x00000000001218e3
- (id)uid;	// IMP=0x00000000001218c6
- (id)name;	// IMP=0x00000000001218a9
- (id)initWithDeviceDescription:(id)arg1;	// IMP=0x000000000012183b

@end

