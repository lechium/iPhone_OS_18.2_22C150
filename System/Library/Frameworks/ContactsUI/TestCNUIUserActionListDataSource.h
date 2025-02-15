//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TestCNUIUserActionListDataSource : NSObject
{
    _Bool _tracksChanges;	// 8 = 0x8
    NSDictionary *_userActionListModelResultBlocksByActionTypeAskedFor;	// 16 = 0x10
    NSDictionary *_actionsByActionTypeByContact;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;	// IMP=0x0010000000280373
+ (id)allSupportedActionTypes;	// IMP=0x0010000000280361
+ (id)allActionTypes;	// IMP=0x00100000002802cd
- (void).cxx_destruct;	// IMP=0x000000000028029a
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSDictionary *actionsByActionTypeByContact; // @synthesize actionsByActionTypeByContact=_actionsByActionTypeByContact;
@property(retain, nonatomic) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor; // @synthesize userActionListModelResultBlocksByActionTypeAskedFor=_userActionListModelResultBlocksByActionTypeAskedFor;
@property(nonatomic) _Bool tracksChanges; // @synthesize tracksChanges=_tracksChanges;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;	// IMP=0x0000000000280209
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000002801b9
- (id)thirdPartyActionsForContactProperty:(id)arg1;	// IMP=0x0000000000280173
- (id)thirdPartyTargetsForActionTypes:(id)arg1;	// IMP=0x000000000028012d
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;	// IMP=0x00000000002800dd
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;	// IMP=0x000000000028008d
- (id)actionTypesForConsumer:(id)arg1;	// IMP=0x0000000000280073
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027ffc0
- (id)initWithActionsByActionTypeByContact:(id)arg1;	// IMP=0x000000000027fc4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

