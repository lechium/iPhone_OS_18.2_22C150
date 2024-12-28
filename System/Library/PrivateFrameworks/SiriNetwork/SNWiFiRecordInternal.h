//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface SNWiFiRecordInternal : NSObject
{
    MISSING_TYPE *rssi;	// 8 = 0x8
    MISSING_TYPE *snr;	// 16 = 0x10
    MISSING_TYPE *cca;	// 24 = 0x18
    MISSING_TYPE *channelInfo;	// 32 = 0x20
    MISSING_TYPE *phyMode;	// 48 = 0x30
    MISSING_TYPE *isCaptive;	// 64 = 0x40
    MISSING_TYPE *timestamp;	// 737024 = 0xb3f00
}

- (void).cxx_destruct;	// IMP=0x000000000006d8ee
- (id)init;	// IMP=0x000000000006d2ca
- (id)initWithRssi:(long long)arg1 snr:(long long)arg2 cca:(long long)arg3 channelInfo:(id)arg4 phyMode:(id)arg5 isCaptive:(_Bool)arg6 timestamp:(id)arg7;	// IMP=0x000000000006d1e2
@property(nonatomic, readonly) NSDate *timestamp;
@property(nonatomic, readonly) _Bool isCaptive; // @synthesize isCaptive;
@property(nonatomic, readonly) NSString *phyMode;
@property(nonatomic, readonly) NSString *channelInfo;
@property(nonatomic, readonly) long long cca; // @synthesize cca;
@property(nonatomic, readonly) long long snr; // @synthesize snr;
@property(nonatomic, readonly) long long rssi; // @synthesize rssi;

@end
