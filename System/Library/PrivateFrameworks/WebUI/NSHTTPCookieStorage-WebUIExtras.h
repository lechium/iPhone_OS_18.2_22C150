//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (WebUIExtras)
@property(readonly) _Bool webui_trackerProtectionEnabled;
- (void)webui_applySafariCookieAcceptPolicy;	// IMP=0x0030000000002a70
- (id)webui_safariCookieAcceptPolicy;	// IMP=0x0030000000002a18
@property(readonly) unsigned long long webui_safariCookieAcceptPolicyEnumValue;
- (float)_safariCookieAcceptPolicyFloatValue;	// IMP=0x0030000000002915
@end
