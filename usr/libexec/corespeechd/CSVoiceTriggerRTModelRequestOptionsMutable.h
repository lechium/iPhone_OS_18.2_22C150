//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSCoreSpeechServicesAccessoryInfo, NSNumber, NSString, NSUUID;

@interface CSVoiceTriggerRTModelRequestOptionsMutable : NSObject
{
    _Bool _mAllowMph;	// 8 = 0x8
    NSNumber *_mUserSelectedPhrasetype;	// 16 = 0x10
    NSString *_mFallbackPhraseType;	// 24 = 0x18
    NSUUID *_mEndpointId;	// 32 = 0x20
    NSNumber *_mEngineMajorVersion;	// 40 = 0x28
    NSNumber *_mEngineMinorVersion;	// 48 = 0x30
    NSNumber *_mAccessoryModelType;	// 56 = 0x38
    NSString *_mSiriLocale;	// 64 = 0x40
    CSCoreSpeechServicesAccessoryInfo *_mAccessoryInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000867b4
@property(retain, nonatomic) CSCoreSpeechServicesAccessoryInfo *mAccessoryInfo; // @synthesize mAccessoryInfo=_mAccessoryInfo;
@property(retain, nonatomic) NSString *mSiriLocale; // @synthesize mSiriLocale=_mSiriLocale;
@property(readonly, nonatomic) NSNumber *mAccessoryModelType; // @synthesize mAccessoryModelType=_mAccessoryModelType;
@property(readonly, nonatomic) NSNumber *mEngineMinorVersion; // @synthesize mEngineMinorVersion=_mEngineMinorVersion;
@property(readonly, nonatomic) NSNumber *mEngineMajorVersion; // @synthesize mEngineMajorVersion=_mEngineMajorVersion;
@property(readonly, nonatomic) NSUUID *mEndpointId; // @synthesize mEndpointId=_mEndpointId;
@property(retain, nonatomic) NSString *mFallbackPhraseType; // @synthesize mFallbackPhraseType=_mFallbackPhraseType;
@property(retain, nonatomic) NSNumber *mUserSelectedPhrasetype; // @synthesize mUserSelectedPhrasetype=_mUserSelectedPhrasetype;
@property(nonatomic) _Bool mAllowMph; // @synthesize mAllowMph=_mAllowMph;
- (void)setUserSelectedPhraseType:(id)arg1;	// IMP=0x00100000000866fd
- (void)setCSCoreSpeechServicesAccessoryInfo:(id)arg1;	// IMP=0x00100000000866d0
- (void)setSiriLocale:(id)arg1;	// IMP=0x00100000000866bf
- (void)setAccessoryModelType:(id)arg1;	// IMP=0x00100000000866ae
- (void)setEngineMinorVersion:(id)arg1;	// IMP=0x001000000008669d
- (void)setEngineMajorVersion:(id)arg1;	// IMP=0x001000000008668c
- (void)setEndpointId:(id)arg1;	// IMP=0x001000000008667b
- (void)setAllowMph:(_Bool)arg1;	// IMP=0x0010000000086672

@end
