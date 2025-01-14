//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AKBundleInformation : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundleName;	// 16 = 0x10
    NSString *_bundleDescription;	// 24 = 0x18
    unsigned long long _bundleType;	// 32 = 0x20
    NSDictionary *_otherInfo;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000007c2e9
- (void).cxx_destruct;	// IMP=0x002000000007c323
@property(readonly, copy, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, nonatomic) unsigned long long bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, copy, nonatomic) NSString *bundleDescription; // @synthesize bundleDescription=_bundleDescription;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c246
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007c06e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000007bf97
- (id)initWithBundleIdentifier:(id)arg1 bundleName:(id)arg2 bundleDescription:(id)arg3 bundleType:(unsigned long long)arg4 otherInfo:(id)arg5;	// IMP=0x001000000007beae

@end

