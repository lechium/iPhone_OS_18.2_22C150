//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDDeviceHandle;

__attribute__((visibility("hidden")))
@interface HMDRemoteDeviceMessageDestination
{
    HMDDevice *_device;	// 8 = 0x8
    HMDDeviceHandle *_preferredHandle;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x0060000000a87cfc
- (void).cxx_destruct;	// IMP=0x0000000000a87ccb
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)remoteDestinationString;	// IMP=0x0000000000a8794d
- (id)privateDescription;	// IMP=0x0000000000a87939
- (id)description;	// IMP=0x0000000000a87925
- (id)debugDescription;	// IMP=0x0000000000a8790e
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000a87797
- (id)shortDescription;	// IMP=0x0000000000a876d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a875b3
- (unsigned long long)hash;	// IMP=0x0000000000a87527
- (id)initWithTarget:(id)arg1 device:(id)arg2;	// IMP=0x0000000000a874af
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000a873fb

@end

