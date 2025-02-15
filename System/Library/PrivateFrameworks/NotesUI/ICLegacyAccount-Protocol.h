//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICAccountObject-Protocol.h>

@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyFolder;

@protocol ICLegacyAccount <ICAccountObject>
@property(readonly, nonatomic) _Bool hasAnyCustomFolders;
@property(readonly, copy, nonatomic) NSString *localizedAttachmentsNotSupportedReason;
@property(readonly, nonatomic) _Bool preventMovingNotesToOtherAccounts;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool supportsAttachments;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(readonly, nonatomic) NSManagedObject<ICLegacyFolder> *defaultFolder;
@property(readonly, nonatomic) NSSet *folders;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) long long legacyAccountType;
@property(readonly, copy, nonatomic) NSString *accountIdentifier;
@property(readonly, copy, nonatomic) NSString *objectIdentifier;
@property(readonly, copy, nonatomic) NSString *allItemsFolderLocalizedTitle;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isLocalAccount;
@property(readonly, nonatomic) _Bool isExchangeAccount;
@property(readonly, nonatomic) _Bool isIMAPAccount;
@property(nonatomic) _Bool didChooseToMigrate;
@property(readonly, nonatomic) _Bool enabled;
- (long long)compare:(id)arg1;
@end

