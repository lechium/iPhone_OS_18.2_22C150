//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDFaceTimeInstallationNotifier : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *storage;	// 16 = 0x10
    MISSING_TYPE *lockStateObserver;	// 56 = 0x38
    MISSING_TYPE *phoneProcessObserver;	// 64 = 0x40
    MISSING_TYPE *postFaceTimeUninstallAlertClosure;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_idsRegistrationRestriction;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_facetimeRestrictedOnDevice;	// 97 = 0x61
}

+ (_Bool)isFaceTimeInstalled;	// IMP=0x00200000002c5c4f
- (void).cxx_destruct;	// IMP=0x00400000002c7799
- (id)init;	// IMP=0x00100000002c7766
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000002c5e8a

@end
