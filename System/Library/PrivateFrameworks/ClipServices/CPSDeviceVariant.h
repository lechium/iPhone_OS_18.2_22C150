//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CPSDeviceVariant : NSObject
{
    NSString *_osVersion;	// 8 = 0x8
    NSString *_device;	// 16 = 0x10
    NSNumber *_size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000295ff
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;

@end

