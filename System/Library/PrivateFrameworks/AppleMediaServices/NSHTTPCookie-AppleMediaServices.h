//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookie.h>

@class NSString;

@interface NSHTTPCookie (AppleMediaServices)
+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;	// IMP=0x0010000000554bbd
+ (id)ams_propertiesForCookies:(id)arg1;	// IMP=0x0010000000556aa8
+ (id)ams_cookiesForProperties:(id)arg1;	// IMP=0x0010000000556a3f
+ (id)ams_cookiesByMergingProperties:(id)arg1 intoProperties:(id)arg2;	// IMP=0x0010000000556061
+ (id)ams_propertyXPCClasses;	// IMP=0x0010000000555fb7
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000556ce5
+ (id)classesForPropertyCoding;	// IMP=0x0010000000556ad9
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_shouldReplaceCookie:(id)arg1;	// IMP=0x0010000000555c94
- (_Bool)ams_matchesURL:(id)arg1;	// IMP=0x0010000000555c0d
- (_Bool)ams_isEquivalent:(id)arg1;	// IMP=0x0010000000555aa9
- (_Bool)ams_isEqualToCookie:(id)arg1;	// IMP=0x001000000055523e
- (_Bool)_secureOnlyMatchesURL:(id)arg1;	// IMP=0x00100000005551ed
- (_Bool)_httpOnlyMatchesURL:(id)arg1;	// IMP=0x001000000055519c
- (_Bool)_pathMatchesURL:(id)arg1;	// IMP=0x0010000000554fbf
- (_Bool)_domainMatchesURL:(id)arg1;	// IMP=0x0010000000554eaf
@property(readonly, nonatomic, getter=ams_isExpired) _Bool ams_expired;
@property(readonly, nonatomic, getter=ams_isDeleted) _Bool ams_deleted;
@property(readonly, nonatomic, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000556c22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000556b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
