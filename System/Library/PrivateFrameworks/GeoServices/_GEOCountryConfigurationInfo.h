//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationInfo : NSObject
{
    unsigned int _source;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSDate *_dateOfLastUpdate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006d0c84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d0bf5
- (id)description;	// IMP=0x00000000006d0baf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006d07db

@end
