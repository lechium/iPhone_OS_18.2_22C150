//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateSettings/SUSSoftwareUpdateTitleCell.h>

@class NRDevice;

@interface COSSoftwareUpdateTitleCell : SUSSoftwareUpdateTitleCell
{
    NRDevice *_device;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000010f4c8
@property(readonly, nonatomic) NRDevice *device; // @synthesize device=_device;
- (id)newLearnMoreLabel;	// IMP=0x001000000010f4af
- (void)updateProgressTintColor;	// IMP=0x001000000010f423
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg1;	// IMP=0x001000000010f402
- (id)gearBackgroundImage;	// IMP=0x001000000010f323
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 device:(id)arg4 image:(id)arg5;	// IMP=0x001000000010f25a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 device:(id)arg4;	// IMP=0x001000000010f1b2

@end

