//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationRecord, NSString;

@interface IXSUninstallAlert : NSObject
{
    _Bool _appIsRemovable;	// 8 = 0x8
    _Bool _deletionIsRestricted;	// 9 = 0x9
    _Bool _needsArchiveOptionButton;	// 10 = 0xa
    _Bool _needsDemoteOptionButton;	// 11 = 0xb
    _Bool _defaultButtonAppearsDestructive;	// 12 = 0xc
    LSApplicationRecord *_appRecord;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    unsigned long long _appRemovability;	// 32 = 0x20
    struct __CFBundle *_defaultStringsBundle;	// 40 = 0x28
    NSString *_defaultStringsTableName;	// 48 = 0x30
    NSString *_typeDescription;	// 56 = 0x38
}

+ (id)stringForCFOptionFlag:(unsigned long long)arg1;	// IMP=0x00400000000474a5
- (void).cxx_destruct;	// IMP=0x002000000004754e
@property(nonatomic) _Bool defaultButtonAppearsDestructive; // @synthesize defaultButtonAppearsDestructive=_defaultButtonAppearsDestructive;
@property(retain, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(readonly, nonatomic) NSString *defaultStringsTableName; // @synthesize defaultStringsTableName=_defaultStringsTableName;
@property(readonly, nonatomic) struct __CFBundle *defaultStringsBundle; // @synthesize defaultStringsBundle=_defaultStringsBundle;
@property(nonatomic) _Bool needsDemoteOptionButton; // @synthesize needsDemoteOptionButton=_needsDemoteOptionButton;
@property(nonatomic) _Bool needsArchiveOptionButton; // @synthesize needsArchiveOptionButton=_needsArchiveOptionButton;
@property(readonly, nonatomic) _Bool deletionIsRestricted; // @synthesize deletionIsRestricted=_deletionIsRestricted;
@property(readonly, nonatomic) unsigned long long appRemovability; // @synthesize appRemovability=_appRemovability;
@property(readonly, nonatomic) _Bool appIsRemovable; // @synthesize appIsRemovable=_appIsRemovable;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) LSApplicationRecord *appRecord; // @synthesize appRecord=_appRecord;
- (void)dealloc;	// IMP=0x001000000004745e
- (_Bool)isMDMRestrictedWithOrganizationName:(id *)arg1;	// IMP=0x00100000000472ed
- (id)localizedStringForKey:(id)arg1 withFormatHint:(id)arg2;	// IMP=0x0010000000047209
- (void)otherButtonActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000471f7
- (void)displayAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046ae6
- (void)_configureOptionalButtonForConfiguration:(id)arg1;	// IMP=0x00100000000467ab
- (void)displayAlertWithCompletion:(CDUnknownBlockType)arg1 uninstallAlertConfiguration:(id)arg2;	// IMP=0x00100000000466d7
- (void)_onMainQueue_displayAlertWithCompletion:(CDUnknownBlockType)arg1 uninstallAlertConfiguration:(id)arg2;	// IMP=0x0010000000046178
- (void)_processUserNotification:(struct __CFUserNotification *)arg1 withConfiguration:(id)arg2 response:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000459b5
- (_Bool)_onMainQueue_deleteButtonActionWithDisposition:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0010000000045849
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments;
@property(readonly, nonatomic) unsigned long long notificationFlags;
@property(readonly, nonatomic) NSString *otherButtonLabel; // @dynamic otherButtonLabel;
@property(readonly, nonatomic) NSString *optionalButtonForNotRemovableAppActionURL; // @dynamic optionalButtonForNotRemovableAppActionURL;
@property(readonly, nonatomic) NSString *optionalButtonForNotRemovableAppLabel; // @dynamic optionalButtonForNotRemovableAppLabel;
@property(readonly, nonatomic) NSString *cancelButtonLabel; // @dynamic cancelButtonLabel;
@property(readonly, nonatomic) NSString *defaultButtonLabel; // @dynamic defaultButtonLabel;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2 removability:(unsigned long long)arg3 deletionIsRestricted:(_Bool)arg4;	// IMP=0x0010000000045170

@end

