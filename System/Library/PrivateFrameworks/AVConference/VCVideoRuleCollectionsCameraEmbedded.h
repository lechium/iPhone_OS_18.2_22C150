//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0060000000377045
- (_Bool)setupRules;	// IMP=0x0000000000377ee6
- (struct _VCBitrateConfiguration *)bitrateConfiguration;	// IMP=0x0000000000377db6
- (_Bool)setupH264Rules;	// IMP=0x00000000003779ac
- (_Bool)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(struct _VCVideoFormat *)arg4 formatListCount:(unsigned int)arg5 preferredFormat:(id)arg6 supportsHighDef:(_Bool *)arg7;	// IMP=0x00000000003774ac
- (_Bool)isPreferredVideoRule:(id)arg1 preferredFormat:(id)arg2;	// IMP=0x0000000000377378
- (struct _VCHardwareConfiguration *)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2;	// IMP=0x0000000000377066
- (double)preferredAspectRatio;	// IMP=0x000000000037704d
- (void)initSupportedPayloads;	// IMP=0x0000000000376ef7
- (id)description;	// IMP=0x0000000000376e21
- (void)dealloc;	// IMP=0x0000000000376dcf
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000376ce4

@end
