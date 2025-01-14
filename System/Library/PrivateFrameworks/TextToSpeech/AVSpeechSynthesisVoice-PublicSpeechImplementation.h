//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisVoice.h>

@class AVSpeechSynthesisProviderVoice, NSString;

@interface AVSpeechSynthesisVoice (PublicSpeechImplementation)
+ (id)currentLanguageCode;	// IMP=0x0020000000031bf6
+ (id)speechVoices;	// IMP=0x0020000000031a41
+ (id)voiceWithLanguage:(id)arg1;	// IMP=0x00200000000319f4
+ (id)voiceWithIdentifier:(id)arg1;	// IMP=0x00200000000317fa
+ (void)test_setInternalSpeechVoices:(id)arg1;	// IMP=0x00200000000308fd
+ (void)test_setSpeechVoices:(id)arg1;	// IMP=0x002000000003062f
+ (id)test_speechVoices;	// IMP=0x002000000003061e
+ (id)_speechVoicesIncludingSiri:(_Bool)arg1;	// IMP=0x002000000002f995
+ (id)speechVoicesIncludingSuperCompact;	// IMP=0x002000000002f766
+ (id)_speechVoicesIncludingSiriAndSuperCompact;	// IMP=0x002000000002f536
+ (id)_speechVoicesIncludingSiri;	// IMP=0x002000000002f379
+ (id)_voiceWithIdentifier:(id)arg1 includingSiri:(_Bool)arg2;	// IMP=0x002000000002dda0
+ (id)_remapOldIdentifierIfNecessary:(id)arg1;	// IMP=0x002000000002dd87
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1;	// IMP=0x002000000002db85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000031ede
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000031c0f
@property(retain, nonatomic) NSString *language;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000316cc
@property(retain, nonatomic) NSString *identifier;
- (_Bool)isInstalled;	// IMP=0x0010000000031663
- (void)setIsInstalled:(_Bool)arg1;	// IMP=0x0010000000031616
- (_Bool)isDefault;	// IMP=0x00100000000315d4
- (void)setIsDefault:(_Bool)arg1;	// IMP=0x0010000000031587
@property(nonatomic) _Bool isNoveltyVoice;
- (_Bool)canBeDownloaded;	// IMP=0x00100000000314b6
- (void)setCanBeDownloaded:(_Bool)arg1;	// IMP=0x0010000000031469
- (long long)assetSize;	// IMP=0x0010000000031427
- (void)setAssetSize:(long long)arg1;	// IMP=0x00100000000313da
@property(readonly, nonatomic) NSString *nonLocalizedName;
- (long long)gender;	// IMP=0x00100000000311a4
- (void)setGender:(long long)arg1;	// IMP=0x0010000000031157
@property(readonly, nonatomic) NSString *nameWithoutQuality;
@property(readonly, nonatomic) NSString *nonLocalizedNameWithoutQuality;
- (void)setNonLocalizedNameWithoutQuality:(id)arg1;	// IMP=0x0010000000030f6d
- (_Bool)isSystemVoice;	// IMP=0x0010000000030f18
- (id)backupName;	// IMP=0x0010000000030f07
- (void)setBackupName:(id)arg1;	// IMP=0x0010000000030ef1
@property(nonatomic) long long quality;
- (id)description;	// IMP=0x0010000000030c10
@property(readonly, nonatomic) _Bool supportsSSML;
- (_Bool)isSynthesisProviderVoice;	// IMP=0x0010000000030bcb
- (id)_premiumLocalizedNameFormat;	// IMP=0x001000000002f27f
- (id)_enhancedLocalizedNameFormat;	// IMP=0x001000000002f185
- (id)name;	// IMP=0x001000000002f033
- (id)siriDisplayName;	// IMP=0x001000000002f026
- (id)initWithLanguage:(id)arg1;	// IMP=0x001000000002e07f
@property(retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
- (id)audioFileSettings;	// IMP=0x001000000002db22
- (unsigned long long)voiceTraits;	// IMP=0x001000000002dab3
@end

