//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface SNAudioConfiguration : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000145d28
+ (id)shazamAudioConfiguration;	// IMP=0x0010000000145e13
- (void).cxx_destruct;	// IMP=0x0000000000145d65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000145cdd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000145c28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145a00
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000001456ca
@property(nonatomic, readonly) NSString *description;
- (id)init;	// IMP=0x000000000014513b
@property(nonatomic, readonly) NSArray *audioHWControlFlags;
@property(nonatomic, readonly) _Bool smartRoutingConsideration;
@property(nonatomic, readonly) _Bool preferDecoupledIO;
@property(nonatomic, readonly) _Bool allowHapticsAndSystemSoundsDuringRecording;
@property(nonatomic, readonly) _Bool prefersNoInterruptions;
@property(nonatomic) _Bool prefersNoMicrophoneUsageIndicator;
@property(nonatomic) _Bool useSiriAudioRouting;
@property(nonatomic, copy) NSArray *channelMap;
@property(nonatomic) unsigned long long options;
@property(nonatomic, copy) NSString *mode;
@property(nonatomic, copy) NSString *category;

@end
