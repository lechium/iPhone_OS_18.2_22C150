//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface FPCKTelemetryUpdate : NSObject
{
    MISSING_TYPE *status;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000036a520
- (id)init;	// IMP=0x000000000036abb0
@property(nonatomic, readonly) NSString *description;
- (id)toDictionary;	// IMP=0x000000000036a9f0
- (id)initWithStatus:(double)arg1;	// IMP=0x000000000036a930
@property(nonatomic, readonly) double status; // @synthesize status;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036a7c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036a5a0

@end

