//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAction.h>

@interface UIAction (IC)
+ (id)ic_centerWindowActionWithAppURL:(id)arg1 activationRequestOptions:(id)arg2;	// IMP=0x0020000000064b7b
+ (id)ic_replyActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064ad4
+ (id)ic_exportArchiveActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064a2d
+ (id)ic_importArchiveActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064986
+ (id)ic_editSmartFolderActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000648df
+ (id)ic_renameActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064838
+ (id)ic_deleteActionWithNumberOfElements:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000006470d
+ (id)ic_deleteActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064660
+ (id)ic_removeActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000645b3
+ (id)ic_moveActionWithWithNumberOfElements:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000006448e
+ (id)ic_moveActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000643e7
+ (id)ic_sendActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000064340
+ (id)ic_showActivityStreamActionWithCloudSyncingObject:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000064299
+ (id)ic_collaborateShareActionWithCloudSyncingObject:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000064209
+ (id)ic_collaborateManageActionWithCloudSyncingObject:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000064146
+ (id)ic_lockNoteActionLocked:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000064065
+ (id)ic_pinNoteActionPinned:(_Bool)arg1 numberOfElements:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000063f0e
+ (id)ic_pinNoteActionPinned:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000063e2d
+ (id)ic_actionWithAttributedTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000063d75
+ (id)ic_actionWithImage:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000063d4c
+ (id)ic_actionWithImageName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000063d2d
+ (id)ic_actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000063d16
+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000063cfe
+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 attributes:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0020000000063cd4
+ (id)ic_actionWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0020000000063cb2
+ (id)ic_actionWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 attributes:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0020000000063baa
@property(nonatomic, getter=ic_isDisabled) _Bool ic_disabled;
@property(nonatomic, getter=ic_isDestructive) _Bool ic_destructive;
@end

