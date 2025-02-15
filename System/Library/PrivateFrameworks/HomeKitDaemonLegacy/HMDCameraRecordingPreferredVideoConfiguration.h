//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject
{
    NSDictionary *_bitRateByFrameRate;	// 8 = 0x8
    NSNumber *_keyFrameInterval;	// 16 = 0x10
    long long _resolution;	// 24 = 0x18
    long long _h264Level;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000840c31
@property(readonly) long long h264Level; // @synthesize h264Level=_h264Level;
@property(readonly) long long resolution; // @synthesize resolution=_resolution;
@property(readonly) NSNumber *keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly) NSDictionary *bitRateByFrameRate; // @synthesize bitRateByFrameRate=_bitRateByFrameRate;
- (id)description;	// IMP=0x0000000000840ac5
- (id)initWithResolution:(long long)arg1 bitRateByFrameRate:(id)arg2 keyFrameInterval:(id)arg3 h264Level:(long long)arg4;	// IMP=0x0000000000840a17

@end

