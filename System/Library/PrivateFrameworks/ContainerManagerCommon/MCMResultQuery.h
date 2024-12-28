//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMClientIdentity, NSArray;

__attribute__((visibility("hidden")))
@interface MCMResultQuery
{
    _Bool _includePath;	// 8 = 0x8
    _Bool _includeInfo;	// 9 = 0x9
    _Bool _issueSandboxExtensions;	// 10 = 0xa
    _Bool _legacyPersonaPolicy;	// 11 = 0xb
    _Bool _legacyExtensionPolicy;	// 12 = 0xc
    _Bool _includeUserManagedAssetsRelPath;	// 13 = 0xd
    _Bool _includeCreator;	// 14 = 0xe
    _Bool _extensionsUseProxiedClient;	// 15 = 0xf
    _Bool _extensionsPolicyUsesProxiedClient;	// 16 = 0x10
    _Bool _issuedAnyExtensions;	// 17 = 0x11
    NSArray *_containers;	// 24 = 0x18
    MCMClientIdentity *_clientIdentity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000054145
@property(nonatomic) _Bool issuedAnyExtensions; // @synthesize issuedAnyExtensions=_issuedAnyExtensions;
@property(readonly, nonatomic) _Bool extensionsPolicyUsesProxiedClient; // @synthesize extensionsPolicyUsesProxiedClient=_extensionsPolicyUsesProxiedClient;
@property(readonly, nonatomic) _Bool extensionsUseProxiedClient; // @synthesize extensionsUseProxiedClient=_extensionsUseProxiedClient;
@property(readonly, nonatomic) _Bool includeCreator; // @synthesize includeCreator=_includeCreator;
@property(readonly, nonatomic) _Bool includeUserManagedAssetsRelPath; // @synthesize includeUserManagedAssetsRelPath=_includeUserManagedAssetsRelPath;
@property(readonly, nonatomic) _Bool legacyExtensionPolicy; // @synthesize legacyExtensionPolicy=_legacyExtensionPolicy;
@property(readonly, nonatomic) _Bool legacyPersonaPolicy; // @synthesize legacyPersonaPolicy=_legacyPersonaPolicy;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) _Bool issueSandboxExtensions; // @synthesize issueSandboxExtensions=_issueSandboxExtensions;
@property(readonly, nonatomic) _Bool includeInfo; // @synthesize includeInfo=_includeInfo;
@property(readonly, nonatomic) _Bool includePath; // @synthesize includePath=_includePath;
@property(readonly, nonatomic) NSArray *containers; // @synthesize containers=_containers;
- (id)initWithContainers:(id)arg1 clientIdentity:(id)arg2 issueSandboxExtensions:(_Bool)arg3 includePath:(_Bool)arg4 includeInfo:(_Bool)arg5 legacyPersonaPolicy:(_Bool)arg6 legacyExtensionPolicy:(_Bool)arg7 includeUserManagedAssetsRelPath:(_Bool)arg8 includeCreator:(_Bool)arg9 extensionsUseProxiedClient:(_Bool)arg10 extensionsPolicyUsesProxiedClient:(_Bool)arg11;	// IMP=0x0000000000053ce9
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x00000000000538bc
- (void)_compileContainerDataForIndex:(unsigned long long)arg1 container:(struct container_object_s **)arg2 infos:(id)arg3 tokens:(id)arg4;	// IMP=0x0000000000053353

@end
