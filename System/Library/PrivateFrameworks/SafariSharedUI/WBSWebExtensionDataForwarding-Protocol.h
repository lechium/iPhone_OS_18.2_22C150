//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, UIImage;
@protocol WBSWebExtensionTab;

@protocol WBSWebExtensionDataForwarding
@property(readonly, nonatomic) NSArray *manifestErrors;
@property(readonly, nonatomic) NSArray *commands;
@property(readonly, nonatomic) NSSet *manifestAccessibleOrigins;
@property(readonly, nonatomic) NSSet *manifestOptionalPermissionOrigins;
@property(readonly, nonatomic) NSSet *manifestPermissionOrigins;
@property(readonly, nonatomic) NSSet *manifestOptionalPermissions;
@property(readonly, nonatomic) NSSet *manifestPermissions;
@property(copy, nonatomic) NSDictionary *revokedPermissionOrigins;
@property(copy, nonatomic) NSDictionary *revokedPermissions;
@property(copy, nonatomic) NSDictionary *grantedPermissionOrigins;
@property(copy, nonatomic) NSDictionary *grantedPermissions;
@property(readonly, nonatomic) NSSet *requestedPermissionOriginsNotAlreadyConfigured;
@property(readonly, nonatomic) NSSet *requestedPermissionsNotAlreadyConfigured;
@property(readonly, nonatomic) NSDictionary *configuredPermissionOrigins;
@property(readonly, nonatomic) NSDictionary *configuredPermissions;
@property(readonly, nonatomic) NSSet *currentPermissionOrigins;
@property(readonly, nonatomic) NSSet *currentPermissions;
@property(nonatomic) _Bool requestedOptionalAccessToAllHosts;
@property(readonly, nonatomic) _Bool requestsAccessToAllHosts;
@property(readonly, nonatomic) _Bool hasDeclarativeNetRequestHostAccessPermission;
@property(readonly, nonatomic) _Bool hasDeclarativeNetRequestPermission;
@property(readonly, nonatomic) _Bool usesManifestVersion3;
@property(readonly, nonatomic) long long manifestVersion;
@property(readonly, nonatomic) _Bool hasStorage;
@property(readonly, nonatomic) _Bool hasCommands;
@property(readonly, nonatomic) _Bool hasPageAction;
@property(readonly, nonatomic) _Bool hasBrowserAction;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) NSURL *newTabOverridePageURL;
@property(readonly, nonatomic) _Bool hasAbilityToInjectContentIntoWebpages;
@property(readonly, nonatomic) _Bool backgroundPageIsServiceWorker;
@property(readonly, nonatomic) _Bool backgroundPageIsPersistent;
@property(readonly, nonatomic) UIImage *toolbarImage;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) UIImage *preferencesIcon;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *processDisplayName;
@property(readonly, nonatomic) NSString *displayDescription;
@property(readonly, nonatomic) NSString *displayVersion;
@property(readonly, nonatomic) NSString *displayShortName;
@property(readonly, nonatomic) NSString *displayName;
- (void)removeGrantedAndRevokedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 exactPatternMatchesOnly:(_Bool)arg3;
- (void)removeGrantedPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 exactPatternMatchesOnly:(_Bool)arg3;
- (void)revokePermissions:(NSSet *)arg1 origins:(NSSet *)arg2 expirationDate:(NSDate *)arg3;
- (void)grantPermissions:(NSSet *)arg1 origins:(NSSet *)arg2 expirationDate:(NSDate *)arg3;
- (_Bool)hasPermissionToAccessAllHosts;
- (_Bool)hasPermissionToAccessAllURLs;
- (long long)permissionStateForURL:(NSURL *)arg1 options:(unsigned long long)arg2;
- (long long)permissionStateForURL:(NSURL *)arg1;
- (_Bool)hasPermissionToAccessURL:(NSURL *)arg1;
- (_Bool)hasPermission:(NSString *)arg1;
- (_Bool)shouldShowToolbarItemForTab:(id <WBSWebExtensionTab>)arg1;
- (_Bool)hasInjectedContentDataForURL:(NSURL *)arg1;
- (void)loadBackgroundPageIfNecessaryWithCompletionHandler:(void (^)(void))arg1;
@end
