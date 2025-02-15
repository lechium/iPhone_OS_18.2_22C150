//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TCCDProcess : NSObject
{
    _Bool _haveIsPlatformBinary;	// 8 = 0x8
    _Bool _isPlatformBinary;	// 9 = 0x9
    int _pid;	// 12 = 0xc
    unsigned int _auid;	// 16 = 0x10
    unsigned int _euid;	// 20 = 0x14
    unsigned int _codesignStatus;	// 24 = 0x18
    NSString *_responsiblePath;	// 32 = 0x20
    struct au_tid _pidVersion;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSDictionary *_entitlements;	// 56 = 0x38
    NSString *_binaryPath;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

+ (id)identifierForInvalidCode;	// IMP=0x004000000006300f
- (void).cxx_destruct;	// IMP=0x00200000000643ae
@property(retain) NSString *binaryPath; // @synthesize binaryPath=_binaryPath;
@property unsigned int codesignStatus; // @synthesize codesignStatus=_codesignStatus;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property struct au_tid pidVersion; // @synthesize pidVersion=_pidVersion;
@property unsigned int euid; // @synthesize euid=_euid;
@property unsigned int auid; // @synthesize auid=_auid;
@property int pid; // @synthesize pid=_pid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006415d
- (unsigned long long)hash;	// IMP=0x0010000000064099
- (_Bool)_initializeUsingResponsibleIdentity:(id)arg1;	// IMP=0x0010000000064091
- (_Bool)_initializeUsingTaskForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000063e11
@property(readonly) _Bool isSystemPreferencesApp;
@property(readonly) _Bool isPlatformBinary;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasRuntimeValidationEnabled
// Property attributes: (null)

@property(readonly) _Bool isAppClip;
- (_Bool)hasEntitlement:(id)arg1 containsServiceAllOrService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000063cb6
- (_Bool)hasEntitlement:(id)arg1 containsService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000639a1
- (id)description;	// IMP=0x0010000000063880
- (id)dictionaryValueForEntitlement:(id)arg1;	// IMP=0x001000000006376f
- (id)arrayValueForEntitlement:(id)arg1;	// IMP=0x0010000000063638
- (_Bool)boolValueForEntitlement:(id)arg1;	// IMP=0x0010000000063502
@property(readonly) NSString *responsiblePath; // @synthesize responsiblePath=_responsiblePath;
- (void)dealloc;	// IMP=0x001000000006349d
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 responsibleIdentity:(id)arg2;	// IMP=0x0010000000063133
- (id)logHandle;	// IMP=0x00100000000630b2
- (void)tccd_crash_fd_limit;	// IMP=0x001000000006301c

@end

