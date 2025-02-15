//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BCCloudKitConfiguration : NSObject
{
    _Bool _requiresDeviceToDeviceEncryption;	// 8 = 0x8
    NSString *_queueIdentifier;	// 16 = 0x10
    NSString *_containerIdentifier;	// 24 = 0x18
    NSArray *_appZones;	// 32 = 0x20
    NSArray *_serviceZones;	// 40 = 0x28
    NSString *_dbArchiveFolderName;	// 48 = 0x30
    NSString *_dbArchiveExtension;	// 56 = 0x38
    NSString *_dbArchiveFilename;	// 64 = 0x40
    NSString *_dbSubscriptionID;	// 72 = 0x48
    NSString *_appBundleIdentifier;	// 80 = 0x50
}

+ (id)configuration;	// IMP=0x0020000000015f5b
- (void).cxx_destruct;	// IMP=0x0020000000016239
@property(nonatomic) _Bool requiresDeviceToDeviceEncryption; // @synthesize requiresDeviceToDeviceEncryption=_requiresDeviceToDeviceEncryption;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) NSString *dbSubscriptionID; // @synthesize dbSubscriptionID=_dbSubscriptionID;
@property(retain, nonatomic) NSString *dbArchiveFilename; // @synthesize dbArchiveFilename=_dbArchiveFilename;
@property(retain, nonatomic) NSString *dbArchiveExtension; // @synthesize dbArchiveExtension=_dbArchiveExtension;
@property(retain, nonatomic) NSString *dbArchiveFolderName; // @synthesize dbArchiveFolderName=_dbArchiveFolderName;
@property(retain, nonatomic) NSArray *serviceZones; // @synthesize serviceZones=_serviceZones;
@property(retain, nonatomic) NSArray *appZones; // @synthesize appZones=_appZones;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
- (_Bool)shouldPerformDatabaseSubscriptionForServiceMode:(_Bool)arg1;	// IMP=0x001000000001612a
- (_Bool)shouldArchiveData:(id)arg1;	// IMP=0x0010000000016122

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

