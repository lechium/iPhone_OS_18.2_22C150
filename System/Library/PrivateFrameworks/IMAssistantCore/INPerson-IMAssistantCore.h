//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPerson.h>

@interface INPerson (IMAssistantCore)
+ (id)__im_personFromSPIHandle:(id)arg1 contact:(id)arg2;	// IMP=0x006000000001b4d2
+ (id)__im_assistant_displayNameForContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3;	// IMP=0x006000000001ac89
- (id)__im_assistant_allContactIdentifiers;	// IMP=0x001000000001b2bb
- (id)__im_assistant_initAnonymousRecipientWithIMHandle:(id)arg1;	// IMP=0x001000000001ab5d
- (id)__im_assistant_initWithContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3 type:(long long)arg4 label:(id)arg5;	// IMP=0x001000000001a975
- (id)__im_assistant_initForContactResolutionResultWithContact:(id)arg1 type:(long long)arg2 label:(id)arg3;	// IMP=0x001000000001a94e
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2 type:(long long)arg3 label:(id)arg4;	// IMP=0x001000000001a85c
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2;	// IMP=0x001000000001a75c
- (id)__im_assistant_initWithContact:(id)arg1 unformattedPersonHandle:(id)arg2 accountDataSource:(id)arg3;	// IMP=0x001000000001a644
- (id)__im_assistant_initWithHandleFromContact:(id)arg1 accountDataSource:(id)arg2;	// IMP=0x001000000001a48d
@end
