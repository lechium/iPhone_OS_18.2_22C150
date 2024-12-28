//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICMigrationDeviceInfo : NSObject
{
    _Bool _upgraded;	// 8 = 0x8
    _Bool _upgradable;	// 9 = 0x9
    _Bool _isOSXDevice;	// 10 = 0xa
    _Bool _isIOSDevice;	// 11 = 0xb
    NSString *_name;	// 16 = 0x10
}

+ (void)logDeviceList:(id)arg1;	// IMP=0x00200000000037f0
- (void).cxx_destruct;	// IMP=0x0020000000003a09
@property(readonly, nonatomic) _Bool isIOSDevice; // @synthesize isIOSDevice=_isIOSDevice;
@property(readonly, nonatomic) _Bool isOSXDevice; // @synthesize isOSXDevice=_isOSXDevice;
@property(readonly, nonatomic) _Bool upgradable; // @synthesize upgradable=_upgradable;
@property(readonly, nonatomic) _Bool upgraded; // @synthesize upgraded=_upgraded;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool upgradableToSydneyRomeKincaid;
@property(readonly, nonatomic) _Bool upgradedToSydneyRomeKincaid;
@property(readonly, nonatomic) _Bool upgradableTo2019OSes;
@property(readonly, nonatomic) _Bool upgradedTo2019OSes;
- (id)loggableDescription;	// IMP=0x00100000000037de
- (_Bool)shouldBeHidden;	// IMP=0x00100000000037d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000037cb
- (id)initWithName:(id)arg1;	// IMP=0x00100000000037b1
- (id)initWithName:(id)arg1 upgradable:(_Bool)arg2 upgraded:(_Bool)arg3;	// IMP=0x0010000000003730

@end
