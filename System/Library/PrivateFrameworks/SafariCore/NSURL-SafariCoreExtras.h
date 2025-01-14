//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString, WBSURLHostComponentEnumerator;

@interface NSURL (SafariCoreExtras)
+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;	// IMP=0x0020000000027203
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000026c46
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x0020000000026a4d
- (void)safari_accessingSecurityScopedResource:(CDUnknownBlockType)arg1;	// IMP=0x00100000000290da
@property(readonly, nonatomic) NSURL *safari_URLWithUniqueFilename;
@property(readonly, copy, nonatomic) NSURL *safari_wellKnownChangePasswordURL;
@property(readonly, nonatomic) _Bool safari_isWellKnownChangePasswordURL;
@property(readonly, copy, nonatomic) NSURL *safari_URLByRemovingUserPasswordPathQueryAndFragment;
@property(readonly, nonatomic) _Bool safari_isEligibleforDirectSSO;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;	// IMP=0x001000000002837f
- (id)safari_URLByReplacingScheme:(id)arg1 withScheme:(id)arg2;	// IMP=0x001000000002829d
@property(readonly, nonatomic) _Bool safari_isAppleOneURL;
@property(readonly, nonatomic) _Bool safari_isAppleNewsURL;
@property(readonly, nonatomic) _Bool safari_isXWebSearchURL;
@property(readonly, nonatomic) _Bool safari_isHTTPFamilyURL;
- (_Bool)safari_hasScheme:(id)arg1;	// IMP=0x0010000000028092
- (long long)safari_hostCompare:(id)arg1;	// IMP=0x0010000000027cb6
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHostFallingBackToHostOrAbsoluteString;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomain;
@property(readonly, copy, nonatomic) NSString *safari_absoluteStringWithoutFragment;
@property(readonly, nonatomic) NSString *safari_displayNameForFile;
@property(readonly, nonatomic) NSURL *safari_canonicalURL;
- (_Bool)safari_isSameAsURLRemovingFragment:(id)arg1;	// IMP=0x001000000002789c
- (_Bool)safari_hasSameSiteAsURL:(id)arg1;	// IMP=0x00100000000276ae
- (_Bool)safari_hasSameOriginAsURL:(id)arg1 relaxingWWW:(_Bool)arg2;	// IMP=0x0010000000027402
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;	// IMP=0x00100000000273ee
- (_Bool)safari_isSubdomainOfDomain:(id)arg1;	// IMP=0x0010000000026a78
@property(readonly, nonatomic) WBSURLHostComponentEnumerator *safari_hostDomainsEnumerator;
@property(readonly, nonatomic) WBSURLHostComponentEnumerator *safari_hostComponentsEnumerator;
@end

