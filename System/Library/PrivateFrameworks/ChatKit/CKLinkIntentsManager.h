//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CKLinkIntentsManager : NSObject
{
    MISSING_TYPE *messagesNavigator;	// 8 = 0x8
    MISSING_TYPE *chatController;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0040000000953230
- (void).cxx_destruct;	// IMP=0x00000000009537e0
- (id)init;	// IMP=0x0000000000953750
- (void)purgeDependencies;	// IMP=0x0000000000953620
- (void)registerDependencyWithDetailsController:(id)arg1;	// IMP=0x0000000000953470
- (void)registerChatController:(id)arg1;	// IMP=0x00000000009532c0
- (void)registerMessagesNavigator:(id)arg1;	// IMP=0x0000000000953280

@end
