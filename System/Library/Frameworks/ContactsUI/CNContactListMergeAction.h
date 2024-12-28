//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNUIGroupsAndContainersSaveManager, _TtC10ContactsUI33ContactListMergeUnifyActionHelper;

__attribute__((visibility("hidden")))
@interface CNContactListMergeAction
{
    _TtC10ContactsUI33ContactListMergeUnifyActionHelper *_mergeUnifyActionHelper;	// 8 = 0x8
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 16 = 0x10
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0060000000285631
+ (id)log;	// IMP=0x0060000000285601
- (void).cxx_destruct;	// IMP=0x000000000028679e
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(retain, nonatomic) _TtC10ContactsUI33ContactListMergeUnifyActionHelper *mergeUnifyActionHelper; // @synthesize mergeUnifyActionHelper=_mergeUnifyActionHelper;
- (void)showMergeFailureAlert;	// IMP=0x00000000002865e1
- (void)performUndoAction;	// IMP=0x00000000002862b1
- (_Bool)mergeWillRequireLinkingForContacts:(id)arg1;	// IMP=0x00000000002861ff
- (_Bool)executeAction;	// IMP=0x0000000000285b02
- (void)performAction;	// IMP=0x00000000002856fe
- (_Bool)shouldReloadListOnCompletion;	// IMP=0x00000000002856f6

@end
