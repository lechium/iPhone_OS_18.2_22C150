//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9SiriSetup22AssistantConfiguration : NSObject
{
    MISSING_TYPE *hasVoiceProfileInCloud;	// 8 = 0x8
    MISSING_TYPE *siriEnabled;	// 9 = 0x9
    MISSING_TYPE *siriLanguage;	// 16 = 0x10
    MISSING_TYPE *siriSharedUserId;	// 32 = 0x20
    MISSING_TYPE *siriVoice;	// 48 = 0x30
    MISSING_TYPE *recognizeMyVoiceEnabled;	// 56 = 0x38
    MISSING_TYPE *voiceTriggerEnabled;	// 57 = 0x39
    MISSING_TYPE *siriInCallEnabled;	// 58 = 0x3a
    MISSING_TYPE *siriDataSharingStatus;	// 64 = 0x40
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000001ff70
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001ff00
- (void).cxx_destruct;	// IMP=0x0000000000020590
- (id)init;	// IMP=0x0000000000020530
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000204a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000203e0
@property(nonatomic, readonly) NSString *description;

@end

