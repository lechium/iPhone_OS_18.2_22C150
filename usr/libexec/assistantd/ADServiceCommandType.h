//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADServiceCommandType : NSObject
{
    NSString *_domainName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
}

+ (id)domainObjectCommitTypeForDomainNamed:(id)arg1;	// IMP=0x00400000001736eb
+ (id)domainObjectCancelTypeForDomainNamed:(id)arg1;	// IMP=0x00100000001736cf
+ (id)domainObjectDeleteTypeForDomainNamed:(id)arg1;	// IMP=0x00100000001736b3
+ (id)domainObjectUpdateTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000173697
+ (id)domainObjectRetrieveTypeForDomainNamed:(id)arg1;	// IMP=0x001000000017367b
+ (id)domainObjectCreateTypeForDomainNamed:(id)arg1;	// IMP=0x001000000017365f
+ (id)_serviceCommandTypeWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x00100000001735f1
- (void).cxx_destruct;	// IMP=0x00200000001735c9
- (unsigned long long)hash;	// IMP=0x001000000017358a
- (_Bool)isEqualToServiceCommandType:(id)arg1;	// IMP=0x00100000001734cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000017346e
- (id)description;	// IMP=0x00100000001733e6
- (id)qualifiedCommandName;	// IMP=0x001000000017337d
- (id)className;	// IMP=0x001000000017336f
- (id)domainName;	// IMP=0x0010000000173361
- (id)initWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x00100000001732a8

@end

