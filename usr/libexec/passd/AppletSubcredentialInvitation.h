//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialInvitation
{
}

+ (id)databaseTable;	// IMP=0x00400000004e4f8f
+ (id)_propertySetters;	// IMP=0x00100000004e4bc9
+ (id)_dictionaryFromSharedCredentialInvitation:(id)arg1;	// IMP=0x00100000004e46b7
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000004e4694
+ (_Bool)deleteInvitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004e45f6
+ (id)addInvitation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004e43a6
+ (id)invitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004e431a
+ (id)invitationsInDatabase:(id)arg1;	// IMP=0x00100000004e4109
- (id)invitation;	// IMP=0x00400000004e4a94

@end

