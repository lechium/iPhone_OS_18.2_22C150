//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDevice;

@interface COSSecurePairingPasskeyEntryViewController
{
    NRDevice *_device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e3de7
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
- (void)gotPinAndDevice:(id)arg1;	// IMP=0x00100000000e3a12
- (void)pressedCancel:(id)arg1;	// IMP=0x00100000000e38d5
- (void)enteredPasskey:(id)arg1;	// IMP=0x00100000000e3592
- (id)initWithDevice:(id)arg1;	// IMP=0x00100000000e31eb

@end

