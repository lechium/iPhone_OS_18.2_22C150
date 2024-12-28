//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SiriTTSSynthesisVoice;

@interface SiriTTSVoiceSubscription : NSObject
{
    MISSING_TYPE *voice;	// 8 = 0x8
    MISSING_TYPE *clientId;	// 16 = 0x10
    MISSING_TYPE *accessoryId;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00100000000da69a
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000da65d
- (void).cxx_destruct;	// IMP=0x00000000000dac9a
- (id)init;	// IMP=0x00000000000dac80
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000daa7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000da867
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000da455
- (id)initWithVoice:(id)arg1 clientId:(id)arg2 accessoryId:(id)arg3;	// IMP=0x00000000000da1c7
@property(nonatomic, copy) NSString *accessoryId;
@property(nonatomic, copy) NSString *clientId;
@property(nonatomic, retain) SiriTTSSynthesisVoice *voice; // @synthesize voice;

@end
