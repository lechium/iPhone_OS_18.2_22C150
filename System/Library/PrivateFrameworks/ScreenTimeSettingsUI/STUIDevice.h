//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface STUIDevice : NSObject
{
    _Bool _isLocalDevice;	// 8 = 0x8
    _Bool _hasDeviceActivity;	// 9 = 0x9
    short _platform;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_coreDuetIdentifier;	// 32 = 0x20
    NSDate *_lastFamilyCheckinDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009796f
@property(readonly, nonatomic) NSDate *lastFamilyCheckinDate; // @synthesize lastFamilyCheckinDate=_lastFamilyCheckinDate;
@property(readonly) _Bool hasDeviceActivity; // @synthesize hasDeviceActivity=_hasDeviceActivity;
@property(readonly) _Bool isLocalDevice; // @synthesize isLocalDevice=_isLocalDevice;
@property(readonly) short platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *coreDuetIdentifier; // @synthesize coreDuetIdentifier=_coreDuetIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000978d4
- (id)initWithName:(id)arg1 identifier:(id)arg2 coreDuetIdentifier:(id)arg3 platform:(short)arg4 hasDeviceActivity:(_Bool)arg5 isLocalDevice:(_Bool)arg6 lastFamilyCheckinDate:(id)arg7;	// IMP=0x00000000000977ab

@end

