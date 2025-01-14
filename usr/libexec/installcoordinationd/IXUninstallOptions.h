//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IXUninstallOptions : NSObject
{
    _Bool _requestUserConfirmation;	// 8 = 0x8
    _Bool _waitForDeletion;	// 9 = 0x9
    _Bool _showArchiveOption;	// 10 = 0xa
    _Bool _showDemotionOption;	// 11 = 0xb
    _Bool _systemAppNotAllowed;	// 12 = 0xc
    _Bool _ignoreRemovability;	// 13 = 0xd
    _Bool _ignoreRestrictions;	// 14 = 0xe
    _Bool _ignoreAppProtection;	// 15 = 0xf
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000006997
@property(nonatomic) _Bool ignoreAppProtection; // @synthesize ignoreAppProtection=_ignoreAppProtection;
@property(nonatomic) _Bool ignoreRestrictions; // @synthesize ignoreRestrictions=_ignoreRestrictions;
@property(nonatomic) _Bool ignoreRemovability; // @synthesize ignoreRemovability=_ignoreRemovability;
@property(nonatomic) _Bool systemAppNotAllowed; // @synthesize systemAppNotAllowed=_systemAppNotAllowed;
@property(nonatomic) _Bool showDemotionOption; // @synthesize showDemotionOption=_showDemotionOption;
@property(nonatomic) _Bool showArchiveOption; // @synthesize showArchiveOption=_showArchiveOption;
@property(nonatomic) _Bool waitForDeletion; // @synthesize waitForDeletion=_waitForDeletion;
@property(nonatomic) _Bool requestUserConfirmation; // @synthesize requestUserConfirmation=_requestUserConfirmation;
- (id)description;	// IMP=0x001000000000730e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006d06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006bd4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006a98
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000699f
- (id)init;	// IMP=0x00100000000068d8

@end

