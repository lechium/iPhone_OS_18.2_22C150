//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IXPlaceholderSeed
{
    NSString *_bundleName;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    unsigned long long _installType;	// 24 = 0x18
    unsigned long long _placeholderType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003f712
- (void).cxx_destruct;	// IMP=0x002000000003f8a7
@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, nonatomic) _Bool isAppExtension;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f71a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003f59c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003f3d4

@end

