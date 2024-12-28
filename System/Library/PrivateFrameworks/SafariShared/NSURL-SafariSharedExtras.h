//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString, WBSPair;

@interface NSURL (SafariSharedExtras)
+ (id)safari_readingListURL;	// IMP=0x002000000014572c
+ (id)safari_aboutBlankURL;	// IMP=0x00200000001421ca
+ (id)safari_URLForReadingListItemWithUUIDString:(id)arg1;	// IMP=0x0020000000142139
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x002000000014202f
+ (id)safari_URLWithDataAsString:(id)arg1;	// IMP=0x002000000014200b
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x0020000000141fec
@property(readonly, nonatomic) NSURL *safari_URLByRemovingQuery;
@property(readonly, nonatomic) NSString *safari_readingListItemUUIDString;
@property(readonly, nonatomic) _Bool safari_isReadingListURL;
- (_Bool)safari_isEqualOrHasSameHighLevelDomainAsURL:(id)arg1;	// IMP=0x001000000014553f
- (_Bool)safari_isEqualToURL:(id)arg1;	// IMP=0x0010000000145389
@property(readonly, nonatomic) _Bool safari_isSharedTabGroupURL;
@property(readonly, nonatomic) _Bool safari_isTelURL;
@property(readonly, nonatomic) _Bool safari_isJavaScriptURL;
@property(readonly, copy, nonatomic) NSString *safari_defaultStatusMessageString;
@property(readonly, copy, nonatomic) NSString *safari_mailtoURLStatusMessage;
@property(readonly, nonatomic) NSString *safari_stringForListDisplay;
- (id)safari_stringForListDisplayWithAdditionalSimplificationOptions:(unsigned long long)arg1;	// IMP=0x0010000000144b29
- (id)safari_relativePathToURL:(id)arg1;	// IMP=0x001000000014493a
- (id)safari_wellKnownResponseCodeReliabilityURL;	// IMP=0x0010000000144871
@property(readonly, nonatomic) _Bool safari_isURLTooLongToDisplay;
- (id)safari_userVisibleStringConsideringLongURLs;	// IMP=0x0010000000144775
- (_Bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;	// IMP=0x0010000000144465
@property(readonly, nonatomic) _Bool safari_isTopLevelURL;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleScheme;
- (id)safari_userVisibleHostWithoutWWWSubdomainIfSecure;	// IMP=0x0010000000144225
- (id)safari_userVisibleHostWithoutWWWSubdomain;	// IMP=0x00100000001441c1
@property(readonly, copy, nonatomic) NSString *safari_userVisibleHostOrExtensionDisplayName;
- (id)safari_userVisibleHost;	// IMP=0x00100000001440e8
- (id)safari_userVisibleString;	// IMP=0x00100000001440de
- (id)safari_originalDataAsString;	// IMP=0x001000000014406e
- (id)safari_displayNameWithTitle:(id)arg1;	// IMP=0x0010000000143ead
- (_Bool)safari_hasCharactersBeyondPath;	// IMP=0x0010000000143e0c
@property(readonly, copy, nonatomic) NSString *safari_simplifiedURLStringForDeduping;
@property(readonly, nonatomic) NSURL *safari_canonicalURLForStartPage;
- (id)safari_URLByRemovingAllParameters;	// IMP=0x0010000000143c42
- (id)safari_URLByDeletingUserAndPassword;	// IMP=0x0010000000143ae9
- (_Bool)safari_hasUserOrPassword;	// IMP=0x00100000001439f4
- (id)safari_URLByReplacingHostWithString:(id)arg1;	// IMP=0x0010000000143940
@property(readonly, nonatomic) _Bool safari_isSlackRedirectPage;
- (_Bool)_safari_isWithinQuirkedNavigationScope:(id)arg1;	// IMP=0x00100000001431ae
@property(readonly, nonatomic) _Bool safari_canQuirkBannerForNavigation;
- (_Bool)safari_isWithinWebAppNavigationScope:(id)arg1 allowingQuirks:(_Bool)arg2;	// IMP=0x0010000000142ffb
- (_Bool)safari_isWithinWebAppNavigationScope:(id)arg1;	// IMP=0x0010000000142fe4
- (_Bool)safari_isEqualToOrChildOfStartURL:(id)arg1;	// IMP=0x0010000000142e6d
@property(readonly, nonatomic) NSURL *safari_firstURLQueryValue;
@property(readonly, nonatomic) _Bool safari_isOTPAuthMigrationURL;
@property(readonly, nonatomic) _Bool safari_isOTPAuthURL;
@property(readonly, nonatomic) _Bool safari_isEligibleToShowNotSecureWarning;
@property(readonly, nonatomic) _Bool safari_isEligibleToBeOpenedByServiceWorkers;
@property(readonly, nonatomic) _Bool safari_isLocalOrPrivateNetworkURL;
- (id)safari_URLByNormalizingSafariSpecificURL;	// IMP=0x00100000001428e6
@property(readonly, nonatomic) _Bool safari_isSafariSpecificURL;
@property(readonly, nonatomic) _Bool safari_isMarketplaceKitURL;
@property(readonly, nonatomic) WBSPair *safari_composedIdentifierAndProfileIdentifierInSafariWebExtensionURL;
@property(readonly, nonatomic) _Bool safari_isSafariExtensionURL;
@property(readonly, nonatomic) _Bool safari_isSafariWebExtensionURL;
@property(readonly, nonatomic) _Bool safari_isAboutBlankURL;
@property(readonly, nonatomic) _Bool safari_isSafariResourceURL;
@property(readonly, nonatomic) _Bool safari_isMailtoURL;
@property(readonly, nonatomic) _Bool safari_isBlobURL;
@property(readonly, nonatomic) _Bool safari_hasCustomScheme;
@property(readonly, nonatomic) _Bool safari_isDataURL;
@property(readonly, nonatomic) _Bool safari_isSecureURL;
@property(readonly, nonatomic) _Bool safari_isHTTPSURL;
@property(readonly, nonatomic) _Bool safari_isHTTPURL;
@property(readonly, nonatomic) _Bool safari_hasFeedScheme;
@property(readonly, nonatomic) _Bool safari_hasLocalScheme;
@property(readonly, copy, nonatomic) NSString *safari_identityPreferenceDomain;
@property(readonly, nonatomic) NSString *safari_fileType;
- (id)safari_path;	// IMP=0x00100000001421ea
@end
