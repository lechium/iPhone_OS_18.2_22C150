//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessoryCategory, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryAdvertisement : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    HMAccessoryCategory *_category;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000bfbf35
@property(readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long associationOptions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bfbe34
- (unsigned long long)hash;	// IMP=0x0000000000bfbdf0
- (void)setCategory:(id)arg1;	// IMP=0x0000000000bfbdb7
- (id)description;	// IMP=0x0000000000bfbcfa
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;	// IMP=0x0000000000bfbc1e

@end

