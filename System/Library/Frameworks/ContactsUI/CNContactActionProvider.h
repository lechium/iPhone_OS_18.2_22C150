//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCapabilitiesManager, CNContactAction, CNContactAddFavoriteAction, CNContactAddLinkedCardAction, CNContactAddStaticIdentityAction, CNContactAddToExistingContactAction, CNContactCreateNewContactAction, CNContactSelectContainersAction, CNContactStore, CNContainer, CNMutableContact, CNPropertyFaceTimeAction, CNPropertyGroupsDataSource, CNPropertyLinkedCardsAction, CNPropertySendMessageAction, CNPropertyStaticIdentityAction, CNUIContactsEnvironment, CNUIUserActionListDataSource;
@protocol CNPropertyActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactActionProvider : NSObject
{
    CNContactAction *_shareWithFamilyAction;	// 8 = 0x8
    id <CNPropertyActionDelegate> _actionDelegate;	// 16 = 0x10
    CNPropertySendMessageAction *_sendMessageAction;	// 24 = 0x18
    CNPropertyFaceTimeAction *_faceTimeAction;	// 32 = 0x20
    CNPropertyFaceTimeAction *_faceTimeAudioAction;	// 40 = 0x28
    CNContactAction *_shareContactAction;	// 48 = 0x30
    CNContactAddFavoriteAction *_addFavoriteAction;	// 56 = 0x38
    CNContactAction *_createReminderAction;	// 64 = 0x40
    CNContactAction *_shareLocationAction;	// 72 = 0x48
    CNContactAction *_stopSharingLocationAction;	// 80 = 0x50
    CNPropertyLinkedCardsAction *_linkedCardsAction;	// 88 = 0x58
    CNContactAddLinkedCardAction *_addLinkedCardAction;	// 96 = 0x60
    CNContactCreateNewContactAction *_createNewContactAction;	// 104 = 0x68
    CNContactAddToExistingContactAction *_addToExistingContactAction;	// 112 = 0x70
    CNContactSelectContainersAction *_containerSelectionAction;	// 120 = 0x78
    CNPropertyStaticIdentityAction *_staticIdentityAction;	// 128 = 0x80
    CNContactAddStaticIdentityAction *_addStaticIdentityAction;	// 136 = 0x88
    CNContactAction *_stopSharingWithFamilyAction;	// 144 = 0x90
    CNContactAction *_enableGuardianRestrictionsAction;	// 152 = 0x98
    CNContactAction *_disableGuardianRestrictionsAction;	// 160 = 0xa0
    CNMutableContact *_contact;	// 168 = 0xa8
    CNContainer *_container;	// 176 = 0xb0
    CNContactStore *_contactStore;	// 184 = 0xb8
    CNPropertyGroupsDataSource *_propertyGroupsDataSource;	// 192 = 0xc0
    CNUIUserActionListDataSource *_actionsDataSource;	// 200 = 0xc8
    CNCapabilitiesManager *_capabilities;	// 208 = 0xd0
    CNUIContactsEnvironment *_environment;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000002c132c
@property(readonly, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNCapabilitiesManager *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(readonly, nonatomic) CNPropertyGroupsDataSource *propertyGroupsDataSource; // @synthesize propertyGroupsDataSource=_propertyGroupsDataSource;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CNContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CNContactAction *disableGuardianRestrictionsAction; // @synthesize disableGuardianRestrictionsAction=_disableGuardianRestrictionsAction;
@property(readonly, nonatomic) CNContactAction *enableGuardianRestrictionsAction; // @synthesize enableGuardianRestrictionsAction=_enableGuardianRestrictionsAction;
@property(readonly, nonatomic) CNContactAction *stopSharingWithFamilyAction; // @synthesize stopSharingWithFamilyAction=_stopSharingWithFamilyAction;
@property(readonly, nonatomic) CNContactAddStaticIdentityAction *addStaticIdentityAction; // @synthesize addStaticIdentityAction=_addStaticIdentityAction;
@property(readonly, nonatomic) CNPropertyStaticIdentityAction *staticIdentityAction; // @synthesize staticIdentityAction=_staticIdentityAction;
@property(readonly, nonatomic) CNContactSelectContainersAction *containerSelectionAction; // @synthesize containerSelectionAction=_containerSelectionAction;
@property(readonly, nonatomic) CNContactAddToExistingContactAction *addToExistingContactAction; // @synthesize addToExistingContactAction=_addToExistingContactAction;
@property(readonly, nonatomic) CNContactCreateNewContactAction *createNewContactAction; // @synthesize createNewContactAction=_createNewContactAction;
@property(readonly, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction; // @synthesize addLinkedCardAction=_addLinkedCardAction;
@property(readonly, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction; // @synthesize linkedCardsAction=_linkedCardsAction;
@property(readonly, nonatomic) CNContactAction *stopSharingLocationAction; // @synthesize stopSharingLocationAction=_stopSharingLocationAction;
@property(readonly, nonatomic) CNContactAction *shareLocationAction; // @synthesize shareLocationAction=_shareLocationAction;
@property(readonly, nonatomic) CNContactAction *createReminderAction; // @synthesize createReminderAction=_createReminderAction;
@property(readonly, nonatomic) CNContactAddFavoriteAction *addFavoriteAction; // @synthesize addFavoriteAction=_addFavoriteAction;
@property(readonly, nonatomic) CNContactAction *shareContactAction; // @synthesize shareContactAction=_shareContactAction;
@property(readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAudioAction; // @synthesize faceTimeAudioAction=_faceTimeAudioAction;
@property(readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAction; // @synthesize faceTimeAction=_faceTimeAction;
@property(readonly, nonatomic) CNPropertySendMessageAction *sendMessageAction; // @synthesize sendMessageAction=_sendMessageAction;
@property(nonatomic) __weak id <CNPropertyActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(readonly, nonatomic) CNContactAction *shareWithFamilyAction; // @synthesize shareWithFamilyAction=_shareWithFamilyAction;
- (id)_addLinkedCardAction;	// IMP=0x00000000002c1107
- (id)_linkedCardsAction;	// IMP=0x00000000002c1064
- (id)_shareContactAction;	// IMP=0x00000000002c0eeb
- (id)_faceTimeAudioAction;	// IMP=0x00000000002c0d79
- (id)_faceTimeAction;	// IMP=0x00000000002c0c1a
- (id)_addFavoriteActionWithConferencing:(_Bool)arg1 telephony:(_Bool)arg2;	// IMP=0x00000000002c0a53
- (id)_sendMessageActionAllowingEmailIDs:(_Bool)arg1;	// IMP=0x00000000002c089a
- (id)_addToExistingContactAction;	// IMP=0x00000000002c0831
- (id)_addCreateNewContactAction;	// IMP=0x00000000002c07c8
- (id)appropriateLocationSharingActionWhenSharing:(_Bool)arg1;	// IMP=0x00000000002c0796
- (void)buildStaticIdentityActions;	// IMP=0x00000000002c0665
- (void)buildContainerSelectionAction;	// IMP=0x00000000002c05f9
- (void)buildCommunicationLimitsActions;	// IMP=0x00000000002c0383
- (void)buildAddContactActions;	// IMP=0x00000000002c02e1
- (void)buildLinkedContactActions;	// IMP=0x00000000002c027d
- (void)buildSharingLocationActionsWithShareLocationController:(id)arg1;	// IMP=0x00000000002c01a4
- (void)buildStandardActions;	// IMP=0x00000000002bfd20
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3 propertyGroupsDataSource:(id)arg4 actionsDataSource:(id)arg5 capabilities:(id)arg6 environment:(id)arg7;	// IMP=0x00000000002bfbba
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;	// IMP=0x00000000002bfafb

@end

