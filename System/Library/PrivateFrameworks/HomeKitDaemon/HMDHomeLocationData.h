//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDHomeLocationData : HMFObject
{
    CLLocation *_location;	// 8 = 0x8
    NSDate *_locationUpdateTimestamp;	// 16 = 0x10
    NSNumber *_locationSource;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000dd5429
- (void).cxx_destruct;	// IMP=0x0000000000dd539f
@property(readonly) NSNumber *locationSource; // @synthesize locationSource=_locationSource;
@property(readonly) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(readonly) CLLocation *location; // @synthesize location=_location;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000dd527a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000dd517e
- (id)description;	// IMP=0x0000000000dd5053
- (id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2 locationSource:(id)arg3;	// IMP=0x0000000000dd4f89

@end
