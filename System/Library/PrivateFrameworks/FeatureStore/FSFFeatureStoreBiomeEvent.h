//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface FSFFeatureStoreBiomeEvent : NSObject
{
    MISSING_TYPE *interactionId;	// 8 = 0x8
    MISSING_TYPE *featureData;	// 24 = 0x18
    MISSING_TYPE *timestamp;	// 40 = 0x28
    MISSING_TYPE *dataVersion;	// 48 = 0x30
    MISSING_TYPE *compressionPolicy;	// 52 = 0x34
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x001000000001f320
- (void).cxx_destruct;	// IMP=0x0000000000020611
- (id)init;	// IMP=0x00000000000205de
- (id)serialize;	// IMP=0x000000000001f600
- (id)initWithInteractionId:(id)arg1 featureData:(id)arg2 dataVersion:(unsigned int)arg3 timestamp:(double)arg4;	// IMP=0x000000000001f04c
@property(nonatomic) unsigned int dataVersion; // @synthesize dataVersion;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic, readonly) NSData *featureData;
@property(nonatomic, readonly) NSString *interactionId;

@end
