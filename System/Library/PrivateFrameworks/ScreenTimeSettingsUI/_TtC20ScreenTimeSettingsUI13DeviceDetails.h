//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtC20ScreenTimeSettingsUI13DeviceDetails : NSObject
{
    MISSING_TYPE *coreDuetIdentifier;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *name;	// 40 = 0x28
    MISSING_TYPE *platform;	// 56 = 0x38
    MISSING_TYPE *isLocalDevice;	// 58 = 0x3a
    MISSING_TYPE *lastUpdatedDate;	// 23 = 0x17
}

+ (id)detailsForUserWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000fa440
- (void).cxx_destruct;	// IMP=0x00000000000fa5a0
- (id)init;	// IMP=0x00000000000fa540
- (id)initWithCoreDuetIdentifier:(id)arg1 identifier:(id)arg2 name:(id)arg3 platform:(short)arg4 isLocalDevice:(_Bool)arg5 lastUpdatedDate:(id)arg6;	// IMP=0x00000000000fa2f0
@property(nonatomic, readonly) NSDate *lastUpdatedDate;
@property(nonatomic, readonly) _Bool isLocalDevice; // @synthesize isLocalDevice;
@property(nonatomic, readonly) short platform; // @synthesize platform;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *coreDuetIdentifier;

@end

