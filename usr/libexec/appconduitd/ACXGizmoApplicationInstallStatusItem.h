//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACXGizmoApplicationInstallStatusItem : NSObject
{
    unsigned long long _installStatus;	// 8 = 0x8
    NSString *_companionBundleID;	// 16 = 0x10
    NSString *_watchAppExecutableHash;	// 24 = 0x18
}

+ (id)itemWithStatus:(unsigned long long)arg1 companionBundleID:(id)arg2;	// IMP=0x0040000000005694
- (void).cxx_destruct;	// IMP=0x0020000000005746
@property(copy, nonatomic) NSString *watchAppExecutableHash; // @synthesize watchAppExecutableHash=_watchAppExecutableHash;
@property(copy, nonatomic) NSString *companionBundleID; // @synthesize companionBundleID=_companionBundleID;
@property(nonatomic) unsigned long long installStatus; // @synthesize installStatus=_installStatus;

@end

