//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSString;

@interface NSLocale (PhoneNumbers)
+ (id)nationalDirectDialingPrefixForISOCountryCode:(id)arg1;	// IMP=0x0020000000000ba9
+ (long long)ITUCountryCodeForISOCountryCode:(id)arg1;	// IMP=0x0020000000000b47
@property(readonly, copy) NSString *nationalDirectDialingPrefix;
@property(readonly) long long ITUCountryCode;
@end

