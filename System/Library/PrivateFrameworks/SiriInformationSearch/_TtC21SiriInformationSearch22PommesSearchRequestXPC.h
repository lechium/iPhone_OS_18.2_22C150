//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21SiriInformationSearch22PommesSearchRequestXPC : NSObject
{
    MISSING_TYPE *domain;	// 8 = 0x8
    MISSING_TYPE *listenAfterSpeaking;	// 24 = 0x18
    MISSING_TYPE *assistantId;	// 32 = 0x20
    MISSING_TYPE *requestId;	// 48 = 0x30
    MISSING_TYPE *isMultiUser;	// 64 = 0x40
    MISSING_TYPE *parseState;	// 0 = 0x0
    MISSING_TYPE *utterance;	// 1877372 = 0x1ca57c
    MISSING_TYPE *audioSource;	// 152 = 0x98
    MISSING_TYPE *audioDestination;	// 1877372 = 0x1ca57c
    MISSING_TYPE *responseMode;	// 0 = 0x0
    MISSING_TYPE *isEyesFree;	// 0 = 0x0
    MISSING_TYPE *isVoiceTriggerEnabled;	// 0 = 0x0
    MISSING_TYPE *isTextToSpeechEnabled;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *isTriggerlessFollowup;	// 1869770847 = 0x6f72705f
    MISSING_TYPE *isPushOffRequest;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *deviceRestrictions;	// 0 = 0x0
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00100000001a1240
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a11d0
- (void).cxx_destruct;	// IMP=0x00000000001a24a0
- (id)init;	// IMP=0x00000000001a2440
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a23c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a18f0

@end

