//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface SEMSandboxIndexSiteCache
{
    NSMutableDictionary *_personaToUserVaultDirectoryMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043f31
- (void)spoofUserVaultUnavailableForPersonaIdentifier:(id)arg1;	// IMP=0x0000000000043d71
- (void)spoofUserVaultUnavailableSoonForPersonaIdentifier:(id)arg1;	// IMP=0x0000000000043bca
- (void)spoofUserVaultAvailableForPersonaIdentifier:(id)arg1;	// IMP=0x00000000000439bc
- (id)openUserVaultTransaction:(id *)arg1 forPersonaIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004382b
- (id)initWithManagerDirectory:(id)arg1 sharedOverrideCache:(id)arg2 readOnly:(_Bool)arg3;	// IMP=0x00000000000437a9

@end

