//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierClient
{
}

- (void)clearAllIdentifiersOfType:(long long)arg1;	// IMP=0x00000000000bb3dd
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000bb0d9
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000bae28
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000bab37
- (void)urlContainsDeviceIdentifierForAdvertising:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ba9d2
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ba64b
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b9b9e
- (_Bool)canAccessAdvertisingIdentifier;	// IMP=0x00000000000b94ea
- (_Bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;	// IMP=0x00000000000b93d2
- (_Bool)hasUninstallEntitlement;	// IMP=0x00000000000b933d
- (unsigned int)findAppBundleForExecutableURL:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x00000000000b925e
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000000b922f

@end

